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

#ifndef __MIPC_MSG_TLV_API_H__
#define __MIPC_MSG_TLV_API_H__

#include "mipc_msg_tlv_const.h"
#include "mipc_msg.h"


static inline mipc_result_enum mipc_get_result(mipc_msg_t *msg_ptr)
{
    if (!msg_ptr) return MIPC_RESULT_FAILURE;
    return (mipc_result_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_T_RESULT, MIPC_RESULT_FAILURE);
}

static inline mipc_sys_cap_cellular_class_const_enum mipc_sys_get_info_cnf_get_sys_cellular_class(mipc_msg_t *msg_ptr, mipc_sys_cap_cellular_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_cellular_class_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_SYS_CELLULAR_CLASS, def_val);
}

static inline mipc_sys_voice_class_const_enum mipc_sys_get_info_cnf_get_voice_class(mipc_msg_t *msg_ptr, mipc_sys_voice_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_voice_class_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_VOICE_CLASS, def_val);
}

static inline mipc_sys_sim_class_const_enum mipc_sys_get_info_cnf_get_sim_class(mipc_msg_t *msg_ptr, mipc_sys_sim_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_sim_class_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_SIM_CLASS, def_val);
}

static inline mipc_sys_cap_data_const_enum mipc_sys_get_info_cnf_get_data_class(mipc_msg_t *msg_ptr, mipc_sys_cap_data_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_data_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_DATA_CLASS, def_val);
}

static inline mipc_sys_cap_gsm_band_const_enum mipc_sys_get_info_cnf_get_gsm_band_class(mipc_msg_t *msg_ptr, mipc_sys_cap_gsm_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_gsm_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_GSM_BAND_CLASS, def_val);
}

static inline mipc_sys_cap_umts_band_const_enum mipc_sys_get_info_cnf_get_umts_band_class(mipc_msg_t *msg_ptr, mipc_sys_cap_umts_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_umts_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_UMTS_BAND_CLASS, def_val);
}

static inline mipc_sys_cap_tds_band_const_enum mipc_sys_get_info_cnf_get_tds_band_class(mipc_msg_t *msg_ptr, mipc_sys_cap_tds_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_tds_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_TDS_BAND_CLASS, def_val);
}

static inline mipc_sys_cap_cdma_band_const_enum mipc_sys_get_info_cnf_get_c2k_band_class(mipc_msg_t *msg_ptr, mipc_sys_cap_cdma_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_cdma_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_C2K_BAND_CLASS, def_val);
}

static inline mipc_sys_lte_band_struct4* mipc_sys_get_info_cnf_get_lte_band_class(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_lte_band_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_LTE_BAND_CLASS, val_len_ptr);
}

static inline mipc_sys_nr_band_struct4* mipc_sys_get_info_cnf_get_nr_band_class(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_nr_band_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_NR_BAND_CLASS, val_len_ptr);
}

static inline mipc_sys_cap_sms_const_enum mipc_sys_get_info_cnf_get_sms_caps(mipc_msg_t *msg_ptr, mipc_sys_cap_sms_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_sms_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_SMS_CAPS, def_val);
}

static inline mipc_sys_cap_ctrl_const_enum mipc_sys_get_info_cnf_get_ctrl_caps(mipc_msg_t *msg_ptr, mipc_sys_cap_ctrl_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_ctrl_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_CTRL_CAPS, def_val);
}

static inline mipc_sys_auth_algo_const_enum mipc_sys_get_info_cnf_get_auth_algo_caps(mipc_msg_t *msg_ptr, mipc_sys_auth_algo_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_auth_algo_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_AUTH_ALGO_CAPS, def_val);
}

static inline mipc_sys_cap_service_const_enum mipc_sys_get_info_cnf_get_service_caps(mipc_msg_t *msg_ptr, mipc_sys_cap_service_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_service_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_SERVICE_CAPS, def_val);
}

static inline mipc_sys_modem_struct8* mipc_sys_get_info_cnf_get_multi_md(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_modem_struct8*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_MULTI_MD, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_device_id(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_DEVICE_ID, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_manufctr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_MANUFCTR, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_firmware(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_FIRMWARE, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_hardware(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_HARDWARE, val_len_ptr);
}

static inline uint16_t mipc_sys_get_info_cnf_get_max_active_ctxt(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_MAX_ACTIVE_CTXT, def_val);
}

static inline uint16_t mipc_sys_get_info_cnf_get_executor_idx(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_EXECUTOR_IDX, def_val);
}

static inline char * mipc_sys_get_info_cnf_get_custom_class_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_CUSTOM_CLASS_NAME, val_len_ptr);
}

static inline mipc_sys_product_type_const_enum mipc_sys_get_info_cnf_get_product_type(mipc_msg_t *msg_ptr, mipc_sys_product_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_product_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_PRODUCT_TYPE, def_val);
}

static inline char * mipc_sys_get_info_cnf_get_esn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_ESN, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_imeisv(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_IMEISV, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_meid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_MEID, val_len_ptr);
}

static inline char * mipc_sys_get_info_cnf_get_firmware_custom(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_FIRMWARE_CUSTOM, val_len_ptr);
}

static inline void * mipc_sys_get_info_cnf_get_hardware_id(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_INFO_CNF_T_HARDWARE_ID, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_at_req_add_atcmd(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_AT_CMD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_AT_REQ_T_ATCMD, len, (const void *)value);
}

static inline char * mipc_sys_at_cnf_get_atcmd(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_AT_CNF_T_ATCMD, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_reboot_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_sys_reboot_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_REBOOT_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_reboot_req_add_timeout(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_REBOOT_REQ_T_TIMEOUT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_get_mapping_req_add_msg(mipc_msg_t *msg_ptr, enum mipc_sys_sim_ps_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_GET_MAPPING_REQ_T_MSG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sys_get_mapping_cnf_get_mapping_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_MAPPING_CNF_T_MAPPING_COUNT, def_val);
}

static inline mipc_sys_mapping_struct4* mipc_sys_get_mapping_cnf_get_mapping_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_mapping_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_MAPPING_CNF_T_MAPPING_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_mapping_req_add_mapping_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_MAPPING_REQ_T_MAPPING_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_mapping_req_add_mapping_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_mapping_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_mapping_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_MAPPING_REQ_T_MAPPING_LIST, len, (const void *)value);
}

static inline uint8_t mipc_sys_set_mapping_cnf_get_mapping_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_SET_MAPPING_CNF_T_MAPPING_COUNT, def_val);
}

static inline mipc_sys_mapping_struct4* mipc_sys_set_mapping_cnf_get_mapping_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_mapping_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_MAPPING_CNF_T_MAPPING_LIST, val_len_ptr);
}

static inline uint32_t mipc_sys_get_thermal_sensor_num_cnf_get_num(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_NUM_CNF_T_NUM, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_get_thermal_sensor_info_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_thermal_sensor_info_cnf_get_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_ID, def_val);
}

static inline char * mipc_sys_get_thermal_sensor_info_cnf_get_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_NAME, val_len_ptr);
}

static inline uint8_t mipc_sys_get_thermal_sensor_info_cnf_get_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_TYPE, def_val);
}

static inline uint8_t mipc_sys_get_thermal_sensor_info_cnf_get_meas_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MEAS_TYPE, def_val);
}

static inline int32_t mipc_sys_get_thermal_sensor_info_cnf_get_min_tempature(mipc_msg_t *msg_ptr, int32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (int32_t)mipc_msg_get_val_int32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MIN_TEMPATURE, def_val);
}

static inline uint32_t mipc_sys_get_thermal_sensor_info_cnf_get_max_tempature(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MAX_TEMPATURE, def_val);
}

static inline uint32_t mipc_sys_get_thermal_sensor_info_cnf_get_accuracy(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_ACCURACY, def_val);
}

static inline uint32_t mipc_sys_get_thermal_sensor_info_cnf_get_resolution(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_RESOLUTION, def_val);
}

static inline int32_t mipc_sys_get_thermal_sensor_info_cnf_get_warn_tempature(mipc_msg_t *msg_ptr, int32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (int32_t)mipc_msg_get_val_int32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_WARN_TEMPATURE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_thermal_sensor_req_add_config_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_THERMAL_SENSOR_REQ_T_CONFIG_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_thermal_sensor_req_add_config_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_thermal_sensor_config_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_thermal_sensor_config_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_THERMAL_SENSOR_REQ_T_CONFIG_LIST, len, (const void *)value);
}

static inline uint8_t mipc_sys_set_thermal_sensor_cnf_get_config_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_SET_THERMAL_SENSOR_CNF_T_CONFIG_COUNT, def_val);
}

static inline mipc_sys_thermal_sensor_config_struct4* mipc_sys_set_thermal_sensor_cnf_get_config_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_thermal_sensor_config_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_THERMAL_SENSOR_CNF_T_CONFIG_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_get_thermal_sensor_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline int32_t mipc_sys_get_thermal_sensor_cnf_get_temperature(mipc_msg_t *msg_ptr, int32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (int32_t)mipc_msg_get_val_int32(msg_ptr, MIPC_SYS_GET_THERMAL_SENSOR_CNF_T_TEMPERATURE, def_val);
}

static inline uint32_t mipc_sys_get_thermal_actuator_num_cnf_get_num(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_NUM_CNF_T_NUM, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_thermal_actuator_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_THERMAL_ACTUATOR_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_thermal_actuator_req_add_level(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_THERMAL_ACTUATOR_REQ_T_LEVEL, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_get_thermal_actuator_info_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_thermal_actuator_info_cnf_get_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_ID, def_val);
}

static inline char * mipc_sys_get_thermal_actuator_info_cnf_get_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_NAME, val_len_ptr);
}

static inline uint32_t mipc_sys_get_thermal_actuator_info_cnf_get_total_level(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_TOTAL_LEVEL, def_val);
}

static inline uint32_t mipc_sys_get_thermal_actuator_info_cnf_get_current_level(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_CURRENT_LEVEL, def_val);
}

static inline uint32_t mipc_sys_get_thermal_actuator_info_cnf_get_user_impact(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_USER_IMPACT, def_val);
}

static inline uint32_t mipc_sys_get_thermal_actuator_info_cnf_get_efficiency(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_EFFICIENCY, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_config_req_add_class(mipc_msg_t *msg_ptr, enum mipc_sys_config_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_CONFIG_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_config_req_add_type(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_CONFIG_REQ_T_TYPE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_config_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  60000) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_CONFIG_REQ_T_DATA, len, (const void *)value);
}

static inline void * mipc_sys_set_config_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_CONFIG_CNF_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_get_config_req_add_class(mipc_msg_t *msg_ptr, enum mipc_sys_config_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_GET_CONFIG_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_get_config_req_add_type(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_GET_CONFIG_REQ_T_TYPE, len, (const void *)value);
}

static inline void * mipc_sys_get_config_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_CONFIG_CNF_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_reg_config_req_add_class(mipc_msg_t *msg_ptr, enum mipc_sys_config_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_REG_CONFIG_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_reg_config_req_add_type(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_REG_CONFIG_REQ_T_TYPE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_adpclk_req_add_state(mipc_msg_t *msg_ptr, enum mipc_sys_adpclk_state_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_ADPCLK_REQ_T_STATE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sys_get_adpclk_cnf_get_freq_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_ADPCLK_CNF_T_FREQ_INFO_COUNT, def_val);
}

static inline mipc_sys_adpclk_freq_info_struct8* mipc_sys_get_adpclk_cnf_get_freq_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_adpclk_freq_info_struct8*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_ADPCLK_CNF_T_FREQ_INFO_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_md_log_mode_req_add_mode(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_MD_LOG_MODE_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_md_log_mode_cnf_get_mode(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_MD_LOG_MODE_CNF_T_MODE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_md_log_level_req_add_level(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_MD_LOG_LEVEL_REQ_T_LEVEL, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_md_log_level_cnf_get_level(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_MD_LOG_LEVEL_CNF_T_LEVEL, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_md_log_location_req_add_enable(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_MD_LOG_LOCATION_REQ_T_ENABLE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_md_log_location_cnf_get_enable(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_MD_LOG_LOCATION_CNF_T_ENABLE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_write_nvram_req_add_file_idx(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_WRITE_NVRAM_REQ_T_FILE_IDX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_write_nvram_req_add_record_idx(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_WRITE_NVRAM_REQ_T_RECORD_IDX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_write_nvram_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  60000) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_WRITE_NVRAM_REQ_T_DATA, len, (const void *)value);
}

static inline uint32_t mipc_sys_write_nvram_cnf_get_data_len(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_WRITE_NVRAM_CNF_T_DATA_LEN, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_read_nvram_req_add_file_idx(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_READ_NVRAM_REQ_T_FILE_IDX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_read_nvram_req_add_record_idx(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_READ_NVRAM_REQ_T_RECORD_IDX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline void * mipc_sys_read_nvram_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_READ_NVRAM_CNF_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_auth_req_add_op(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_AUTH_REQ_T_OP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_auth_req_add_encdata(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  256) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_AUTH_REQ_T_ENCDATA, len, (const void *)value);
}

static inline void * mipc_sys_auth_cnf_get_rand(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_AUTH_CNF_T_RAND, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_dat_req_add_index(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_DAT_REQ_T_INDEX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_dat_cnf_get_index(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_DAT_CNF_T_INDEX, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_op(mipc_msg_t *msg_ptr, enum mipc_sys_mcf_op_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_OP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_config_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_CONFIG_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_dump_lids(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_DUMP_LIDS_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_MCF_REQ_T_DUMP_LIDS, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_path_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_PATH_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_trigger_dsbp(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_TRIGGER_DSBP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_action(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_format(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_num(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_MCF_REQ_T_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_rec_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SYS_MCF_REQ_T_REC_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_value(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_MCF_VALUE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_MCF_REQ_T_VALUE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_config1(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_MCF_CFG_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_MCF_REQ_T_CONFIG1, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_config(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_MCF_CFG_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_MCF_REQ_T_CONFIG, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_mcf_req_add_is_reset(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_MCF_REQ_T_IS_RESET, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_mcf_cnf_get_mcf_result(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_MCF_CNF_T_MCF_RESULT, def_val);
}

static inline uint32_t mipc_sys_mcf_cnf_get_dsbp_result(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_MCF_CNF_T_DSBP_RESULT, def_val);
}

static inline mipc_sys_mcf_op_const_enum mipc_sys_mcf_cnf_get_op(mipc_msg_t *msg_ptr, mipc_sys_mcf_op_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_mcf_op_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_OP, def_val);
}

static inline uint8_t mipc_sys_mcf_cnf_get_config_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_CONFIG_TYPE, def_val);
}

static inline uint8_t mipc_sys_mcf_cnf_get_path_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_PATH_TYPE, def_val);
}

static inline uint8_t mipc_sys_mcf_cnf_get_action(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_ACTION, def_val);
}

static inline uint8_t mipc_sys_mcf_cnf_get_format(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_FORMAT, def_val);
}

static inline uint8_t mipc_sys_mcf_cnf_get_len(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_CNF_T_LEN, def_val);
}

static inline void * mipc_sys_mcf_cnf_get_value(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_MCF_CNF_T_VALUE, val_len_ptr);
}

static inline char * mipc_sys_mcf_cnf_get_config1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_MCF_CNF_T_CONFIG1, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_fcc_lock_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_FCC_LOCK_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_year(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_YEAR, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_month(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_MONTH, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_day(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_DAY, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_hour(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_HOUR, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_minute(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_MINUTE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_second(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_SECOND, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_time_req_add_tz_off_min(mipc_msg_t *msg_ptr, int32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_int32(msg_ptr, MIPC_SYS_SET_TIME_REQ_T_TZ_OFF_MIN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_get_time_cnf_get_year(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_YEAR, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_month(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_MONTH, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_day(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_DAY, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_hour(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_HOUR, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_minute(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_MINUTE, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_second(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_SECOND, def_val);
}

static inline uint32_t mipc_sys_get_time_cnf_get_timestamp(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_TIMESTAMP, def_val);
}

static inline int32_t mipc_sys_get_time_cnf_get_tz_off_min(mipc_msg_t *msg_ptr, int32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (int32_t)mipc_msg_get_val_int32(msg_ptr, MIPC_SYS_GET_TIME_CNF_T_TZ_OFF_MIN, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_sar_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_sys_sar_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_SAR_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_sar_req_add_index(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_SAR_REQ_T_INDEX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sys_sar_mode_const_enum mipc_sys_set_sar_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_sys_sar_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_sar_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_SET_SAR_CNF_T_MODE, def_val);
}

static inline uint32_t mipc_sys_set_sar_cnf_get_index(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_SET_SAR_CNF_T_INDEX, def_val);
}

static inline mipc_sys_sar_mode_const_enum mipc_sys_get_sar_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_sys_sar_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_sar_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GET_SAR_CNF_T_MODE, def_val);
}

static inline uint32_t mipc_sys_get_sar_cnf_get_index(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_SAR_CNF_T_INDEX, def_val);
}

static inline mipc_msg_api_result_enum mipc_sys_set_power_saving_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_POWER_SAVING_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_connectivity_statistics_req_add_read_flag(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_READ_FLAG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_connectivity_statistics_req_add_start(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_START, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_connectivity_statistics_req_add_stop(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_STOP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_connectivity_statistics_req_add_period_value(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_PERIOD_VALUE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_sms_tx_counter(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_SMS_TX_COUNTER, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_sms_rx_counter(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_SMS_RX_COUNTER, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_tx_data(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_TX_DATA, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_rx_data(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_RX_DATA, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_max_message_size(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_MAX_MESSAGE_SIZE, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_average_message_size(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_AVERAGE_MESSAGE_SIZE, def_val);
}

static inline uint32_t mipc_sys_connectivity_statistics_cnf_get_period_value(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_PERIOD_VALUE, def_val);
}

static inline void * mipc_sys_connectivity_statistics_cnf_get_tx_data_ext(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_TX_DATA_EXT, val_len_ptr);
}

static inline void * mipc_sys_connectivity_statistics_cnf_get_rx_data_ext(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_RX_DATA_EXT, val_len_ptr);
}

static inline uint32_t mipc_sys_query_sbp_cnf_get_sbp_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_QUERY_SBP_CNF_T_SBP_ID, def_val);
}

static inline uint32_t mipc_sys_query_sbp_cnf_get_sim_sbp_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_QUERY_SBP_CNF_T_SIM_SBP_ID, def_val);
}

static inline char * mipc_sys_query_sbp_cnf_get_sbp_feature_byte(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_QUERY_SBP_CNF_T_SBP_FEATURE_BYTE, val_len_ptr);
}

static inline char * mipc_sys_query_sbp_cnf_get_sbp_data_byte(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_QUERY_SBP_CNF_T_SBP_DATA_BYTE, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_tx_ind_interval_req_add_interval(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_TX_IND_INTERVAL_REQ_T_INTERVAL, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_account_id(mipc_msg_t *msg_ptr, enum mipc_sys_account_id_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCOUNT_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_broadcast_flag(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_BROADCAST_FLAG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_latitude(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_LATITUDE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_longitude(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_LONGITUDE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_accuracy(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_method(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_METHOD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_city(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_CITY, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_state(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_STATE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_zip(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ZIP, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_country_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_COUNTRY_CODE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_ue_wlan_mac(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_UE_WLAN_MAC, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_confidence(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_CONFIDENCE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_altitude(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ALTITUDE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_accuracy_semi_major_axis(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_SEMI_MAJOR_AXIS, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_accuracy_semi_minor_axis(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_SEMI_MINOR_AXIS, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_set_geo_location_req_add_accuracy_vertical_axis(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SET_LOCATION_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_VERTICAL_AXIS, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sys_silent_reboot_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SYS_SILENT_REBOOT_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_apn(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_SET_IA_REQ_T_APN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_pdp_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_IA_REQ_T_PDP_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_roaming_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_IA_REQ_T_ROAMING_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_auth_type(mipc_msg_t *msg_ptr, enum mipc_apn_auth_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_IA_REQ_T_AUTH_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_userid(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_USERID_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_SET_IA_REQ_T_USERID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_password(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_PASSWORD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_SET_IA_REQ_T_PASSWORD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_bearer_bitmask(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_SET_IA_REQ_T_BEARER_BITMASK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_ia_req_add_compression(mipc_msg_t *msg_ptr, enum mipc_apn_compression_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_IA_REQ_T_COMPRESSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_apn_set_ia_cnf_get_ia_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_SET_IA_CNF_T_IA_COUNT, def_val);
}

static inline mipc_apn_ia_struct4* mipc_apn_set_ia_cnf_get_ia_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_apn_ia_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_SET_IA_CNF_T_IA_LIST, val_len_ptr);
}

static inline uint8_t mipc_apn_get_ia_cnf_get_ia_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_GET_IA_CNF_T_IA_COUNT, def_val);
}

static inline mipc_apn_ia_struct4* mipc_apn_get_ia_cnf_get_ia_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_apn_ia_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_GET_IA_CNF_T_IA_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_plmn_id(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_PLMN_ID_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_PLMN_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_apn(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_APN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_apn_type(mipc_msg_t *msg_ptr, enum mipc_apn_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_APN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_pdp_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_PDP_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_roaming_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_ROAMING_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_auth_type(mipc_msg_t *msg_ptr, enum mipc_apn_auth_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_AUTH_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_userid(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_USERID_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_USERID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_password(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_PASSWORD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_PASSWORD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_bearer_bitmask(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_BEARER_BITMASK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_compression(mipc_msg_t *msg_ptr, enum mipc_apn_compression_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_COMPRESSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_add_profile_req_add_enabled(mipc_msg_t *msg_ptr, enum mipc_apn_enabled_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_REQ_T_ENABLED, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_apn_add_profile_cnf_get_apn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_ADD_PROFILE_CNF_T_APN_COUNT, def_val);
}

static inline mipc_apn_profile_struct4* mipc_apn_add_profile_cnf_get_apn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_apn_profile_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_ADD_PROFILE_CNF_T_APN_LIST, val_len_ptr);
}

static inline uint8_t mipc_apn_list_profile_cnf_get_apn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_LIST_PROFILE_CNF_T_APN_COUNT, def_val);
}

static inline mipc_apn_profile_struct4* mipc_apn_list_profile_cnf_get_apn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_apn_profile_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_LIST_PROFILE_CNF_T_APN_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_apn_del_profile_req_add_id(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_DEL_PROFILE_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_apn_del_profile_cnf_get_apn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_DEL_PROFILE_CNF_T_APN_COUNT, def_val);
}

static inline mipc_apn_profile_struct4* mipc_apn_del_profile_cnf_get_apn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_apn_profile_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_DEL_PROFILE_CNF_T_APN_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_apn_set_profile_status_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_apn_profile_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_PROFILE_STATUS_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_apn_list_md_profile_cnf_get_apn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_LIST_MD_PROFILE_CNF_T_APN_COUNT, def_val);
}

static inline mipc_md_apn_profile_struct4* mipc_apn_list_md_profile_cnf_get_apn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_md_apn_profile_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_LIST_MD_PROFILE_CNF_T_APN_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_apn_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_APN_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_class(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_network_identifier(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_NETWORK_IDENTIFIER, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_pdp_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_PDP_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_apn_bearer(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_BEARER_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_APN_BEARER, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_enabled(mipc_msg_t *msg_ptr, enum mipc_apn_enabled_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_ENABLED, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_req_add_apn_timer(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_SET_VZW_APN_REQ_T_APN_TIMER, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_timer_req_add_apn_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_TIMER_REQ_T_APN_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_timer_req_add_max_conn(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_TIMER_REQ_T_MAX_CONN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_timer_req_add_max_conn_t(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_APN_SET_VZW_APN_TIMER_REQ_T_MAX_CONN_T, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_timer_req_add_wait_time(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_SET_VZW_APN_TIMER_REQ_T_WAIT_TIME, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_apn_set_vzw_apn_timer_req_add_throttle_time(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_APN_SET_VZW_APN_TIMER_REQ_T_THROTTLE_TIME, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_apn(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_APN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_apn_type(mipc_msg_t *msg_ptr, enum mipc_apn_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_APN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_pdp_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_PDP_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_roaming_type(mipc_msg_t *msg_ptr, enum mipc_apn_pdp_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_ROAMING_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_auth_type(mipc_msg_t *msg_ptr, enum mipc_apn_auth_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_AUTH_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_userid(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_USERID_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_USERID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_password(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_PASSWORD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_PASSWORD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_ipv4v6_fallback(mipc_msg_t *msg_ptr, enum mipc_data_fallback_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_IPV4V6_FALLBACK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_bearer_bitmask(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_BEARER_BITMASK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_reuse_flag(mipc_msg_t *msg_ptr, enum mipc_data_reuse_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_REUSE_FLAG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_if_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_IF_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_act_call_req_add_ursp_ue_local_conf(mipc_msg_t *msg_ptr, uint16_t len, mipc_ursp_ue_local_conf_struct_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_ursp_ue_local_conf_struct_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_ACT_CALL_REQ_T_URSP_UE_LOCAL_CONF, len, (const void *)value);
}

static inline uint8_t mipc_data_act_call_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_ID, def_val);
}

static inline char * mipc_data_act_call_cnf_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_APN, val_len_ptr);
}

static inline mipc_apn_pdp_type_const_enum mipc_data_act_call_cnf_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PDP_TYPE, def_val);
}

static inline uint8_t mipc_data_act_call_cnf_get_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_cnf_get_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_cnf_get_dns_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_dns_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_dns_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_dns_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_dns_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_cnf_get_dns_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_dns_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_dns_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_dns_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_dns_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_cnf_get_pcscf_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_cnf_get_pcscf_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_pcscf_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_3, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_cnf_get_gw_v4(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_GW_V4, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_cnf_get_gw_v6(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_GW_V6, val_len_ptr);
}

static inline uint32_t mipc_data_act_call_cnf_get_mtu_v4(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_MTU_V4, def_val);
}

static inline uint32_t mipc_data_act_call_cnf_get_mtu_v6(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_MTU_V6, def_val);
}

static inline uint32_t mipc_data_act_call_cnf_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_INTERFACE_ID, def_val);
}

static inline uint8_t mipc_data_act_call_cnf_get_p_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_P_ID, def_val);
}

static inline uint8_t mipc_data_act_call_cnf_get_fb_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_FB_ID, def_val);
}

static inline uint32_t mipc_data_act_call_cnf_get_ipv4_netmask(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_IPv4_NETMASK, def_val);
}

static inline uint32_t mipc_data_act_call_cnf_get_ipv6_netmask(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_IPv6_NETMASK, def_val);
}

static inline uint32_t mipc_data_act_call_cnf_get_trans_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_CNF_T_TRANS_ID, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_deact_call_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_DEACT_CALL_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_data_deact_call_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_DEACT_CALL_CNF_T_ID, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_get_call_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_CALL_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_data_get_call_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_ID, def_val);
}

static inline char * mipc_data_get_call_cnf_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_APN, val_len_ptr);
}

static inline mipc_apn_pdp_type_const_enum mipc_data_get_call_cnf_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PDP_TYPE, def_val);
}

static inline uint8_t mipc_data_get_call_cnf_get_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_cnf_get_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_cnf_get_dns_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_dns_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_dns_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_dns_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_dns_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_cnf_get_dns_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_dns_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_dns_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_dns_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_dns_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_DNS_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_cnf_get_pcscf_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_cnf_get_pcscf_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_pcscf_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_3, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_get_call_cnf_get_gw_v4(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_GW_V4, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_get_call_cnf_get_gw_v6(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_GW_V6, val_len_ptr);
}

static inline uint32_t mipc_data_get_call_cnf_get_mtu_v4(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_MTU_V4, def_val);
}

static inline uint32_t mipc_data_get_call_cnf_get_mtu_v6(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_MTU_V6, def_val);
}

static inline uint32_t mipc_data_get_call_cnf_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_INTERFACE_ID, def_val);
}

static inline uint32_t mipc_data_get_call_cnf_get_ipv4_netmask(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_IPv4_NETMASK, def_val);
}

static inline uint32_t mipc_data_get_call_cnf_get_ipv6_netmask(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_IPv6_NETMASK, def_val);
}

static inline mipc_apn_type_const_enum mipc_data_get_call_cnf_get_apn_type(mipc_msg_t *msg_ptr, mipc_apn_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_APN_TYPE, def_val);
}

static inline uint32_t mipc_data_get_call_cnf_get_trans_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_CNF_T_TRANS_ID, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_set_packet_filter_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_packet_filter_req_add_filter_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_REQ_T_FILTER_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_packet_filter_req_add_filter_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_data_packet_filter_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_data_packet_filter_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_REQ_T_FILTER_LIST, len, (const void *)value);
}

static inline uint8_t mipc_data_set_packet_filter_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_CNF_T_ID, def_val);
}

static inline uint8_t mipc_data_set_packet_filter_cnf_get_filter_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_CNF_T_FILTER_COUNT, def_val);
}

static inline mipc_data_packet_filter_struct4* mipc_data_set_packet_filter_cnf_get_filter_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_packet_filter_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_SET_PACKET_FILTER_CNF_T_FILTER_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_data_get_packet_filter_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_PACKET_FILTER_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_data_get_packet_filter_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PACKET_FILTER_CNF_T_ID, def_val);
}

static inline uint8_t mipc_data_get_packet_filter_cnf_get_filter_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PACKET_FILTER_CNF_T_FILTER_COUNT, def_val);
}

static inline mipc_data_packet_filter_struct4* mipc_data_get_packet_filter_cnf_get_filter_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_packet_filter_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_PACKET_FILTER_CNF_T_FILTER_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_data_get_pco_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_PCO_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_data_get_pco_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PCO_CNF_T_ID, def_val);
}

static inline uint8_t mipc_data_get_pco_cnf_get_pco_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PCO_CNF_T_PCO_COUNT, def_val);
}

static inline mipc_data_pco_ie_struct4* mipc_data_get_pco_cnf_get_pco_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_pco_ie_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_PCO_CNF_T_PCO_LIST, val_len_ptr);
}

static inline void * mipc_data_get_md_data_call_list_cnf_get_cid_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_MD_DATA_CALL_LIST_CNF_T_CID_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_mobile_data(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_MOBILE_DATA, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_data_roaming(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_DATA_ROAMING, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_volte(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_VOLTE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_ims_test_mode(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_IMS_TEST_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_data_domestic_roaming(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_DATA_DOMESTIC_ROAMING, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_set_config_req_add_data_international_roaming(mipc_msg_t *msg_ptr, enum mipc_data_config_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_SET_CONFIG_REQ_T_DATA_INTERNATIONAL_ROAMING, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_mobile_data(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_MOBILE_DATA, def_val);
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_data_roaming(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_DATA_ROAMING, def_val);
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_volte(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_VOLTE, def_val);
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_ims_test_mode(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_IMS_TEST_MODE, def_val);
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_data_domestic_roaming(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_DATA_DOMESTIC_ROAMING, def_val);
}

static inline mipc_data_config_type_const_enum mipc_data_get_config_cnf_get_data_international_roaming(mipc_msg_t *msg_ptr, mipc_data_config_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_config_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CONFIG_CNF_T_DATA_INTERNATIONAL_ROAMING, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_abort_call_req_add_apn(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_ABORT_CALL_REQ_T_APN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_data_get_call_info_req_add_apn(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_GET_CALL_INFO_REQ_T_APN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_data_get_call_info_req_add_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_CALL_INFO_REQ_T_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline char * mipc_data_get_call_info_cnf_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_INFO_CNF_T_APN, val_len_ptr);
}

static inline uint8_t mipc_data_get_call_info_cnf_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_CALL_INFO_CNF_T_ID, def_val);
}

static inline mipc_data_nitz_info_struct4* mipc_data_get_call_info_cnf_get_estblished_time(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_nitz_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_INFO_CNF_T_ESTBLISHED_TIME, val_len_ptr);
}

static inline mipc_data_nitz_info_struct4* mipc_data_get_call_info_cnf_get_end_time(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_nitz_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_GET_CALL_INFO_CNF_T_END_TIME, val_len_ptr);
}

static inline uint32_t mipc_data_get_call_info_cnf_get_reject_cause(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_GET_CALL_INFO_CNF_T_REJECT_CAUSE, def_val);
}

static inline uint8_t mipc_data_get_pdp_cid_cnf_get_min_cid(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PDP_CID_CNF_T_MIN_CID, def_val);
}

static inline uint8_t mipc_data_get_pdp_cid_cnf_get_max_cid(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_GET_PDP_CID_CNF_T_MAX_CID, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_retry_timer_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_data_retry_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_RETRY_TIMER_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_retry_timer_req_add_apn_name(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_APN_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_RETRY_TIMER_REQ_T_APN_NAME, len, (const void *)value);
}

static inline mipc_data_retry_type_const_enum mipc_data_retry_timer_cnf_get_retry_type(mipc_msg_t *msg_ptr, mipc_data_retry_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_retry_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_RETRY_TIMER_CNF_T_RETRY_TYPE, def_val);
}

static inline uint32_t mipc_data_retry_timer_cnf_get_retry_time(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_RETRY_TIMER_CNF_T_RETRY_TIME, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_get_qos_req_add_cid(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_QOS_REQ_T_CID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_data_qos_info_struct4* mipc_data_get_qos_cnf_get_qos_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CID_LIST_LEN) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_qos_info_struct4*)mipc_msg_get_idx_ptr(msg_ptr, MIPC_DATA_GET_QOS_CNF_T_QOS_LIST, index, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_data_keepalive_req_add_stop_keepalive(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_DATA_KEEPALIVE_REQ_T_STOP_KEEPALIVE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_data_keepalive_req_add_start_keepalive(mipc_msg_t *msg_ptr, uint16_t len, mipc_data_start_keepalive_request_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_data_start_keepalive_request_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_DATA_KEEPALIVE_REQ_T_START_KEEPALIVE, len, (const void *)value);
}

static inline uint32_t mipc_data_keepalive_cnf_get_session_handle(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_KEEPALIVE_CNF_T_SESSION_HANDLE, def_val);
}

static inline mipc_data_keepalive_status_code_const_enum mipc_data_keepalive_cnf_get_status_code(mipc_msg_t *msg_ptr, mipc_data_keepalive_status_code_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_keepalive_status_code_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_KEEPALIVE_CNF_T_STATUS_CODE, def_val);
}

static inline mipc_msg_api_result_enum mipc_data_get_5gqos_req_add_cid(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_DATA_GET_5GQOS_REQ_T_CID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_data_5gqos_info_struct4* mipc_data_get_5gqos_cnf_get_qos_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CID_LIST_LEN) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_5gqos_info_struct4*)mipc_msg_get_idx_ptr(msg_ptr, MIPC_DATA_GET_5GQOS_CNF_T_QOS_LIST, index, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_internal_open_req_add_version(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_INTERNAL_OPEN_REQ_T_VERSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_open_req_add_client_name(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_CLIENT_NAME_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_OPEN_REQ_T_CLIENT_NAME, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_internal_open_req_add_usir_support(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_OPEN_REQ_T_USIR_SUPPORT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_internal_open_cnf_get_version(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_OPEN_CNF_T_VERSION, def_val);
}

static inline uint32_t mipc_internal_open_cnf_get_timeout(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_OPEN_CNF_T_TIMEOUT, def_val);
}

static inline uint32_t mipc_internal_test_cnf_get_test(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_TEST_CNF_T_TEST, def_val);
}

static inline mipc_msg_api_result_enum mipc_internal_register_ind_req_add_msg_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_INTERNAL_REGISTER_IND_REQ_T_MSG_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_unregister_ind_req_add_msg_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_INTERNAL_UNREGISTER_IND_REQ_T_MSG_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_register_cmd_req_add_msg_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_INTERNAL_REGISTER_CMD_REQ_T_MSG_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_unregister_cmd_req_add_msg_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_INTERNAL_UNREGISTER_CMD_REQ_T_MSG_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_set_filter_req_add_struct(mipc_msg_t *msg_ptr, uint16_t len, mipc_internal_set_filter_req_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_internal_set_filter_req_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_SET_FILTER_REQ_T_STRUCT, len, (const void *)value);
}

static inline mipc_internal_set_filter_cnf_struct4* mipc_internal_set_filter_cnf_get_struct(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_internal_set_filter_cnf_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_SET_FILTER_CNF_T_STRUCT, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_internal_reset_filter_req_add_struct(mipc_msg_t *msg_ptr, uint16_t len, mipc_internal_reset_filter_req_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_internal_reset_filter_req_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_RESET_FILTER_REQ_T_STRUCT, len, (const void *)value);
}

static inline mipc_internal_reset_filter_cnf_struct4* mipc_internal_reset_filter_cnf_get_struct(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_internal_reset_filter_cnf_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_RESET_FILTER_CNF_T_STRUCT, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_internal_eif_req_add_transid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_INTERNAL_EIF_REQ_T_TRANSID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eif_req_add_cmd(mipc_msg_t *msg_ptr, enum mipc_internal_eif_req_cmd_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_EIF_REQ_T_CMD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eif_req_add_new_addr(mipc_msg_t *msg_ptr, uint16_t len, mipc_full_addr_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_full_addr_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_EIF_REQ_T_NEW_ADDR, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_internal_eif_req_add_old_addr(mipc_msg_t *msg_ptr, uint16_t len, mipc_full_addr_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_full_addr_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_EIF_REQ_T_OLD_ADDR, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_internal_eif_req_add_address_type(mipc_msg_t *msg_ptr, enum mipc_eif_address_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_EIF_REQ_T_ADDRESS_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_radio_state_const_enum mipc_nw_get_radio_state_cnf_get_sw_state(mipc_msg_t *msg_ptr, mipc_nw_radio_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_radio_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RADIO_STATE_CNF_T_SW_STATE, def_val);
}

static inline mipc_nw_radio_state_const_enum mipc_nw_get_radio_state_cnf_get_hw_state(mipc_msg_t *msg_ptr, mipc_nw_radio_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_radio_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RADIO_STATE_CNF_T_HW_STATE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_radio_state_req_add_sw_state(mipc_msg_t *msg_ptr, enum mipc_nw_radio_state_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_RADIO_STATE_REQ_T_SW_STATE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_radio_state_req_add_cause(mipc_msg_t *msg_ptr, enum mipc_nw_radio_state_cause_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_RADIO_STATE_REQ_T_CAUSE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_radio_state_req_add_hw_state(mipc_msg_t *msg_ptr, enum mipc_nw_radio_state_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_RADIO_STATE_REQ_T_HW_STATE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_radio_state_const_enum mipc_nw_set_radio_state_cnf_get_sw_state(mipc_msg_t *msg_ptr, mipc_nw_radio_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_radio_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_RADIO_STATE_CNF_T_SW_STATE, def_val);
}

static inline mipc_nw_radio_state_const_enum mipc_nw_set_radio_state_cnf_get_hw_state(mipc_msg_t *msg_ptr, mipc_nw_radio_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_radio_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_RADIO_STATE_CNF_T_HW_STATE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_nw_register_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_format(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_oper(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_OPER_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_OPER, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_act(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_ACT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_arfcn(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_ARFCN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_rat_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_RAT_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_register_state_req_add_block(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_REQ_T_BLOCK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_reg_state_struct4* mipc_nw_set_register_state_cnf_get_state(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_reg_state_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_STATE, val_len_ptr);
}

static inline uint16_t mipc_nw_set_register_state_cnf_get_nw_err(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_ERR, def_val);
}

static inline mipc_nw_register_mode_const_enum mipc_nw_set_register_state_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_nw_register_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_register_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_MODE, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_set_register_state_cnf_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_DATA_SPEED, def_val);
}

static inline char * mipc_nw_set_register_state_cnf_get_nw_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_NAME, val_len_ptr);
}

static inline char * mipc_nw_set_register_state_cnf_get_roaming_text(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_ROAMING_TEXT, val_len_ptr);
}

static inline uint16_t mipc_nw_set_register_state_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_FAIL_CAUSE, def_val);
}

static inline char * mipc_nw_set_register_state_cnf_get_nw_long_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_LONG_NAME, val_len_ptr);
}

static inline mipc_nw_reg_state_struct4* mipc_nw_get_register_state_cnf_get_state(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_reg_state_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_STATE, val_len_ptr);
}

static inline uint16_t mipc_nw_get_register_state_cnf_get_nw_err(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_ERR, def_val);
}

static inline mipc_nw_register_mode_const_enum mipc_nw_get_register_state_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_nw_register_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_register_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_MODE, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_get_register_state_cnf_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_DATA_SPEED, def_val);
}

static inline char * mipc_nw_get_register_state_cnf_get_nw_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_NAME, val_len_ptr);
}

static inline char * mipc_nw_get_register_state_cnf_get_roaming_text(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_ROAMING_TEXT, val_len_ptr);
}

static inline uint16_t mipc_nw_get_register_state_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_FAIL_CAUSE, def_val);
}

static inline char * mipc_nw_get_register_state_cnf_get_plmn_id(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_PLMN_ID, val_len_ptr);
}

static inline char * mipc_nw_get_register_state_cnf_get_nw_long_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_LONG_NAME, val_len_ptr);
}

static inline uint8_t mipc_nw_get_plmn_list_cnf_get_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_PLMN_LIST_CNF_T_INFO_COUNT, def_val);
}

static inline mipc_nw_provider_struct4* mipc_nw_get_plmn_list_cnf_get_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PLMN_LIST_CNF_T_INFO_LIST, val_len_ptr);
}

static inline uint16_t mipc_nw_get_plmn_list_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_PLMN_LIST_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_extend_provider_struct4* mipc_nw_get_plmn_list_cnf_get_extend_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_extend_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PLMN_LIST_CNF_T_EXTEND_INFO_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_set_ps_req_add_action(mipc_msg_t *msg_ptr, enum mipc_nw_ps_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_PS_REQ_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_ps_const_enum mipc_nw_set_ps_cnf_get_tach(mipc_msg_t *msg_ptr, mipc_nw_ps_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_ps_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_PS_CNF_T_TACH, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_set_ps_cnf_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_PS_CNF_T_DATA_SPEED, def_val);
}

static inline uint8_t mipc_nw_set_ps_cnf_get_nw_frequency(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_PS_CNF_T_NW_FREQUENCY, def_val);
}

static inline uint16_t mipc_nw_set_ps_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_PS_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_ps_const_enum mipc_nw_get_ps_cnf_get_tach(mipc_msg_t *msg_ptr, mipc_nw_ps_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_ps_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_PS_CNF_T_TACH, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_get_ps_cnf_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_PS_CNF_T_DATA_SPEED, def_val);
}

static inline uint8_t mipc_nw_get_ps_cnf_get_nw_frequency(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_PS_CNF_T_NW_FREQUENCY, def_val);
}

static inline uint16_t mipc_nw_get_ps_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_PS_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_ps_reg_info_struct4* mipc_nw_get_ps_cnf_get_reg_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_ps_reg_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PS_CNF_T_REG_INFO, val_len_ptr);
}

static inline mipc_nw_cell_type_const_enum mipc_nw_get_ps_cnf_get_cell_type(mipc_msg_t *msg_ptr, mipc_nw_cell_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_cell_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_PS_CNF_T_CELL_TYPE, def_val);
}

static inline mipc_nw_gsm_cell_struct4* mipc_nw_get_ps_cnf_get_cell_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PS_CNF_T_CELL_INFO, val_len_ptr);
}

static inline mipc_nw_nr_cell_struct4* mipc_nw_get_ps_cnf_get_nsa_ext_cell_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PS_CNF_T_NSA_EXT_CELL_INFO, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_signal_strength_interval(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_SIGNAL_STRENGTH_INTERVAL, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_rssi_threshold(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_RSSI_THRESHOLD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_err_rate_threshold(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_ERR_RATE_THRESHOLD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_rsrp_threshold(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_RSRP_THRESHOLD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_snr_threshold(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_SNR_THRESHOLD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_signal_req_add_threshold_mode(mipc_msg_t *msg_ptr, enum mipc_nw_signal_threshold_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_SIGNAL_REQ_T_THRESHOLD_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_nw_set_signal_cnf_get_signal_strength_interval(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_SIGNAL_STRENGTH_INTERVAL, def_val);
}

static inline uint32_t mipc_nw_set_signal_cnf_get_rssi_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_RSSI_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_set_signal_cnf_get_err_rate_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_ERR_RATE_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_set_signal_cnf_get_rsrp_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_RSRP_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_set_signal_cnf_get_snr_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_SNR_THRESHOLD, def_val);
}

static inline uint16_t mipc_nw_set_signal_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_signal_type_const_enum mipc_nw_set_signal_cnf_get_signal_type(mipc_msg_t *msg_ptr, mipc_nw_signal_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_signal_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_SIGNAL_TYPE, def_val);
}

static inline mipc_nw_gsm_signal_strength_struct4* mipc_nw_set_signal_cnf_get_gsm_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_GSM_SIGNAL, val_len_ptr);
}

static inline mipc_nw_umts_signal_strength_struct4* mipc_nw_set_signal_cnf_get_umts_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_umts_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_UMTS_SIGNAL, val_len_ptr);
}

static inline mipc_nw_lte_signal_strength_struct4* mipc_nw_set_signal_cnf_get_lte_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_LTE_SIGNAL, val_len_ptr);
}

static inline mipc_nw_nr_signal_strength_struct4* mipc_nw_set_signal_cnf_get_nr_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_NR_SIGNAL, val_len_ptr);
}

static inline mipc_nw_raw_signal_info_struct4* mipc_nw_set_signal_cnf_get_raw_signal_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_raw_signal_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_set_signal_cnf_get_raw_signal_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_COUNT, def_val);
}

static inline uint32_t mipc_nw_get_signal_cnf_get_signal_strength_interval(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_SIGNAL_STRENGTH_INTERVAL, def_val);
}

static inline uint32_t mipc_nw_get_signal_cnf_get_rssi_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_RSSI_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_get_signal_cnf_get_err_rate_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_ERR_RATE_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_get_signal_cnf_get_rsrp_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_RSRP_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_get_signal_cnf_get_snr_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_SNR_THRESHOLD, def_val);
}

static inline uint16_t mipc_nw_get_signal_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_signal_type_const_enum mipc_nw_get_signal_cnf_get_signal_type(mipc_msg_t *msg_ptr, mipc_nw_signal_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_signal_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_SIGNAL_TYPE, def_val);
}

static inline mipc_nw_gsm_signal_strength_struct4* mipc_nw_get_signal_cnf_get_gsm_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_GSM_SIGNAL, val_len_ptr);
}

static inline mipc_nw_umts_signal_strength_struct4* mipc_nw_get_signal_cnf_get_umts_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_umts_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_UMTS_SIGNAL, val_len_ptr);
}

static inline mipc_nw_lte_signal_strength_struct4* mipc_nw_get_signal_cnf_get_lte_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_LTE_SIGNAL, val_len_ptr);
}

static inline mipc_nw_nr_signal_strength_struct4* mipc_nw_get_signal_cnf_get_nr_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_NR_SIGNAL, val_len_ptr);
}

static inline mipc_nw_raw_signal_info_struct4* mipc_nw_get_signal_cnf_get_raw_signal_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_raw_signal_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_get_signal_cnf_get_raw_signal_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_COUNT, def_val);
}

static inline uint8_t mipc_nw_get_preferred_provider_cnf_get_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_COUNT, def_val);
}

static inline mipc_nw_provider_struct4* mipc_nw_get_preferred_provider_cnf_get_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_LIST, val_len_ptr);
}

static inline uint16_t mipc_nw_get_preferred_provider_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_preferred_provider_req_add_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_PREFERRED_PROVIDER_REQ_T_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_preferred_provider_req_add_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_provider_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_provider_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_PREFERRED_PROVIDER_REQ_T_LIST, len, (const void *)value);
}

static inline uint8_t mipc_nw_set_preferred_provider_cnf_get_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_COUNT, def_val);
}

static inline mipc_nw_provider_struct4* mipc_nw_set_preferred_provider_cnf_get_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_LIST, val_len_ptr);
}

static inline uint16_t mipc_nw_set_preferred_provider_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_home_provider_req_add_provider(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_provider_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_provider_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_HOME_PROVIDER_REQ_T_PROVIDER, len, (const void *)value);
}

static inline mipc_nw_provider_struct4* mipc_nw_set_home_provider_cnf_get_provider(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SET_HOME_PROVIDER_CNF_T_PROVIDER, val_len_ptr);
}

static inline uint16_t mipc_nw_set_home_provider_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_HOME_PROVIDER_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_provider_struct4* mipc_nw_get_home_provider_cnf_get_provider(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_HOME_PROVIDER_CNF_T_PROVIDER, val_len_ptr);
}

static inline uint16_t mipc_nw_get_home_provider_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_HOME_PROVIDER_CNF_T_FAIL_CAUSE, def_val);
}

static inline char * mipc_nw_get_ia_status_cnf_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_APN, val_len_ptr);
}

static inline uint8_t mipc_nw_get_ia_status_cnf_get_rat(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_RAT, def_val);
}

static inline mipc_apn_pdp_type_const_enum mipc_nw_get_ia_status_cnf_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_PDP_TYPE, def_val);
}

static inline mipc_apn_auth_type_const_enum mipc_nw_get_ia_status_cnf_get_auth_type(mipc_msg_t *msg_ptr, mipc_apn_auth_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_auth_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_AUTH_TYPE, def_val);
}

static inline char * mipc_nw_get_ia_status_cnf_get_userid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_USERID, val_len_ptr);
}

static inline char * mipc_nw_get_ia_status_cnf_get_password(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_IA_STATUS_CNF_T_PASSWORD, val_len_ptr);
}

static inline mipc_nw_nitz_info_struct4* mipc_nw_get_nitz_cnf_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nitz_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_NITZ_CNF_T_INFO, val_len_ptr);
}

static inline uint8_t mipc_nw_get_nitz_cnf_get_tz_valid(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_NITZ_CNF_T_TZ_VALID, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_idle_hint_req_add_status(mipc_msg_t *msg_ptr, enum mipc_nw_fast_dormancy_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_IDLE_HINT_REQ_T_STATUS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_fast_dormancy_const_enum mipc_nw_set_idle_hint_cnf_get_status(mipc_msg_t *msg_ptr, mipc_nw_fast_dormancy_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_fast_dormancy_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SET_IDLE_HINT_CNF_T_STATUS, def_val);
}

static inline uint16_t mipc_nw_set_idle_hint_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_SET_IDLE_HINT_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_fast_dormancy_const_enum mipc_nw_get_idle_hint_cnf_get_status(mipc_msg_t *msg_ptr, mipc_nw_fast_dormancy_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_fast_dormancy_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_IDLE_HINT_CNF_T_STATUS, def_val);
}

static inline uint16_t mipc_nw_get_idle_hint_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_IDLE_HINT_CNF_T_FAIL_CAUSE, def_val);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_gsm_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_GSM_CELL_COUNT, def_val);
}

static inline mipc_nw_gsm_cell_struct4* mipc_nw_get_base_stations_cnf_get_gsm_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_GSM_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_umts_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_UMTS_CELL_COUNT, def_val);
}

static inline mipc_nw_umts_cell_struct4* mipc_nw_get_base_stations_cnf_get_umts_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_umts_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_UMTS_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_tdscdma_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_TDSCDMA_CELL_COUNT, def_val);
}

static inline mipc_nw_tdscdma_cell_struct4* mipc_nw_get_base_stations_cnf_get_tdscdma_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_tdscdma_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_TDSCDMA_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_lte_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_LTE_CELL_COUNT, def_val);
}

static inline mipc_nw_lte_cell_struct4* mipc_nw_get_base_stations_cnf_get_lte_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_LTE_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_cdma_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_CDMA_CELL_COUNT, def_val);
}

static inline mipc_nw_cdma_cell_struct4* mipc_nw_get_base_stations_cnf_get_cdma_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cdma_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_CDMA_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_get_base_stations_cnf_get_nr_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_NR_CELL_COUNT, def_val);
}

static inline mipc_nw_nr_cell_struct4* mipc_nw_get_base_stations_cnf_get_nr_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_NR_CELL_LIST, val_len_ptr);
}

static inline uint16_t mipc_nw_get_base_stations_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_BASE_STATIONS_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_nw_location_info_struct4* mipc_nw_get_location_info_cnf_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_location_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_LOCATION_INFO_CNF_T_INFO, val_len_ptr);
}

static inline uint16_t mipc_nw_get_location_info_cnf_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_GET_LOCATION_INFO_CNF_T_FAIL_CAUSE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_rat_req_add_rat(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_RAT_REQ_T_RAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_rat_req_add_prefer_rat(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_RAT_REQ_T_PREFER_RAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_get_provider_name_req_add_plmn_id(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_PLMN_ID_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_REQ_T_PLMN_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_get_provider_name_req_add_lac(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_REQ_T_LAC, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline char * mipc_nw_get_provider_name_cnf_get_plmn_id(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_CNF_T_PLMN_ID, val_len_ptr);
}

static inline uint32_t mipc_nw_get_provider_name_cnf_get_lac(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_CNF_T_LAC, def_val);
}

static inline char * mipc_nw_get_provider_name_cnf_get_nw_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_CNF_T_NW_NAME, val_len_ptr);
}

static inline char * mipc_nw_get_provider_name_cnf_get_nw_name_long(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_PROVIDER_NAME_CNF_T_NW_NAME_LONG, val_len_ptr);
}

static inline uint8_t mipc_nw_get_rat_cnf_get_act(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RAT_CNF_T_ACT, def_val);
}

static inline uint8_t mipc_nw_get_rat_cnf_get_gprs_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RAT_CNF_T_GPRS_STATUS, def_val);
}

static inline uint8_t mipc_nw_get_rat_cnf_get_rat_mode(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RAT_CNF_T_RAT_MODE, def_val);
}

static inline uint8_t mipc_nw_get_rat_cnf_get_prefer_rat(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RAT_CNF_T_PREFER_RAT, def_val);
}

static inline uint8_t mipc_nw_get_rat_cnf_get_lock(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_RAT_CNF_T_LOCK, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_nr_req_add_nr_opt(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_NR_REQ_T_NR_OPT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_cs_reg_info_struct4* mipc_nw_get_cs_cnf_get_reg_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cs_reg_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CS_CNF_T_REG_INFO, val_len_ptr);
}

static inline mipc_nw_cell_type_const_enum mipc_nw_get_cs_cnf_get_cell_type(mipc_msg_t *msg_ptr, mipc_nw_cell_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_cell_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CS_CNF_T_CELL_TYPE, def_val);
}

static inline mipc_nw_gsm_cell_struct4* mipc_nw_get_cs_cnf_get_cell_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CS_CNF_T_CELL_INFO, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_get_band_mode_req_add_option(mipc_msg_t *msg_ptr, enum mipc_nw_band_option_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_GET_BAND_MODE_REQ_T_OPTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sys_cap_gsm_band_const_enum mipc_nw_get_band_mode_cnf_get_gsm_band(mipc_msg_t *msg_ptr, mipc_sys_cap_gsm_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_gsm_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BAND_MODE_CNF_T_GSM_BAND, def_val);
}

static inline mipc_sys_cap_umts_band_const_enum mipc_nw_get_band_mode_cnf_get_umts_band(mipc_msg_t *msg_ptr, mipc_sys_cap_umts_band_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_cap_umts_band_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_BAND_MODE_CNF_T_UMTS_BAND, def_val);
}

static inline mipc_sys_lte_band_struct4* mipc_nw_get_band_mode_cnf_get_lte_band(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_lte_band_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BAND_MODE_CNF_T_LTE_BAND, val_len_ptr);
}

static inline mipc_sys_nr_band_struct4* mipc_nw_get_band_mode_cnf_get_nr_band(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_nr_band_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_BAND_MODE_CNF_T_NR_BAND, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_set_band_mode_req_add_gsm_band(mipc_msg_t *msg_ptr, enum mipc_sys_cap_gsm_band_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_BAND_MODE_REQ_T_GSM_BAND, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_band_mode_req_add_umts_band(mipc_msg_t *msg_ptr, enum mipc_sys_cap_umts_band_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_SET_BAND_MODE_REQ_T_UMTS_BAND, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_band_mode_req_add_lte_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_lte_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_lte_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_BAND_MODE_REQ_T_LTE_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_set_band_mode_req_add_nr_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_nr_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_nr_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_BAND_MODE_REQ_T_NR_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_set_channel_lock_req_add_ch_lock_info_list_count(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_NW_SET_CHANNEL_LOCK_REQ_T_CH_LOCK_INFO_LIST_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_channel_lock_req_add_ch_lock_info_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_channel_lock_info_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_channel_lock_info_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_CHANNEL_LOCK_REQ_T_CH_LOCK_INFO_LIST, len, (const void *)value);
}

static inline mipc_nw_pol_info_struct4* mipc_nw_get_pol_capability_cnf_get_pol_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_pol_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_POL_CAPABILITY_CNF_T_POL_INFO, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_set_prefer_rat_req_add_rat_num(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_PREFER_RAT_REQ_T_RAT_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_prefer_rat_req_add_rat_list(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  4) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_PREFER_RAT_REQ_T_RAT_LIST, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_set_endc_config_req_add_endc_state(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_ENDC_CONFIG_REQ_T_ENDC_STATE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_lte_carrier_aggregation_switch_req_add_status(mipc_msg_t *msg_ptr, enum mipc_nw_lte_carrier_arrregation_switch_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_REQ_T_STATUS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_ps_cs_registration_state_roaming_type_req_add_ps_cs_reg_roaming_info(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_ps_cs_reg_roaming_info_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_ps_cs_reg_roaming_info_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_REQ_T_PS_CS_REG_ROAMING_INFO, len, (const void *)value);
}

static inline mipc_nw_lte_carrier_arrregation_switch_const_enum mipc_nw_get_lte_carrier_aggregation_switch_cnf_get_status(mipc_msg_t *msg_ptr, mipc_nw_lte_carrier_arrregation_switch_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_lte_carrier_arrregation_switch_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_CNF_T_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_measurement_req_add_action(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_CELL_MEASUREMENT_REQ_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_cell_measurement_req_add_lte_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_lte_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_lte_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_MEASUREMENT_REQ_T_LTE_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_measurement_req_add_nr_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_nr_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_nr_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_MEASUREMENT_REQ_T_NR_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_measurement_req_add_scan_type(mipc_msg_t *msg_ptr, enum mipc_nw_cellmeasurement_scan_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_CELL_MEASUREMENT_REQ_T_SCAN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_nw_cell_measurement_cnf_get_lte_cell_list_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_LIST_COUNT, def_val);
}

static inline mipc_nw_cellmeasurement_info_struct4* mipc_nw_cell_measurement_cnf_get_lte_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cellmeasurement_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_LIST, val_len_ptr);
}

static inline mipc_cell_plmn_struct4* mipc_nw_cell_measurement_cnf_get_lte_plmn_array(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_cell_plmn_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_PLMN_ARRAY, val_len_ptr);
}

static inline uint8_t mipc_nw_cell_measurement_cnf_get_nr_cell_list_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_LIST_COUNT, def_val);
}

static inline mipc_nw_cellmeasurement_info_struct4* mipc_nw_cell_measurement_cnf_get_nr_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cellmeasurement_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_LIST, val_len_ptr);
}

static inline mipc_cell_plmn_struct4* mipc_nw_cell_measurement_cnf_get_nr_plmn_array(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_cell_plmn_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_PLMN_ARRAY, val_len_ptr);
}

static inline mipc_nw_cell_band_bandwidth_struct4* mipc_nw_cell_measurement_cnf_get_lte_cell_band_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cell_band_bandwidth_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_BAND_LIST, val_len_ptr);
}

static inline mipc_nw_cell_band_bandwidth_struct4* mipc_nw_cell_measurement_cnf_get_nr_cell_band_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cell_band_bandwidth_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_BAND_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_lte_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_lte_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_lte_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_nr_band(mipc_msg_t *msg_ptr, uint16_t len, mipc_sys_nr_band_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_sys_nr_band_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_BAND, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_lte_cell_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_CELL_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_lte_cell_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_lte_cell_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_lte_cell_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_CELL_LIST, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_nr_cell_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_CELL_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_cell_band_white_list_lock_req_add_nr_cell_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_nr_cell_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_nr_cell_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_CELL_LIST, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_nw_get_cell_band_bandwidth_req_add_rat(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_REQ_T_RAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_nw_get_cell_band_bandwidth_cnf_get_num_serving_cell(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NUM_SERVING_CELL, def_val);
}

static inline mipc_nw_cell_band_bandwidth_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_lte_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cell_band_bandwidth_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_cell_band_bandwidth_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_nr_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cell_band_bandwidth_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_SERVING_CELL_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_get_cell_band_bandwidth_cnf_get_lte_dl_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_DL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_get_cell_band_bandwidth_cnf_get_lte_ul_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_UL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_get_cell_band_bandwidth_cnf_get_nr_dl_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_DL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_get_cell_band_bandwidth_cnf_get_nr_ul_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_UL_SERVING_CELL_COUNT, def_val);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_lte_dl_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_DL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_lte_ul_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_UL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_nr_dl_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_DL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_get_cell_band_bandwidth_cnf_get_nr_ul_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_UL_SERVING_CELL_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_get_nr_cnf_get_nr_opt(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_NR_CNF_T_NR_OPT, def_val);
}

static inline mipc_nw_srxlev_info_struct4* mipc_nw_get_srxlev_cnf_get_lte_srxlev_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_srxlev_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SRXLEV_CNF_T_LTE_SRXLEV_INFO, val_len_ptr);
}

static inline mipc_nw_srxlev_info_struct4* mipc_nw_get_srxlev_cnf_get_nr_srxlev_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_srxlev_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_GET_SRXLEV_CNF_T_NR_SRXLEV_INFO, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_nw_set_roaming_mode_req_add_roaming_mode(mipc_msg_t *msg_ptr, enum mipc_nw_roaming_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_ROAMING_MODE_REQ_T_ROAMING_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_roaming_mode_const_enum mipc_nw_get_roaming_mode_cnf_get_roaming_mode(mipc_msg_t *msg_ptr, mipc_nw_roaming_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_roaming_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_ROAMING_MODE_CNF_T_ROAMING_MODE, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_urc_enable_req_add_type(mipc_msg_t *msg_ptr, enum mipc_nw_ind_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_URC_ENABLE_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_urc_enable_req_add_enable(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_URC_ENABLE_REQ_T_ENABLE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_get_rf_status_req_add_rf_fault_code(mipc_msg_t *msg_ptr, enum mipc_nw_rf_fault_code_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_NW_GET_RF_STATUS_REQ_T_RF_FAULT_CODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_nw_rf_defective_const_enum mipc_nw_get_rf_status_cnf_get_defective(mipc_msg_t *msg_ptr, mipc_nw_rf_defective_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_rf_defective_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_RF_STATUS_CNF_T_DEFECTIVE, def_val);
}

static inline mipc_nw_rf_defective_const_enum mipc_nw_get_rf_status_cnf_get_rfc_status(mipc_msg_t *msg_ptr, mipc_nw_rf_defective_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_rf_defective_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_RF_STATUS_CNF_T_RFC_STATUS, def_val);
}

static inline mipc_nw_rf_defective_const_enum mipc_nw_get_rf_status_cnf_get_calibration_status(mipc_msg_t *msg_ptr, mipc_nw_rf_defective_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_rf_defective_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_RF_STATUS_CNF_T_CALIBRATION_STATUS, def_val);
}

static inline mipc_nw_rf_defective_const_enum mipc_nw_get_rf_status_cnf_get_mipi_device_status(mipc_msg_t *msg_ptr, mipc_nw_rf_defective_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_rf_defective_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_RF_STATUS_CNF_T_MIPI_DEVICE_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_nw_set_tuw_timer_length_req_add_tuw_num(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_NW_SET_TUW_TIMER_LENGTH_REQ_T_TUW_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_nw_set_tuw_timer_length_req_add_tuw(mipc_msg_t *msg_ptr, uint16_t len, mipc_nw_tuw_info_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_nw_tuw_info_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_NW_SET_TUW_TIMER_LENGTH_REQ_T_TUW, len, (const void *)value);
}

static inline uint32_t mipc_nw_get_tuw_timer_length_cnf_get_tuw1(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW1, def_val);
}

static inline uint32_t mipc_nw_get_tuw_timer_length_cnf_get_tuw2(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW2, def_val);
}

static inline uint32_t mipc_nw_get_tuw_timer_length_cnf_get_tuw3(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW3, def_val);
}

static inline uint8_t mipc_nw_get_5guw_info_cnf_get_display_5guw(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_5GUW_INFO_CNF_T_DISPLAY_5GUW, def_val);
}

static inline uint8_t mipc_nw_get_5guw_info_cnf_get_on_n77_band(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_5GUW_INFO_CNF_T_ON_N77_BAND, def_val);
}

static inline uint8_t mipc_nw_get_5guw_info_cnf_get_on_fr2_band(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_5GUW_INFO_CNF_T_ON_FR2_BAND, def_val);
}

static inline uint8_t mipc_nw_get_5guw_info_cnf_get_5guw_allowed(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_GET_5GUW_INFO_CNF_T_5GUW_ALLOWED, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_pin_protect_req_add_pin_type(mipc_msg_t *msg_ptr, enum mipc_sim_pin_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_PIN_PROTECT_REQ_T_PIN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_pin_protect_req_add_pin_op(mipc_msg_t *msg_ptr, enum mipc_sim_pin_protection_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_PIN_PROTECT_REQ_T_PIN_OP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_pin_protect_req_add_pin_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_PIN_PROTECT_REQ_T_PIN_CODE, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_pin_protect_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_PROTECT_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_pin_protect_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_PROTECT_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_pin_protect_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_PIN_PROTECT_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_change_pin_req_add_pin_type(mipc_msg_t *msg_ptr, enum mipc_sim_pin_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANGE_PIN_REQ_T_PIN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_change_pin_req_add_old_pin(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_CHANGE_PIN_REQ_T_OLD_PIN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_change_pin_req_add_new_pin(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_CHANGE_PIN_REQ_T_NEW_PIN, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_change_pin_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_CHANGE_PIN_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_change_pin_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_CHANGE_PIN_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_change_pin_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_CHANGE_PIN_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_verify_pin_req_add_pin_type(mipc_msg_t *msg_ptr, enum mipc_sim_pin_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_VERIFY_PIN_REQ_T_PIN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_verify_pin_req_add_pin_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_VERIFY_PIN_REQ_T_PIN_CODE, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_verify_pin_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_VERIFY_PIN_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_verify_pin_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_VERIFY_PIN_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_verify_pin_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_VERIFY_PIN_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_unblock_pin_req_add_pin_type(mipc_msg_t *msg_ptr, enum mipc_sim_pin_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_UNBLOCK_PIN_REQ_T_PIN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_unblock_pin_req_add_puk_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PUK_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UNBLOCK_PIN_REQ_T_PUK_CODE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_unblock_pin_req_add_pin_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UNBLOCK_PIN_REQ_T_PIN_CODE, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_unblock_pin_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_UNBLOCK_PIN_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_unblock_pin_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_UNBLOCK_PIN_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_unblock_pin_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_UNBLOCK_PIN_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_get_pin_info_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_PIN_INFO_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_get_pin_info_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_PIN_INFO_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_get_pin_info_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_GET_PIN_INFO_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_pin1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_PIN1, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_pin2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_PIN2, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_nw_pin(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_NW_PIN, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_sub_nw_pin(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_SUB_NW_PIN, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_sp_pin(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_SP_PIN, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_corp_pin(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_CORP_PIN, val_len_ptr);
}

static inline mipc_sim_pin_desc_struct4* mipc_sim_get_pin_list_cnf_get_sim_pin(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_pin_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_PIN_LIST_CNF_T_SIM_PIN, val_len_ptr);
}

static inline mipc_sim_state_const_enum mipc_sim_state_cnf_get_state(mipc_msg_t *msg_ptr, mipc_sim_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATE_CNF_T_STATE, def_val);
}

static inline uint32_t mipc_sim_state_cnf_get_sim_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATE_CNF_T_SIM_ID, def_val);
}

static inline uint32_t mipc_sim_state_cnf_get_ps_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATE_CNF_T_PS_ID, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_status_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_STATUS_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sim_status_const_enum mipc_sim_status_cnf_get_status(mipc_msg_t *msg_ptr, mipc_sim_status_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_status_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_STATUS, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_sim_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_SIM_ID, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_ps_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_PS_ID, def_val);
}

static inline mipc_sim_card_present_state_const_enum mipc_sim_status_cnf_get_card_present_state(mipc_msg_t *msg_ptr, mipc_sim_card_present_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_card_present_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_CARD_PRESENT_STATE, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_upin_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_UPIN_STATUS, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_test_sim(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_TEST_SIM, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_gsm_app_idx(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_GSM_APP_IDX, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_cdma_app_idx(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_CDMA_APP_IDX, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_isim_app_idx(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_ISIM_APP_IDX, def_val);
}

static inline uint8_t mipc_sim_status_cnf_get_app_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CNF_T_APP_COUNT, def_val);
}

static inline mipc_app_status_desc_struct4* mipc_sim_status_cnf_get_app_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_app_status_desc_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_STATUS_CNF_T_APP_LIST, val_len_ptr);
}

static inline char * mipc_sim_status_cnf_get_eid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_STATUS_CNF_T_EID, val_len_ptr);
}

static inline char * mipc_sim_status_cnf_get_iccid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_STATUS_CNF_T_ICCID, val_len_ptr);
}

static inline char * mipc_sim_status_cnf_get_atr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_STATUS_CNF_T_ATR, val_len_ptr);
}

static inline char * mipc_sim_iccid_cnf_get_iccid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ICCID_CNF_T_ICCID, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_imsi_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_IMSI_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline char * mipc_sim_imsi_cnf_get_imsi(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_IMSI_CNF_T_IMSI, val_len_ptr);
}

static inline uint8_t mipc_sim_imsi_cnf_get_mnc_len(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_IMSI_CNF_T_MNC_LEN, def_val);
}

static inline uint8_t mipc_sim_msisdn_cnf_get_msisdn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_MSISDN_CNF_T_MSISDN_COUNT, def_val);
}

static inline mipc_sim_msisdn_struct4* mipc_sim_msisdn_cnf_get_msisdn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_msisdn_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_MSISDN_CNF_T_MSISDN_LIST, val_len_ptr);
}

static inline uint32_t mipc_sim_get_atr_info_cnf_get_atr_len(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_GET_ATR_INFO_CNF_T_ATR_LEN, def_val);
}

static inline char * mipc_sim_get_atr_info_cnf_get_atr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_ATR_INFO_CNF_T_ATR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_open_channel_req_add_app_id_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_OPEN_CHANNEL_REQ_T_APP_ID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_open_channel_req_add_app_id(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_AID_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_OPEN_CHANNEL_REQ_T_APP_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_open_channel_req_add_p2(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_OPEN_CHANNEL_REQ_T_P2, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_open_channel_req_add_channel_group(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_OPEN_CHANNEL_REQ_T_CHANNEL_GROUP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint16_t mipc_sim_open_channel_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_OPEN_CHANNEL_CNF_T_SW, def_val);
}

static inline uint8_t mipc_sim_open_channel_cnf_get_channel(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_OPEN_CHANNEL_CNF_T_CHANNEL, def_val);
}

static inline void * mipc_sim_open_channel_cnf_get_resp(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_OPEN_CHANNEL_CNF_T_RESP, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_close_channel_req_add_channel_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CLOSE_CHANNEL_REQ_T_CHANNEL_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_close_channel_req_add_channel_group(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CLOSE_CHANNEL_REQ_T_CHANNEL_GROUP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint16_t mipc_sim_close_channel_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_CLOSE_CHANNEL_CNF_T_SW, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_app_id(mipc_msg_t *msg_ptr, enum mipc_sim_app_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_APP_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_session_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_SESSION_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_cmd(mipc_msg_t *msg_ptr, enum mipc_sim_access_command_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_CMD, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_file_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_FILE_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_p1(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P1, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_p2(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P2, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_p3(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P3, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_data_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_DATA_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_CMD_EXTENDED_DATA_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_DATA, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_channel_restricted_access_req_add_path(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PATH_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_PATH, len, (const void *)value);
}

static inline uint16_t mipc_sim_channel_restricted_access_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_channel_restricted_access_cnf_get_resp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_RESP_LEN, def_val);
}

static inline void * mipc_sim_channel_restricted_access_cnf_get_resp_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_RESP_APDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_channel_generic_access_req_add_app_id(mipc_msg_t *msg_ptr, enum mipc_sim_app_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APP_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_generic_access_req_add_channel_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_CHANNEL_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_generic_access_req_add_apdu_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APDU_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_channel_generic_access_req_add_apdu(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_APDU_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APDU, len, (const void *)value);
}

static inline uint16_t mipc_sim_channel_generic_access_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_channel_generic_access_cnf_get_resp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_LEN, def_val);
}

static inline void * mipc_sim_channel_generic_access_cnf_get_resp_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_APDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_version(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_VERSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_app_id_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_APP_ID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_app_id(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_AID_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_APP_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_path_id(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PATH_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_PATH_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_file_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_FILE_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_file_offset(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_FILE_OFFSET, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_number_of_bytes(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_NUMBER_OF_BYTES, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_local_pin(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_LOCAL_PIN, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_binary_data_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_BINARY_DATA_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_long_apdu_access_req_add_binary_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_LONG_BIN_DATA_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_REQ_T_BINARY_DATA, len, (const void *)value);
}

static inline uint8_t mipc_sim_long_apdu_access_cnf_get_version(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_CNF_T_VERSION, def_val);
}

static inline uint16_t mipc_sim_long_apdu_access_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_long_apdu_access_cnf_get_data_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_CNF_T_DATA_LEN, def_val);
}

static inline void * mipc_sim_long_apdu_access_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_LONG_APDU_ACCESS_CNF_T_DATA, val_len_ptr);
}

static inline uint8_t mipc_sim_app_list_cnf_get_version(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_APP_LIST_CNF_T_VERSION, def_val);
}

static inline uint8_t mipc_sim_app_list_cnf_get_app_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_APP_LIST_CNF_T_APP_COUNT, def_val);
}

static inline uint8_t mipc_sim_app_list_cnf_get_active_app_idx(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_APP_LIST_CNF_T_ACTIVE_APP_idx, def_val);
}

static inline mipc_sim_app_info_struct4* mipc_sim_app_list_cnf_get_app_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_app_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_APP_LIST_CNF_T_APP_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_file_status_req_add_version(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_REQ_T_VERSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_file_status_req_add_aid_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_REQ_T_AID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_file_status_req_add_aid(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_AID_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_FILE_STATUS_REQ_T_AID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_file_status_req_add_file_path_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_REQ_T_FILE_PATH_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_file_status_req_add_file_path(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PATH_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_FILE_STATUS_REQ_T_FILE_PATH, len, (const void *)value);
}

static inline uint8_t mipc_sim_file_status_cnf_get_version(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_VERSION, def_val);
}

static inline uint16_t mipc_sim_file_status_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_SW, def_val);
}

static inline mipc_sim_file_accessibility_const_enum mipc_sim_file_status_cnf_get_file_accessibility(mipc_msg_t *msg_ptr, mipc_sim_file_accessibility_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_file_accessibility_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_FILE_ACCESSIBILITY, def_val);
}

static inline mipc_sim_file_type_const_enum mipc_sim_file_status_cnf_get_file_type(mipc_msg_t *msg_ptr, mipc_sim_file_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_file_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_FILE_TYPE, def_val);
}

static inline mipc_sim_file_structure_const_enum mipc_sim_file_status_cnf_get_file(mipc_msg_t *msg_ptr, mipc_sim_file_structure_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_file_structure_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_FILE, def_val);
}

static inline uint8_t mipc_sim_file_status_cnf_get_item_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_ITEM_COUNT, def_val);
}

static inline uint8_t mipc_sim_file_status_cnf_get_size(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_SIZE, def_val);
}

static inline void * mipc_sim_file_status_cnf_get_lock_status(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_FILE_STATUS_CNF_T_LOCK_STATUS, val_len_ptr);
}

static inline mipc_sim_pass_through_mode_const_enum mipc_sim_get_reset_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_sim_pass_through_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pass_through_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_RESET_CNF_T_MODE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_set_reset_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_sim_pass_through_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_RESET_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sim_get_terminal_capability_cnf_get_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_COUNT, def_val);
}

static inline uint16_t mipc_sim_get_terminal_capability_cnf_get_tc_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_TC_LEN, def_val);
}

static inline void * mipc_sim_get_terminal_capability_cnf_get_tc(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_TC, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_set_terminal_capability_req_add_count(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_terminal_capability_req_add_tc_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_TC_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_terminal_capability_req_add_tc(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_TERMINAL_CAPABILITY_DATA_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_TC, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_pin_type(mipc_msg_t *msg_ptr, enum mipc_sim_pin_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_PIN_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_op(mipc_msg_t *msg_ptr, enum mipc_sim_pin_operation_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_OP, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_pin_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PUK_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_PIN_CODE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_new_pin_code(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_NEW_PIN_CODE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_aid_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_AID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_pin_ex_req_add_aid(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_AID_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_PIN_EX_REQ_T_AID, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_set_pin_ex_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_SET_PIN_EX_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_set_pin_ex_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_SET_PIN_EX_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_set_pin_ex_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_SET_PIN_EX_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_get_pin_ex_req_add_version(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_PIN_EX_REQ_T_VERSION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_pin_ex_req_add_aid_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_PIN_EX_REQ_T_AID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_pin_ex_req_add_aid(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_AID_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_PIN_EX_REQ_T_AID, len, (const void *)value);
}

static inline mipc_sim_pin_type_const_enum mipc_sim_get_pin_ex_cnf_get_pin_type(mipc_msg_t *msg_ptr, mipc_sim_pin_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_PIN_EX_CNF_T_PIN_TYPE, def_val);
}

static inline mipc_sim_pin_state_const_enum mipc_sim_get_pin_ex_cnf_get_pin_state(mipc_msg_t *msg_ptr, mipc_sim_pin_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_pin_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_PIN_EX_CNF_T_PIN_STATE, def_val);
}

static inline uint32_t mipc_sim_get_pin_ex_cnf_get_remaining_attempts(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_GET_PIN_EX_CNF_T_REMAINING_ATTEMPTS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_get_gsm_auth_req_add_rand1(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_FIX_GSM_AUTH_RAND_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND1, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_get_gsm_auth_req_add_rand2(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_FIX_GSM_AUTH_RAND_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND2, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_get_gsm_auth_req_add_rand3(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_FIX_GSM_AUTH_RAND_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND3, len, (const void *)value);
}

static inline uint16_t mipc_sim_get_gsm_auth_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_SW, def_val);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_sres1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES1, val_len_ptr);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_kc1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_KC1, val_len_ptr);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_sres2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES2, val_len_ptr);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_kc2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_KC2, val_len_ptr);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_sres3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES3, val_len_ptr);
}

static inline void * mipc_sim_get_gsm_auth_cnf_get_kc3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_GSM_AUTH_CNF_T_KC3, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_get_ext_auth_req_add_ch(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_EXT_AUTH_REQ_T_CH, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_ext_auth_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_EXT_AUTH_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_ext_auth_req_add_cmd_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_GET_EXT_AUTH_REQ_T_CMD_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_ext_auth_req_add_cmd_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_EXT_AUTH_CMD_DATA_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_EXT_AUTH_REQ_T_CMD_DATA, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_get_ext_auth_req_add_app_id(mipc_msg_t *msg_ptr, enum mipc_sim_app_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_EXT_AUTH_REQ_T_APP_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint16_t mipc_sim_get_ext_auth_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_GET_EXT_AUTH_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_get_ext_auth_cnf_get_rsp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_GET_EXT_AUTH_CNF_T_RSP_LEN, def_val);
}

static inline void * mipc_sim_get_ext_auth_cnf_get_rsp_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_EXT_AUTH_CNF_T_RSP_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_get_facility_req_add_app_id(mipc_msg_t *msg_ptr, enum mipc_sim_app_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_GET_FACILITY_REQ_T_APP_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_get_facility_req_add_facility(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_FACILITY_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_GET_FACILITY_REQ_T_FACILITY, len, (const void *)value);
}

static inline uint8_t mipc_sim_get_facility_cnf_get_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_FACILITY_CNF_T_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_sim_set_facility_req_add_app_id(mipc_msg_t *msg_ptr, enum mipc_sim_app_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_FACILITY_REQ_T_APP_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_facility_req_add_facility(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_FACILITY_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_FACILITY_REQ_T_FACILITY, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_set_facility_req_add_pass_word(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_FACILITY_REQ_T_PASS_WORD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_set_facility_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_FACILITY_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sim_set_facility_cnf_get_retry_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_SET_FACILITY_CNF_T_RETRY_COUNT, def_val);
}

static inline uint8_t mipc_sim_get_euicc_slots_status_cnf_get_slots_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_EUICC_SLOTS_STATUS_CNF_T_SLOTS_INFO_COUNT, def_val);
}

static inline mipc_sim_slots_info_struct4* mipc_sim_get_euicc_slots_status_cnf_get_slots_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_slots_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_GET_EUICC_SLOTS_STATUS_CNF_T_SLOTS_INFO_LIST, val_len_ptr);
}

static inline uint8_t mipc_sim_access_profile_connect_cnf_get_cur_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_CUR_TYPE, def_val);
}

static inline uint8_t mipc_sim_access_profile_connect_cnf_get_support_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_SUPPORT_TYPE, def_val);
}

static inline char * mipc_sim_access_profile_connect_cnf_get_atr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_ATR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_access_profile_power_on_req_add_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_POWER_ON_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sim_access_profile_power_on_cnf_get_cur_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_POWER_ON_CNF_T_CUR_TYPE, def_val);
}

static inline char * mipc_sim_access_profile_power_on_cnf_get_atr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ACCESS_PROFILE_POWER_ON_CNF_T_ATR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_access_profile_reset_req_add_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_RESET_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sim_access_profile_reset_cnf_get_cur_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_RESET_CNF_T_CUR_TYPE, def_val);
}

static inline char * mipc_sim_access_profile_reset_cnf_get_atr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ACCESS_PROFILE_RESET_CNF_T_ATR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_access_profile_apdu_req_add_type(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_ACCESS_PROFILE_APDU_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_access_profile_apdu_req_add_apdu(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_APDU_STRING_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_ACCESS_PROFILE_APDU_REQ_T_APDU, len, (const void *)value);
}

static inline char * mipc_sim_access_profile_apdu_cnf_get_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ACCESS_PROFILE_APDU_CNF_T_APDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_set_sim_power_req_add_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_SIM_POWER_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_sim_power_req_add_sim_power(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_SIM_POWER_REQ_T_SIM_POWER, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_physical_slots_mapping_req_add_slots_num(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ_T_SLOTS_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_set_physical_slots_mapping_req_add_slots_mapping_list(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_NUM) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ_T_SLOTS_MAPPING_LIST, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_session_id(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_SESSION_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_cla(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_CLA, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_ins(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_INS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_p1(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P1, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_p2(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P2, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_p3(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P3, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_data_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_DATA_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_extended_channel_generic_access_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_CMD_EXTENDED_DATA_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_DATA, len, (const void *)value);
}

static inline uint16_t mipc_sim_extended_channel_generic_access_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_extended_channel_generic_access_cnf_get_resp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_LEN, def_val);
}

static inline void * mipc_sim_extended_channel_generic_access_cnf_get_resp_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_APDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_app_id(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  16) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_APP_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_app_id_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_APP_ID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_file_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_FILE_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_record_num(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_RECORD_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_data_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_DATA_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_CMD_DATA_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_DATA, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_path(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PATH_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_PATH, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_record_req_add_pin2(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_PIN2, len, (const void *)value);
}

static inline uint16_t mipc_sim_uicc_file_access_record_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_uicc_file_access_record_cnf_get_resp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_RESP_LEN, def_val);
}

static inline void * mipc_sim_uicc_file_access_record_cnf_get_resp_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_RESP_APDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_app_id(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  16) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_APP_ID, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_app_id_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_APP_ID_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_file_id(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_FILE_ID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_offset(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_OFFSET, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_data_len(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_DATA_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_CMD_DATA_BYTE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_DATA, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_path(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PATH_STR_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_PATH, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sim_uicc_file_access_binary_req_add_pin2(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SIM_PIN_CODE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_PIN2, len, (const void *)value);
}

static inline uint16_t mipc_sim_uicc_file_access_binary_cnf_get_sw(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_SW, def_val);
}

static inline uint16_t mipc_sim_uicc_file_access_binary_cnf_get_resp_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_RESP_LEN, def_val);
}

static inline void * mipc_sim_uicc_file_access_binary_cnf_get_resp_apdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_RESP_APDU, val_len_ptr);
}

static inline uint8_t mipc_sim_get_physical_slots_mapping_cnf_get_active_physical_slot_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_GET_PHYSICAL_SLOTS_MAPPING_CNF_T_ACTIVE_PHYSICAL_SLOT_ID, def_val);
}

static inline uint32_t mipc_sim_pin_count_query_cnf_get_result(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_PIN_COUNT_QUERY_CNF_T_RESULT, def_val);
}

static inline uint8_t mipc_sim_pin_count_query_cnf_get_pin1(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PIN1, def_val);
}

static inline uint8_t mipc_sim_pin_count_query_cnf_get_pin2(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PIN2, def_val);
}

static inline uint8_t mipc_sim_pin_count_query_cnf_get_puk1(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PUK1, def_val);
}

static inline uint8_t mipc_sim_pin_count_query_cnf_get_puk2(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PUK2, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_format(mipc_msg_t *msg_ptr, enum mipc_sms_format_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_set_sca(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SMS_SCA_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SMS_CFG_REQ_T_SET_SCA, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_get_sca(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_GET_SCA, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_get_sms_state(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_GET_SMS_STATE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_get_store_status(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_GET_STORE_STATUS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_prefer_ack(mipc_msg_t *msg_ptr, enum mipc_sms_ack_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_PREFER_ACK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_prefer_storage(mipc_msg_t *msg_ptr, enum mipc_sms_storage_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_PREFER_STORAGE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_get_all_can_get(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_GET_ALL_CAN_GET, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cfg_req_add_set_host_mem_available(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CFG_REQ_T_SET_HOST_MEM_AVAILABLE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sms_format_const_enum mipc_sms_cfg_cnf_get_format(mipc_msg_t *msg_ptr, mipc_sms_format_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_format_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_CNF_T_FORMAT, def_val);
}

static inline char * mipc_sms_cfg_cnf_get_sca(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_CFG_CNF_T_SCA, val_len_ptr);
}

static inline mipc_sms_state_const_enum mipc_sms_cfg_cnf_get_sms_state(mipc_msg_t *msg_ptr, mipc_sms_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_CNF_T_SMS_STATE, def_val);
}

static inline uint16_t mipc_sms_cfg_cnf_get_max_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_CFG_CNF_T_MAX_MESSAGE, def_val);
}

static inline mipc_sms_ack_const_enum mipc_sms_cfg_cnf_get_prefer_ack(mipc_msg_t *msg_ptr, mipc_sms_ack_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_ack_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_CNF_T_PREFER_ACK, def_val);
}

static inline mipc_sms_storage_const_enum mipc_sms_cfg_cnf_get_prefer_storage(mipc_msg_t *msg_ptr, mipc_sms_storage_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_storage_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_CNF_T_PREFER_STORAGE, def_val);
}

static inline uint16_t mipc_sms_cfg_cnf_get_used_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_CFG_CNF_T_USED_MESSAGE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_send_req_add_format(mipc_msg_t *msg_ptr, enum mipc_sms_format_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_SEND_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_send_req_add_pdu(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SMS_PDU_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SMS_SEND_REQ_T_PDU, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sms_send_req_add_pdu_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_SEND_REQ_T_PDU_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_send_req_add_save(mipc_msg_t *msg_ptr, enum mipc_sms_send_save_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_SEND_REQ_T_SAVE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_send_req_add_more_msg_to_send(mipc_msg_t *msg_ptr, enum mipc_sms_more_msg_to_send_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_SEND_REQ_T_MORE_MSG_TO_SEND, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_sms_send_cnf_get_mr(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_SEND_CNF_T_MR, def_val);
}

static inline uint16_t mipc_sms_send_cnf_get_message_index(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_SEND_CNF_T_MESSAGE_INDEX, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_read_req_add_format(mipc_msg_t *msg_ptr, enum mipc_sms_format_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_READ_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_read_req_add_flag(mipc_msg_t *msg_ptr, enum mipc_sms_flag_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_READ_REQ_T_FLAG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_read_req_add_message_index(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SMS_READ_REQ_T_MESSAGE_INDEX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_read_req_add_status_unchange(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_READ_REQ_T_STATUS_UNCHANGE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sms_format_const_enum mipc_sms_read_cnf_get_format(mipc_msg_t *msg_ptr, mipc_sms_format_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_format_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_READ_CNF_T_FORMAT, def_val);
}

static inline uint16_t mipc_sms_read_cnf_get_pdu_count(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_READ_CNF_T_PDU_COUNT, def_val);
}

static inline mipc_sms_pdu_struct4* mipc_sms_read_cnf_get_pdu_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sms_pdu_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_READ_CNF_T_PDU_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sms_delete_req_add_flag(mipc_msg_t *msg_ptr, enum mipc_sms_flag_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_DELETE_REQ_T_FLAG, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_delete_req_add_message_index(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SMS_DELETE_REQ_T_MESSAGE_INDEX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sms_store_flag_const_enum mipc_sms_get_store_status_cnf_get_flag(mipc_msg_t *msg_ptr, mipc_sms_store_flag_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_store_flag_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SMS_GET_STORE_STATUS_CNF_T_FLAG, def_val);
}

static inline uint16_t mipc_sms_get_store_status_cnf_get_message_index(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_GET_STORE_STATUS_CNF_T_MESSAGE_INDEX, def_val);
}

static inline uint16_t mipc_sms_get_store_status_cnf_get_max_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_GET_STORE_STATUS_CNF_T_MAX_MESSAGE, def_val);
}

static inline uint16_t mipc_sms_get_store_status_cnf_get_used_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_GET_STORE_STATUS_CNF_T_USED_MESSAGE, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_write_req_add_format(mipc_msg_t *msg_ptr, enum mipc_sms_format_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_WRITE_REQ_T_FORMAT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_write_req_add_pdu(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SMS_PDU_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SMS_WRITE_REQ_T_PDU, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_sms_write_req_add_pdu_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_WRITE_REQ_T_PDU_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_write_req_add_storage(mipc_msg_t *msg_ptr, enum mipc_sms_storage_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_WRITE_REQ_T_STORAGE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_write_req_add_status(mipc_msg_t *msg_ptr, enum mipc_sms_status_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_WRITE_REQ_T_STATUS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint16_t mipc_sms_write_cnf_get_message_index(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_WRITE_CNF_T_MESSAGE_INDEX, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_open_cbm_type(mipc_msg_t *msg_ptr, enum mipc_sms_cbm_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SMS_CBM_CFG_REQ_T_OPEN_CBM_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_msg_id_cfg_type(mipc_msg_t *msg_ptr, enum mipc_sms_cbm_cfg_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CBM_CFG_REQ_T_MSG_ID_CFG_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_msg_id_range(mipc_msg_t *msg_ptr, mipc_msg_tlv_array_t *array, uint16_t index, uint32_t value)
{
    if (index >= MIPC_MAX_SMS_CBM_MSGID_RANGE_NUM) return MIPC_MSG_API_RESULT_FAIL;
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_idx_uint32(msg_ptr, array, index, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_msg_id_single(mipc_msg_t *msg_ptr, mipc_msg_tlv_array_t *array, uint16_t index, uint16_t value)
{
    if (index >= MIPC_MAX_SMS_CBM_MSGID_SINGLE_NUM) return MIPC_MSG_API_RESULT_FAIL;
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_idx_uint16(msg_ptr, array, index, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_dcs_cfg_type(mipc_msg_t *msg_ptr, enum mipc_sms_cbm_cfg_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_CBM_CFG_REQ_T_DCS_CFG_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_dcs_range(mipc_msg_t *msg_ptr, mipc_msg_tlv_array_t *array, uint16_t index, uint16_t value)
{
    if (index >= MIPC_MAX_SMS_CBM_DCS_RANGE_NUM) return MIPC_MSG_API_RESULT_FAIL;
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_idx_uint16(msg_ptr, array, index, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_cbm_cfg_req_add_dcs_single(mipc_msg_t *msg_ptr, mipc_msg_tlv_array_t *array, uint16_t index, uint8_t value)
{
    if (index >= MIPC_MAX_SMS_CBM_DCS_SINGLE_NUM) return MIPC_MSG_API_RESULT_FAIL;
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_idx_uint8(msg_ptr, array, index, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sms_cbm_type_const_enum mipc_sms_cbm_cfg_cnf_get_open_cbm_type(mipc_msg_t *msg_ptr, mipc_sms_cbm_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_cbm_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_OPEN_CBM_TYPE, def_val);
}

static inline mipc_sms_cbm_cfg_type_const_enum mipc_sms_cbm_cfg_cnf_get_msg_id_cfg_type(mipc_msg_t *msg_ptr, mipc_sms_cbm_cfg_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_cbm_cfg_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_CFG_TYPE, def_val);
}

static inline uint32_t mipc_sms_cbm_cfg_cnf_get_msg_id_range(mipc_msg_t *msg_ptr, uint32_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_SMS_CBM_MSGID_RANGE_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_idx_uint32(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_RANGE, index, def_val);
}

static inline uint16_t mipc_sms_cbm_cfg_cnf_get_msg_id_single(mipc_msg_t *msg_ptr, uint16_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_SMS_CBM_MSGID_SINGLE_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_idx_uint16(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_SINGLE, index, def_val);
}

static inline mipc_sms_cbm_cfg_type_const_enum mipc_sms_cbm_cfg_cnf_get_dcs_cfg_type(mipc_msg_t *msg_ptr, mipc_sms_cbm_cfg_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_cbm_cfg_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_DCS_CFG_TYPE, def_val);
}

static inline uint16_t mipc_sms_cbm_cfg_cnf_get_dcs_range(mipc_msg_t *msg_ptr, uint16_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_SMS_CBM_DCS_RANGE_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_idx_uint16(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_DCS_RANGE, index, def_val);
}

static inline uint8_t mipc_sms_cbm_cfg_cnf_get_dcs_single(mipc_msg_t *msg_ptr, uint8_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_SMS_CBM_DCS_SINGLE_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_idx_uint8(msg_ptr, MIPC_SMS_CBM_CFG_CNF_T_DCS_SINGLE, index, def_val);
}

static inline mipc_msg_api_result_enum mipc_sms_scbm_req_add_quit_scbm_mode(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_SCBM_REQ_T_QUIT_SCBM_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_send_ussd_req_add_dcs(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_SS_SEND_USSD_REQ_T_DCS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_send_ussd_req_add_payload_len(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SEND_USSD_REQ_T_PAYLOAD_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_send_ussd_req_add_payload(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_USSD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_SEND_USSD_REQ_T_PAYLOAD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_send_ussd_req_add_lang(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SS_USSD_LANG_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_SEND_USSD_REQ_T_LANG, len, (const void *)value);
}

static inline mipc_ss_ussd_const_enum mipc_ss_send_ussd_cnf_get_ussd_response(mipc_msg_t *msg_ptr, mipc_ss_ussd_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_ussd_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_SEND_USSD_CNF_T_USSD_RESPONSE, def_val);
}

static inline mipc_ss_session_const_enum mipc_ss_send_ussd_cnf_get_ussd_session_state(mipc_msg_t *msg_ptr, mipc_ss_session_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_session_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_SEND_USSD_CNF_T_USSD_SESSION_STATE, def_val);
}

static inline uint32_t mipc_ss_send_ussd_cnf_get_dcs(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SS_SEND_USSD_CNF_T_DCS, def_val);
}

static inline uint8_t mipc_ss_send_ussd_cnf_get_payload_len(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_SEND_USSD_CNF_T_PAYLOAD_LEN, def_val);
}

static inline void * mipc_ss_send_ussd_cnf_get_payload(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SS_SEND_USSD_CNF_T_PAYLOAD, val_len_ptr);
}

static inline mipc_ss_ussd_const_enum mipc_ss_cancel_ussd_cnf_get_ussd_response(mipc_msg_t *msg_ptr, mipc_ss_ussd_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_ussd_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_CANCEL_USSD_CNF_T_USSD_RESPONSE, def_val);
}

static inline mipc_ss_session_const_enum mipc_ss_cancel_ussd_cnf_get_ussd_session_state(mipc_msg_t *msg_ptr, mipc_ss_session_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_session_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_CANCEL_USSD_CNF_T_USSD_SESSION_STATE, def_val);
}

static inline uint32_t mipc_ss_cancel_ussd_cnf_get_dcs(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SS_CANCEL_USSD_CNF_T_DCS, def_val);
}

static inline uint8_t mipc_ss_cancel_ussd_cnf_get_payload_len(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_CANCEL_USSD_CNF_T_PAYLOAD_LEN, def_val);
}

static inline void * mipc_ss_cancel_ussd_cnf_get_payload(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SS_CANCEL_USSD_CNF_T_PAYLOAD, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_ss_set_clir_req_add_n_value(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CLIR_REQ_T_N_VALUE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_ss_get_clir_cnf_get_clir_n(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_GET_CLIR_CNF_T_CLIR_N, def_val);
}

static inline uint8_t mipc_ss_get_clir_cnf_get_clir_m(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_GET_CLIR_CNF_T_CLIR_M, def_val);
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_waiting_req_add_cw_enable_disable(mipc_msg_t *msg_ptr, enum mipc_ss_call_waiting_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_WAITING_REQ_T_CW_ENABLE_DISABLE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_waiting_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_SET_CALL_WAITING_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_query_call_waiting_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_QUERY_CALL_WAITING_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_ss_active_status_const_enum mipc_ss_query_call_waiting_cnf_get_call_waiting_status(mipc_msg_t *msg_ptr, mipc_ss_active_status_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_active_status_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_QUERY_CALL_WAITING_CNF_T_CALL_WAITING_STATUS, def_val);
}

static inline mipc_ss_service_class_const_enum mipc_ss_query_call_waiting_cnf_get_service_class(mipc_msg_t *msg_ptr, mipc_ss_service_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_service_class_const_enum)mipc_msg_get_val_uint16(msg_ptr, MIPC_SS_QUERY_CALL_WAITING_CNF_T_SERVICE_CLASS, def_val);
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_ss_operation(mipc_msg_t *msg_ptr, enum mipc_ss_set_call_forward_operation_code_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_SS_OPERATION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_call_forward_reason(mipc_msg_t *msg_ptr, enum mipc_ss_call_forward_reason_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_CALL_FORWARD_REASON, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_dial_number(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_SS_DIAL_NUMBER_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_DIAL_NUMBER, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_toa(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_TOA, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_forward_req_add_timer_seconds(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_FORWARD_REQ_T_TIMER_SECONDS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_query_call_forward_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_QUERY_CALL_FORWARD_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_query_call_forward_req_add_call_forward_reason(mipc_msg_t *msg_ptr, enum mipc_ss_call_forward_reason_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_QUERY_CALL_FORWARD_REQ_T_CALL_FORWARD_REASON, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_ss_query_call_forward_cnf_get_call_forward_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_QUERY_CALL_FORWARD_CNF_T_CALL_FORWARD_COUNT, def_val);
}

static inline mipc_ss_call_forward_struct4* mipc_ss_query_call_forward_cnf_get_call_forward_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_ss_call_forward_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SS_QUERY_CALL_FORWARD_CNF_T_CALL_FORWARD_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_barring_req_add_lock(mipc_msg_t *msg_ptr, enum mipc_ss_call_barring_lock_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_BARRING_REQ_T_LOCK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_barring_req_add_facility(mipc_msg_t *msg_ptr, enum mipc_ss_call_barring_fac_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CALL_BARRING_REQ_T_FACILITY, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_barring_req_add_password(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_FIX_CALL_BARRING_PASSWORD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_SET_CALL_BARRING_REQ_T_PASSWORD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_set_call_barring_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_SET_CALL_BARRING_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_query_call_barring_req_add_facility(mipc_msg_t *msg_ptr, enum mipc_ss_call_barring_fac_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_QUERY_CALL_BARRING_REQ_T_FACILITY, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_query_call_barring_req_add_service_class(mipc_msg_t *msg_ptr, enum mipc_ss_service_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_SS_QUERY_CALL_BARRING_REQ_T_SERVICE_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint16_t mipc_ss_query_call_barring_cnf_get_call_barring_status(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SS_QUERY_CALL_BARRING_CNF_T_CALL_BARRING_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_ss_change_barring_password_req_add_facility(mipc_msg_t *msg_ptr, enum mipc_ss_call_barring_fac_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_FACILITY, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_change_barring_password_req_add_old_pwd(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_CHANGE_BARRING_PWD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_OLD_PWD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_change_barring_password_req_add_new_pwd(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_CHANGE_BARRING_PWD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_NEW_PWD, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_change_barring_password_req_add_new_pwd_confirm(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_CHANGE_BARRING_PWD_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_NEW_PWD_CONFIRM, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ss_set_supp_svc_notification_req_add_status_i(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_SUPP_SVC_NOTIFICATION_REQ_T_STATUS_I, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ss_set_supp_svc_notification_req_add_status_u(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_SUPP_SVC_NOTIFICATION_REQ_T_STATUS_U, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_ss_query_clip_cnf_get_code_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_QUERY_CLIP_CNF_T_CODE_STATUS, def_val);
}

static inline uint8_t mipc_ss_query_clip_cnf_get_nw_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_QUERY_CLIP_CNF_T_NW_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_ss_set_clip_req_add_status(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_CLIP_REQ_T_STATUS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_ss_get_colp_cnf_get_colp_n(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_GET_COLP_CNF_T_COLP_N, def_val);
}

static inline uint8_t mipc_ss_get_colp_cnf_get_colp_m(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_GET_COLP_CNF_T_COLP_M, def_val);
}

static inline mipc_msg_api_result_enum mipc_ss_set_colp_req_add_n_value(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SS_SET_COLP_REQ_T_N_VALUE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint8_t mipc_ss_get_colr_cnf_get_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_GET_COLR_CNF_T_STATUS, def_val);
}

static inline mipc_msg_api_result_enum mipc_stk_set_pac_req_add_pac_bitmask_ptr(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_STK_SET_PAC_REQ_T_PAC_BITMASK_PTR, len, (const void *)value);
}

static inline void * mipc_stk_set_pac_cnf_get_pac_profile(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_SET_PAC_CNF_T_PAC_PROFILE, val_len_ptr);
}

static inline void * mipc_stk_get_pac_cnf_get_pac_profile(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_GET_PAC_CNF_T_PAC_PROFILE, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_stk_send_terminal_response_req_add_tr_len(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_STK_SEND_TERMINAL_RESPONSE_REQ_T_TR_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_stk_send_terminal_response_req_add_tr_ptr(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_TERMINAL_RESPONSE_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_STK_SEND_TERMINAL_RESPONSE_REQ_T_TR_PTR, len, (const void *)value);
}

static inline uint16_t mipc_stk_send_terminal_response_cnf_get_status_words(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_STATUS_WORDS, def_val);
}

static inline uint32_t mipc_stk_send_terminal_response_cnf_get_tr_len(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_TR_LEN, def_val);
}

static inline void * mipc_stk_send_terminal_response_cnf_get_tr_ptr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_TR_PTR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_stk_send_envelope_req_add_envelope_len(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_STK_SEND_ENVELOPE_REQ_T_ENVELOPE_LEN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_stk_send_envelope_req_add_envelope_ptr(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_ENVELOP_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_STK_SEND_ENVELOPE_REQ_T_ENVELOPE_PTR, len, (const void *)value);
}

static inline uint16_t mipc_stk_send_envelope_cnf_get_status_words(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_STK_SEND_ENVELOPE_CNF_T_STATUS_WORDS, def_val);
}

static inline void * mipc_stk_get_envelope_info_cnf_get_envelope_bitmask(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_GET_ENVELOPE_INFO_CNF_T_ENVELOPE_BITMASK, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_stk_handle_call_setup_from_sim_req_add_data(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_STK_HANDLE_CALL_SETUP_FROM_SIM_REQ_T_DATA, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_stk_send_bipconf_req_add_cmd_num(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_STK_SEND_BIPCONF_REQ_T_CMD_NUM, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_stk_send_bipconf_req_add_result(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_STK_SEND_BIPCONF_REQ_T_RESULT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_dial_address(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_DIAL_ADDRESS_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_CALL_DIAL_REQ_T_DIAL_ADDRESS, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_dial_address_type(mipc_msg_t *msg_ptr, enum mipc_call_dial_address_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_DIAL_REQ_T_DIAL_ADDRESS_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_type(mipc_msg_t *msg_ptr, enum mipc_call_dial_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_DIAL_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_domain(mipc_msg_t *msg_ptr, enum mipc_call_dial_domain_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_DIAL_REQ_T_DOMAIN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_ecc_retry_domain(mipc_msg_t *msg_ptr, enum mipc_call_dial_domain_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_DIAL_REQ_T_ECC_RETRY_DOMAIN, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_ecc_category(mipc_msg_t *msg_ptr, uint16_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint16(msg_ptr, MIPC_CALL_DIAL_REQ_T_ECC_CATEGORY, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_clir(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_CALL_DIAL_REQ_T_CLIR, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dial_req_add_is_ecc_testing(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_CALL_DIAL_REQ_T_IS_ECC_TESTING, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_ss_req_add_action(mipc_msg_t *msg_ptr, enum mipc_call_ss_action_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_SS_REQ_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_ss_req_add_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_SS_REQ_T_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_hangup_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_call_hangup_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_HANGUP_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_hangup_req_add_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_HANGUP_REQ_T_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_hangup_req_add_cause(mipc_msg_t *msg_ptr, enum mipc_call_hangup_cause_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_HANGUP_REQ_T_CAUSE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_answer_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_call_answer_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_ANSWER_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_answer_req_add_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_ANSWER_REQ_T_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_get_call_status_req_add_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_REQ_T_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_call_get_call_status_cnf_get_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_COUNT, def_val);
}

static inline uint32_t mipc_call_get_call_status_cnf_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_CALLID, index, def_val);
}

static inline mipc_call_direction_const_enum mipc_call_get_call_status_cnf_get_direction(mipc_msg_t *msg_ptr, mipc_call_direction_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_direction_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_DIRECTION, index, def_val);
}

static inline mipc_call_mode_const_enum mipc_call_get_call_status_cnf_get_mode(mipc_msg_t *msg_ptr, mipc_call_mode_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_mode_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_MODE, index, def_val);
}

static inline mipc_call_clcc_state_const_enum mipc_call_get_call_status_cnf_get_call_clcc_state(mipc_msg_t *msg_ptr, mipc_call_clcc_state_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_clcc_state_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_CALL_CLCC_STATE, index, def_val);
}

static inline mipc_call_dial_address_type_const_enum mipc_call_get_call_status_cnf_get_number_type(mipc_msg_t *msg_ptr, mipc_call_dial_address_type_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_dial_address_type_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_NUMBER_TYPE, index, def_val);
}

static inline uint32_t mipc_call_get_call_status_cnf_get_ton(mipc_msg_t *msg_ptr, uint32_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_TON, index, def_val);
}

static inline char * mipc_call_get_call_status_cnf_get_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_idx_ptr(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_NUMBER, index, val_len_ptr);
}

static inline mipc_call_rat_const_enum mipc_call_get_call_status_cnf_get_rat(mipc_msg_t *msg_ptr, mipc_call_rat_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_rat_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_RAT, index, def_val);
}

static inline mipc_call_type_const_enum mipc_call_get_call_status_cnf_get_type(mipc_msg_t *msg_ptr, mipc_call_type_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_type_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_TYPE, index, def_val);
}

static inline mipc_call_detail_info_struct4* mipc_call_get_call_status_cnf_get_detail_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_call_detail_info_struct4*)mipc_msg_get_idx_ptr(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_DETAIL_INFO, index, val_len_ptr);
}

static inline mipc_call_video_cap_struct4* mipc_call_get_call_status_cnf_get_video_cap(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_call_video_cap_struct4*)mipc_msg_get_idx_ptr(msg_ptr, MIPC_CALL_GET_CALL_STATUS_CNF_T_VIDEO_CAP, index, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_call_conference_req_add_conf_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_CONFERENCE_REQ_T_CONF_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_req_add_action(mipc_msg_t *msg_ptr, enum mipc_call_conf_action_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_CONFERENCE_REQ_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_req_add_number(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_CALL_NUMBER_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_CALL_CONFERENCE_REQ_T_NUMBER, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_call_conference_req_add_target_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_CONFERENCE_REQ_T_TARGET_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_get_conference_info_req_add_conf_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_REQ_T_CONF_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_call_get_conference_info_cnf_get_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_COUNT, def_val);
}

static inline mipc_call_direction_const_enum mipc_call_get_conference_info_cnf_get_direction(mipc_msg_t *msg_ptr, mipc_call_direction_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_CONFERENCE_PARTICIPANT_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_call_direction_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_DIRECTION, index, def_val);
}

static inline char * mipc_call_get_conference_info_cnf_get_participant_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_CONFERENCE_PARTICIPANT_NUM) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_idx_ptr(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_NUMBER, index, val_len_ptr);
}

static inline char * mipc_call_get_conference_info_cnf_get_participant_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_CONFERENCE_PARTICIPANT_NUM) return 0;
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_idx_ptr(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_NAME, index, val_len_ptr);
}

static inline mipc_conf_participant_status_const_enum mipc_call_get_conference_info_cnf_get_participant_status(mipc_msg_t *msg_ptr, mipc_conf_participant_status_const_enum def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_CONFERENCE_PARTICIPANT_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (mipc_conf_participant_status_const_enum)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_STATUS, index, def_val);
}

static inline uint32_t mipc_call_get_finish_reason_cnf_get_reason(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_GET_FINISH_REASON_CNF_T_REASON, def_val);
}

static inline char * mipc_call_get_finish_reason_cnf_get_reason_str(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_GET_FINISH_REASON_CNF_T_REASON_STR, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_call_dtmf_req_add_mode(mipc_msg_t *msg_ptr, enum mipc_dtmf_mode_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_DTMF_REQ_T_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_dtmf_req_add_digit(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_DTMF_DIGIT_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_CALL_DTMF_REQ_T_DIGIT, len, (const void *)value);
}

static inline uint32_t mipc_call_get_ecc_list_cnf_get_info_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_GET_ECC_LIST_CNF_T_INFO_COUNT, def_val);
}

static inline mipc_ecc_info_struct4* mipc_call_get_ecc_list_cnf_get_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_ecc_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_GET_ECC_LIST_CNF_T_INFO_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_call_set_ecc_list_req_add_info_count(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_SET_ECC_LIST_REQ_T_INFO_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_set_ecc_list_req_add_info_list(mipc_msg_t *msg_ptr, uint16_t len, mipc_ecc_info_struct4 *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len != sizeof(mipc_ecc_info_struct4)) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_CALL_SET_ECC_LIST_REQ_T_INFO_LIST, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_call_set_flight_mode_ecc_session_req_add_is_flight_mode(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_CALL_SET_FLIGHT_MODE_ECC_SESSION_REQ_T_IS_FLIGHT_MODE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_dial_req_add_type(mipc_msg_t *msg_ptr, enum mipc_call_conference_dial_type_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_CONFERENCE_DIAL_REQ_T_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_dial_req_add_clir(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_CALL_CONFERENCE_DIAL_REQ_T_CLIR, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_dial_req_add_count(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_CONFERENCE_DIAL_REQ_T_COUNT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_conference_dial_req_add_dial_address(mipc_msg_t *msg_ptr, mipc_msg_tlv_array_t *array, uint16_t index, uint16_t len, char  *value)
{
    if (index >= MIPC_MAX_CALL_NUM) return MIPC_MSG_API_RESULT_FAIL;
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  MIPC_MAX_DIAL_ADDRESS_LEN) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_idx(msg_ptr, array, index, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ims_set_config_req_add_class(mipc_msg_t *msg_ptr, enum mipc_ims_config_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_IMS_SET_CONFIG_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ims_set_config_req_add_type(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_IMS_SET_CONFIG_REQ_T_TYPE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_ims_set_config_req_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  60000) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_IMS_SET_CONFIG_REQ_T_DATA, len, (const void *)value);
}

static inline void * mipc_ims_set_config_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_SET_CONFIG_CNF_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_ims_get_config_req_add_class(mipc_msg_t *msg_ptr, enum mipc_ims_config_class_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_IMS_GET_CONFIG_REQ_T_CLASS, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_ims_get_config_req_add_type(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_IMS_GET_CONFIG_REQ_T_TYPE, len, (const void *)value);
}

static inline void * mipc_ims_get_config_cnf_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_GET_CONFIG_CNF_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_ims_get_state_req_add_event(mipc_msg_t *msg_ptr, enum mipc_ims_state_ind_event_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_IMS_GET_STATE_REQ_T_EVENT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_ims_state_ind_event_const_enum mipc_ims_get_state_cnf_get_event(mipc_msg_t *msg_ptr, mipc_ims_state_ind_event_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ims_state_ind_event_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_EVENT, def_val);
}

static inline mipc_ims_state_const_enum mipc_ims_get_state_cnf_get_reg_state(mipc_msg_t *msg_ptr, mipc_ims_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ims_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_REG_STATE, def_val);
}

static inline uint32_t mipc_ims_get_state_cnf_get_ext_info(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_EXT_INFO, def_val);
}

static inline uint8_t mipc_ims_get_state_cnf_get_wfc(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_WFC, def_val);
}

static inline uint32_t mipc_ims_get_state_cnf_get_account_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_ACCOUNT_ID, def_val);
}

static inline void * mipc_ims_get_state_cnf_get_uri(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_URI, val_len_ptr);
}

static inline uint32_t mipc_ims_get_state_cnf_get_expire_time(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_EXPIRE_TIME, def_val);
}

static inline uint32_t mipc_ims_get_state_cnf_get_error_code(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_ERROR_CODE, def_val);
}

static inline char * mipc_ims_get_state_cnf_get_error_message(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_GET_STATE_CNF_T_ERROR_MESSAGE, val_len_ptr);
}

static inline char * mipc_sys_at_ind_get_atcmd(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_AT_IND_T_ATCMD, val_len_ptr);
}

static inline int32_t mipc_sys_thermal_sensor_ind_get_temperature(mipc_msg_t *msg_ptr, int32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (int32_t)mipc_msg_get_val_int32(msg_ptr, MIPC_SYS_THERMAL_SENSOR_IND_T_TEMPERATURE, def_val);
}

static inline mipc_sys_thermal_sensor_config_struct4* mipc_sys_thermal_sensor_ind_get_threshold(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_thermal_sensor_config_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_THERMAL_SENSOR_IND_T_THRESHOLD, val_len_ptr);
}

static inline uint8_t mipc_sys_thermal_sensor_ind_get_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_THERMAL_SENSOR_IND_T_INFO_COUNT, def_val);
}

static inline mipc_sys_thermal_sensor_info_struct4* mipc_sys_thermal_sensor_ind_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_thermal_sensor_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_THERMAL_SENSOR_IND_T_INFO, val_len_ptr);
}

static inline mipc_sys_config_change_reason_const_enum mipc_sys_config_ind_get_reason(mipc_msg_t *msg_ptr, mipc_sys_config_change_reason_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_config_change_reason_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONFIG_IND_T_REASON, def_val);
}

static inline mipc_sys_config_class_const_enum mipc_sys_config_ind_get_class(mipc_msg_t *msg_ptr, mipc_sys_config_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_config_class_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONFIG_IND_T_CLASS, def_val);
}

static inline uint8_t mipc_sys_adpclk_ind_get_freq_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_ADPCLK_IND_T_FREQ_INFO_COUNT, def_val);
}

static inline mipc_sys_adpclk_freq_info_struct8* mipc_sys_adpclk_ind_get_freq_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sys_adpclk_freq_info_struct8*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_ADPCLK_IND_T_FREQ_INFO_LIST, val_len_ptr);
}

static inline uint8_t mipc_sys_mcf_ind_get_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_IND_T_TYPE, def_val);
}

static inline uint8_t mipc_sys_mcf_ind_get_result(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_MCF_IND_T_RESULT, def_val);
}

static inline uint32_t mipc_sys_sbp_ind_get_sbp_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_SBP_IND_T_SBP_ID, def_val);
}

static inline uint32_t mipc_sys_sbp_ind_get_sim_sbp_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_SBP_IND_T_SIM_SBP_ID, def_val);
}

static inline uint32_t mipc_sys_el2_ip_ul_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_IP_UL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_el2_ip_dl_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_IP_DL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_el2_mac_ul_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_MAC_UL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_el2_mac_dl_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_MAC_DL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_el2_pdcp_ul_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_PDCP_UL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_el2_pdcp_dl_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_EL2_PDCP_DL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_nl2_mac_ul_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_NL2_MAC_UL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_nl2_mac_dl_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_NL2_MAC_DL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_nl2_pdcp_ul_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_NL2_PDCP_UL_IND_T_TX_BPS, def_val);
}

static inline uint32_t mipc_sys_nl2_pdcp_dl_ind_get_tx_bps(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_NL2_PDCP_DL_IND_T_TX_BPS, def_val);
}

static inline mipc_sys_account_id_const_enum mipc_sys_geo_location_ind_get_account_id(mipc_msg_t *msg_ptr, mipc_sys_account_id_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_account_id_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_ACCOUNT_ID, def_val);
}

static inline mipc_boolean_const_enum mipc_sys_geo_location_ind_get_broadcast_flag(mipc_msg_t *msg_ptr, mipc_boolean_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_boolean_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_BROADCAST_FLAG, def_val);
}

static inline char * mipc_sys_geo_location_ind_get_latitude(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_LATITUDE, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_longitude(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_LONGITUDE, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_accuracy(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_ACCURACY, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_method(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_METHOD, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_city(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_CITY, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_state(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_STATE, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_zip(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_ZIP, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_country_code(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_COUNTRY_CODE, val_len_ptr);
}

static inline char * mipc_sys_geo_location_ind_get_ue_wlan_mac(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_UE_WLAN_MAC, val_len_ptr);
}

static inline uint32_t mipc_sys_geo_location_ind_get_confidence(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GEO_LOCATION_IND_T_CONFIDENCE, def_val);
}

static inline uint8_t mipc_apn_vzw_chg_ind_get_apn_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_APN_VZW_CHG_IND_T_APN_COUNT, def_val);
}

static inline mipc_vzw_apn_profile_struct4* mipc_apn_vzw_chg_ind_get_apn_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_vzw_apn_profile_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_APN_VZW_CHG_IND_T_APN_LIST, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_ID, def_val);
}

static inline char * mipc_data_act_call_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_APN, val_len_ptr);
}

static inline mipc_apn_pdp_type_const_enum mipc_data_act_call_ind_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PDP_TYPE, def_val);
}

static inline uint8_t mipc_data_act_call_ind_get_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_dns_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_dns_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_dns_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_dns_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_dns_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_dns_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_dns_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_dns_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_dns_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_dns_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_DNS_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_pcscf_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_pcscf_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_pcscf_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_pcscf_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_act_call_ind_get_pcscf_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_act_call_ind_get_pcscf_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_pcscf_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_pcscf_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_pcscf_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_pcscf_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_3, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_gw_v4(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_GW_V4, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_act_call_ind_get_gw_v6(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_GW_V6, val_len_ptr);
}

static inline uint32_t mipc_data_act_call_ind_get_mtu_v4(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_MTU_V4, def_val);
}

static inline uint32_t mipc_data_act_call_ind_get_mtu_v6(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_MTU_V6, def_val);
}

static inline uint32_t mipc_data_act_call_ind_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_INTERFACE_ID, def_val);
}

static inline uint8_t mipc_data_act_call_ind_get_p_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_P_ID, def_val);
}

static inline uint8_t mipc_data_act_call_ind_get_fb_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_FB_ID, def_val);
}

static inline uint32_t mipc_data_act_call_ind_get_trans_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_ACT_CALL_IND_T_TRANS_ID, def_val);
}

static inline uint8_t mipc_data_deact_call_ind_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_DEACT_CALL_IND_T_ID, def_val);
}

static inline uint8_t mipc_data_deact_call_ind_get_res(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_DEACT_CALL_IND_T_RES, def_val);
}

static inline uint8_t mipc_data_mod_call_ind_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_ID, def_val);
}

static inline char * mipc_data_mod_call_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_APN, val_len_ptr);
}

static inline mipc_apn_pdp_type_const_enum mipc_data_mod_call_ind_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PDP_TYPE, def_val);
}

static inline uint8_t mipc_data_mod_call_ind_get_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_mod_call_ind_get_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_mod_call_ind_get_dns_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_dns_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_dns_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_dns_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_dns_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_mod_call_ind_get_dns_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_dns_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_dns_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_dns_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_dns_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_DNS_V6_3, val_len_ptr);
}

static inline uint8_t mipc_data_mod_call_ind_get_pcscf_v4_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_COUNT, def_val);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v4_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_0, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v4_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_1, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v4_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_2, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v4_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_3, val_len_ptr);
}

static inline uint8_t mipc_data_mod_call_ind_get_pcscf_v6_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_COUNT, def_val);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v6_0(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_0, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v6_1(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_1, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v6_2(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_2, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_pcscf_v6_3(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_3, val_len_ptr);
}

static inline mipc_data_v4_addr_struct4* mipc_data_mod_call_ind_get_gw_v4(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v4_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_GW_V4, val_len_ptr);
}

static inline mipc_data_v6_addr_struct4* mipc_data_mod_call_ind_get_gw_v6(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_v6_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_GW_V6, val_len_ptr);
}

static inline uint32_t mipc_data_mod_call_ind_get_mtu_v4(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_MTU_V4, def_val);
}

static inline uint32_t mipc_data_mod_call_ind_get_mtu_v6(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_MTU_V6, def_val);
}

static inline uint32_t mipc_data_mod_call_ind_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_INTERFACE_ID, def_val);
}

static inline uint32_t mipc_data_mod_call_ind_get_trans_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MOD_CALL_IND_T_TRANS_ID, def_val);
}

static inline uint8_t mipc_data_mod_pco_ind_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_PCO_IND_T_ID, def_val);
}

static inline uint8_t mipc_data_mod_pco_ind_get_pco_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_MOD_PCO_IND_T_PCO_COUNT, def_val);
}

static inline mipc_data_pco_ie_struct4* mipc_data_mod_pco_ind_get_pco_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_data_pco_ie_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MOD_PCO_IND_T_PCO_LIST, val_len_ptr);
}

static inline uint32_t mipc_data_wwan_act_call_ind_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_INTERFACE_ID, def_val);
}

static inline uint32_t mipc_data_wwan_act_call_ind_get_cid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_CID, def_val);
}

static inline char * mipc_data_wwan_act_call_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_APN, val_len_ptr);
}

static inline mipc_apn_type_const_enum mipc_data_wwan_act_call_ind_get_apn_type(mipc_msg_t *msg_ptr, mipc_apn_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_APN_TYPE, def_val);
}

static inline mipc_apn_pdp_type_const_enum mipc_data_wwan_act_call_ind_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_PDP_TYPE, def_val);
}

static inline uint32_t mipc_data_wwan_act_call_ind_get_v4_mtu(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_MTU, def_val);
}

static inline uint32_t mipc_data_wwan_act_call_ind_get_v6_mtu(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_MTU, def_val);
}

static inline uint8_t mipc_data_wwan_act_call_ind_get_v4_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_ADDR_COUNT, def_val);
}

static inline mipc_addr_struct4* mipc_data_wwan_act_call_ind_get_v4_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_ADDR_LIST, val_len_ptr);
}

static inline uint8_t mipc_data_wwan_act_call_ind_get_v6_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_ADDR_COUNT, def_val);
}

static inline mipc_addr_struct4* mipc_data_wwan_act_call_ind_get_v6_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_ADDR_LIST, val_len_ptr);
}

static inline uint8_t mipc_data_wwan_act_call_ind_get_dns_v4_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V4_ADDR_COUNT, def_val);
}

static inline mipc_addr_struct4* mipc_data_wwan_act_call_ind_get_dns_v4_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V4_ADDR_LIST, val_len_ptr);
}

static inline uint8_t mipc_data_wwan_act_call_ind_get_dns_v6_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V6_ADDR_COUNT, def_val);
}

static inline mipc_addr_struct4* mipc_data_wwan_act_call_ind_get_dns_v6_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V6_ADDR_LIST, val_len_ptr);
}

static inline uint32_t mipc_data_wwan_deact_call_ind_get_interface_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_DEACT_CALL_IND_T_INTERFACE_ID, def_val);
}

static inline uint32_t mipc_data_wwan_deact_call_ind_get_cid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_DEACT_CALL_IND_T_CID, def_val);
}

static inline char * mipc_data_wwan_deact_call_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_WWAN_DEACT_CALL_IND_T_APN, val_len_ptr);
}

static inline mipc_apn_type_const_enum mipc_data_wwan_deact_call_ind_get_apn_type(mipc_msg_t *msg_ptr, mipc_apn_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_WWAN_DEACT_CALL_IND_T_APN_TYPE, def_val);
}

static inline uint32_t mipc_data_md_act_call_ind_get_cid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MD_ACT_CALL_IND_T_CID, def_val);
}

static inline char * mipc_data_md_act_call_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_MD_ACT_CALL_IND_T_APN, val_len_ptr);
}

static inline uint32_t mipc_data_md_act_call_ind_get_apn_idx(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MD_ACT_CALL_IND_T_APN_IDX, def_val);
}

static inline uint32_t mipc_data_md_deact_call_ind_get_cid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_MD_DEACT_CALL_IND_T_CID, def_val);
}

static inline char * mipc_data_iwlan_priority_list_ind_get_cmd(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_CMD, val_len_ptr);
}

static inline char * mipc_data_iwlan_priority_list_ind_get_type(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_TYPE, val_len_ptr);
}

static inline mipc_mipc_eiwlpl_priority_type_const_enum mipc_data_iwlan_priority_list_ind_get_setup_priority(mipc_msg_t *msg_ptr, mipc_mipc_eiwlpl_priority_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_mipc_eiwlpl_priority_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_SETUP_PRIORITY, def_val);
}

static inline mipc_mipc_eiwlpl_priority_type_const_enum mipc_data_iwlan_priority_list_ind_get_cellular_priority(mipc_msg_t *msg_ptr, mipc_mipc_eiwlpl_priority_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_mipc_eiwlpl_priority_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_CELLULAR_PRIORITY, def_val);
}

static inline mipc_mipc_eiwlpl_priority_type_const_enum mipc_data_iwlan_priority_list_ind_get_wifi_priority(mipc_msg_t *msg_ptr, mipc_mipc_eiwlpl_priority_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_mipc_eiwlpl_priority_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_WIFI_PRIORITY, def_val);
}

static inline char * mipc_data_iwlan_priority_list_ind_get_description(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_DESCRIPTION, val_len_ptr);
}

static inline uint32_t mipc_data_keepalive_status_ind_get_session_handle(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_DATA_KEEPALIVE_STATUS_IND_T_SESSION_HANDLE, def_val);
}

static inline mipc_data_keepalive_status_code_const_enum mipc_data_keepalive_status_ind_get_status_code(mipc_msg_t *msg_ptr, mipc_data_keepalive_status_code_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_data_keepalive_status_code_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_DATA_KEEPALIVE_STATUS_IND_T_STATUS_CODE, def_val);
}

static inline char * mipc_data_retry_timer_ind_get_apn_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_DATA_RETRY_TIMER_IND_T_APN_NAME, val_len_ptr);
}

static inline uint32_t mipc_internal_eif_ind_get_transid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIF_IND_T_TRANSID, def_val);
}

static inline mipc_internal_eif_ind_cmd_const_enum mipc_internal_eif_ind_get_cmd(mipc_msg_t *msg_ptr, mipc_internal_eif_ind_cmd_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_internal_eif_ind_cmd_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIF_IND_T_CMD, def_val);
}

static inline uint32_t mipc_internal_eif_ind_get_cause(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIF_IND_T_CAUSE, def_val);
}

static inline uint32_t mipc_internal_eif_ind_get_mtu(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIF_IND_T_MTU, def_val);
}

static inline uint8_t mipc_internal_eif_ind_get_net_v4_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIF_IND_T_NET_V4_ADDR_COUNT, def_val);
}

static inline mipc_v4_full_addr_struct4* mipc_internal_eif_ind_get_net_v4_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_v4_full_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_EIF_IND_T_NET_V4_ADDR_LIST, val_len_ptr);
}

static inline uint8_t mipc_internal_eif_ind_get_net_v6_addr_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIF_IND_T_NET_V6_ADDR_COUNT, def_val);
}

static inline mipc_v6_full_addr_struct4* mipc_internal_eif_ind_get_net_v6_addr_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_v6_full_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_EIF_IND_T_NET_V6_ADDR_LIST, val_len_ptr);
}

static inline uint8_t mipc_internal_ho_ind_get_id(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_HO_IND_T_ID, def_val);
}

static inline mipc_apn_type_const_enum mipc_internal_ho_ind_get_apn_type(mipc_msg_t *msg_ptr, mipc_apn_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_HO_IND_T_APN_TYPE, def_val);
}

static inline mipc_internal_ho_progress_const_enum mipc_internal_ho_ind_get_progress(mipc_msg_t *msg_ptr, mipc_internal_ho_progress_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_internal_ho_progress_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_HO_IND_T_PROGRESS, def_val);
}

static inline mipc_ran_const_enum mipc_internal_ho_ind_get_src_ran(mipc_msg_t *msg_ptr, mipc_ran_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ran_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_HO_IND_T_SRC_RAN, def_val);
}

static inline mipc_ran_const_enum mipc_internal_ho_ind_get_dst_ran(mipc_msg_t *msg_ptr, mipc_ran_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ran_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_HO_IND_T_DST_RAN, def_val);
}

static inline mipc_nw_reg_state_struct4* mipc_nw_register_ind_get_state(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_reg_state_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_REGISTER_IND_T_STATE, val_len_ptr);
}

static inline uint16_t mipc_nw_register_ind_get_nw_err(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_REGISTER_IND_T_NW_ERR, def_val);
}

static inline mipc_nw_register_mode_const_enum mipc_nw_register_ind_get_mode(mipc_msg_t *msg_ptr, mipc_nw_register_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_register_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_REGISTER_IND_T_MODE, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_register_ind_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_REGISTER_IND_T_DATA_SPEED, def_val);
}

static inline char * mipc_nw_register_ind_get_nw_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_REGISTER_IND_T_NW_NAME, val_len_ptr);
}

static inline char * mipc_nw_register_ind_get_roaming_text(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_REGISTER_IND_T_ROAMING_TEXT, val_len_ptr);
}

static inline uint16_t mipc_nw_register_ind_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_REGISTER_IND_T_FAIL_CAUSE, def_val);
}

static inline char * mipc_nw_register_ind_get_nw_long_name(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_REGISTER_IND_T_NW_LONG_NAME, val_len_ptr);
}

static inline uint32_t mipc_nw_signal_ind_get_signal_strength_interval(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SIGNAL_IND_T_SIGNAL_STRENGTH_INTERVAL, def_val);
}

static inline uint32_t mipc_nw_signal_ind_get_rssi_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SIGNAL_IND_T_RSSI_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_signal_ind_get_err_rate_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SIGNAL_IND_T_ERR_RATE_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_signal_ind_get_rsrp_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SIGNAL_IND_T_RSRP_THRESHOLD, def_val);
}

static inline uint32_t mipc_nw_signal_ind_get_snr_threshold(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_SIGNAL_IND_T_SNR_THRESHOLD, def_val);
}

static inline mipc_nw_signal_type_const_enum mipc_nw_signal_ind_get_signal_type(mipc_msg_t *msg_ptr, mipc_nw_signal_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_signal_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SIGNAL_IND_T_SIGNAL_TYPE, def_val);
}

static inline mipc_nw_gsm_signal_strength_struct4* mipc_nw_signal_ind_get_gsm_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SIGNAL_IND_T_GSM_SIGNAL, val_len_ptr);
}

static inline mipc_nw_umts_signal_strength_struct4* mipc_nw_signal_ind_get_umts_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_umts_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SIGNAL_IND_T_UMTS_SIGNAL, val_len_ptr);
}

static inline mipc_nw_lte_signal_strength_struct4* mipc_nw_signal_ind_get_lte_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SIGNAL_IND_T_LTE_SIGNAL, val_len_ptr);
}

static inline mipc_nw_nr_signal_strength_struct4* mipc_nw_signal_ind_get_nr_signal(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_signal_strength_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SIGNAL_IND_T_NR_SIGNAL, val_len_ptr);
}

static inline mipc_nw_raw_signal_info_struct4* mipc_nw_signal_ind_get_raw_signal_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_raw_signal_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_SIGNAL_IND_T_RAW_SIGNAL_INFO_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_signal_ind_get_raw_signal_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_SIGNAL_IND_T_RAW_SIGNAL_INFO_COUNT, def_val);
}

static inline uint8_t mipc_nw_ps_ind_get_tach(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_PS_IND_T_TACH, def_val);
}

static inline mipc_nw_data_speed_const_enum mipc_nw_ps_ind_get_data_speed(mipc_msg_t *msg_ptr, mipc_nw_data_speed_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_data_speed_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_PS_IND_T_DATA_SPEED, def_val);
}

static inline uint8_t mipc_nw_ps_ind_get_nw_frequency(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_PS_IND_T_NW_FREQUENCY, def_val);
}

static inline mipc_nw_ps_reg_info_struct4* mipc_nw_ps_ind_get_reg_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_ps_reg_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_PS_IND_T_REG_INFO, val_len_ptr);
}

static inline mipc_nw_cell_type_const_enum mipc_nw_ps_ind_get_cell_type(mipc_msg_t *msg_ptr, mipc_nw_cell_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_nw_cell_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_PS_IND_T_CELL_TYPE, def_val);
}

static inline uint8_t mipc_nw_radio_ind_get_sw_state(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_RADIO_IND_T_SW_STATE, def_val);
}

static inline uint8_t mipc_nw_radio_ind_get_hw_state(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_RADIO_IND_T_HW_STATE, def_val);
}

static inline char * mipc_nw_ia_ind_get_apn(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_IA_IND_T_APN, val_len_ptr);
}

static inline uint8_t mipc_nw_ia_ind_get_rat(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_IA_IND_T_RAT, def_val);
}

static inline mipc_apn_pdp_type_const_enum mipc_nw_ia_ind_get_pdp_type(mipc_msg_t *msg_ptr, mipc_apn_pdp_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_pdp_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_IA_IND_T_PDP_TYPE, def_val);
}

static inline mipc_apn_auth_type_const_enum mipc_nw_ia_ind_get_auth_type(mipc_msg_t *msg_ptr, mipc_apn_auth_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_apn_auth_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_IA_IND_T_AUTH_TYPE, def_val);
}

static inline char * mipc_nw_ia_ind_get_userid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_IA_IND_T_USERID, val_len_ptr);
}

static inline char * mipc_nw_ia_ind_get_password(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_IA_IND_T_PASSWORD, val_len_ptr);
}

static inline mipc_nw_nitz_info_struct4* mipc_nw_nitz_ind_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nitz_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_NITZ_IND_T_INFO, val_len_ptr);
}

static inline mipc_nw_location_info_struct4* mipc_nw_location_info_ind_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_location_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_LOCATION_INFO_IND_T_INFO, val_len_ptr);
}

static inline mipc_nw_reg_change_info_struct4* mipc_nw_cs_ind_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_reg_change_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CS_IND_T_INFO, val_len_ptr);
}

static inline mipc_nw_cscon_status_struct4* mipc_nw_cscon_ind_get_status(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cscon_status_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CSCON_IND_T_STATUS, val_len_ptr);
}

static inline uint8_t mipc_nw_preferred_provider_ind_get_provider_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_PREFERRED_PROVIDER_IND_T_PROVIDER_COUNT, def_val);
}

static inline mipc_nw_provider_struct4* mipc_nw_preferred_provider_ind_get_provider_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_provider_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_PREFERRED_PROVIDER_IND_T_PROVIDER_LIST, val_len_ptr);
}

static inline uint8_t mipc_nw_cainfo_ind_get_lte_dl_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CAINFO_IND_T_LTE_DL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_cainfo_ind_get_lte_ul_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CAINFO_IND_T_LTE_UL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_cainfo_ind_get_nr_dl_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CAINFO_IND_T_NR_DL_SERVING_CELL_COUNT, def_val);
}

static inline uint8_t mipc_nw_cainfo_ind_get_nr_ul_serving_cell_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_CAINFO_IND_T_NR_UL_SERVING_CELL_COUNT, def_val);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_cainfo_ind_get_lte_dl_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CAINFO_IND_T_LTE_DL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_cainfo_ind_get_lte_ul_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CAINFO_IND_T_LTE_UL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_cainfo_ind_get_nr_dl_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CAINFO_IND_T_NR_DL_SERVING_CELL_LIST, val_len_ptr);
}

static inline mipc_nw_lte_nr_ca_info_struct4* mipc_nw_cainfo_ind_get_nr_ul_serving_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_nr_ca_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CAINFO_IND_T_NR_UL_SERVING_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_eons_ind_get_pnn(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EONS_IND_T_PNN, def_val);
}

static inline uint32_t mipc_nw_eons_ind_get_opl(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EONS_IND_T_OPL, def_val);
}

static inline uint32_t mipc_nw_ciev_ind_get_ciev_type(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_CIEV_IND_T_CIEV_TYPE, def_val);
}

static inline uint32_t mipc_nw_ciev_ind_get_ecbm_status(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_CIEV_IND_T_ECBM_STATUS, def_val);
}

static inline char * mipc_nw_ciev_ind_get_plmn_id(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CIEV_IND_T_PLMN_ID, val_len_ptr);
}

static inline char * mipc_nw_ciev_ind_get_nw_name_long(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CIEV_IND_T_NW_NAME_LONG, val_len_ptr);
}

static inline char * mipc_nw_ciev_ind_get_nw_name_short(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_CIEV_IND_T_NW_NAME_SHORT, val_len_ptr);
}

static inline uint32_t mipc_nw_egmss_ind_get_rat(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EGMSS_IND_T_RAT, def_val);
}

static inline uint32_t mipc_nw_egmss_ind_get_mcc(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EGMSS_IND_T_MCC, def_val);
}

static inline uint32_t mipc_nw_egmss_ind_get_status(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EGMSS_IND_T_STATUS, def_val);
}

static inline uint32_t mipc_nw_egmss_ind_get_cur_reported_rat(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EGMSS_IND_T_CUR_REPORTED_RAT, def_val);
}

static inline uint32_t mipc_nw_egmss_ind_get_is_home_country(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_EGMSS_IND_T_IS_HOME_COUNTRY, def_val);
}

static inline uint32_t mipc_nw_psbearer_ind_get_cell_data_speed_support(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_PSBEARER_IND_T_CELL_DATA_SPEED_SUPPORT, def_val);
}

static inline uint32_t mipc_nw_psbearer_ind_get_max_data_bearer_capability(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_PSBEARER_IND_T_MAX_DATA_BEARER_CAPABILITY, def_val);
}

static inline uint32_t mipc_nw_psbearer_ind_get_sec_cell_num_in_dl(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_PSBEARER_IND_T_SEC_CELL_NUM_IN_DL, def_val);
}

static inline uint32_t mipc_nw_psbearer_ind_get_sec_cell_num_in_ul(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_PSBEARER_IND_T_SEC_CELL_NUM_IN_UL, def_val);
}

static inline uint32_t mipc_nw_ecell_ind_get_gsm_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_GSM_CELL_COUNT, def_val);
}

static inline mipc_nw_gsm_cell_struct4* mipc_nw_ecell_ind_get_gsm_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_gsm_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_GSM_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_ecell_ind_get_umts_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_UMTS_CELL_COUNT, def_val);
}

static inline mipc_nw_umts_cell_struct4* mipc_nw_ecell_ind_get_umts_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_umts_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_UMTS_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_ecell_ind_get_tdscdma_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_TDSCDMA_CELL_COUNT, def_val);
}

static inline mipc_nw_tdscdma_cell_struct4* mipc_nw_ecell_ind_get_tdscdma_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_tdscdma_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_TDSCDMA_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_ecell_ind_get_lte_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_LTE_CELL_COUNT, def_val);
}

static inline mipc_nw_lte_cell_struct4* mipc_nw_ecell_ind_get_lte_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_lte_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_LTE_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_ecell_ind_get_cdma_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_CDMA_CELL_COUNT, def_val);
}

static inline mipc_nw_cdma_cell_struct4* mipc_nw_ecell_ind_get_cdma_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_cdma_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_CDMA_CELL_LIST, val_len_ptr);
}

static inline uint32_t mipc_nw_ecell_ind_get_nr_cell_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_NW_ECELL_IND_T_NR_CELL_COUNT, def_val);
}

static inline mipc_nw_nr_cell_struct4* mipc_nw_ecell_ind_get_nr_cell_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nr_cell_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_NW_ECELL_IND_T_NR_CELL_LIST, val_len_ptr);
}

static inline uint16_t mipc_nw_ecell_ind_get_fail_cause(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_NW_ECELL_IND_T_FAIL_CAUSE, def_val);
}

static inline uint8_t mipc_nw_nruw_info_ind_get_display_5guw(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_NRUW_INFO_IND_T_DISPLAY_5GUW, def_val);
}

static inline uint8_t mipc_nw_nruw_info_ind_get_on_n77_band(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_NRUW_INFO_IND_T_ON_N77_BAND, def_val);
}

static inline uint8_t mipc_nw_nruw_info_ind_get_on_fr2_band(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_NRUW_INFO_IND_T_ON_FR2_BAND, def_val);
}

static inline uint8_t mipc_nw_nruw_info_ind_get_5guw_allowed(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_NW_NRUW_INFO_IND_T_5GUW_ALLOWED, def_val);
}

static inline mipc_sim_state_const_enum mipc_sim_state_ind_get_state(mipc_msg_t *msg_ptr, mipc_sim_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATE_IND_T_STATE, def_val);
}

static inline uint32_t mipc_sim_state_ind_get_sim_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATE_IND_T_SIM_ID, def_val);
}

static inline uint32_t mipc_sim_state_ind_get_ps_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATE_IND_T_PS_ID, def_val);
}

static inline uint32_t mipc_sim_state_ind_get_is_present(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATE_IND_T_IS_PRESENT, def_val);
}

static inline mipc_sim_sub_state_const_enum mipc_sim_state_ind_get_sub_state(mipc_msg_t *msg_ptr, mipc_sim_sub_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_sub_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATE_IND_T_SUB_STATE, def_val);
}

static inline mipc_sim_status_const_enum mipc_sim_status_ind_get_status(mipc_msg_t *msg_ptr, mipc_sim_status_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_status_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_IND_T_STATUS, def_val);
}

static inline uint32_t mipc_sim_status_ind_get_sim_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATUS_IND_T_SIM_ID, def_val);
}

static inline uint32_t mipc_sim_status_ind_get_ps_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SIM_STATUS_IND_T_PS_ID, def_val);
}

static inline uint8_t mipc_sim_euicc_slots_status_ind_get_slots_info_count(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_EUICC_SLOTS_STATUS_IND_T_SLOTS_INFO_COUNT, def_val);
}

static inline mipc_sim_slots_info_struct4* mipc_sim_euicc_slots_status_ind_get_slots_info_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sim_slots_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_EUICC_SLOTS_STATUS_IND_T_SLOTS_INFO_LIST, val_len_ptr);
}

static inline char * mipc_sim_iccid_ind_get_iccid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SIM_ICCID_IND_T_ICCID, val_len_ptr);
}

static inline uint8_t mipc_sim_status_change_with_cause_ind_get_is_sim_inserted(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CHANGE_WITH_CAUSE_IND_T_IS_SIM_INSERTED, def_val);
}

static inline mipc_sim_cause_const_enum mipc_sim_status_change_with_cause_ind_get_cause(mipc_msg_t *msg_ptr, mipc_sim_cause_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_cause_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_STATUS_CHANGE_WITH_CAUSE_IND_T_CAUSE, def_val);
}

static inline uint8_t mipc_sim_csim_imsi_change_ind_get_status(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SIM_CSIM_IMSI_CHANGE_IND_T_STATUS, def_val);
}

static inline mipc_sms_format_const_enum mipc_sms_cfg_ind_get_format(mipc_msg_t *msg_ptr, mipc_sms_format_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_format_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_IND_T_FORMAT, def_val);
}

static inline char * mipc_sms_cfg_ind_get_sca(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_CFG_IND_T_SCA, val_len_ptr);
}

static inline mipc_sms_state_const_enum mipc_sms_cfg_ind_get_sms_state(mipc_msg_t *msg_ptr, mipc_sms_state_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_state_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_IND_T_SMS_STATE, def_val);
}

static inline uint16_t mipc_sms_cfg_ind_get_max_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_CFG_IND_T_MAX_MESSAGE, def_val);
}

static inline mipc_sms_ack_const_enum mipc_sms_cfg_ind_get_prefer_ack(mipc_msg_t *msg_ptr, mipc_sms_ack_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_ack_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_IND_T_PREFER_ACK, def_val);
}

static inline mipc_sms_storage_const_enum mipc_sms_cfg_ind_get_prefer_storage(mipc_msg_t *msg_ptr, mipc_sms_storage_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_storage_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_CFG_IND_T_PREFER_STORAGE, def_val);
}

static inline uint16_t mipc_sms_cfg_ind_get_used_message(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_CFG_IND_T_USED_MESSAGE, def_val);
}

static inline mipc_sms_format_const_enum mipc_sms_new_sms_ind_get_format(mipc_msg_t *msg_ptr, mipc_sms_format_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_format_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_NEW_SMS_IND_T_FORMAT, def_val);
}

static inline uint16_t mipc_sms_new_sms_ind_get_pdu_count(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_NEW_SMS_IND_T_PDU_COUNT, def_val);
}

static inline mipc_sms_pdu_struct4* mipc_sms_new_sms_ind_get_pdu_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sms_pdu_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_SMS_IND_T_PDU_LIST, val_len_ptr);
}

static inline void * mipc_sms_new_sms_ind_get_pdu_c2k(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_SMS_IND_T_PDU_C2K, val_len_ptr);
}

static inline mipc_sms_store_flag_const_enum mipc_sms_store_status_ind_get_flag(mipc_msg_t *msg_ptr, mipc_sms_store_flag_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_store_flag_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SMS_STORE_STATUS_IND_T_FLAG, def_val);
}

static inline uint16_t mipc_sms_store_status_ind_get_message_index(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_STORE_STATUS_IND_T_MESSAGE_INDEX, def_val);
}

static inline void * mipc_sms_new_status_report_ind_get_pdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_STATUS_REPORT_IND_T_PDU, val_len_ptr);
}

static inline mipc_sms_cbm_type_const_enum mipc_sms_new_cbm_ind_get_cbm_type(mipc_msg_t *msg_ptr, mipc_sms_cbm_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_cbm_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_CBM_TYPE, def_val);
}

static inline uint16_t mipc_sms_new_cbm_ind_get_warning_type(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_WARNING_TYPE, def_val);
}

static inline uint16_t mipc_sms_new_cbm_ind_get_message_id(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_MESSAGE_ID, def_val);
}

static inline uint16_t mipc_sms_new_cbm_ind_get_serial_number(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_SERIAL_NUMBER, def_val);
}

static inline uint8_t mipc_sms_new_cbm_ind_get_dcs(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_DCS, def_val);
}

static inline void * mipc_sms_new_cbm_ind_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_DATA, val_len_ptr);
}

static inline void * mipc_sms_new_cbm_ind_get_secur_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_CBM_IND_T_SECUR_INFO, val_len_ptr);
}

static inline mipc_sms_scbm_status_const_enum mipc_sms_scbm_ind_get_status_update(mipc_msg_t *msg_ptr, mipc_sms_scbm_status_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_scbm_status_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_SCBM_IND_T_STATUS_UPDATE, def_val);
}

static inline mipc_ss_ussd_const_enum mipc_ss_ussd_ind_get_ussd_response(mipc_msg_t *msg_ptr, mipc_ss_ussd_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_ussd_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_USSD_IND_T_USSD_RESPONSE, def_val);
}

static inline mipc_ss_session_const_enum mipc_ss_ussd_ind_get_ussd_session_state(mipc_msg_t *msg_ptr, mipc_ss_session_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ss_session_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_USSD_IND_T_USSD_SESSION_STATE, def_val);
}

static inline uint32_t mipc_ss_ussd_ind_get_dcs(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SS_USSD_IND_T_DCS, def_val);
}

static inline uint8_t mipc_ss_ussd_ind_get_payload_len(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SS_USSD_IND_T_PAYLOAD_LEN, def_val);
}

static inline void * mipc_ss_ussd_ind_get_payload(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SS_USSD_IND_T_PAYLOAD, val_len_ptr);
}

static inline uint32_t mipc_ss_ecmccss_ind_get_call_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SS_ECMCCSS_IND_T_CALL_ID, def_val);
}

static inline uint32_t mipc_ss_ecmccss_ind_get_service(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SS_ECMCCSS_IND_T_SERVICE, def_val);
}

static inline char * mipc_ss_ecmccss_ind_get_raw_string(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SS_ECMCCSS_IND_T_RAW_STRING, val_len_ptr);
}

static inline mipc_stk_pac_type_const_enum mipc_stk_pac_ind_get_pac_type(mipc_msg_t *msg_ptr, mipc_stk_pac_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_stk_pac_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_STK_PAC_IND_T_PAC_TYPE, def_val);
}

static inline uint16_t mipc_stk_pac_ind_get_pac_len(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_STK_PAC_IND_T_PAC_LEN, def_val);
}

static inline void * mipc_stk_pac_ind_get_pac(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_PAC_IND_T_PAC, val_len_ptr);
}

static inline mipc_sim_refresh_result_type_const_enum mipc_stk_sim_refresh_ind_get_sim_refresh_result(mipc_msg_t *msg_ptr, mipc_sim_refresh_result_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sim_refresh_result_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_STK_SIM_REFRESH_IND_T_SIM_REFRESH_RESULT, def_val);
}

static inline uint32_t mipc_stk_sim_refresh_ind_get_ef_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_STK_SIM_REFRESH_IND_T_EF_ID, def_val);
}

static inline char * mipc_stk_sim_refresh_ind_get_aid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_STK_SIM_REFRESH_IND_T_AID, val_len_ptr);
}

static inline uint32_t mipc_call_status_ind_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_CALLID, def_val);
}

static inline mipc_call_direction_const_enum mipc_call_status_ind_get_direction(mipc_msg_t *msg_ptr, mipc_call_direction_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_direction_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_DIRECTION, def_val);
}

static inline mipc_call_mode_const_enum mipc_call_status_ind_get_mode(mipc_msg_t *msg_ptr, mipc_call_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_mode_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_MODE, def_val);
}

static inline uint32_t mipc_call_status_ind_get_ton(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_TON, def_val);
}

static inline char * mipc_call_status_ind_get_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_STATUS_IND_T_NUMBER, val_len_ptr);
}

static inline mipc_call_type_const_enum mipc_call_status_ind_get_type(mipc_msg_t *msg_ptr, mipc_call_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_TYPE, def_val);
}

static inline mipc_call_detail_info_struct4* mipc_call_status_ind_get_detail_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_call_detail_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_STATUS_IND_T_DETAIL_INFO, val_len_ptr);
}

static inline mipc_call_video_cap_struct4* mipc_call_status_ind_get_video_cap(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_call_video_cap_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_STATUS_IND_T_VIDEO_CAP, val_len_ptr);
}

static inline mipc_call_msg_type_const_enum mipc_call_status_ind_get_msg_type(mipc_msg_t *msg_ptr, mipc_call_msg_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_msg_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_MSG_TYPE, def_val);
}

static inline uint32_t mipc_call_status_ind_get_disc_cause(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_STATUS_IND_T_DISC_CAUSE, def_val);
}

static inline mipc_call_event_const_enum mipc_call_event_ind_get_event(mipc_msg_t *msg_ptr, mipc_call_event_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_event_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_EVENT, def_val);
}

static inline mipc_call_reject_reason_const_enum mipc_call_event_ind_get_reject_reason(mipc_msg_t *msg_ptr, mipc_call_reject_reason_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_reject_reason_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_REJECT_REASON, def_val);
}

static inline uint32_t mipc_call_event_ind_get_srvcch(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_SRVCCH, def_val);
}

static inline char * mipc_call_event_ind_get_redirect_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_EVENT_IND_T_REDIRECT_NUMBER, val_len_ptr);
}

static inline mipc_call_audio_codec_const_enum mipc_call_event_ind_get_audio_codec(mipc_msg_t *msg_ptr, mipc_call_audio_codec_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_audio_codec_const_enum)mipc_msg_get_val_uint16(msg_ptr, MIPC_CALL_EVENT_IND_T_AUDIO_CODEC, def_val);
}

static inline mipc_boolean_const_enum mipc_call_event_ind_get_speech_on(mipc_msg_t *msg_ptr, mipc_boolean_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_boolean_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_EVENT_IND_T_SPEECH_ON, def_val);
}

static inline mipc_speech_rat_const_enum mipc_call_event_ind_get_speech_rat(mipc_msg_t *msg_ptr, mipc_speech_rat_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_speech_rat_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_SPEECH_RAT, def_val);
}

static inline mipc_boolean_const_enum mipc_call_event_ind_get_speech_irho_on(mipc_msg_t *msg_ptr, mipc_boolean_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_boolean_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_EVENT_IND_T_SPEECH_IRHO_ON, def_val);
}

static inline uint32_t mipc_call_event_ind_get_count(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_COUNT, def_val);
}

static inline uint32_t mipc_call_event_ind_get_call_id(mipc_msg_t *msg_ptr, uint32_t def_val, uint32_t index)
{
    if (index >= MIPC_MAX_CALL_NUM) return def_val;
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_idx_uint32(msg_ptr, MIPC_CALL_EVENT_IND_T_CALL_ID, index, def_val);
}

static inline uint32_t mipc_call_mode_ind_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_MODE_IND_T_CALLID, def_val);
}

static inline mipc_call_mode_const_enum mipc_call_mode_ind_get_mode(mipc_msg_t *msg_ptr, mipc_call_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_mode_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_MODE_IND_T_MODE, def_val);
}

static inline mipc_sdp_direction_const_enum mipc_call_mode_ind_get_sdp_camera_direction(mipc_msg_t *msg_ptr, mipc_sdp_direction_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sdp_direction_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_MODE_IND_T_SDP_CAMERA_DIRECTION, def_val);
}

static inline mipc_sdp_direction_const_enum mipc_call_mode_ind_get_sdp_audio_direction(mipc_msg_t *msg_ptr, mipc_sdp_direction_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sdp_direction_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_MODE_IND_T_SDP_AUDIO_DIRECTION, def_val);
}

static inline mipc_sdp_audio_codec_const_enum mipc_call_mode_ind_get_sdp_audio_codec(mipc_msg_t *msg_ptr, mipc_sdp_audio_codec_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sdp_audio_codec_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_MODE_IND_T_SDP_AUDIO_CODEC, def_val);
}

static inline uint32_t mipc_call_sip_ind_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SIP_IND_T_CALLID, def_val);
}

static inline mipc_sip_direction_const_enum mipc_call_sip_ind_get_direction(mipc_msg_t *msg_ptr, mipc_sip_direction_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sip_direction_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SIP_IND_T_DIRECTION, def_val);
}

static inline mipc_sip_msg_type_const_enum mipc_call_sip_ind_get_msg_type(mipc_msg_t *msg_ptr, mipc_sip_msg_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sip_msg_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SIP_IND_T_MSG_TYPE, def_val);
}

static inline mipc_sip_method_const_enum mipc_call_sip_ind_get_method(mipc_msg_t *msg_ptr, mipc_sip_method_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sip_method_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SIP_IND_T_METHOD, def_val);
}

static inline uint32_t mipc_call_sip_ind_get_response_code(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SIP_IND_T_RESPONSE_CODE, def_val);
}

static inline char * mipc_call_sip_ind_get_reason_text(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_SIP_IND_T_REASON_TEXT, val_len_ptr);
}

static inline uint32_t mipc_call_conference_ind_get_conf_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_CONFERENCE_IND_T_CONF_CALLID, def_val);
}

static inline uint32_t mipc_call_ims_event_package_ind_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_CALLID, def_val);
}

static inline mipc_ims_event_package_type_const_enum mipc_call_ims_event_package_ind_get_type(mipc_msg_t *msg_ptr, mipc_ims_event_package_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ims_event_package_type_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_TYPE, def_val);
}

static inline char * mipc_call_ims_event_package_ind_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_DATA, val_len_ptr);
}

static inline mipc_call_ss_code1_const_enum mipc_call_ss_ind_get_code1(mipc_msg_t *msg_ptr, mipc_call_ss_code1_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_ss_code1_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SS_IND_T_CODE1, def_val);
}

static inline mipc_call_ss_code2_const_enum mipc_call_ss_ind_get_code2(mipc_msg_t *msg_ptr, mipc_call_ss_code2_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_ss_code2_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SS_IND_T_CODE2, def_val);
}

static inline uint32_t mipc_call_ss_ind_get_index(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SS_IND_T_INDEX, def_val);
}

static inline char * mipc_call_ss_ind_get_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_SS_IND_T_NUMBER, val_len_ptr);
}

static inline uint32_t mipc_call_ss_ind_get_toa(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SS_IND_T_TOA, def_val);
}

static inline char * mipc_call_ss_ind_get_subaddr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_SS_IND_T_SUBADDR, val_len_ptr);
}

static inline uint32_t mipc_call_ss_ind_get_satype(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_SS_IND_T_SATYPE, def_val);
}

static inline mipc_call_ecbm_mode_const_enum mipc_call_ecbm_change_ind_get_mode(mipc_msg_t *msg_ptr, mipc_call_ecbm_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_ecbm_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_ECBM_CHANGE_IND_T_MODE, def_val);
}

static inline mipc_crss_type_const_enum mipc_call_crss_ind_get_crss_type(mipc_msg_t *msg_ptr, mipc_crss_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_crss_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_CRSS_IND_T_CRSS_TYPE, def_val);
}

static inline char * mipc_call_crss_ind_get_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_CRSS_IND_T_NUMBER, val_len_ptr);
}

static inline mipc_number_type_const_enum mipc_call_crss_ind_get_call_number_type(mipc_msg_t *msg_ptr, mipc_number_type_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_number_type_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_CRSS_IND_T_CALL_NUMBER_TYPE, def_val);
}

static inline mipc_number_presentation_const_enum mipc_call_crss_ind_get_number_presentation(mipc_msg_t *msg_ptr, mipc_number_presentation_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_number_presentation_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_CRSS_IND_T_NUMBER_PRESENTATION, def_val);
}

static inline char * mipc_call_crss_ind_get_sub_address(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_CRSS_IND_T_SUB_ADDRESS, val_len_ptr);
}

static inline uint8_t mipc_call_crss_ind_get_sa_type(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_CALL_CRSS_IND_T_SA_TYPE, def_val);
}

static inline char * mipc_call_crss_ind_get_alphaid(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_CRSS_IND_T_ALPHAID, val_len_ptr);
}

static inline mipc_ims_config_ind_reason_const_enum mipc_ims_config_ind_get_reason(mipc_msg_t *msg_ptr, mipc_ims_config_ind_reason_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ims_config_ind_reason_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_CONFIG_IND_T_REASON, def_val);
}

static inline void * mipc_ims_config_ind_get_config_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_CONFIG_IND_T_CONFIG_DATA, val_len_ptr);
}

static inline mipc_ims_state_ind_event_const_enum mipc_ims_state_ind_get_event(mipc_msg_t *msg_ptr, mipc_ims_state_ind_event_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_ims_state_ind_event_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_STATE_IND_T_EVENT, def_val);
}

static inline uint8_t mipc_ims_state_ind_get_reg_state(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_STATE_IND_T_REG_STATE, def_val);
}

static inline uint32_t mipc_ims_state_ind_get_ext_info(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_STATE_IND_T_EXT_INFO, def_val);
}

static inline uint8_t mipc_ims_state_ind_get_wfc(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_IMS_STATE_IND_T_WFC, def_val);
}

static inline uint32_t mipc_ims_state_ind_get_account_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_STATE_IND_T_ACCOUNT_ID, def_val);
}

static inline void * mipc_ims_state_ind_get_uri(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_STATE_IND_T_URI, val_len_ptr);
}

static inline uint32_t mipc_ims_state_ind_get_expire_time(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_STATE_IND_T_EXPIRE_TIME, def_val);
}

static inline uint32_t mipc_ims_state_ind_get_error_code(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_IMS_STATE_IND_T_ERROR_CODE, def_val);
}

static inline char * mipc_ims_state_ind_get_error_message(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_IMS_STATE_IND_T_ERROR_MESSAGE, val_len_ptr);
}

static inline mipc_sys_reboot_mode_const_enum mipc_sys_reboot_cmd_get_mode(mipc_msg_t *msg_ptr, mipc_sys_reboot_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_reboot_mode_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_REBOOT_CMD_T_MODE, def_val);
}

static inline uint32_t mipc_sys_reboot_cmd_get_timeout(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_REBOOT_CMD_T_TIMEOUT, def_val);
}

static inline uint32_t mipc_sys_reboot_cmd_get_sbp_id(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_REBOOT_CMD_T_SBP_ID, def_val);
}

static inline mipc_sys_config_class_const_enum mipc_sys_set_config_dipc_cmd_get_class(mipc_msg_t *msg_ptr, mipc_sys_config_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_config_class_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_SET_CONFIG_DIPC_CMD_T_CLASS, def_val);
}

static inline char * mipc_sys_set_config_dipc_cmd_get_type(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_CONFIG_DIPC_CMD_T_TYPE, val_len_ptr);
}

static inline void * mipc_sys_set_config_dipc_cmd_get_data(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_CONFIG_DIPC_CMD_T_DATA, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_set_config_dipc_rsp_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  60000) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_SET_CONFIG_DIPC_RSP_T_DATA, len, (const void *)value);
}

static inline mipc_sys_config_class_const_enum mipc_sys_config_needed_to_update_cmd_get_class(mipc_msg_t *msg_ptr, mipc_sys_config_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_config_class_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_CMD_T_CLASS, def_val);
}

static inline char * mipc_sys_config_needed_to_update_cmd_get_type(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_CMD_T_TYPE, val_len_ptr);
}

static inline mipc_sys_config_class_const_enum mipc_sys_get_config_dipc_cmd_get_class(mipc_msg_t *msg_ptr, mipc_sys_config_class_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sys_config_class_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_SYS_GET_CONFIG_DIPC_CMD_T_CLASS, def_val);
}

static inline char * mipc_sys_get_config_dipc_cmd_get_type(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_GET_CONFIG_DIPC_CMD_T_TYPE, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sys_get_config_dipc_rsp_add_data(mipc_msg_t *msg_ptr, uint16_t len, const void  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  60000) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_SYS_GET_CONFIG_DIPC_RSP_T_DATA, len, (const void *)value);
}

static inline mipc_nw_nitz_info_struct4* mipc_sys_set_time_cmd_get_info(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_nw_nitz_info_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SYS_SET_TIME_CMD_T_INFO, val_len_ptr);
}

static inline uint8_t mipc_sys_set_time_cmd_get_tz_valid(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_SYS_SET_TIME_CMD_T_TZ_VALID, def_val);
}

static inline uint32_t mipc_internal_eipport_cmd_get_transid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_TRANSID, def_val);
}

static inline mipc_internal_eipport_action_const_enum mipc_internal_eipport_cmd_get_action(mipc_msg_t *msg_ptr, mipc_internal_eipport_action_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_internal_eipport_action_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_ACTION, def_val);
}

static inline uint8_t mipc_internal_eipport_cmd_get_ifid(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_IFID, def_val);
}

static inline mipc_addr_struct4* mipc_internal_eipport_cmd_get_addr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_ADDR, val_len_ptr);
}

static inline uint8_t mipc_internal_eipport_cmd_get_proto(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_PROTO, def_val);
}

static inline uint16_t mipc_internal_eipport_cmd_get_port(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_INTERNAL_EIPPORT_CMD_T_PORT, def_val);
}

static inline mipc_msg_api_result_enum mipc_internal_eipport_rsp_add_transid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_INTERNAL_EIPPORT_RSP_T_TRANSID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eipport_rsp_add_action(mipc_msg_t *msg_ptr, enum mipc_internal_eipport_action_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_EIPPORT_RSP_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eipport_rsp_add_result(mipc_msg_t *msg_ptr, enum mipc_internal_eipport_result_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_EIPPORT_RSP_T_RESULT, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_internal_eipspi_cmd_get_transid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_TRANSID, def_val);
}

static inline mipc_internal_eipspi_action_const_enum mipc_internal_eipspi_cmd_get_action(mipc_msg_t *msg_ptr, mipc_internal_eipspi_action_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_internal_eipspi_action_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_ACTION, def_val);
}

static inline mipc_addr_struct4* mipc_internal_eipspi_cmd_get_src_addr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_SRC_ADDR, val_len_ptr);
}

static inline mipc_addr_struct4* mipc_internal_eipspi_cmd_get_dst_addr(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_addr_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_DST_ADDR, val_len_ptr);
}

static inline uint8_t mipc_internal_eipspi_cmd_get_proto(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_PROTO, def_val);
}

static inline uint8_t mipc_internal_eipspi_cmd_get_mode(mipc_msg_t *msg_ptr, uint8_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint8_t)mipc_msg_get_val_uint8(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_MODE, def_val);
}

static inline uint32_t mipc_internal_eipspi_cmd_get_min_spi(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_MIN_SPI, def_val);
}

static inline uint32_t mipc_internal_eipspi_cmd_get_max_spi(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_MAX_SPI, def_val);
}

static inline uint32_t mipc_internal_eipspi_cmd_get_spi(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_CMD_T_SPI, def_val);
}

static inline mipc_msg_api_result_enum mipc_internal_eipspi_rsp_add_transid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_RSP_T_TRANSID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eipspi_rsp_add_action(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_EIPSPI_RSP_T_ACTION, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_eipspi_rsp_add_spi(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_INTERNAL_EIPSPI_RSP_T_SPI, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_sms_format_const_enum mipc_sms_new_sms_cmd_get_format(mipc_msg_t *msg_ptr, mipc_sms_format_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_sms_format_const_enum)mipc_msg_get_val_uint8(msg_ptr, MIPC_SMS_NEW_SMS_CMD_T_FORMAT, def_val);
}

static inline uint16_t mipc_sms_new_sms_cmd_get_pdu_count(mipc_msg_t *msg_ptr, uint16_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint16_t)mipc_msg_get_val_uint16(msg_ptr, MIPC_SMS_NEW_SMS_CMD_T_PDU_COUNT, def_val);
}

static inline mipc_sms_pdu_struct4* mipc_sms_new_sms_cmd_get_pdu_list(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (mipc_sms_pdu_struct4*)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_SMS_CMD_T_PDU_LIST, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sms_new_sms_rsp_add_new_sms_ack(mipc_msg_t *msg_ptr, enum mipc_new_sms_ack_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_NEW_SMS_RSP_T_NEW_SMS_ACK, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_new_sms_rsp_add_cause(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_NEW_SMS_RSP_T_CAUSE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline void * mipc_sms_new_status_report_cmd_get_pdu(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (void *)mipc_msg_get_val_ptr(msg_ptr, MIPC_SMS_NEW_STATUS_REPORT_CMD_T_PDU, val_len_ptr);
}

static inline mipc_msg_api_result_enum mipc_sms_new_status_report_rsp_add_ack_type(mipc_msg_t *msg_ptr, enum mipc_new_sms_ack_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_NEW_STATUS_REPORT_RSP_T_ACK_TYPE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_sms_new_status_report_rsp_add_cause(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_SMS_NEW_STATUS_REPORT_RSP_T_CAUSE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline uint32_t mipc_call_approve_incoming_cmd_get_callid(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_CMD_T_CALLID, def_val);
}

static inline char * mipc_call_approve_incoming_cmd_get_number(mipc_msg_t *msg_ptr, uint16_t *val_len_ptr)
{
    if (!msg_ptr) { if (val_len_ptr) {*val_len_ptr = 0;} return 0;}
    return (char *)mipc_msg_get_val_ptr(msg_ptr, MIPC_CALL_APPROVE_INCOMING_CMD_T_NUMBER, val_len_ptr);
}

static inline uint32_t mipc_call_approve_incoming_cmd_get_toa(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_CMD_T_TOA, def_val);
}

static inline uint32_t mipc_call_approve_incoming_cmd_get_seq_no(mipc_msg_t *msg_ptr, uint32_t def_val)
{
    if (!msg_ptr) return def_val;
    return (uint32_t)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_CMD_T_SEQ_NO, def_val);
}

static inline mipc_call_mode_const_enum mipc_call_approve_incoming_cmd_get_mode(mipc_msg_t *msg_ptr, mipc_call_mode_const_enum def_val)
{
    if (!msg_ptr) return def_val;
    return (mipc_call_mode_const_enum)mipc_msg_get_val_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_CMD_T_MODE, def_val);
}

static inline mipc_msg_api_result_enum mipc_call_approve_incoming_rsp_add_is_approve(mipc_msg_t *msg_ptr, enum mipc_boolean_const_enum value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_CALL_APPROVE_INCOMING_RSP_T_IS_APPROVE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_approve_incoming_rsp_add_cause(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_RSP_T_CAUSE, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_approve_incoming_rsp_add_callid(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_RSP_T_CALLID, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_call_approve_incoming_rsp_add_seq_no(mipc_msg_t *msg_ptr, uint32_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint32(msg_ptr, MIPC_CALL_APPROVE_INCOMING_RSP_T_SEQ_NO, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_inject_tst_ntf_add_module(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  32) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_INJECT_TST_NTF_T_MODULE, len, (const void *)value);
}

static inline mipc_msg_api_result_enum mipc_internal_inject_tst_ntf_add_index(mipc_msg_t *msg_ptr, uint8_t value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    mipc_msg_add_tlv_uint8(msg_ptr, MIPC_INTERNAL_INJECT_TST_NTF_T_INDEX, value);
    return MIPC_MSG_API_RESULT_SUCCESS;
}

static inline mipc_msg_api_result_enum mipc_internal_inject_tst_ntf_add_inject_string(mipc_msg_t *msg_ptr, uint16_t len, char  *value)
{
    if (!msg_ptr) return MIPC_MSG_API_RESULT_FAIL;
    if (!value) return MIPC_MSG_API_RESULT_FAIL;
    if (len >  128) return MIPC_MSG_API_RESULT_FAIL;
    return mipc_msg_add_tlv(msg_ptr, MIPC_INTERNAL_INJECT_TST_NTF_T_INJECT_STRING, len, (const void *)value);
}


#endif /* __MIPC_MSG_TLV_API_H__ */
