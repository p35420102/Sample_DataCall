/*

    *Copyright :

    *Copyright (c) 2021, Quectel Wireless Solutions Co., Ltd. All rights reserved.

    *Quectel Wireless Solutions Proprietary and Confidential.
*/
/**
  @file
  sample_datacall.c

  @brief
  auto data call.

*/
/*===========================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.


WHEN        WHO            WHAT, WHERE, WHY
----------  ------------   ----------------------------------------------------
14/12/2021  Chris.Wu      create
=============================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

#include "platform.h"
#include "mipc_msg_host.h"
#include "mipc_msg_tlv_api.h"
#include "mipc_msg_tlv_const.h"

typedef struct apn_profile
{
    int valid;
    int state;
    int cid;
    int aid;
    int pdp_type;
    char apn_name[MIPC_MAX_APN_LEN];
}apn_profile;

apn_profile g_default_profile;
int g_auto_flag = 1;

THREAD *act_thread_ptr = NULL;
THREAD *re_act_thread_ptr = NULL;
THREAD *get_config_thread_ptr = NULL;
THREAD *com_thread_ptr = NULL;
THREAD *usb_thread_ptr = NULL;

int init_state = 0;

int pipe_fd[2];

#if defined(_MSC_VER) && !defined(KAL_ON_OSCAR)
extern char *COM;
#endif

void ql_set_auto_flag(int flag)
{
    g_auto_flag = flag;
}

void send_atcmd(char *atcmd) {
    mipc_msg_t *msg_req_ptr;
    mipc_msg_t *msg_cnf_ptr;

    QLOGD("Send [%s]\n", atcmd);
    //SETP1: build MIPC message
    msg_req_ptr = mipc_msg_init(MIPC_SYS_AT_REQ, MIPC_MSG_PS0);

    //SETP2: add paramters
    mipc_sys_at_req_add_atcmd(msg_req_ptr, strlen(atcmd) + 1 , atcmd);
    //SETP3: send to MD
    msg_cnf_ptr = mipc_msg_sync_timeout(msg_req_ptr);
    //SETE4: free the req msg
    mipc_msg_deinit(msg_req_ptr);

    //SETP5: process the cnf msg
    if (msg_cnf_ptr == NULL) {
        QLOGE("TIMEOUT\n");
        return;
    }
    if (mipc_get_result(msg_cnf_ptr) == MIPC_RESULT_SUCCESS) {
        QLOGD("%s", mipc_sys_at_cnf_get_atcmd(msg_cnf_ptr, NULL));
    } else {
        QLOGE("ERROR\n");
    }

    //SETE6: free the cnf msg
    mipc_msg_deinit(msg_cnf_ptr);
}

void apn_profile_get()
{
    mipc_msg_t *msg_req_ptr;
    mipc_msg_t *msg_cnf_ptr;
    mipc_result_enum result;
    mipc_apn_profile_struct4* profile;
    int i = 0;

    QLOGD("entry\n");

    memset(&g_default_profile, 0, sizeof(g_default_profile));
    g_default_profile.cid = -1;
    g_default_profile.aid = -1;

    //SETP1: build MIPC message
    msg_req_ptr = mipc_msg_init(MIPC_APN_LIST_PROFILE_REQ, MIPC_MSG_PS0);

    //SETP2: send to MD
    msg_cnf_ptr = mipc_msg_sync_timeout(msg_req_ptr);
    //SETE3: free the req msg
    mipc_msg_deinit(msg_req_ptr);

    //SETP4: process the cnf msg
    if (msg_cnf_ptr == NULL)
    {
        QLOGE("TIMEOUT\n");
        return;
    }

    result = mipc_get_result(msg_cnf_ptr);
    if (result == MIPC_RESULT_SUCCESS)
    {
        uint8_t apn_count = mipc_apn_list_profile_cnf_get_apn_count(msg_cnf_ptr, 0);

        //printf("APN Profile count:%d\n", apn_count);
        if (apn_count > 0)
            profile = mipc_apn_list_profile_cnf_get_apn_list(msg_cnf_ptr, NULL);

        for (i=0; i<apn_count; i++,profile++)
        {
            //printf("APN Profile[%d]:%s pdp_type:%d apn_type:%d\n", i, profile->apn, profile->pdp_type, profile->apn_type);
            if (profile->apn_type == MIPC_APN_TYPE_DEFAULT)
            {
                QLOGD("APN Profile[%d]:%s pdp_type:%d apn_type:%d\n", i, profile->apn, profile->pdp_type, profile->apn_type);
                g_default_profile.valid = 1;
                g_default_profile.pdp_type = profile->pdp_type;
                strncpy(g_default_profile.apn_name, profile->apn, MIPC_MAX_APN_LEN);
                break;
            }
        }
    }
    else
    {
        QLOGE("Error to get APN profile, result:%d\n", result);
    }

    if (!g_default_profile.valid)
    {
        g_default_profile.valid = 1;
        g_default_profile.pdp_type = MIPC_APN_PDP_TYPE_IPV4V6;
        strcpy(g_default_profile.apn_name, "internet");
    }

    //SETE5: free the cnf msg
    mipc_msg_deinit(msg_cnf_ptr);
}

int nw_state_get()
{
    mipc_msg_t *msg_req_ptr;
    mipc_msg_t *msg_cnf_ptr;
    mipc_result_enum result;
    mipc_nw_reg_state_struct4 *reg_state;
    unsigned short len;
    int ret = 0;

    QLOGD("entry\n");

    //SETP1: build MIPC message
    msg_req_ptr = mipc_msg_init(MIPC_NW_GET_REGISTER_STATE_REQ, MIPC_MSG_PS0);
    //SETP2: send to MD
    msg_cnf_ptr = mipc_msg_sync_timeout(msg_req_ptr);
    //SETE3: free the req msg
    mipc_msg_deinit(msg_req_ptr);

    //SETP4: process the cnf msg
    if (msg_cnf_ptr == NULL)
    {
        QLOGE("TIMEOUT\n");
    }

    result = mipc_get_result(msg_cnf_ptr);
    if (result == MIPC_RESULT_SUCCESS)
    {
        reg_state = mipc_nw_get_register_state_cnf_get_state(msg_cnf_ptr, &len);
        QLOGD("reg_state:%d\n", reg_state->ps_state);
        if (reg_state->ps_state == MIPC_NW_REGISTER_STATE_HOME || reg_state->ps_state == MIPC_NW_REGISTER_STATE_ROAMING)
            ret = 1;
    }
    else
    {
        QLOGE("Error to get nw state, result:%d\n", result);
    }

    //SETE5: free the cnf msg
    mipc_msg_deinit(msg_cnf_ptr);

    return ret;
}

static void act_data_call_cb(mipc_msg_t *msg_cnf_ptr, void *ptr)
{
    QLOGD("entry\n");

    //process the cnf msg
    if (msg_cnf_ptr == NULL) {
        QLOGE("TIMEOUT\n");
        return;
    }
    if (mipc_get_result(msg_cnf_ptr) == MIPC_RESULT_SUCCESS) {
        QLOGD("%s", mipc_sys_at_cnf_get_atcmd(msg_cnf_ptr, NULL));
    } else {
        QLOGE("ERROR\n");
    }
}

void act_data_call()
{
    char atcmd[256] = {0};

    QLOGD("entry\n");

    if (!g_default_profile.valid)
    {
        QLOGE("no default profile\n");
        return;
    }

    if (g_default_profile.pdp_type == MIPC_APN_PDP_TYPE_IPV4)
        sprintf(atcmd, "AT+CGDCONT=2,\"IP\",\"%s\"", g_default_profile.apn_name);
    else if (g_default_profile.pdp_type == MIPC_APN_PDP_TYPE_IPV6)
        sprintf(atcmd, "AT+CGDCONT=2,\"IPv6\",\"%s\"", g_default_profile.apn_name);
    else if (g_default_profile.pdp_type == MIPC_APN_PDP_TYPE_IPV4V6)
        sprintf(atcmd, "AT+CGDCONT=2,\"IPv4v6\",\"%s\"", g_default_profile.apn_name);

    send_atcmd(atcmd);
    SLEEP(2);
    //send_atcmd("AT+CGACT=1,2");
    mipc_msg_t *msg_req_ptr;

    QLOGD("Send [AT+CGACT=1,2]\n");
    //SETP1: build MIPC message
    msg_req_ptr = mipc_msg_init(MIPC_SYS_AT_REQ, MIPC_MSG_PS0);

    //SETP2: add paramters
    mipc_sys_at_req_add_atcmd(msg_req_ptr, strlen("AT+CGACT=1,2") + 1 , "AT+CGACT=1,2");
    //SETP3: send to MD
    mipc_msg_async(msg_req_ptr, act_data_call_cb, NULL);
    //SETE4: free the req msg
    mipc_msg_deinit(msg_req_ptr);
}

static void get_config_cb(mipc_msg_t *msg_cnf_ptr, void *ptr)
{
    unsigned long int aid;
    char *p = NULL;
    char *q = NULL;
    char *endptr;
    mipc_result_enum result;

    QLOGD("entry\n");

    //process the cnf msg
    if (msg_cnf_ptr == NULL)
    {
        QLOGE("TIMEOUT\n");
        return;
    }

    result = mipc_get_result(msg_cnf_ptr);
    if (result == MIPC_RESULT_SUCCESS)
    {
        char *temp_data = mipc_sys_at_cnf_get_atcmd(msg_cnf_ptr, NULL);
        //printf("%s\n", temp_data);
        if (temp_data)
        {
            p = strtok(temp_data, "\n");
            while (p)
            {
                if (strstr(p, g_default_profile.apn_name))
                {
                    //printf("%s\n", p);
                    q = strstr(p, ":");
                    q++;
                    aid = strtoul(q, &endptr, 10);
                    //printf("aid=%lu\n",aid);
                    if (aid > 1)
                    {
                        g_default_profile.aid = aid;
                        g_default_profile.state = 1;
                        break;
                    }
                }
                p = strtok(NULL, "\n");
            }
        }
    }
    else
    {
        QLOGE("Error to get config, result:%d\n", result);
    }
}

uint32_t get_config_thread_handler(void *arg)
{
    char atcmd[256] = {0};
    unsigned long int aid;
    char *p = NULL;
    char *q = NULL;
    char *endptr;
    mipc_msg_t *msg_req_ptr;
    mipc_msg_t *msg_cnf_ptr;
    mipc_result_enum result;

    //SETP1: build MIPC message
    msg_req_ptr = mipc_msg_init(MIPC_SYS_AT_REQ, MIPC_MSG_PS0);

    //SETP2: add paramters
    sprintf(atcmd, "AT+CGDCONT?");
    mipc_sys_at_req_add_atcmd(msg_req_ptr, strlen(atcmd) + 1 , atcmd);
    //SETP3: send to MD
    mipc_msg_async(msg_req_ptr, get_config_cb, NULL);
    //SETE4: free the req msg
    mipc_msg_deinit(msg_req_ptr);

    return 0;
}

static void DataMdActCallbackPs0(mipc_msg_t *msg_ptr,void *priv_ptr)
{
    int cid = -1;
    char *apn = NULL;

    QLOGD("entry\n");

    cid = mipc_data_act_call_ind_get_id(msg_ptr, 0xff);
    apn = mipc_data_act_call_ind_get_apn(msg_ptr, NULL);

    QLOGD("cid:%d, apn:%s\n", cid, apn);

    if (!strcmp("IMS", apn) || !strcmp("ims", apn))
        return;

    if (!g_default_profile.state)
    {
        if (get_config_thread_ptr)
        {
            DELETE_THREAD(get_config_thread_ptr);
            get_config_thread_ptr = NULL;
        }

        g_default_profile.valid = 1;
        g_default_profile.cid = cid;
        memset(g_default_profile.apn_name, 0, MIPC_MAX_APN_LEN);
        strncpy(g_default_profile.apn_name, apn, MIPC_MAX_APN_LEN);
        get_config_thread_ptr = CREATE_THREAD(get_config_thread_handler, NULL);
    }

}

uint32_t re_act_thread_handler(void *arg)
{
    char atcmd[256] = {0};

    if (g_default_profile.aid > 1)
    {
        //make sure that the network is registered
        if (nw_state_get())
        {
            sprintf(atcmd, "AT+CGACT=1,%d", g_default_profile.aid);
            send_atcmd(atcmd);
        }
    }

    return 0;
}

static void DataMdDeactCallbackPs0(mipc_msg_t *msg_ptr,void *priv_ptr)
{
    int cid = -1;

    QLOGD("entry\n");

    cid = mipc_data_act_call_ind_get_id(msg_ptr, 0xff);

    QLOGD("cid:%d\n", cid);

    if (g_default_profile.cid == cid)
    {
        if (re_act_thread_ptr)
        {
            DELETE_THREAD(re_act_thread_ptr);
            re_act_thread_ptr = NULL;
        }
        g_default_profile.cid = -1;
        g_default_profile.state = 0;

        if (g_auto_flag)
            re_act_thread_ptr = CREATE_THREAD(re_act_thread_handler, NULL);
    }
}

uint32_t act_thread_handler(void *arg)
{
    char atcmd[256] = {0};

    SLEEP(2);

    if (g_default_profile.aid > 1)
    {
        sprintf(atcmd, "AT+CGACT=1,%d", g_default_profile.aid);
        send_atcmd(atcmd);
    }
    else
    {
        //get default profile
        apn_profile_get();

        //act data call
        act_data_call();
    }

    return 0;
}

static void NetworkPsStateCallbackPs0(mipc_msg_t *msg_ptr,void *priv_ptr)
{
    QLOGD("entry\n");

    uint16_t t_nwtmp_len = 0;
    mipc_nw_ps_reg_info_struct4 *p;

    //get reg state
    p = mipc_nw_ps_ind_get_reg_info(msg_ptr, &t_nwtmp_len);
    if (p != NULL)
    {
        QLOGD("ps_state:%d\n", p->stat);
        if (p->stat == MIPC_NW_REGISTER_STATE_HOME || p->stat == MIPC_NW_REGISTER_STATE_ROAMING)
        {
            if (!g_default_profile.state && !act_thread_ptr && g_auto_flag)
            {
                act_thread_ptr = CREATE_THREAD(act_thread_handler, NULL);
            }
        }
        else if (p->stat == MIPC_NW_REGISTER_STATE_NOT_REGISTERED || p->stat == MIPC_NW_REGISTER_STATE_UNKNOWN)
        {
            if (act_thread_ptr)
            {
                DELETE_THREAD(act_thread_ptr);
                act_thread_ptr = NULL;
            }
        }
    }
}

void mipc_register()
{
    mipc_msg_register_ind(MIPC_MSG_PS0, MIPC_DATA_MD_ACT_CALL_IND, DataMdActCallbackPs0, NULL);
    mipc_msg_register_ind(MIPC_MSG_PS0, MIPC_DATA_MD_DEACT_CALL_IND, DataMdDeactCallbackPs0, NULL);
    mipc_msg_register_ind(MIPC_MSG_PS0, MIPC_NW_PS_IND, NetworkPsStateCallbackPs0, NULL);
}

void ql_auto_datacall_start()
{
    if (!g_auto_flag)
        return;

    //make sure that the network is registered
    if (nw_state_get())
    {
        //get default profile
        apn_profile_get();

        //act data call
        act_data_call();
    }
}

void ql_deinit()
{
    if (!init_state)
        return;

    memset(&g_default_profile, 0 ,sizeof(g_default_profile));
    g_default_profile.cid = -1;
    g_default_profile.aid = -1;

    mipc_deinit();
    init_state = 0;

    if (act_thread_ptr)
    {
        DELETE_THREAD(act_thread_ptr);
        act_thread_ptr = NULL;
    }

    if (re_act_thread_ptr)
    {
        DELETE_THREAD(re_act_thread_ptr);
        re_act_thread_ptr = NULL;
    }

    if (get_config_thread_ptr)
    {
        DELETE_THREAD(get_config_thread_ptr);
        get_config_thread_ptr = NULL;
    }
}

int ql_init(const char *process_name_ptr)
{
    int ret = 0;

    QLOGD("entry\n");

    if (init_state)
    {
        QLOGE("Already initialized\n");
        return -1;
    }

    memset(&g_default_profile, 0 ,sizeof(g_default_profile));
    g_default_profile.cid = -1;
    g_default_profile.aid = -1;

    ret = mipc_init(process_name_ptr);
    if (ret)
    {
        QLOGE("mipc init fail, ret = %d\n", ret);
        return -2;
    }

    mipc_register();

    init_state = 1;

    return 0;
}

void handle_signal(int sig_num)
{
    QLOGD("process exit, sig_num=%d\n", sig_num);
    int ret;

    ql_deinit();

    if (com_thread_ptr)
    {
        DELETE_THREAD(com_thread_ptr);
        com_thread_ptr = NULL;
    }

    if (usb_thread_ptr)
    {
        DELETE_THREAD(usb_thread_ptr);
        usb_thread_ptr = NULL;
    }
#if defined(_MSC_VER) && !defined(KAL_ON_OSCAR)
    if (COM)
    {
        FREE(COM);
        COM = NULL;
    }
#endif
    exit(-1);
}

int main(int argc, char *argv[])
{
    int ret = 0;
    mipc_nw_reg_state_struct4 *reg_state;

    signal(SIGTERM, handle_signal);
    signal(SIGSEGV, handle_signal);
    signal(SIGABRT, handle_signal);
    signal(SIGINT, handle_signal);

    ql_log_init();
#if defined(_MSC_VER) && !defined(KAL_ON_OSCAR)
    //check COM
    com_thread_ptr = CREATE_THREAD(com_thread_handler, NULL);
#elif defined (_LINUX)
    //check ttyUSB
    usb_thread_ptr = CREATE_THREAD(usb_thread_handler, NULL);
#endif
    while (1)
        SLEEP(10);

    mipc_deinit();
}
