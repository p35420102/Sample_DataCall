/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  Copyright (c) [2020], MediaTek Inc. All rights reserved.
*  This software/firmware and related documentation ("MediaTek Software") are
*  protected under relevant copyright laws.
*
*  The information contained herein is confidential and proprietary to
*  MediaTek Inc. and/or its licensors. Except as otherwise provided in the
*  applicable licensing terms with MediaTek Inc. and/or its licensors, any
*  reproduction, modification, use or disclosure of MediaTek Software, and
*  information contained herein, in whole or in part, shall be strictly
*  prohibited.
*****************************************************************************/

#include "platform.h"

static HANDLE hCom;
//static HANDLE hThread;
static OVERLAPPED oRead;
static OVERLAPPED oWrite;
static char port_name[32] = {0};
int32_t debug_fp = -1;
static MUTEX *dump_mutex_ptr = 0;
static uint32_t msg_count = 0;
static char client_name[16];
const GUID GUID_TYPE_COMPORT = {0x86E0D1E0L, 0x8089, 0x11D0, {0x9C, 0xE4, 0x08, 0x00, 0x3E, 0x30, 0x1F, 0x73}};
char *COM = NULL;
int32_t ql_debug_fp = -1;
static MUTEX *ql_dump_mutex_ptr = 0;
extern int init_state;
extern int ql_init(const char *process_name_ptr);
extern void ql_deinit();
extern void ql_auto_datacall_start();

int32_t CHECK_MIPC_SUPPORT()
{
    return -1;
}

void WAIT_MD_READY_API(MIPC_CALLBACK cb, void* cb_priv)
{
    return;
}

void INIT()
{
    //memset(&hCom, 0, sizeof(hCom));
    //memset(&hThread, 0, sizeof(hThread));

    memset(&oRead, 0, sizeof(oRead));
    oRead.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);

    memset(&oWrite, 0, sizeof(oWrite));
    oWrite.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
}

void SETCOM(const char *port_name_ptr)
{
    memset(port_name, 0, sizeof(port_name));
    snprintf(port_name, sizeof(port_name), "\\\\.\\%s", port_name_ptr);
}

int32_t GETCOM()
{
    return -1;
}

const char *FINDCOM(const char *process_name_ptr)
{
    if (strncmp("COM", process_name_ptr, 3) == 0){
        snprintf(port_name, sizeof(port_name), "\\\\.\\%s", process_name_ptr);
        return port_name;
    } else {
        return "\\\\.\\COM20";
    }
}

int32_t OPENCOM(const char *port_name_ptr)
{
    DCB com_config;
    COMMTIMEOUTS com_timeout;
#if 1
    hCom = CreateFile(port_name_ptr, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

    if (hCom == INVALID_HANDLE_VALUE) {
        QLOGE("CreateFile failed with error %d.\n", GetLastError());
        return -1;
    }
#else
    while(1)
    {
        hCom = CreateFile(port_name_ptr, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

        if (hCom != INVALID_HANDLE_VALUE)
            break;

        SLEEP(5);
    }

#endif
    GetCommState(hCom, &com_config);
    com_config.BaudRate = 115200;
    com_config.ByteSize = 8;
    com_config.Parity = NOPARITY;
    com_config.StopBits = TWOSTOPBITS;
    SetCommState(hCom, &com_config);

    //SetupComm(hCom, 1024, 1024);
    SetupComm(hCom, 64, 64);

    memset(&com_timeout, 0, sizeof(com_timeout));
    SetCommTimeouts(hCom, &com_timeout);

    PurgeComm(hCom, PURGE_TXCLEAR | PURGE_RXCLEAR);
    return 0;
}

void CLOSECOM()
{
    CloseHandle(hCom);
}

int32_t WRITECOM(uint8_t *buf_ptr, const uint32_t buf_len)
{
    DWORD write_bytes;
    uint16_t total_write_bytes;

    total_write_bytes = 0;
    for (;;) {
        if (!WriteFile(hCom, buf_ptr + total_write_bytes, buf_len - total_write_bytes, &write_bytes, &oWrite)) {
            if (GetLastError() != ERROR_IO_PENDING) {
                break;
            }

            WaitForSingleObject(oWrite.hEvent, INFINITE);
            if (!GetOverlappedResult(hCom, &oWrite, &write_bytes, FALSE)) {
                break;
            }
        }
        total_write_bytes += write_bytes;
        if (total_write_bytes == buf_len) {
            break;
        }
    }

    return total_write_bytes;
}

int32_t READCOM(uint8_t *buf_ptr, const uint32_t buf_len)
{
    DWORD read_bytes;
    uint16_t total_read_bytes;

    total_read_bytes = 0;
    for (;;) {
        if (!ReadFile(hCom, buf_ptr + total_read_bytes, buf_len - total_read_bytes, &read_bytes, &oRead)) {
            if (GetLastError() != ERROR_IO_PENDING) {
                break;
            }

            WaitForSingleObject(oRead.hEvent, INFINITE);
            if (!GetOverlappedResult(hCom, &oRead, &read_bytes, FALSE)) {
                break;
            }
        }
        total_read_bytes += read_bytes;
        if (total_read_bytes == buf_len) {
            break;
        }
    }

    return total_read_bytes;
}

DWORD WINAPI _THREAD_FUNC(LPVOID priv_ptr)
{
    THREAD *thread_ptr = (THREAD *)priv_ptr;

    thread_ptr->func(thread_ptr->func_priv_ptr);

    return 0;
}

THREAD *CREATE_THREAD(THREAD_FUNC func, void *func_priv_ptr)
{
    THREAD *thread_ptr = ALLOC(sizeof(THREAD));

    if (thread_ptr) {
        thread_ptr->func = func;
        thread_ptr->func_priv_ptr = func_priv_ptr;
        thread_ptr->tid = CreateThread(NULL, 0, _THREAD_FUNC, thread_ptr, 0, NULL);
    }

    return thread_ptr;
}

void DELETE_THREAD(THREAD *thread_ptr)
{
    if (thread_ptr){
        FREE(thread_ptr);
    }
}

EVENT *CREATE_EVENT(uint32_t timeout_ms)
{
    EVENT *event_ptr = (EVENT *)ALLOC(sizeof(EVENT));

    if (event_ptr) {
        event_ptr->hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
        event_ptr->timeout_ms = timeout_ms;
    }

    return event_ptr;
}

void DELETE_EVENT(EVENT *event_ptr)
{
    if (event_ptr) {
        CloseHandle(event_ptr->hEvent);
        FREE(event_ptr);
    }
}

int32_t WAIT_EVENT(EVENT *event_ptr)
{
    DWORD dwMilliseconds;
    if (event_ptr) {
        if (event_ptr->timeout_ms == 0) {
            dwMilliseconds = INFINITE;
        } else {
            dwMilliseconds = event_ptr->timeout_ms;
        }
        if (WaitForSingleObject(event_ptr->hEvent, dwMilliseconds) == WAIT_TIMEOUT) {
            return 1; //timeout
        } else {
            return 0;
        }
    } else {
        return -1;
    }
}

void WAKE_EVENT(EVENT *event_ptr, void *result_ptr)
{
    if (event_ptr) {
        event_ptr->result_ptr = result_ptr;
        SetEvent(event_ptr->hEvent);
    }
}


MUTEX *CREATE_MUTEX()
{
    MUTEX *mutex_ptr = (MUTEX *)ALLOC(sizeof(MUTEX));

    if (mutex_ptr) {
        mutex_ptr->hMutex = CreateMutex(NULL, FALSE, NULL);
    }

    return mutex_ptr;
}

void DELETE_MUTEX(MUTEX *mutex_ptr)
{
    if (mutex_ptr) {
        CloseHandle(mutex_ptr->hMutex);
        FREE(mutex_ptr);
    }
}

void LOCK_MUTEX(MUTEX *mutex_ptr)
{
    if (mutex_ptr) {
        WaitForSingleObject(mutex_ptr->hMutex, INFINITE);
    }
}

void UNLOCK_MUTEX(MUTEX *mutex_ptr)
{
    if (mutex_ptr) {
        ReleaseMutex(mutex_ptr->hMutex);
    }
}

uint64_t GETTID()
{
    return (uint64_t)GetCurrentThreadId();
}

static void WRITEFILE(int log_file, uint8_t *buf_ptr, const uint32_t buf_len)
{
    uint16_t total_write_bytes;
    int32_t write_bytes;

    total_write_bytes = 0;
    while (write_bytes = _write(log_file, buf_ptr + total_write_bytes, buf_len - total_write_bytes)) {
        if (write_bytes < 0) {
            if (errno == EINTR) {
                continue;
            }
            break;
        }
        total_write_bytes += write_bytes;
        if (total_write_bytes == buf_len) {
            break;
        }
    }
}

int gettimeofday(struct timeval *tp)
{
    time_t clock;
    struct tm tm;
    SYSTEMTIME wtm;
    GetLocalTime(&wtm);
    tm.tm_year   = wtm.wYear - 1900;
    tm.tm_mon   = wtm.wMonth - 1;
    tm.tm_mday   = wtm.wDay;
    tm.tm_hour   = wtm.wHour;
    tm.tm_min   = wtm.wMinute;
    tm.tm_sec   = wtm.wSecond;
    tm. tm_isdst  = -1;
    clock = mktime(&tm);
    tp->tv_sec = clock;
    tp->tv_usec = wtm.wMilliseconds * 1000;
    return (0);
}

static void WRITETIME()
{
    if(debug_fp >= 0){
        struct timeval tv;
        uint32_t t;
        uint32_t t_ms;        
        gettimeofday(&tv);
        t = tv.tv_sec & 0xFFFFFFFF;
        t_ms = tv.tv_usec & 0xFFFFFFFF;
        WRITEFILE(debug_fp, &t, sizeof(t)); // time(s)
        WRITEFILE(debug_fp, &t_ms, sizeof(t_ms)); // time(ms)
    }    
}

void OPENCAP(const char *process_name_ptr)
{
    if (debug_fp < 0){
        char tmp_file_name[128] = {0};
        char dt[64] = {0};
        time_t t;
        struct tm tt;
        uint32_t t_ms;
        memset(client_name, 0, sizeof(client_name));
        snprintf(client_name, sizeof(client_name) - 1, "%s", process_name_ptr);
        t=time(NULL);
        localtime_s(&tt, &t);
        strftime(dt,sizeof(dt),"%Y%m%d%H%M%S",&tt);
        snprintf(tmp_file_name, sizeof(tmp_file_name) - 1, "%s_%s.cap", process_name_ptr, dt);
        _sopen_s(&debug_fp, tmp_file_name, _O_WRONLY | _O_CREAT, _O_BINARY, _SH_DENYNO, _S_IREAD | _S_IWRITE);
        dump_mutex_ptr = CREATE_MUTEX();
        if(debug_fp >= 0){
            uint8_t cap_hdr[24] = {0xD4,0xC3,0xB2,0XA1,0x02,0x00,0x04,0x00,
                                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                                0xFF,0xFF,0x00,0X00,0x00,0x00,0x00,0x00};
            WRITEFILE(debug_fp, cap_hdr, sizeof(cap_hdr));
            DbgMsg("Host Version: V1.1");
        }
    }
}

void WRITECAP(uint32_t write_len, uint8_t *data, uint32_t msg_direction)
{
    LOCK_MUTEX(dump_mutex_ptr);
    if(debug_fp >= 0){
        uint32_t port = 0;
        WRITETIME();
        write_len = write_len + 28; // index length(4) + msg_direction(4) + port(4) + client_name(16)
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &msg_count, sizeof(msg_count)); // write msg count
        WRITEFILE(debug_fp, &port, sizeof(port));
        WRITEFILE(debug_fp, &client_name[0], sizeof(client_name));
        WRITEFILE(debug_fp, &msg_direction, sizeof(msg_direction));
        write_len = write_len - 28;
        WRITEFILE(debug_fp, data, write_len);
        msg_count = msg_count + 1;
    }
    UNLOCK_MUTEX(dump_mutex_ptr);
}

void WRITEERROR(char *error_msg)
{
    LOCK_MUTEX(dump_mutex_ptr);
    if(debug_fp >= 0){
        uint8_t error_magic[4] = {0x00, 0x02, 0x13, 0x07};
        uint32_t write_len = strlen(error_msg)+1;
        uint32_t msg_direction = 2;
        uint32_t port = 0;
        WRITETIME();
        write_len = write_len + 32; // index length(4) + msg_direction(4) + debug magic(4) + port(4) + client_name(16)
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &msg_count, sizeof(msg_count)); // write msg count
        WRITEFILE(debug_fp, &port, sizeof(port));
        WRITEFILE(debug_fp, &client_name[0], sizeof(client_name));
        WRITEFILE(debug_fp, &msg_direction, sizeof(msg_direction)); // write msg direction (host->host)
        WRITEFILE(debug_fp, error_magic, sizeof(error_magic));
        WRITEFILE(debug_fp, error_msg, strlen(error_msg)+1);
        msg_count = msg_count + 1;
    }
    UNLOCK_MUTEX(dump_mutex_ptr);
}

void WRITEDEBUG(char *debug_msg)
{
    LOCK_MUTEX(dump_mutex_ptr);
    if(debug_fp >= 0){
        uint8_t debug_magic[4] = {0x01, 0x02, 0x13, 0x07};
        uint32_t write_len = strlen(debug_msg)+1;
        uint32_t msg_direction = 2;
        uint32_t port = 0;
        WRITETIME();
        write_len = write_len + 32; // index length(4) + msg_direction(4) + debug magic(4) + port(4) + client_name(16)
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &write_len, sizeof(write_len)); // write length
        WRITEFILE(debug_fp, &msg_count, sizeof(msg_count)); // write msg count
        WRITEFILE(debug_fp, &port, sizeof(port));
        WRITEFILE(debug_fp, &client_name[0], sizeof(client_name));
        WRITEFILE(debug_fp, &msg_direction, sizeof(msg_direction)); // write msg direction (host->host)
        WRITEFILE(debug_fp, debug_magic, sizeof(debug_magic));
        WRITEFILE(debug_fp, debug_msg, strlen(debug_msg)+1);
        msg_count = msg_count + 1;
    }
    UNLOCK_MUTEX(dump_mutex_ptr);
}

//add by Chris.Wu
void ql_log_init()
{
#ifdef ENABLE_QL_LOG
    if(ql_debug_fp < 0){
        char tmp_file_name[128] = {0};
        char dt[64] = {0};
        time_t t;
        struct tm *tt;
        time(&t);
        tt = localtime(&t);
        strftime(dt,sizeof(dt),"%Y%m%d%H%M%S",tt);
        snprintf(tmp_file_name, sizeof(tmp_file_name) - 1, "log_%s.txt", dt);
        ql_debug_fp = open(tmp_file_name, O_WRONLY | O_CREAT);
        ql_dump_mutex_ptr = CREATE_MUTEX();
        if(ql_debug_fp >= 0){
            QLOGD("Host Version: 1.2\n");
        }
    }
#endif
}

static void qi_write_time()
{
    if(ql_debug_fp >= 0)
    {
        char dt[64] = {0};
        time_t t;
        struct tm *tt;
        time(&t);
        tt = localtime(&t);
        strftime(dt,sizeof(dt),"%Y-%m-%d %H:%M:%S ",tt);
        WRITEFILE(ql_debug_fp, dt, sizeof(dt));
    }
}

void ql_write_debug(char *debug_msg, const char *func, int line)
{
    char line_str[64] = {0};
    snprintf(line_str, sizeof(line_str), "%d", line);
    LOCK_MUTEX(ql_dump_mutex_ptr);
    if(ql_debug_fp >= 0){
        qi_write_time();
        WRITEFILE(ql_debug_fp, "[debug]", sizeof("[debug]"));
        WRITEFILE(ql_debug_fp, func, strlen(func)+1);
        WRITEFILE(ql_debug_fp, ":", 1);
        WRITEFILE(ql_debug_fp, line_str, strlen(line_str)+1);
        WRITEFILE(ql_debug_fp, ",", 1);
        WRITEFILE(ql_debug_fp, debug_msg, strlen(debug_msg)+1);
    }
    UNLOCK_MUTEX(ql_dump_mutex_ptr);
}

void ql_write_error(char *error_msg, const char *func, int line)
{
    char line_str[64] = {0};
    snprintf(line_str, sizeof(line_str), "%d", line);
    LOCK_MUTEX(ql_dump_mutex_ptr);
    if(ql_debug_fp >= 0){
        qi_write_time();
        WRITEFILE(ql_debug_fp, "[error]", sizeof("[error]"));
        WRITEFILE(ql_debug_fp, func, strlen(func)+1);
        WRITEFILE(ql_debug_fp, ":", 1);
        WRITEFILE(ql_debug_fp, line_str, strlen(line_str)+1);
        WRITEFILE(ql_debug_fp, ",", 1);
        WRITEFILE(ql_debug_fp, error_msg, strlen(error_msg)+1);
    }
    UNLOCK_MUTEX(ql_dump_mutex_ptr);
}

int get_serialport(char *COM)
{
    int ret = -1;

    HDEVINFO hDevInfo = INVALID_HANDLE_VALUE;
    hDevInfo = SetupDiGetClassDevs(&GUID_TYPE_COMPORT, NULL, NULL, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE);
    if (INVALID_HANDLE_VALUE != hDevInfo)
    {
        SP_DEVINFO_DATA devInfoData;
        devInfoData.cbSize = sizeof(SP_DEVINFO_DATA);
        for (DWORD i = 0; SetupDiEnumDeviceInfo(hDevInfo, i, &devInfoData); i++)
        {
            char port_name[256];
            SetupDiGetDeviceRegistryProperty(hDevInfo, &devInfoData, SPDRP_FRIENDLYNAME, NULL, (PBYTE)port_name,
                                            sizeof(port_name), NULL);
            QLOGD("portDesc: %s\n", port_name);
            if (strstr(port_name, "NPT"))
            {
                char *p = strchr(port_name,'(');
                p++;
                char *q = strchr(port_name,')');
                memset(COM, 0, 16);
                strncpy(COM, p, q-p);
                QLOGD("COM:%s\n", COM);
                ret = 0;
                break;
            }
        }
    }
    SetupDiDestroyDeviceInfoList(hDevInfo);

    return ret;
}

uint32_t com_thread_handler(void *arg)
{
    int ret = 0;
    COM = (char *)malloc(16);
    memset(COM, 0, 16);
    while (1)
    {
        if (!get_serialport(COM) && !init_state)
        {
            ret = ql_init(COM);
            if (!ret)
            {
                QLOGD("init success\n");
                ql_auto_datacall_start();
            }
            else
                QLOGE("init fail\n");
        }
        else if (get_serialport(COM) && init_state)
        {
            QLOGD("deinit\n");
            ql_deinit();
        }

        SLEEP(5);
    }

    return 0;
}