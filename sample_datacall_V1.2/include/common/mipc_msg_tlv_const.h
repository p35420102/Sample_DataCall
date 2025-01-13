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

#ifndef __MIPC_MSG_TLV_CONST_H__
#define __MIPC_MSG_TLV_CONST_H__

#include "platform.h"

enum MIPC_MSG_enum {
    MIPC_MSG_NONE = 0,
    MIPC_REQ_BEGIN                                          = 0,

    MIPC_SYS_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0,
    /* get modem information */
    MIPC_SYS_GET_INFO_REQ                                   = MIPC_SYS_REQ_BEGIN + 1,
    /* the result for GET_INFO_REQ */
    MIPC_SYS_GET_INFO_CNF                                   = MIPC_SYS_REQ_BEGIN + 2,
    /* send AT command */
    MIPC_SYS_AT_REQ                                         = MIPC_SYS_REQ_BEGIN + 3,
    /* the result for AT_REQ */
    MIPC_SYS_AT_CNF                                         = MIPC_SYS_REQ_BEGIN + 4,
    /* reboot the whole device */
    MIPC_SYS_REBOOT_REQ                                     = MIPC_SYS_REQ_BEGIN + 5,
    /* the result for REBOOT_REQ */
    MIPC_SYS_REBOOT_CNF                                     = MIPC_SYS_REQ_BEGIN + 6,
    MIPC_SYS_GET_MAPPING_REQ                                = MIPC_SYS_REQ_BEGIN + 7,
    /* the result for GET_MAPPING_REQ */
    MIPC_SYS_GET_MAPPING_CNF                                = MIPC_SYS_REQ_BEGIN + 8,
    /* set SIM mapping */
    MIPC_SYS_SET_MAPPING_REQ                                = MIPC_SYS_REQ_BEGIN + 9,
    /* the result for SET_MAPPING_REQ */
    MIPC_SYS_SET_MAPPING_CNF                                = MIPC_SYS_REQ_BEGIN + 10,
    /* get thermal sensor num */
    MIPC_SYS_GET_THERMAL_SENSOR_NUM_REQ                     = MIPC_SYS_REQ_BEGIN + 15,
    /* the result for GET_THERMAL_SENSOR_NUM_REQ */
    MIPC_SYS_GET_THERMAL_SENSOR_NUM_CNF                     = MIPC_SYS_REQ_BEGIN + 16,
    /* get a thermal sensor info */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_REQ                    = MIPC_SYS_REQ_BEGIN + 17,
    /* the result for GET_THERMAL_SENSOR_INFO_REQ */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF                    = MIPC_SYS_REQ_BEGIN + 18,
    /* set thermal alarm */
    MIPC_SYS_SET_THERMAL_SENSOR_REQ                         = MIPC_SYS_REQ_BEGIN + 19,
    /* the result for SET_THERMAL_SENSOR_REQ */
    MIPC_SYS_SET_THERMAL_SENSOR_CNF                         = MIPC_SYS_REQ_BEGIN + 20,
    /* get thermal sensor current state */
    MIPC_SYS_GET_THERMAL_SENSOR_REQ                         = MIPC_SYS_REQ_BEGIN + 21,
    /* the result for GET_THERMAL_SENSOR_REQ */
    MIPC_SYS_GET_THERMAL_SENSOR_CNF                         = MIPC_SYS_REQ_BEGIN + 22,
    /* get thermal actuator num */
    MIPC_SYS_GET_THERMAL_ACTUATOR_NUM_REQ                   = MIPC_SYS_REQ_BEGIN + 23,
    /* the result for GET_THERMAL_ACTUATOR_NUM_REQ */
    MIPC_SYS_GET_THERMAL_ACTUATOR_NUM_CNF                   = MIPC_SYS_REQ_BEGIN + 24,
    /* set thermal actuator */
    MIPC_SYS_SET_THERMAL_ACTUATOR_REQ                       = MIPC_SYS_REQ_BEGIN + 25,
    /* the result for SET_THERMAL_ACTUATOR_REQ */
    MIPC_SYS_SET_THERMAL_ACTUATOR_CNF                       = MIPC_SYS_REQ_BEGIN + 26,
    /* get thermal actuator */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_REQ                  = MIPC_SYS_REQ_BEGIN + 27,
    /* the result for GET_THERMAL_ACTUATOR_INFO_REQ */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF                  = MIPC_SYS_REQ_BEGIN + 28,
    /* set modem configuration request */
    MIPC_SYS_SET_CONFIG_REQ                                 = MIPC_SYS_REQ_BEGIN + 29,
    /* set modem configuration response */
    MIPC_SYS_SET_CONFIG_CNF                                 = MIPC_SYS_REQ_BEGIN + 30,
    /* get modem configuration request */
    MIPC_SYS_GET_CONFIG_REQ                                 = MIPC_SYS_REQ_BEGIN + 31,
    /* get modem configuration response */
    MIPC_SYS_GET_CONFIG_CNF                                 = MIPC_SYS_REQ_BEGIN + 32,
    /* register configuration indication */
    MIPC_SYS_REG_CONFIG_REQ                                 = MIPC_SYS_REQ_BEGIN + 33,
    /* register configuration indication response */
    MIPC_SYS_REG_CONFIG_CNF                                 = MIPC_SYS_REQ_BEGIN + 34,
    /* enable or disable ADPCLK report */
    MIPC_SYS_SET_ADPCLK_REQ                                 = MIPC_SYS_REQ_BEGIN + 35,
    /*  */
    MIPC_SYS_SET_ADPCLK_CNF                                 = MIPC_SYS_REQ_BEGIN + 36,
    /* get current ADPCLK report */
    MIPC_SYS_GET_ADPCLK_REQ                                 = MIPC_SYS_REQ_BEGIN + 37,
    /*  */
    MIPC_SYS_GET_ADPCLK_CNF                                 = MIPC_SYS_REQ_BEGIN + 38,
    /*  */
    MIPC_SYS_SET_MD_LOG_MODE_REQ                            = MIPC_SYS_REQ_BEGIN + 39,
    /*  */
    MIPC_SYS_SET_MD_LOG_MODE_CNF                            = MIPC_SYS_REQ_BEGIN + 40,
    /*  */
    MIPC_SYS_GET_MD_LOG_MODE_REQ                            = MIPC_SYS_REQ_BEGIN + 41,
    /*  */
    MIPC_SYS_GET_MD_LOG_MODE_CNF                            = MIPC_SYS_REQ_BEGIN + 42,
    /*  */
    MIPC_SYS_SET_MD_LOG_LEVEL_REQ                           = MIPC_SYS_REQ_BEGIN + 43,
    /*  */
    MIPC_SYS_SET_MD_LOG_LEVEL_CNF                           = MIPC_SYS_REQ_BEGIN + 44,
    /*  */
    MIPC_SYS_GET_MD_LOG_LEVEL_REQ                           = MIPC_SYS_REQ_BEGIN + 45,
    /*  */
    MIPC_SYS_GET_MD_LOG_LEVEL_CNF                           = MIPC_SYS_REQ_BEGIN + 46,
    /*  */
    MIPC_SYS_SET_MD_LOG_LOCATION_REQ                        = MIPC_SYS_REQ_BEGIN + 47,
    /*  */
    MIPC_SYS_SET_MD_LOG_LOCATION_CNF                        = MIPC_SYS_REQ_BEGIN + 48,
    /*  */
    MIPC_SYS_GET_MD_LOG_LOCATION_REQ                        = MIPC_SYS_REQ_BEGIN + 49,
    /*  */
    MIPC_SYS_GET_MD_LOG_LOCATION_CNF                        = MIPC_SYS_REQ_BEGIN + 50,
    /*  */
    MIPC_SYS_WRITE_NVRAM_REQ                                = MIPC_SYS_REQ_BEGIN + 51,
    /*  */
    MIPC_SYS_WRITE_NVRAM_CNF                                = MIPC_SYS_REQ_BEGIN + 52,
    /*  */
    MIPC_SYS_READ_NVRAM_REQ                                 = MIPC_SYS_REQ_BEGIN + 53,
    /*  */
    MIPC_SYS_READ_NVRAM_CNF                                 = MIPC_SYS_REQ_BEGIN + 54,
    /*  */
    MIPC_SYS_AUTH_REQ                                       = MIPC_SYS_REQ_BEGIN + 55,
    /*  */
    MIPC_SYS_AUTH_CNF                                       = MIPC_SYS_REQ_BEGIN + 56,
    /*  */
    MIPC_SYS_SET_DAT_REQ                                    = MIPC_SYS_REQ_BEGIN + 57,
    /*  */
    MIPC_SYS_SET_DAT_CNF                                    = MIPC_SYS_REQ_BEGIN + 58,
    /*  */
    MIPC_SYS_GET_DAT_REQ                                    = MIPC_SYS_REQ_BEGIN + 59,
    /*  */
    MIPC_SYS_GET_DAT_CNF                                    = MIPC_SYS_REQ_BEGIN + 60,
    /*  */
    MIPC_SYS_MCF_REQ                                        = MIPC_SYS_REQ_BEGIN + 61,
    /*  */
    MIPC_SYS_MCF_CNF                                        = MIPC_SYS_REQ_BEGIN + 62,
    /* set FCC lock mode (need to auth first) */
    MIPC_SYS_SET_FCC_LOCK_REQ                               = MIPC_SYS_REQ_BEGIN + 63,
    /* the result for SET_FCC_LOCK_REQ */
    MIPC_SYS_SET_FCC_LOCK_CNF                               = MIPC_SYS_REQ_BEGIN + 64,
    /* set system time, the time given MUST be UTC time. */
    MIPC_SYS_SET_TIME_REQ                                   = MIPC_SYS_REQ_BEGIN + 65,
    /* the result for SET_TIME_REQ */
    MIPC_SYS_SET_TIME_CNF                                   = MIPC_SYS_REQ_BEGIN + 66,
    /* get system time expressed in UTC */
    MIPC_SYS_GET_TIME_REQ                                   = MIPC_SYS_REQ_BEGIN + 67,
    /* the result for GET_TIME_REQ */
    MIPC_SYS_GET_TIME_CNF                                   = MIPC_SYS_REQ_BEGIN + 68,
    /*  */
    MIPC_SYS_SET_SAR_REQ                                    = MIPC_SYS_REQ_BEGIN + 69,
    /*  */
    MIPC_SYS_SET_SAR_CNF                                    = MIPC_SYS_REQ_BEGIN + 70,
    /*  */
    MIPC_SYS_GET_SAR_REQ                                    = MIPC_SYS_REQ_BEGIN + 71,
    /*  */
    MIPC_SYS_GET_SAR_CNF                                    = MIPC_SYS_REQ_BEGIN + 72,
    /* set power saving mode */
    MIPC_SYS_SET_POWER_SAVING_REQ                           = MIPC_SYS_REQ_BEGIN + 73,
    /* the result for SET_POWER_SAVING_REQ */
    MIPC_SYS_SET_POWER_SAVING_CNF                           = MIPC_SYS_REQ_BEGIN + 74,
    /* <trigger DEVICE to start or stop the statistics of some connection parameters> or  <read DEVICE statitic info>; cant carry START&STOP in one MIPC_REQ; execute priority: STOP > READ > PERIOD > START; */
    MIPC_SYS_CONNECTIVITY_STATISTICS_REQ                    = MIPC_SYS_REQ_BEGIN + 75,
    /* rsp of CONNECTIVITY_STATISTICS_REQ */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF                    = MIPC_SYS_REQ_BEGIN + 76,
    /* query device sbp info */
    MIPC_SYS_QUERY_SBP_REQ                                  = MIPC_SYS_REQ_BEGIN + 77,
    /* rsp of QUERY_SBP_REQ */
    MIPC_SYS_QUERY_SBP_CNF                                  = MIPC_SYS_REQ_BEGIN + 78,
    /* to set tx ind interval */
    MIPC_SYS_SET_TX_IND_INTERVAL_REQ                        = MIPC_SYS_REQ_BEGIN + 79,
    /* the response of set tx ind interval */
    MIPC_SYS_SET_TX_IND_INTERVAL_CNF                        = MIPC_SYS_REQ_BEGIN + 80,
    /* set Location Info */
    MIPC_SYS_SET_GEO_LOCATION_REQ                           = MIPC_SYS_REQ_BEGIN + 81,
    /* response of SET_GEO_LOCATION_REQ */
    MIPC_SYS_SET_GEO_LOCATION_CNF                           = MIPC_SYS_REQ_BEGIN + 82,
    /* This command is used to infrom modem the reboot mode */
    MIPC_SYS_SILENT_REBOOT_REQ                              = MIPC_SYS_REQ_BEGIN + 87,
    /* response of SILENT_REBOOT_REQ */
    MIPC_SYS_SILENT_REBOOT_CNF                              = MIPC_SYS_REQ_BEGIN + 88,
    MIPC_SYS_REQ_END                                        = MIPC_SYS_REQ_BEGIN + 0xFF,

    MIPC_APN_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0x100,
    /* set LTE initial attach APN profile */
    MIPC_APN_SET_IA_REQ                                     = MIPC_APN_REQ_BEGIN + 1,
    /* the result for SET_IA_REQ */
    MIPC_APN_SET_IA_CNF                                     = MIPC_APN_REQ_BEGIN + 2,
    /* get LTE initial attach profile */
    MIPC_APN_GET_IA_REQ                                     = MIPC_APN_REQ_BEGIN + 3,
    /* the result for GET_IA_REQ */
    MIPC_APN_GET_IA_CNF                                     = MIPC_APN_REQ_BEGIN + 4,
    /* add an APN profile */
    MIPC_APN_ADD_PROFILE_REQ                                = MIPC_APN_REQ_BEGIN + 5,
    /* the result for ADD_PROFILE_REQ */
    MIPC_APN_ADD_PROFILE_CNF                                = MIPC_APN_REQ_BEGIN + 6,
    /* list current APN profiles */
    MIPC_APN_LIST_PROFILE_REQ                               = MIPC_APN_REQ_BEGIN + 7,
    /* the result for LIST_PROFILE_REQ */
    MIPC_APN_LIST_PROFILE_CNF                               = MIPC_APN_REQ_BEGIN + 8,
    /* delete an APN profile */
    MIPC_APN_DEL_PROFILE_REQ                                = MIPC_APN_REQ_BEGIN + 9,
    /* the result for DEL_PROFILE_REQ */
    MIPC_APN_DEL_PROFILE_CNF                                = MIPC_APN_REQ_BEGIN + 10,
    /* indicate host/ap will set apn profile or not */
    MIPC_APN_SET_PROFILE_STATUS_REQ                         = MIPC_APN_REQ_BEGIN + 11,
    /* the response of SET_PROFILE_STATUS_REQ */
    MIPC_APN_SET_PROFILE_STATUS_CNF                         = MIPC_APN_REQ_BEGIN + 12,
    /* list modem APN profiles and state */
    MIPC_APN_LIST_MD_PROFILE_REQ                            = MIPC_APN_REQ_BEGIN + 13,
    /* the result for LIST_PROFILE_REQ */
    MIPC_APN_LIST_MD_PROFILE_CNF                            = MIPC_APN_REQ_BEGIN + 14,
    /* to SET Verizon specific APN, it is different APN profile with MIPC_APN_ADD_PROFILE_REQ */
    MIPC_APN_SET_VZW_APN_REQ                                = MIPC_APN_REQ_BEGIN + 15,
    /* the response of SET_VZW_APN_REQ */
    MIPC_APN_SET_VZW_APN_CNF                                = MIPC_APN_REQ_BEGIN + 16,
    /* to SET Verizon specific APN timer, it is different APN profile with MIPC_APN_ADD_PROFILE_REQ */
    MIPC_APN_SET_VZW_APN_TIMER_REQ                          = MIPC_APN_REQ_BEGIN + 17,
    /* the response of SET_VZW_APN_REQ */
    MIPC_APN_SET_VZW_APN_TIMER_CNF                          = MIPC_APN_REQ_BEGIN + 18,
    MIPC_APN_REQ_END                                        = MIPC_APN_REQ_BEGIN + 0xFF,

    MIPC_DATA_REQ_BEGIN                                     = MIPC_REQ_BEGIN + 0x200,
    /* activate a data call */
    MIPC_DATA_ACT_CALL_REQ                                  = MIPC_DATA_REQ_BEGIN + 1,
    /* the result for ACT_CALL_REQ */
    MIPC_DATA_ACT_CALL_CNF                                  = MIPC_DATA_REQ_BEGIN + 2,
    /* de-activate the data call */
    MIPC_DATA_DEACT_CALL_REQ                                = MIPC_DATA_REQ_BEGIN + 3,
    /* the result for DEACT_CALL_REQ */
    MIPC_DATA_DEACT_CALL_CNF                                = MIPC_DATA_REQ_BEGIN + 4,
    /* get the data call information */
    MIPC_DATA_GET_CALL_REQ                                  = MIPC_DATA_REQ_BEGIN + 5,
    /* the result for GET_CALL_REQ */
    MIPC_DATA_GET_CALL_CNF                                  = MIPC_DATA_REQ_BEGIN + 6,
    /* set packet filter white list (not matched packets will be dropped) */
    MIPC_DATA_SET_PACKET_FILTER_REQ                         = MIPC_DATA_REQ_BEGIN + 7,
    /* the result for SET_PACKET_FILTER_REQ */
    MIPC_DATA_SET_PACKET_FILTER_CNF                         = MIPC_DATA_REQ_BEGIN + 8,
    /* get current packet filter setting */
    MIPC_DATA_GET_PACKET_FILTER_REQ                         = MIPC_DATA_REQ_BEGIN + 9,
    /* the result for GET_PACKET_FILTER_REQ */
    MIPC_DATA_GET_PACKET_FILTER_CNF                         = MIPC_DATA_REQ_BEGIN + 10,
    /* get operator-specific PCO */
    MIPC_DATA_GET_PCO_REQ                                   = MIPC_DATA_REQ_BEGIN + 11,
    /* the result for GET_PCO_REQ */
    MIPC_DATA_GET_PCO_CNF                                   = MIPC_DATA_REQ_BEGIN + 12,
    /* set specific sim slot data allow */
    MIPC_DATA_SET_DATA_ALLOW_REQ                            = MIPC_DATA_REQ_BEGIN + 13,
    /* the response of SET_DATA_ALLOW_REQ */
    MIPC_DATA_SET_DATA_ALLOW_CNF                            = MIPC_DATA_REQ_BEGIN + 14,
    /* get data call list in modem */
    MIPC_DATA_GET_MD_DATA_CALL_LIST_REQ                     = MIPC_DATA_REQ_BEGIN + 15,
    /* response of get data call list in modem */
    MIPC_DATA_GET_MD_DATA_CALL_LIST_CNF                     = MIPC_DATA_REQ_BEGIN + 16,
    /* set data config, including mobile data, data roaming, VoLTE, ims_test_mode, data_domestic_roaming, data_international_roaming */
    MIPC_DATA_SET_CONFIG_REQ                                = MIPC_DATA_REQ_BEGIN + 17,
    /* the response of SET_CONFIG_REQ */
    MIPC_DATA_SET_CONFIG_CNF                                = MIPC_DATA_REQ_BEGIN + 18,
    /* to get data config, including mobile data, data roaming, VoLTE, ims_test_mode, data_domestic_roaming, data_international_roaming */
    MIPC_DATA_GET_CONFIG_REQ                                = MIPC_DATA_REQ_BEGIN + 19,
    /* the response of get data config, including mobile data, data roaming, VoLTE, ims_test_mode, data_domestic_roaming, data_international_roaming */
    MIPC_DATA_GET_CONFIG_CNF                                = MIPC_DATA_REQ_BEGIN + 20,
    /* abort the data call before get the response of ACT CALL REQ */
    MIPC_DATA_ABORT_CALL_REQ                                = MIPC_DATA_REQ_BEGIN + 21,
    /* the response of ABORT_CALL_REQ */
    MIPC_DATA_ABORT_CALL_CNF                                = MIPC_DATA_REQ_BEGIN + 22,
    /* get related info of data call connection, such as established time, end time, reject cause, this MIPC REQ must include at least one of APN or ID, if call is connected, ID is suggested, if call is not connected, APN is suggested */
    MIPC_DATA_GET_CALL_INFO_REQ                             = MIPC_DATA_REQ_BEGIN + 23,
    /* the response of GET_CALL_INFO_REQ */
    MIPC_DATA_GET_CALL_INFO_CNF                             = MIPC_DATA_REQ_BEGIN + 24,
    /* get range of supported pdp cid */
    MIPC_DATA_GET_PDP_CID_REQ                               = MIPC_DATA_REQ_BEGIN + 25,
    /* response of GET_PDP_CID_REQ */
    MIPC_DATA_GET_PDP_CID_CNF                               = MIPC_DATA_REQ_BEGIN + 26,
    /* commond is used to query or set retry timer */
    MIPC_DATA_RETRY_TIMER_REQ                               = MIPC_DATA_REQ_BEGIN + 27,
    /* response of RETRY_TIMER_CNF */
    MIPC_DATA_RETRY_TIMER_CNF                               = MIPC_DATA_REQ_BEGIN + 28,
    /* commond is used to get the quality of service parameters of the established PDP context */
    MIPC_DATA_GET_QOS_REQ                                   = MIPC_DATA_REQ_BEGIN + 33,
    /* response of GET_QOS_REQ */
    MIPC_DATA_GET_QOS_CNF                                   = MIPC_DATA_REQ_BEGIN + 34,
    /* commond is used to start or stop keep alive */
    MIPC_DATA_KEEPALIVE_REQ                                 = MIPC_DATA_REQ_BEGIN + 41,
    /* response of KEEPALIVE_REQ */
    MIPC_DATA_KEEPALIVE_CNF                                 = MIPC_DATA_REQ_BEGIN + 42,
    /* commond is used to get the quality of service parameters of the established PDU session */
    MIPC_DATA_GET_5GQOS_REQ                                 = MIPC_DATA_REQ_BEGIN + 45,
    /* response of GET_5GQOS_REQ */
    MIPC_DATA_GET_5GQOS_CNF                                 = MIPC_DATA_REQ_BEGIN + 46,
    MIPC_DATA_REQ_END                                       = MIPC_DATA_REQ_BEGIN + 0xFF,

    MIPC_INTERNAL_REQ_BEGIN                                 = MIPC_REQ_BEGIN + 0x300,
    /*  */
    MIPC_INTERNAL_OPEN_REQ                                  = MIPC_INTERNAL_REQ_BEGIN + 1,
    /*  */
    MIPC_INTERNAL_OPEN_CNF                                  = MIPC_INTERNAL_REQ_BEGIN + 2,
    /*  */
    MIPC_INTERNAL_CLOSE_REQ                                 = MIPC_INTERNAL_REQ_BEGIN + 3,
    /*  */
    MIPC_INTERNAL_CLOSE_CNF                                 = MIPC_INTERNAL_REQ_BEGIN + 4,
    /*  */
    MIPC_INTERNAL_TEST_REQ                                  = MIPC_INTERNAL_REQ_BEGIN + 5,
    /*  */
    MIPC_INTERNAL_TEST_CNF                                  = MIPC_INTERNAL_REQ_BEGIN + 6,
    /*  */
    MIPC_INTERNAL_REGISTER_IND_REQ                          = MIPC_INTERNAL_REQ_BEGIN + 7,
    /*  */
    MIPC_INTERNAL_REGISTER_IND_CNF                          = MIPC_INTERNAL_REQ_BEGIN + 8,
    /*  */
    MIPC_INTERNAL_UNREGISTER_IND_REQ                        = MIPC_INTERNAL_REQ_BEGIN + 9,
    /*  */
    MIPC_INTERNAL_UNREGISTER_IND_CNF                        = MIPC_INTERNAL_REQ_BEGIN + 10,
    /*  */
    MIPC_INTERNAL_REGISTER_CMD_REQ                          = MIPC_INTERNAL_REQ_BEGIN + 11,
    /*  */
    MIPC_INTERNAL_REGISTER_CMD_CNF                          = MIPC_INTERNAL_REQ_BEGIN + 12,
    /*  */
    MIPC_INTERNAL_UNREGISTER_CMD_REQ                        = MIPC_INTERNAL_REQ_BEGIN + 13,
    /*  */
    MIPC_INTERNAL_UNREGISTER_CMD_CNF                        = MIPC_INTERNAL_REQ_BEGIN + 14,
    /*  */
    MIPC_INTERNAL_SET_FILTER_REQ                            = MIPC_INTERNAL_REQ_BEGIN + 15,
    /*  */
    MIPC_INTERNAL_SET_FILTER_CNF                            = MIPC_INTERNAL_REQ_BEGIN + 16,
    /*  */
    MIPC_INTERNAL_RESET_FILTER_REQ                          = MIPC_INTERNAL_REQ_BEGIN + 17,
    /*  */
    MIPC_INTERNAL_RESET_FILTER_CNF                          = MIPC_INTERNAL_REQ_BEGIN + 18,
    /*  */
    MIPC_INTERNAL_EIF_REQ                                   = MIPC_INTERNAL_REQ_BEGIN + 19,
    /*  */
    MIPC_INTERNAL_EIF_CNF                                   = MIPC_INTERNAL_REQ_BEGIN + 20,
    MIPC_INTERNAL_REQ_END                                   = MIPC_INTERNAL_REQ_BEGIN + 0xFF,

    MIPC_NW_REQ_BEGIN                                       = MIPC_REQ_BEGIN + 0x400,
    /* get radio on/off status */
    MIPC_NW_GET_RADIO_STATE_REQ                             = MIPC_NW_REQ_BEGIN + 1,
    /* the result for GET_RADIO_STATE_REQ */
    MIPC_NW_GET_RADIO_STATE_CNF                             = MIPC_NW_REQ_BEGIN + 2,
    /* turn SW radio on or off */
    MIPC_NW_SET_RADIO_STATE_REQ                             = MIPC_NW_REQ_BEGIN + 3,
    /* the result for SET_RADIO_STATE_REQ */
    MIPC_NW_SET_RADIO_STATE_CNF                             = MIPC_NW_REQ_BEGIN + 4,
    /* set registration mode */
    MIPC_NW_SET_REGISTER_STATE_REQ                          = MIPC_NW_REQ_BEGIN + 5,
    /* the result for SET_REGISTER_STATE_REQ */
    MIPC_NW_SET_REGISTER_STATE_CNF                          = MIPC_NW_REQ_BEGIN + 6,
    /* get current network registration status. */
    MIPC_NW_GET_REGISTER_STATE_REQ                          = MIPC_NW_REQ_BEGIN + 7,
    /* the result for GET_REGISTER_STATE_REQ */
    MIPC_NW_GET_REGISTER_STATE_CNF                          = MIPC_NW_REQ_BEGIN + 8,
    /* Get all the available operators in the network. */
    MIPC_NW_GET_PLMN_LIST_REQ                               = MIPC_NW_REQ_BEGIN + 9,
    /* The result for GET_PLMN_LIST_REQ */
    MIPC_NW_GET_PLMN_LIST_CNF                               = MIPC_NW_REQ_BEGIN + 10,
    /* do PS attach of detach */
    MIPC_NW_SET_PS_REQ                                      = MIPC_NW_REQ_BEGIN + 11,
    /* the result for SET_PS_REQ */
    MIPC_NW_SET_PS_CNF                                      = MIPC_NW_REQ_BEGIN + 12,
    /* get current PS attach status */
    MIPC_NW_GET_PS_REQ                                      = MIPC_NW_REQ_BEGIN + 13,
    /* the result for GET_PS_REQ */
    MIPC_NW_GET_PS_CNF                                      = MIPC_NW_REQ_BEGIN + 14,
    /* set singal report interval/threshold */
    MIPC_NW_SET_SIGNAL_REQ                                  = MIPC_NW_REQ_BEGIN + 15,
    /* the result for SET_SIGNAL_REQ */
    MIPC_NW_SET_SIGNAL_CNF                                  = MIPC_NW_REQ_BEGIN + 16,
    /* get current signal status */
    MIPC_NW_GET_SIGNAL_REQ                                  = MIPC_NW_REQ_BEGIN + 17,
    /* the result for GET_SIGNAL_REQ */
    MIPC_NW_GET_SIGNAL_CNF                                  = MIPC_NW_REQ_BEGIN + 18,
    /* get preferred PLMN list */
    MIPC_NW_GET_PREFERRED_PROVIDER_REQ                      = MIPC_NW_REQ_BEGIN + 19,
    /* the result for GET_PREFERRED_PROVIDER_REQ */
    MIPC_NW_GET_PREFERRED_PROVIDER_CNF                      = MIPC_NW_REQ_BEGIN + 20,
    /* set preferred PLMN list */
    MIPC_NW_SET_PREFERRED_PROVIDER_REQ                      = MIPC_NW_REQ_BEGIN + 21,
    /* the result for SET_PREFERRED_PROVIDER_REQ */
    MIPC_NW_SET_PREFERRED_PROVIDER_CNF                      = MIPC_NW_REQ_BEGIN + 22,
    /* set home PLMN */
    MIPC_NW_SET_HOME_PROVIDER_REQ                           = MIPC_NW_REQ_BEGIN + 23,
    /* the result for SET_HOME_PROVIDER_REQ */
    MIPC_NW_SET_HOME_PROVIDER_CNF                           = MIPC_NW_REQ_BEGIN + 24,
    /* get current home PLMN */
    MIPC_NW_GET_HOME_PROVIDER_REQ                           = MIPC_NW_REQ_BEGIN + 25,
    /* the result for GET_HOME_PROVIDER_REQ */
    MIPC_NW_GET_HOME_PROVIDER_CNF                           = MIPC_NW_REQ_BEGIN + 26,
    /* get current LTE initial attach status */
    MIPC_NW_GET_IA_STATUS_REQ                               = MIPC_NW_REQ_BEGIN + 27,
    /* the result for GET_IA_STATUS_REQ */
    MIPC_NW_GET_IA_STATUS_CNF                               = MIPC_NW_REQ_BEGIN + 28,
    /* get NITZ information(UTC time and timezone). */
    MIPC_NW_GET_NITZ_REQ                                    = MIPC_NW_REQ_BEGIN + 29,
    /* the result for GET_NITZ_REQ */
    MIPC_NW_GET_NITZ_CNF                                    = MIPC_NW_REQ_BEGIN + 30,
    /* enable/disable fast dormancy */
    MIPC_NW_SET_IDLE_HINT_REQ                               = MIPC_NW_REQ_BEGIN + 31,
    /* the result for SET_IDLE_HINT_REQ */
    MIPC_NW_SET_IDLE_HINT_CNF                               = MIPC_NW_REQ_BEGIN + 32,
    /* get current fast dormancy status */
    MIPC_NW_GET_IDLE_HINT_REQ                               = MIPC_NW_REQ_BEGIN + 33,
    /* the result for GET_IDLE_HINT_REQ */
    MIPC_NW_GET_IDLE_HINT_CNF                               = MIPC_NW_REQ_BEGIN + 34,
    /* get current base station information */
    MIPC_NW_GET_BASE_STATIONS_REQ                           = MIPC_NW_REQ_BEGIN + 35,
    /* the result for GET_BASE_STATIONS_REQ */
    MIPC_NW_GET_BASE_STATIONS_CNF                           = MIPC_NW_REQ_BEGIN + 36,
    /* get location information */
    MIPC_NW_GET_LOCATION_INFO_REQ                           = MIPC_NW_REQ_BEGIN + 37,
    /* the result for GET_LOCATION_INFO_REQ */
    MIPC_NW_GET_LOCATION_INFO_CNF                           = MIPC_NW_REQ_BEGIN + 38,
    /* set RAT mode(0: GSM; 1: UMTS; 2: GSM+UMTS; 3: LTE; 4: GSM+LTE; 5: UMTS+LTE; 6: GSM+UMTS+LTE; 7: C2K; 8: GSM+C2K; 9: UMTS+C2K; 10: GSM+UMTS+C2K; ......) */
    MIPC_NW_SET_RAT_REQ                                     = MIPC_NW_REQ_BEGIN + 39,
    /* the result for SET_RAT_REQ */
    MIPC_NW_SET_RAT_CNF                                     = MIPC_NW_REQ_BEGIN + 40,
    /* tranlsate plmn id to network name */
    MIPC_NW_GET_PROVIDER_NAME_REQ                           = MIPC_NW_REQ_BEGIN + 41,
    /* the result for GET_PROVIDER_NAME_REQ */
    MIPC_NW_GET_PROVIDER_NAME_CNF                           = MIPC_NW_REQ_BEGIN + 42,
    /* Get modem current rat info. */
    MIPC_NW_GET_RAT_REQ                                     = MIPC_NW_REQ_BEGIN + 43,
    /* Get modem current rat info. */
    MIPC_NW_GET_RAT_CNF                                     = MIPC_NW_REQ_BEGIN + 44,
    /* Enable or disable 5G. */
    MIPC_NW_SET_NR_REQ                                      = MIPC_NW_REQ_BEGIN + 45,
    /* Enable or disable 5G result. */
    MIPC_NW_SET_NR_CNF                                      = MIPC_NW_REQ_BEGIN + 46,
    /* get current CS attach status */
    MIPC_NW_GET_CS_REQ                                      = MIPC_NW_REQ_BEGIN + 47,
    /* get current CS attach status */
    MIPC_NW_GET_CS_CNF                                      = MIPC_NW_REQ_BEGIN + 48,
    /* Get available band mode. */
    MIPC_NW_GET_BAND_MODE_REQ                               = MIPC_NW_REQ_BEGIN + 49,
    /* Get available band mode information. */
    MIPC_NW_GET_BAND_MODE_CNF                               = MIPC_NW_REQ_BEGIN + 50,
    /* Set band mode information. */
    MIPC_NW_SET_BAND_MODE_REQ                               = MIPC_NW_REQ_BEGIN + 51,
    /* Set band mode information result. */
    MIPC_NW_SET_BAND_MODE_CNF                               = MIPC_NW_REQ_BEGIN + 52,
    /* Set channel lock parameters. */
    MIPC_NW_SET_CHANNEL_LOCK_REQ                            = MIPC_NW_REQ_BEGIN + 53,
    /* Set channel lock parameters result. */
    MIPC_NW_SET_CHANNEL_LOCK_CNF                            = MIPC_NW_REQ_BEGIN + 54,
    /* Read channel lock parameters. */
    MIPC_NW_GET_CHANNEL_LOCK_REQ                            = MIPC_NW_REQ_BEGIN + 55,
    /* Read channel lock parameters result. */
    MIPC_NW_GET_CHANNEL_LOCK_CNF                            = MIPC_NW_REQ_BEGIN + 56,
    /* Abort PLMN List search. */
    MIPC_NW_SET_ABORT_PLMN_LIST_SEARCH_REQ                  = MIPC_NW_REQ_BEGIN + 57,
    /* Abort PLMN List search result. */
    MIPC_NW_SET_ABORT_PLMN_LIST_SEARCH_CNF                  = MIPC_NW_REQ_BEGIN + 58,
    /* Get the capability for preferred list of networks. */
    MIPC_NW_GET_POL_CAPABILITY_REQ                          = MIPC_NW_REQ_BEGIN + 59,
    /* Get the capability for preferred list of networks response. */
    MIPC_NW_GET_POL_CAPABILITY_CNF                          = MIPC_NW_REQ_BEGIN + 60,
    /* Set the order of prefer RAT modes for network selection. */
    MIPC_NW_SET_PREFER_RAT_REQ                              = MIPC_NW_REQ_BEGIN + 61,
    /* The result for setting prefer rat. */
    MIPC_NW_SET_PREFER_RAT_CNF                              = MIPC_NW_REQ_BEGIN + 62,
    /* Enable or disable the ENDC. */
    MIPC_NW_SET_ENDC_CONFIG_REQ                             = MIPC_NW_REQ_BEGIN + 65,
    /* Result for Enable or disable the ENDC. */
    MIPC_NW_SET_ENDC_CONFIG_CNF                             = MIPC_NW_REQ_BEGIN + 66,
    /* enable/disable lte carrier aggregation switch. */
    MIPC_NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_REQ          = MIPC_NW_REQ_BEGIN + 67,
    /* Set lte carrier aggregation switch mode information result. */
    MIPC_NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_CNF          = MIPC_NW_REQ_BEGIN + 68,
    /* Set the PS/CS registration state and roaming type for modem. */
    MIPC_NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_REQ   = MIPC_NW_REQ_BEGIN + 69,
    /* Set the PS/CS registration state and roaming type for modem result. */
    MIPC_NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_CNF   = MIPC_NW_REQ_BEGIN + 70,
    /* Get lte carrier aggregation switch. */
    MIPC_NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_REQ          = MIPC_NW_REQ_BEGIN + 71,
    /* Get lte carrier aggregation switch response. */
    MIPC_NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_CNF          = MIPC_NW_REQ_BEGIN + 72,
    /* Trigger the cell measurement. */
    MIPC_NW_CELL_MEASUREMENT_REQ                            = MIPC_NW_REQ_BEGIN + 75,
    /* The result for cell measurement. */
    MIPC_NW_CELL_MEASUREMENT_CNF                            = MIPC_NW_REQ_BEGIN + 76,
    /* Update the cell and band white list. */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ                   = MIPC_NW_REQ_BEGIN + 77,
    /* Update the cell and band white list. */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_CNF                   = MIPC_NW_REQ_BEGIN + 78,
    /* Get LTE/NR ca info include cell index, cell state,band, bandwidth cw0_cqi and cw1_cqi. */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_REQ                     = MIPC_NW_REQ_BEGIN + 79,
    /* The band and bandwidth for LTE/NR */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF                     = MIPC_NW_REQ_BEGIN + 80,
    /* Get 5G option configuration. */
    MIPC_NW_GET_NR_REQ                                      = MIPC_NW_REQ_BEGIN + 81,
    /* Get 5G option configuration. */
    MIPC_NW_GET_NR_CNF                                      = MIPC_NW_REQ_BEGIN + 82,
    /* Get srxlev information. */
    MIPC_NW_GET_SRXLEV_REQ                                  = MIPC_NW_REQ_BEGIN + 83,
    /* Get srxlev information. */
    MIPC_NW_GET_SRXLEV_CNF                                  = MIPC_NW_REQ_BEGIN + 84,
    /* set roaming mode configuartion. */
    MIPC_NW_SET_ROAMING_MODE_REQ                            = MIPC_NW_REQ_BEGIN + 85,
    /* result of set roaming mode cnf. */
    MIPC_NW_SET_ROAMING_MODE_CNF                            = MIPC_NW_REQ_BEGIN + 86,
    /* set roaming mode configuartion. */
    MIPC_NW_GET_ROAMING_MODE_REQ                            = MIPC_NW_REQ_BEGIN + 87,
    /* result of set roaming mode cnf. */
    MIPC_NW_GET_ROAMING_MODE_CNF                            = MIPC_NW_REQ_BEGIN + 88,
    /* Enable/disable of urc of the defined ind type . */
    MIPC_NW_SET_URC_ENABLE_REQ                              = MIPC_NW_REQ_BEGIN + 89,
    /* result of set ind enable cnf. */
    MIPC_NW_SET_URC_ENABLE_CNF                              = MIPC_NW_REQ_BEGIN + 90,
    /* get rf status req. */
    MIPC_NW_GET_RF_STATUS_REQ                               = MIPC_NW_REQ_BEGIN + 161,
    /* get rf status cnf. */
    MIPC_NW_GET_RF_STATUS_CNF                               = MIPC_NW_REQ_BEGIN + 162,
    /* This command is used to set TUW timer length */
    MIPC_NW_SET_TUW_TIMER_LENGTH_REQ                        = MIPC_NW_REQ_BEGIN + 189,
    /* The result of set tuw timer */
    MIPC_NW_SET_TUW_TIMER_LENGTH_CNF                        = MIPC_NW_REQ_BEGIN + 190,
    /* This command is used to get TUW timer length. */
    MIPC_NW_GET_TUW_TIMER_LENGTH_REQ                        = MIPC_NW_REQ_BEGIN + 191,
    /* The TUW timer length. */
    MIPC_NW_GET_TUW_TIMER_LENGTH_CNF                        = MIPC_NW_REQ_BEGIN + 192,
    /* This command is used to get 5GUW info. */
    MIPC_NW_GET_5GUW_INFO_REQ                               = MIPC_NW_REQ_BEGIN + 193,
    /* The 5GUW info. */
    MIPC_NW_GET_5GUW_INFO_CNF                               = MIPC_NW_REQ_BEGIN + 194,
    MIPC_NW_REQ_END                                         = MIPC_NW_REQ_BEGIN + 0xFF,

    MIPC_SIM_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0x500,
    /* enable/disable PIN */
    MIPC_SIM_PIN_PROTECT_REQ                                = MIPC_SIM_REQ_BEGIN + 1,
    /* the result for PIN_PROTECT_REQ */
    MIPC_SIM_PIN_PROTECT_CNF                                = MIPC_SIM_REQ_BEGIN + 2,
    /* change PIN */
    MIPC_SIM_CHANGE_PIN_REQ                                 = MIPC_SIM_REQ_BEGIN + 3,
    /* the result for CHANGE_PIN_REQ */
    MIPC_SIM_CHANGE_PIN_CNF                                 = MIPC_SIM_REQ_BEGIN + 4,
    /* verify PIN */
    MIPC_SIM_VERIFY_PIN_REQ                                 = MIPC_SIM_REQ_BEGIN + 5,
    /* the result for VERIFY_PIN_REQ */
    MIPC_SIM_VERIFY_PIN_CNF                                 = MIPC_SIM_REQ_BEGIN + 6,
    /* unblock PIN */
    MIPC_SIM_UNBLOCK_PIN_REQ                                = MIPC_SIM_REQ_BEGIN + 7,
    /* the result for UNBLOCK_PIN_REQ */
    MIPC_SIM_UNBLOCK_PIN_CNF                                = MIPC_SIM_REQ_BEGIN + 8,
    /* request to get the pin info statusof sim card */
    MIPC_SIM_GET_PIN_INFO_REQ                               = MIPC_SIM_REQ_BEGIN + 9,
    /* the result for GET_PIN_INFO_REQ */
    MIPC_SIM_GET_PIN_INFO_CNF                               = MIPC_SIM_REQ_BEGIN + 10,
    /* request to get all the pin that MD supported  */
    MIPC_SIM_GET_PIN_LIST_REQ                               = MIPC_SIM_REQ_BEGIN + 11,
    /* the result for GET_PIN_LIST_REQ */
    MIPC_SIM_GET_PIN_LIST_CNF                               = MIPC_SIM_REQ_BEGIN + 12,
    /* request to get sim STATE */
    MIPC_SIM_STATE_REQ                                      = MIPC_SIM_REQ_BEGIN + 13,
    /* the result for STATE_REQ */
    MIPC_SIM_STATE_CNF                                      = MIPC_SIM_REQ_BEGIN + 14,
    MIPC_SIM_STATUS_REQ                                     = MIPC_SIM_REQ_BEGIN + 15,
    /* the result for STATUS_REQ */
    MIPC_SIM_STATUS_CNF                                     = MIPC_SIM_REQ_BEGIN + 16,
    /* request to get the iccid of sim card */
    MIPC_SIM_ICCID_REQ                                      = MIPC_SIM_REQ_BEGIN + 17,
    /* the result for ICCID_REQ */
    MIPC_SIM_ICCID_CNF                                      = MIPC_SIM_REQ_BEGIN + 18,
    MIPC_SIM_IMSI_REQ                                       = MIPC_SIM_REQ_BEGIN + 19,
    /* the result for IMSI_REQ */
    MIPC_SIM_IMSI_CNF                                       = MIPC_SIM_REQ_BEGIN + 20,
    /* request the msisdn in sim card */
    MIPC_SIM_MSISDN_REQ                                     = MIPC_SIM_REQ_BEGIN + 21,
    /* the result for MSISDN_REQ */
    MIPC_SIM_MSISDN_CNF                                     = MIPC_SIM_REQ_BEGIN + 22,
    /* request to get the atr of sim card */
    MIPC_SIM_GET_ATR_INFO_REQ                               = MIPC_SIM_REQ_BEGIN + 23,
    /* the result for GET_ATR_INFO_REQ */
    MIPC_SIM_GET_ATR_INFO_CNF                               = MIPC_SIM_REQ_BEGIN + 24,
    /* open a logical channel */
    MIPC_SIM_OPEN_CHANNEL_REQ                               = MIPC_SIM_REQ_BEGIN + 25,
    /* the result for OPEN_CHANNEL_REQ */
    MIPC_SIM_OPEN_CHANNEL_CNF                               = MIPC_SIM_REQ_BEGIN + 26,
    /* close the logical channel */
    MIPC_SIM_CLOSE_CHANNEL_REQ                              = MIPC_SIM_REQ_BEGIN + 27,
    /* the result for CLOSE_CHANNEL_REQ */
    MIPC_SIM_CLOSE_CHANNEL_CNF                              = MIPC_SIM_REQ_BEGIN + 28,
    /* do restricted access */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ                  = MIPC_SIM_REQ_BEGIN + 29,
    /* the result for CHANNEL_RESTRICTED_ACCESS_REQ */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF                  = MIPC_SIM_REQ_BEGIN + 30,
    /* do generic access */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ                     = MIPC_SIM_REQ_BEGIN + 31,
    /* the result for GENERIC_ACCESS_REQ */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF                     = MIPC_SIM_REQ_BEGIN + 32,
    /* do long APDU access to sim card */
    MIPC_SIM_LONG_APDU_ACCESS_REQ                           = MIPC_SIM_REQ_BEGIN + 33,
    /* the result for LONG_APDU_ACCESS_REQ */
    MIPC_SIM_LONG_APDU_ACCESS_CNF                           = MIPC_SIM_REQ_BEGIN + 34,
    /* list app  */
    MIPC_SIM_APP_LIST_REQ                                   = MIPC_SIM_REQ_BEGIN + 35,
    /* the result for APP_LIST_REQ */
    MIPC_SIM_APP_LIST_CNF                                   = MIPC_SIM_REQ_BEGIN + 36,
    /* get file status */
    MIPC_SIM_FILE_STATUS_REQ                                = MIPC_SIM_REQ_BEGIN + 37,
    /* the result for FILE_STATUS_REQ */
    MIPC_SIM_FILE_STATUS_CNF                                = MIPC_SIM_REQ_BEGIN + 38,
    /* get SIM reset mode */
    MIPC_SIM_GET_RESET_REQ                                  = MIPC_SIM_REQ_BEGIN + 39,
    /* the result for GET_RESET_REQ */
    MIPC_SIM_GET_RESET_CNF                                  = MIPC_SIM_REQ_BEGIN + 40,
    /* reset SIM */
    MIPC_SIM_SET_RESET_REQ                                  = MIPC_SIM_REQ_BEGIN + 41,
    /* the result for SET_RESET_REQ */
    MIPC_SIM_SET_RESET_CNF                                  = MIPC_SIM_REQ_BEGIN + 42,
    /* get saved terminal capability */
    MIPC_SIM_GET_TERMINAL_CAPABILITY_REQ                    = MIPC_SIM_REQ_BEGIN + 43,
    /* the result for GET_TERMINAL_CAPABILITY_REQ */
    MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF                    = MIPC_SIM_REQ_BEGIN + 44,
    /* set terminial capability */
    MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ                    = MIPC_SIM_REQ_BEGIN + 45,
    /* the result for SET_TERMINAL_CAPABILITY_REQ */
    MIPC_SIM_SET_TERMINAL_CAPABILITY_CNF                    = MIPC_SIM_REQ_BEGIN + 46,
    /* verify PIN by application */
    MIPC_SIM_SET_PIN_EX_REQ                                 = MIPC_SIM_REQ_BEGIN + 47,
    /* the result for SET_PIN_EX_REQ */
    MIPC_SIM_SET_PIN_EX_CNF                                 = MIPC_SIM_REQ_BEGIN + 48,
    /* get PIN information by application */
    MIPC_SIM_GET_PIN_EX_REQ                                 = MIPC_SIM_REQ_BEGIN + 49,
    /* the result for GET_PIN_EX_REQ */
    MIPC_SIM_GET_PIN_EX_CNF                                 = MIPC_SIM_REQ_BEGIN + 50,
    /* get response of run gsm authentication */
    MIPC_SIM_GET_GSM_AUTH_REQ                               = MIPC_SIM_REQ_BEGIN + 51,
    /* the response of run gsm authentication */
    MIPC_SIM_GET_GSM_AUTH_CNF                               = MIPC_SIM_REQ_BEGIN + 52,
    /* get response of run extention authentication */
    MIPC_SIM_GET_EXT_AUTH_REQ                               = MIPC_SIM_REQ_BEGIN + 53,
    /* response of run extention authentication */
    MIPC_SIM_GET_EXT_AUTH_CNF                               = MIPC_SIM_REQ_BEGIN + 54,
    /* query sim facility */
    MIPC_SIM_GET_FACILITY_REQ                               = MIPC_SIM_REQ_BEGIN + 55,
    /* result of get sim facility status */
    MIPC_SIM_GET_FACILITY_CNF                               = MIPC_SIM_REQ_BEGIN + 56,
    /*  */
    MIPC_SIM_SET_FACILITY_REQ                               = MIPC_SIM_REQ_BEGIN + 57,
    /*  */
    MIPC_SIM_SET_FACILITY_CNF                               = MIPC_SIM_REQ_BEGIN + 58,
    /* get euicc slots status */
    MIPC_SIM_GET_EUICC_SLOTS_STATUS_REQ                     = MIPC_SIM_REQ_BEGIN + 59,
    /* the result of get euicc slots status */
    MIPC_SIM_GET_EUICC_SLOTS_STATUS_CNF                     = MIPC_SIM_REQ_BEGIN + 60,
    /* this command is used to SAP connect request */
    MIPC_SIM_ACCESS_PROFILE_CONNECT_REQ                     = MIPC_SIM_REQ_BEGIN + 61,
    /* the result of SAP connect request */
    MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF                     = MIPC_SIM_REQ_BEGIN + 62,
    /* this command is used to SAP disconnect request */
    MIPC_SIM_ACCESS_PROFILE_DISCONNECT_REQ                  = MIPC_SIM_REQ_BEGIN + 63,
    /* the result of SAP disconnect request */
    MIPC_SIM_ACCESS_PROFILE_DISCONNECT_CNF                  = MIPC_SIM_REQ_BEGIN + 64,
    /* this command is used to SAP power on request */
    MIPC_SIM_ACCESS_PROFILE_POWER_ON_REQ                    = MIPC_SIM_REQ_BEGIN + 65,
    /* result of SAP power on request */
    MIPC_SIM_ACCESS_PROFILE_POWER_ON_CNF                    = MIPC_SIM_REQ_BEGIN + 66,
    /* this command is used to SAP power off request */
    MIPC_SIM_ACCESS_PROFILE_POWER_OFF_REQ                   = MIPC_SIM_REQ_BEGIN + 67,
    /* result of SAP power off request */
    MIPC_SIM_ACCESS_PROFILE_POWER_OFF_CNF                   = MIPC_SIM_REQ_BEGIN + 68,
    /* this command is used to SAP reset sim request */
    MIPC_SIM_ACCESS_PROFILE_RESET_REQ                       = MIPC_SIM_REQ_BEGIN + 69,
    /* result of SAP reset sim request */
    MIPC_SIM_ACCESS_PROFILE_RESET_CNF                       = MIPC_SIM_REQ_BEGIN + 70,
    /* this command is used to SAP APDU request */
    MIPC_SIM_ACCESS_PROFILE_APDU_REQ                        = MIPC_SIM_REQ_BEGIN + 71,
    /* result of SAP APDU request */
    MIPC_SIM_ACCESS_PROFILE_APDU_CNF                        = MIPC_SIM_REQ_BEGIN + 72,
    /* request to set sim power */
    MIPC_SIM_SET_SIM_POWER_REQ                              = MIPC_SIM_REQ_BEGIN + 73,
    /* result of set sim power request */
    MIPC_SIM_SET_SIM_POWER_CNF                              = MIPC_SIM_REQ_BEGIN + 74,
    /* request to set sim slots mapping */
    MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ                 = MIPC_SIM_REQ_BEGIN + 75,
    /* result of set sim slots mapping */
    MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_CNF                 = MIPC_SIM_REQ_BEGIN + 76,
    /* do extended generic access */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ            = MIPC_SIM_REQ_BEGIN + 77,
    /* the result for EXTENDED_CHANNEL_GENERIC_ACCESS_REQ */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF            = MIPC_SIM_REQ_BEGIN + 78,
    /* do sim uicc file access_ record */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ                    = MIPC_SIM_REQ_BEGIN + 79,
    /* the result for UICC_FILE_ACCESS_RECORD_REQ */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF                    = MIPC_SIM_REQ_BEGIN + 80,
    /* do sim uicc file access binary */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ                    = MIPC_SIM_REQ_BEGIN + 81,
    /* the result for UICC_FILE_ACCESS_BINARY_REQ */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF                    = MIPC_SIM_REQ_BEGIN + 82,
    /* request to get sim slots mapping */
    MIPC_SIM_GET_PHYSICAL_SLOTS_MAPPING_REQ                 = MIPC_SIM_REQ_BEGIN + 83,
    /* result of get sim slots mapping */
    MIPC_SIM_GET_PHYSICAL_SLOTS_MAPPING_CNF                 = MIPC_SIM_REQ_BEGIN + 84,
    /* request query pin count */
    MIPC_SIM_PIN_COUNT_QUERY_REQ                            = MIPC_SIM_REQ_BEGIN + 123,
    /* result of query pin count */
    MIPC_SIM_PIN_COUNT_QUERY_CNF                            = MIPC_SIM_REQ_BEGIN + 124,
    MIPC_SIM_REQ_END                                        = MIPC_SIM_REQ_BEGIN + 0xFF,

    MIPC_SMS_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0x600,
    /* set or get SMS configuration */
    MIPC_SMS_CFG_REQ                                        = MIPC_SMS_REQ_BEGIN + 1,
    /* the result for CFG_REQ */
    MIPC_SMS_CFG_CNF                                        = MIPC_SMS_REQ_BEGIN + 2,
    /* send SMS */
    MIPC_SMS_SEND_REQ                                       = MIPC_SMS_REQ_BEGIN + 5,
    /* the result for SEND_REQ */
    MIPC_SMS_SEND_CNF                                       = MIPC_SMS_REQ_BEGIN + 6,
    /* read SMS */
    MIPC_SMS_READ_REQ                                       = MIPC_SMS_REQ_BEGIN + 7,
    /* the result for READ_REQ */
    MIPC_SMS_READ_CNF                                       = MIPC_SMS_REQ_BEGIN + 8,
    /* delete SMS */
    MIPC_SMS_DELETE_REQ                                     = MIPC_SMS_REQ_BEGIN + 9,
    /* the result for DELETE_REQ */
    MIPC_SMS_DELETE_CNF                                     = MIPC_SMS_REQ_BEGIN + 10,
    /* get SMS storage status */
    MIPC_SMS_GET_STORE_STATUS_REQ                           = MIPC_SMS_REQ_BEGIN + 11,
    /* the result for GET_STORE_STATUS_REQ */
    MIPC_SMS_GET_STORE_STATUS_CNF                           = MIPC_SMS_REQ_BEGIN + 12,
    /* write SMS to device(MD or SIM) */
    MIPC_SMS_WRITE_REQ                                      = MIPC_SMS_REQ_BEGIN + 13,
    /* the result for WRITE_REQ */
    MIPC_SMS_WRITE_CNF                                      = MIPC_SMS_REQ_BEGIN + 14,
    /* the configuration of cbm, cfg_type must exist when corresponding option carried, default is all allow, msg_id&type all match open list,then the cbm would indicate USER */
    MIPC_SMS_CBM_CFG_REQ                                    = MIPC_SMS_REQ_BEGIN + 15,
    /* the result for CBM_CFG_REQ, if the CFG_TYPE is query, would carry the detail info */
    MIPC_SMS_CBM_CFG_CNF                                    = MIPC_SMS_REQ_BEGIN + 16,
    /* the req of SCBM related feature */
    MIPC_SMS_SCBM_REQ                                       = MIPC_SMS_REQ_BEGIN + 17,
    /* the result for SCBM_REQ */
    MIPC_SMS_SCBM_CNF                                       = MIPC_SMS_REQ_BEGIN + 18,
    MIPC_SMS_REQ_END                                        = MIPC_SMS_REQ_BEGIN + 0xFF,

    MIPC_SS_REQ_BEGIN                                       = MIPC_REQ_BEGIN + 0x700,
    /* send USSD */
    MIPC_SS_SEND_USSD_REQ                                   = MIPC_SS_REQ_BEGIN + 1,
    /* the result for MICP_SS_SEND_USSD_REQ */
    MIPC_SS_SEND_USSD_CNF                                   = MIPC_SS_REQ_BEGIN + 2,
    /* cancel USSD */
    MIPC_SS_CANCEL_USSD_REQ                                 = MIPC_SS_REQ_BEGIN + 3,
    /* the result for MICP_SS_CANCEL_USSD_REQ */
    MIPC_SS_CANCEL_USSD_CNF                                 = MIPC_SS_REQ_BEGIN + 4,
    /* the command to set CLIR */
    MIPC_SS_SET_CLIR_REQ                                    = MIPC_SS_REQ_BEGIN + 5,
    /* the response of SET CLIR */
    MIPC_SS_SET_CLIR_CNF                                    = MIPC_SS_REQ_BEGIN + 6,
    /* the command to get CLIR */
    MIPC_SS_GET_CLIR_REQ                                    = MIPC_SS_REQ_BEGIN + 7,
    /* the response of get CLIR */
    MIPC_SS_GET_CLIR_CNF                                    = MIPC_SS_REQ_BEGIN + 8,
    /* the command to set call waiting */
    MIPC_SS_SET_CALL_WAITING_REQ                            = MIPC_SS_REQ_BEGIN + 9,
    /* the response of set call waiting */
    MIPC_SS_SET_CALL_WAITING_CNF                            = MIPC_SS_REQ_BEGIN + 10,
    /* to query call waiting */
    MIPC_SS_QUERY_CALL_WAITING_REQ                          = MIPC_SS_REQ_BEGIN + 11,
    /* response of query call waiting */
    MIPC_SS_QUERY_CALL_WAITING_CNF                          = MIPC_SS_REQ_BEGIN + 12,
    /* the command to set call forward */
    MIPC_SS_SET_CALL_FORWARD_REQ                            = MIPC_SS_REQ_BEGIN + 13,
    /* response of set call forward */
    MIPC_SS_SET_CALL_FORWARD_CNF                            = MIPC_SS_REQ_BEGIN + 14,
    /* the command to query call forward */
    MIPC_SS_QUERY_CALL_FORWARD_REQ                          = MIPC_SS_REQ_BEGIN + 15,
    /* the command to query call forward */
    MIPC_SS_QUERY_CALL_FORWARD_CNF                          = MIPC_SS_REQ_BEGIN + 16,
    /* the command to lock/unlock call barring */
    MIPC_SS_SET_CALL_BARRING_REQ                            = MIPC_SS_REQ_BEGIN + 17,
    /* the response to lock/unlock call barring */
    MIPC_SS_SET_CALL_BARRING_CNF                            = MIPC_SS_REQ_BEGIN + 18,
    /* the command to query call barring */
    MIPC_SS_QUERY_CALL_BARRING_REQ                          = MIPC_SS_REQ_BEGIN + 19,
    /* the response to query call barring */
    MIPC_SS_QUERY_CALL_BARRING_CNF                          = MIPC_SS_REQ_BEGIN + 20,
    /* sets a new password for the facility lock function definded by Facility Lock +CLCK */
    MIPC_SS_CHANGE_BARRING_PASSWORD_REQ                     = MIPC_SS_REQ_BEGIN + 21,
    /* response of CHANGE_BARRING_PASSWORD_REQ */
    MIPC_SS_CHANGE_BARRING_PASSWORD_CNF                     = MIPC_SS_REQ_BEGIN + 22,
    /* enables/disables the presentation of notification result codes from TA to TE */
    MIPC_SS_SET_SUPP_SVC_NOTIFICATION_REQ                   = MIPC_SS_REQ_BEGIN + 23,
    /* response of SET_SUPP_SVC_NOTIFICATION_REQ */
    MIPC_SS_SET_SUPP_SVC_NOTIFICATION_CNF                   = MIPC_SS_REQ_BEGIN + 24,
    /* query calling line identification presentation */
    MIPC_SS_QUERY_CLIP_REQ                                  = MIPC_SS_REQ_BEGIN + 25,
    /* response of QUERY_CLIP_REQ */
    MIPC_SS_QUERY_CLIP_CNF                                  = MIPC_SS_REQ_BEGIN + 26,
    /* set calling line identification at the TE enabled or disabled  */
    MIPC_SS_SET_CLIP_REQ                                    = MIPC_SS_REQ_BEGIN + 27,
    /* response of SET_CLIP_REQ */
    MIPC_SS_SET_CLIP_CNF                                    = MIPC_SS_REQ_BEGIN + 28,
    /* the command to get COLP */
    MIPC_SS_GET_COLP_REQ                                    = MIPC_SS_REQ_BEGIN + 31,
    /* the response of get COLP */
    MIPC_SS_GET_COLP_CNF                                    = MIPC_SS_REQ_BEGIN + 32,
    /* the command to set COLP */
    MIPC_SS_SET_COLP_REQ                                    = MIPC_SS_REQ_BEGIN + 33,
    /* the response of set COLP */
    MIPC_SS_SET_COLP_CNF                                    = MIPC_SS_REQ_BEGIN + 34,
    /* the command to get COLR */
    MIPC_SS_GET_COLR_REQ                                    = MIPC_SS_REQ_BEGIN + 35,
    /* the response of get COLR */
    MIPC_SS_GET_COLR_CNF                                    = MIPC_SS_REQ_BEGIN + 36,
    MIPC_SS_REQ_END                                         = MIPC_SS_REQ_BEGIN + 0xFF,

    MIPC_STK_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0x800,
    /* set PAC */
    MIPC_STK_SET_PAC_REQ                                    = MIPC_STK_REQ_BEGIN + 1,
    /* the result of set PAC */
    MIPC_STK_SET_PAC_CNF                                    = MIPC_STK_REQ_BEGIN + 2,
    /* get proactive command handle info which indicate proactive command will be handled by ME or TE */
    MIPC_STK_GET_PAC_REQ                                    = MIPC_STK_REQ_BEGIN + 3,
    /* the response of GET_PAC_REQ */
    MIPC_STK_GET_PAC_CNF                                    = MIPC_STK_REQ_BEGIN + 4,
    /* send terminal response to UICC */
    MIPC_STK_SEND_TERMINAL_RESPONSE_REQ                     = MIPC_STK_REQ_BEGIN + 5,
    /* the result of sSEND_TERMINAL_RESPONSE_REQ */
    MIPC_STK_SEND_TERMINAL_RESPONSE_CNF                     = MIPC_STK_REQ_BEGIN + 6,
    /* send envelope to UICC */
    MIPC_STK_SEND_ENVELOPE_REQ                              = MIPC_STK_REQ_BEGIN + 7,
    /* the result of SEND_ENVELOPE_REQ */
    MIPC_STK_SEND_ENVELOPE_CNF                              = MIPC_STK_REQ_BEGIN + 8,
    /* get envelope info */
    MIPC_STK_GET_ENVELOPE_INFO_REQ                          = MIPC_STK_REQ_BEGIN + 9,
    /* the result of GET_ENVELOPE_INFO_REQ */
    MIPC_STK_GET_ENVELOPE_INFO_CNF                          = MIPC_STK_REQ_BEGIN + 10,
    /* set the result of AP confirm for BIP open channel commond which includes non-null alpha ID */
    MIPC_STK_HANDLE_CALL_SETUP_FROM_SIM_REQ                 = MIPC_STK_REQ_BEGIN + 11,
    /* response of HANDLE_CALL_SETUP_FROM_SIM_REQ */
    MIPC_STK_HANDLE_CALL_SETUP_FROM_SIM_CNF                 = MIPC_STK_REQ_BEGIN + 12,
    /* set result of AP confirm for BIP open channel command */
    MIPC_STK_SEND_BIPCONF_REQ                               = MIPC_STK_REQ_BEGIN + 13,
    /* the result of SEND_BIPCONF_CNF */
    MIPC_STK_SEND_BIPCONF_CNF                               = MIPC_STK_REQ_BEGIN + 14,
    MIPC_STK_REQ_END                                        = MIPC_STK_REQ_BEGIN + 0xFF,

    MIPC_CALL_REQ_BEGIN                                     = MIPC_REQ_BEGIN + 0x900,
    /* this command is used to dial a call */
    MIPC_CALL_DIAL_REQ                                      = MIPC_CALL_REQ_BEGIN + 1,
    /* the result for CALL_DIAL_REQ */
    MIPC_CALL_DIAL_CNF                                      = MIPC_CALL_REQ_BEGIN + 2,
    /* requests call-related supplementary services */
    MIPC_CALL_SS_REQ                                        = MIPC_CALL_REQ_BEGIN + 3,
    /* the result for CALL_SS_REQ */
    MIPC_CALL_SS_CNF                                        = MIPC_CALL_REQ_BEGIN + 4,
    /* this command is used to release call */
    MIPC_CALL_HANGUP_REQ                                    = MIPC_CALL_REQ_BEGIN + 5,
    /* the result for CALL_HANGUP_REQ */
    MIPC_CALL_HANGUP_CNF                                    = MIPC_CALL_REQ_BEGIN + 6,
    /* answers and initiates a connection to an incoming call */
    MIPC_CALL_ANSWER_REQ                                    = MIPC_CALL_REQ_BEGIN + 7,
    /* the result for CALL_ANSWER_REQ */
    MIPC_CALL_ANSWER_CNF                                    = MIPC_CALL_REQ_BEGIN + 8,
    /* get the call status */
    MIPC_CALL_GET_CALL_STATUS_REQ                           = MIPC_CALL_REQ_BEGIN + 9,
    /* the result for CALL_GET_CALL_STATUS_CNF */
    MIPC_CALL_GET_CALL_STATUS_CNF                           = MIPC_CALL_REQ_BEGIN + 10,
    /* conference call operation */
    MIPC_CALL_CONFERENCE_REQ                                = MIPC_CALL_REQ_BEGIN + 11,
    /* the result for CALL_CONFERENCE_REQ */
    MIPC_CALL_CONFERENCE_CNF                                = MIPC_CALL_REQ_BEGIN + 12,
    /* get the ims conference call information, get cs conference infomation please use GET_CALL_STATUS_REQ */
    MIPC_CALL_GET_CONFERENCE_INFO_REQ                       = MIPC_CALL_REQ_BEGIN + 13,
    /* the result for CALL_GET_CONFERENCE_CALL_INFO_REQ */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF                       = MIPC_CALL_REQ_BEGIN + 14,
    /* get the reason for : (1) the failure in the last unsuccessful call setup or in-call modification  (2) the last call release */
    MIPC_CALL_GET_FINISH_REASON_REQ                         = MIPC_CALL_REQ_BEGIN + 15,
    /* the result for CALL_GET_FINISH_REASON_REQ */
    MIPC_CALL_GET_FINISH_REASON_CNF                         = MIPC_CALL_REQ_BEGIN + 16,
    /* this command is intended to be send START_DTMF and STOP_DTMF message to NW separately */
    MIPC_CALL_DTMF_REQ                                      = MIPC_CALL_REQ_BEGIN + 17,
    /* the result for CALL_DTMF_REQ */
    MIPC_CALL_DTMF_CNF                                      = MIPC_CALL_REQ_BEGIN + 18,
    /* get the ECC list */
    MIPC_CALL_GET_ECC_LIST_REQ                              = MIPC_CALL_REQ_BEGIN + 19,
    /* the result for CALL_GET_ECC_LIST_REQ */
    MIPC_CALL_GET_ECC_LIST_CNF                              = MIPC_CALL_REQ_BEGIN + 20,
    /* set the ECC list to modem */
    MIPC_CALL_SET_ECC_LIST_REQ                              = MIPC_CALL_REQ_BEGIN + 21,
    /* the result for CALL_SET_ECC_LIST_REQ */
    MIPC_CALL_SET_ECC_LIST_CNF                              = MIPC_CALL_REQ_BEGIN + 22,
    /* set the flight mode ecc session */
    MIPC_CALL_SET_FLIGHT_MODE_ECC_SESSION_REQ               = MIPC_CALL_REQ_BEGIN + 23,
    /* result of set the flight mode ecc session */
    MIPC_CALL_SET_FLIGHT_MODE_ECC_SESSION_CNF               = MIPC_CALL_REQ_BEGIN + 24,
    /* request to exit ecbm mode */
    MIPC_CALL_SET_EXIT_ECBM_MODE_REQ                        = MIPC_CALL_REQ_BEGIN + 25,
    /* result of exit ecbm mode */
    MIPC_CALL_SET_EXIT_ECBM_MODE_CNF                        = MIPC_CALL_REQ_BEGIN + 26,
    /* this command is used to dial a conference call */
    MIPC_CALL_CONFERENCE_DIAL_REQ                           = MIPC_CALL_REQ_BEGIN + 65,
    /* the result for CONFERENCE_DIAL_REQ */
    MIPC_CALL_CONFERENCE_DIAL_CNF                           = MIPC_CALL_REQ_BEGIN + 66,
    MIPC_CALL_REQ_END                                       = MIPC_CALL_REQ_BEGIN + 0xFF,

    MIPC_IMS_REQ_BEGIN                                      = MIPC_REQ_BEGIN + 0xA00,
    /* set ims config */
    MIPC_IMS_SET_CONFIG_REQ                                 = MIPC_IMS_REQ_BEGIN + 0,
    /* set modem configuration response */
    MIPC_IMS_SET_CONFIG_CNF                                 = MIPC_IMS_REQ_BEGIN + 1,
    /* get modem configuration request */
    MIPC_IMS_GET_CONFIG_REQ                                 = MIPC_IMS_REQ_BEGIN + 2,
    /* get modem configuration response */
    MIPC_IMS_GET_CONFIG_CNF                                 = MIPC_IMS_REQ_BEGIN + 3,
    /* get modem ims state request */
    MIPC_IMS_GET_STATE_REQ                                  = MIPC_IMS_REQ_BEGIN + 4,
    /* response of get modem ims state  */
    MIPC_IMS_GET_STATE_CNF                                  = MIPC_IMS_REQ_BEGIN + 5,
    MIPC_IMS_REQ_END                                        = MIPC_IMS_REQ_BEGIN + 0xFF,


    MIPC_IND_BEGIN                                          = 0x4000,

    MIPC_SYS_IND_BEGIN                                      = MIPC_IND_BEGIN + 0,
    /* unsolicited AT command indication */
    MIPC_SYS_AT_IND                                         = MIPC_SYS_IND_BEGIN + 1,
    /* thermal alarm indication */
    MIPC_SYS_THERMAL_SENSOR_IND                             = MIPC_SYS_IND_BEGIN + 2,
    /* the configuartion change indication */
    MIPC_SYS_CONFIG_IND                                     = MIPC_SYS_IND_BEGIN + 3,
    /*  */
    MIPC_SYS_ADPCLK_IND                                     = MIPC_SYS_IND_BEGIN + 4,
    /*  */
    MIPC_SYS_MCF_IND                                        = MIPC_SYS_IND_BEGIN + 5,
    /*  */
    MIPC_SYS_SBP_IND                                        = MIPC_SYS_IND_BEGIN + 6,
    /*  */
    MIPC_SYS_EL2_IP_UL_IND                                  = MIPC_SYS_IND_BEGIN + 7,
    /*  */
    MIPC_SYS_EL2_IP_DL_IND                                  = MIPC_SYS_IND_BEGIN + 8,
    /*  */
    MIPC_SYS_EL2_MAC_UL_IND                                 = MIPC_SYS_IND_BEGIN + 9,
    /*  */
    MIPC_SYS_EL2_MAC_DL_IND                                 = MIPC_SYS_IND_BEGIN + 10,
    /*  */
    MIPC_SYS_EL2_PDCP_UL_IND                                = MIPC_SYS_IND_BEGIN + 11,
    /*  */
    MIPC_SYS_EL2_PDCP_DL_IND                                = MIPC_SYS_IND_BEGIN + 12,
    /*  */
    MIPC_SYS_NL2_MAC_UL_IND                                 = MIPC_SYS_IND_BEGIN + 13,
    /*  */
    MIPC_SYS_NL2_MAC_DL_IND                                 = MIPC_SYS_IND_BEGIN + 14,
    /*  */
    MIPC_SYS_NL2_PDCP_UL_IND                                = MIPC_SYS_IND_BEGIN + 15,
    /*  */
    MIPC_SYS_NL2_PDCP_DL_IND                                = MIPC_SYS_IND_BEGIN + 16,
    /* location info indicate */
    MIPC_SYS_GEO_LOCATION_IND                               = MIPC_SYS_IND_BEGIN + 17,
    MIPC_SYS_IND_END                                        = MIPC_SYS_IND_BEGIN + 0xFF,

    MIPC_APN_IND_BEGIN                                      = MIPC_IND_BEGIN + 0x100,
    /* LTE initial attach profile changed indication */
    MIPC_APN_IA_CFG_IND                                     = MIPC_APN_IND_BEGIN + 1,
    /* APN profile changed indication */
    MIPC_APN_PROFILE_CFG_IND                                = MIPC_APN_IND_BEGIN + 2,
    /* VZW APN profile changed indication */
    MIPC_APN_VZW_CHG_IND                                    = MIPC_APN_IND_BEGIN + 3,
    MIPC_APN_IND_END                                        = MIPC_APN_IND_BEGIN + 0xFF,

    MIPC_DATA_IND_BEGIN                                     = MIPC_IND_BEGIN + 0x200,
    /* NW activate a data call indication, or fallback data call indication */
    MIPC_DATA_ACT_CALL_IND                                  = MIPC_DATA_IND_BEGIN + 1,
    /* NW de-activate a data call indication */
    MIPC_DATA_DEACT_CALL_IND                                = MIPC_DATA_IND_BEGIN + 2,
    /* NW modifiy a data call indication */
    MIPC_DATA_MOD_CALL_IND                                  = MIPC_DATA_IND_BEGIN + 3,
    /* NW modifiy PCO indication */
    MIPC_DATA_MOD_PCO_IND                                   = MIPC_DATA_IND_BEGIN + 4,
    /* host activate a data call indication */
    MIPC_DATA_WWAN_ACT_CALL_IND                             = MIPC_DATA_IND_BEGIN + 5,
    /* host de-activate a data call indication */
    MIPC_DATA_WWAN_DEACT_CALL_IND                           = MIPC_DATA_IND_BEGIN + 6,
    /* register call act ind */
    MIPC_DATA_CALL_ACT_REG_IND                              = MIPC_DATA_IND_BEGIN + 7,
    /* register decall act ind */
    MIPC_DATA_CALL_DEACT_REG_IND                            = MIPC_DATA_IND_BEGIN + 8,
    /* register mod call act ind */
    MIPC_DATA_CALL_MOD_REG_IND                              = MIPC_DATA_IND_BEGIN + 9,
    /* user in modem act a data call */
    MIPC_DATA_MD_ACT_CALL_IND                               = MIPC_DATA_IND_BEGIN + 10,
    /* user in modem deact a data call */
    MIPC_DATA_MD_DEACT_CALL_IND                             = MIPC_DATA_IND_BEGIN + 11,
    /* iwlan priority list indication */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND                       = MIPC_DATA_IND_BEGIN + 12,
    /* the commond is to report keep alive info */
    MIPC_DATA_KEEPALIVE_STATUS_IND                          = MIPC_DATA_IND_BEGIN + 16,
    /* the commond is to indicate which apn timer has been reset */
    MIPC_DATA_RETRY_TIMER_IND                               = MIPC_DATA_IND_BEGIN + 21,
    MIPC_DATA_IND_END                                       = MIPC_DATA_IND_BEGIN + 0xFF,

    MIPC_INTERNAL_IND_BEGIN                                 = MIPC_IND_BEGIN + 0x300,
    /* for test only */
    MIPC_INTERNAL_TEST_IND                                  = MIPC_INTERNAL_IND_BEGIN + 1,
    /* unsolicited network interface control indication */
    MIPC_INTERNAL_EIF_IND                                   = MIPC_INTERNAL_IND_BEGIN + 2,
    /* PDN handover indication (ex. L->W or W->L) */
    MIPC_INTERNAL_HO_IND                                    = MIPC_INTERNAL_IND_BEGIN + 3,
    MIPC_INTERNAL_IND_END                                   = MIPC_INTERNAL_IND_BEGIN + 0xFF,

    MIPC_NW_IND_BEGIN                                       = MIPC_IND_BEGIN + 0x400,
    /* registration state changed indication */
    MIPC_NW_REGISTER_IND                                    = MIPC_NW_IND_BEGIN + 1,
    /* singal changed indication */
    MIPC_NW_SIGNAL_IND                                      = MIPC_NW_IND_BEGIN + 2,
    /* PS attach state changed indication */
    MIPC_NW_PS_IND                                          = MIPC_NW_IND_BEGIN + 3,
    /* radio status changed indication */
    MIPC_NW_RADIO_IND                                       = MIPC_NW_IND_BEGIN + 4,
    /* IA status changed indication */
    MIPC_NW_IA_IND                                          = MIPC_NW_IND_BEGIN + 5,
    /* NITZ changed indication */
    MIPC_NW_NITZ_IND                                        = MIPC_NW_IND_BEGIN + 6,
    /* location changed indication */
    MIPC_NW_LOCATION_INFO_IND                               = MIPC_NW_IND_BEGIN + 7,
    /* CS state change indication. */
    MIPC_NW_CS_IND                                          = MIPC_NW_IND_BEGIN + 8,
    /* Signalling connection state change indication. */
    MIPC_NW_CSCON_IND                                       = MIPC_NW_IND_BEGIN + 9,
    /* Preferred provider list changed by network flow. */
    MIPC_NW_PREFERRED_PROVIDER_IND                          = MIPC_NW_IND_BEGIN + 10,
    /* dl and ul ca info of lte and nr. */
    MIPC_NW_CAINFO_IND                                      = MIPC_NW_IND_BEGIN + 11,
    /* eons state change indication. */
    MIPC_NW_EONS_IND                                        = MIPC_NW_IND_BEGIN + 12,
    /* ciev state change indication. */
    MIPC_NW_CIEV_IND                                        = MIPC_NW_IND_BEGIN + 13,
    /* Inform the information of system selection, according to RAT, location and attach status. */
    MIPC_NW_EGMSS_IND                                       = MIPC_NW_IND_BEGIN + 14,
    /* packet switching data service capability ind. */
    MIPC_NW_PSBEARER_IND                                    = MIPC_NW_IND_BEGIN + 15,
    /* Preferred provider list changed by network flow. */
    MIPC_NW_ECELL_IND                                       = MIPC_NW_IND_BEGIN + 16,
    /* handle E5GUW URC */
    MIPC_NW_NRUW_INFO_IND                                   = MIPC_NW_IND_BEGIN + 37,
    MIPC_NW_IND_END                                         = MIPC_NW_IND_BEGIN + 0xFF,

    MIPC_SIM_IND_BEGIN                                      = MIPC_IND_BEGIN + 0x500,
    /* SIM state changed indication */
    MIPC_SIM_STATE_IND                                      = MIPC_SIM_IND_BEGIN + 1,
    /* SIM status changed indication */
    MIPC_SIM_STATUS_IND                                     = MIPC_SIM_IND_BEGIN + 2,
    /*  */
    MIPC_SIM_EUICC_SLOTS_STATUS_IND                         = MIPC_SIM_IND_BEGIN + 3,
    /*  */
    MIPC_SIM_ICCID_IND                                      = MIPC_SIM_IND_BEGIN + 4,
    /* SIM status changed indication with cause */
    MIPC_SIM_STATUS_CHANGE_WITH_CAUSE_IND                   = MIPC_SIM_IND_BEGIN + 5,
    /* SIM physical slots mapping set req command done indication  */
    MIPC_SIM_PHYSICAL_SLOTS_MAPPING_DONE_IND                = MIPC_SIM_IND_BEGIN + 6,
    /* csim imsi changed indication */
    MIPC_SIM_CSIM_IMSI_CHANGE_IND                           = MIPC_SIM_IND_BEGIN + 7,
    MIPC_SIM_IND_END                                        = MIPC_SIM_IND_BEGIN + 0xFF,

    MIPC_SMS_IND_BEGIN                                      = MIPC_IND_BEGIN + 0x600,
    /* SMS configuration changed indication(sim plug out and plug in would trigger this indication) */
    MIPC_SMS_CFG_IND                                        = MIPC_SMS_IND_BEGIN + 1,
    /* new sms indication when user prefer_no_ack&save_in_TE */
    MIPC_SMS_NEW_SMS_IND                                    = MIPC_SMS_IND_BEGIN + 2,
    /* SMS storage status changed indication, new sms saved in DEVICE would trigger this indication */
    MIPC_SMS_STORE_STATUS_IND                               = MIPC_SMS_IND_BEGIN + 3,
    /* new status report indication when user prefer_no_ack */
    MIPC_SMS_NEW_STATUS_REPORT_IND                          = MIPC_SMS_IND_BEGIN + 6,
    /* CBM indication contains ETWS primary/ETWS secondary/CMAS/other cbm msgs */
    MIPC_SMS_NEW_CBM_IND                                    = MIPC_SMS_IND_BEGIN + 7,
    /* new indication about SCBM feature */
    MIPC_SMS_SCBM_IND                                       = MIPC_SMS_IND_BEGIN + 8,
    MIPC_SMS_IND_END                                        = MIPC_SMS_IND_BEGIN + 0xFF,

    MIPC_SS_IND_BEGIN                                       = MIPC_IND_BEGIN + 0x700,
    /* USSD received indication */
    MIPC_SS_USSD_IND                                        = MIPC_SS_IND_BEGIN + 1,
    /* ECMCCSS ind */
    MIPC_SS_ECMCCSS_IND                                     = MIPC_SS_IND_BEGIN + 2,
    MIPC_SS_IND_END                                         = MIPC_SS_IND_BEGIN + 0xFF,

    MIPC_STK_IND_BEGIN                                      = MIPC_IND_BEGIN + 0x800,
    /* receive proactive command from UICC */
    MIPC_STK_PAC_IND                                        = MIPC_STK_IND_BEGIN + 1,
    /* SIM Refresh ind */
    MIPC_STK_SIM_REFRESH_IND                                = MIPC_STK_IND_BEGIN + 2,
    MIPC_STK_IND_END                                        = MIPC_STK_IND_BEGIN + 0xFF,

    MIPC_CALL_IND_BEGIN                                     = MIPC_IND_BEGIN + 0x900,
    /* call status changed indication */
    MIPC_CALL_STATUS_IND                                    = MIPC_CALL_IND_BEGIN + 1,
    /* call event indication */
    MIPC_CALL_EVENT_IND                                     = MIPC_CALL_IND_BEGIN + 2,
    /* this message is used to inform host that the call mode change */
    MIPC_CALL_MODE_IND                                      = MIPC_CALL_IND_BEGIN + 3,
    /* this message is used to inofrm host response code from NW which UA received */
    MIPC_CALL_SIP_IND                                       = MIPC_CALL_IND_BEGIN + 4,
    /* this message is used to indicate host to XML event package */
    MIPC_CALL_CONFERENCE_IND                                = MIPC_CALL_IND_BEGIN + 5,
    /* this message is used to indicate host to XML event package */
    MIPC_CALL_IMS_EVENT_PACKAGE_IND                         = MIPC_CALL_IND_BEGIN + 6,
    /* ecc list changed indication */
    MIPC_CALL_ECC_LIST_CHANGE_IND                           = MIPC_CALL_IND_BEGIN + 7,
    /* supplementary service indication */
    MIPC_CALL_SS_IND                                        = MIPC_CALL_IND_BEGIN + 8,
    /* this message is used to indicate ecc call back mode change */
    MIPC_CALL_ECBM_CHANGE_IND                               = MIPC_CALL_IND_BEGIN + 9,
    /* this message is used to indicate CRSS  */
    MIPC_CALL_CRSS_IND                                      = MIPC_CALL_IND_BEGIN + 10,
    MIPC_CALL_IND_END                                       = MIPC_CALL_IND_BEGIN + 0xFF,

    MIPC_IMS_IND_BEGIN                                      = MIPC_IND_BEGIN + 0xA00,
    /* IMS configuration changed indication */
    MIPC_IMS_CONFIG_IND                                     = MIPC_IMS_IND_BEGIN + 0,
    /* IMS state changed indication */
    MIPC_IMS_STATE_IND                                      = MIPC_IMS_IND_BEGIN + 1,
    MIPC_IMS_IND_END                                        = MIPC_IMS_IND_BEGIN + 0xFF,


    MIPC_CMD_BEGIN                                          = 0x8000,

    MIPC_SYS_CMD_BEGIN                                      = MIPC_CMD_BEGIN + 0,
    /* send REBOOT command to AP */
    MIPC_SYS_REBOOT_CMD                                     = MIPC_SYS_CMD_BEGIN + 1,
    /* the result for REBOOT_CMD */
    MIPC_SYS_REBOOT_RSP                                     = MIPC_SYS_CMD_BEGIN + 2,
    /* set host configuration request */
    MIPC_SYS_SET_CONFIG_DIPC_CMD                            = MIPC_SYS_CMD_BEGIN + 3,
    /* set host configuration response */
    MIPC_SYS_SET_CONFIG_DIPC_RSP                            = MIPC_SYS_CMD_BEGIN + 4,
    /* request to update the configuration */
    MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_CMD                    = MIPC_SYS_CMD_BEGIN + 5,
    /* request to update the configuration */
    MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_RSP                    = MIPC_SYS_CMD_BEGIN + 6,
    /* get host configuration request */
    MIPC_SYS_GET_CONFIG_DIPC_CMD                            = MIPC_SYS_CMD_BEGIN + 7,
    /* get host configuration response */
    MIPC_SYS_GET_CONFIG_DIPC_RSP                            = MIPC_SYS_CMD_BEGIN + 8,
    /* set sAP time */
    MIPC_SYS_SET_TIME_CMD                                   = MIPC_SYS_CMD_BEGIN + 9,
    /* the result for TIME_CMD */
    MIPC_SYS_SET_TIME_RSP                                   = MIPC_SYS_CMD_BEGIN + 10,
    MIPC_SYS_CMD_END                                        = MIPC_SYS_CMD_BEGIN + 0xFF,

    MIPC_APN_CMD_BEGIN                                      = MIPC_CMD_BEGIN + 0x100,
    MIPC_APN_CMD_END                                        = MIPC_APN_CMD_BEGIN + 0xFF,

    MIPC_DATA_CMD_BEGIN                                     = MIPC_CMD_BEGIN + 0x200,
    MIPC_DATA_CMD_END                                       = MIPC_DATA_CMD_BEGIN + 0xFF,

    MIPC_INTERNAL_CMD_BEGIN                                 = MIPC_CMD_BEGIN + 0x300,
    /*  */
    MIPC_INTERNAL_TEST_CMD                                  = MIPC_INTERNAL_CMD_BEGIN + 1,
    /*  */
    MIPC_INTERNAL_TEST_RSP                                  = MIPC_INTERNAL_CMD_BEGIN + 2,
    /*  */
    MIPC_INTERNAL_EIPPORT_CMD                               = MIPC_INTERNAL_CMD_BEGIN + 3,
    /*  */
    MIPC_INTERNAL_EIPPORT_RSP                               = MIPC_INTERNAL_CMD_BEGIN + 4,
    /*  */
    MIPC_INTERNAL_EIPSPI_CMD                                = MIPC_INTERNAL_CMD_BEGIN + 5,
    /*  */
    MIPC_INTERNAL_EIPSPI_RSP                                = MIPC_INTERNAL_CMD_BEGIN + 6,
    MIPC_INTERNAL_CMD_END                                   = MIPC_INTERNAL_CMD_BEGIN + 0xFF,

    MIPC_NW_CMD_BEGIN                                       = MIPC_CMD_BEGIN + 0x400,
    MIPC_NW_CMD_END                                         = MIPC_NW_CMD_BEGIN + 0xFF,

    MIPC_SIM_CMD_BEGIN                                      = MIPC_CMD_BEGIN + 0x500,
    MIPC_SIM_CMD_END                                        = MIPC_SIM_CMD_BEGIN + 0xFF,

    MIPC_SMS_CMD_BEGIN                                      = MIPC_CMD_BEGIN + 0x600,
    /* new sms indication when user prefer_ack&save_in_TE */
    MIPC_SMS_NEW_SMS_CMD                                    = MIPC_SMS_CMD_BEGIN + 1,
    /* to ack for the NEW_SMS_CMD */
    MIPC_SMS_NEW_SMS_RSP                                    = MIPC_SMS_CMD_BEGIN + 2,
    /* new status report indication when user prefer_ack */
    MIPC_SMS_NEW_STATUS_REPORT_CMD                          = MIPC_SMS_CMD_BEGIN + 3,
    /* to ack for the NEW_STATUS_REPORT_CMD */
    MIPC_SMS_NEW_STATUS_REPORT_RSP                          = MIPC_SMS_CMD_BEGIN + 4,
    MIPC_SMS_CMD_END                                        = MIPC_SMS_CMD_BEGIN + 0xFF,

    MIPC_SS_CMD_BEGIN                                       = MIPC_CMD_BEGIN + 0x700,
    MIPC_SS_CMD_END                                         = MIPC_SS_CMD_BEGIN + 0xFF,

    MIPC_STK_CMD_BEGIN                                      = MIPC_CMD_BEGIN + 0x800,
    MIPC_STK_CMD_END                                        = MIPC_STK_CMD_BEGIN + 0xFF,

    MIPC_CALL_CMD_BEGIN                                     = MIPC_CMD_BEGIN + 0x900,
    /* This command requests users to approve an incoming call in Call Present stage */
    MIPC_CALL_APPROVE_INCOMING_CMD                          = MIPC_CALL_CMD_BEGIN + 1,
    /* This command allows users to approve an incoming call in Call Present stage */
    MIPC_CALL_APPROVE_INCOMING_RSP                          = MIPC_CALL_CMD_BEGIN + 2,
    MIPC_CALL_CMD_END                                       = MIPC_CALL_CMD_BEGIN + 0xFF,


    MIPC_NTF_BEGIN                                          = 0xC000,

    MIPC_SYS_NTF_BEGIN                                      = MIPC_NTF_BEGIN + 0,
    MIPC_SYS_NTF_END                                        = MIPC_SYS_NTF_BEGIN + 0xFF,

    MIPC_APN_NTF_BEGIN                                      = MIPC_NTF_BEGIN + 0x100,
    MIPC_APN_NTF_END                                        = MIPC_APN_NTF_BEGIN + 0xFF,

    MIPC_DATA_NTF_BEGIN                                     = MIPC_NTF_BEGIN + 0x200,
    MIPC_DATA_NTF_END                                       = MIPC_DATA_NTF_BEGIN + 0xFF,

    MIPC_INTERNAL_NTF_BEGIN                                 = MIPC_NTF_BEGIN + 0x300,
    /* for test only */
    MIPC_INTERNAL_TEST_NTF                                  = MIPC_INTERNAL_NTF_BEGIN + 1,
    /* inject tst string */
    MIPC_INTERNAL_INJECT_TST_NTF                            = MIPC_INTERNAL_NTF_BEGIN + 2,
    MIPC_INTERNAL_NTF_END                                   = MIPC_INTERNAL_NTF_BEGIN + 0xFF,

    MIPC_NW_NTF_BEGIN                                       = MIPC_NTF_BEGIN + 0x400,
    MIPC_NW_NTF_END                                         = MIPC_NW_NTF_BEGIN + 0xFF,

    MIPC_SIM_NTF_BEGIN                                      = MIPC_NTF_BEGIN + 0x500,
    MIPC_SIM_NTF_END                                        = MIPC_SIM_NTF_BEGIN + 0xFF,

    MIPC_SMS_NTF_BEGIN                                      = MIPC_NTF_BEGIN + 0x600,
    MIPC_SMS_NTF_END                                        = MIPC_SMS_NTF_BEGIN + 0xFF,

    MIPC_SS_NTF_BEGIN                                       = MIPC_NTF_BEGIN + 0x700,
    MIPC_SS_NTF_END                                         = MIPC_SS_NTF_BEGIN + 0xFF,

    MIPC_STK_NTF_BEGIN                                      = MIPC_NTF_BEGIN + 0x800,
    MIPC_STK_NTF_END                                        = MIPC_STK_NTF_BEGIN + 0xFF,


};

    /* MIPC_MSG.SYS_GET_INFO_REQ */
enum mipc_sys_get_info_req_tlv_enum {
    mipc_sys_get_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_INFO_CNF */
enum mipc_sys_get_info_cnf_tlv_enum {
    mipc_sys_get_info_cnf_tlv_NONE = 0,
    /* A bitmask that represents what cellular technology are supported */
    /* type = bitmap, refer to SYS_CAP_CELLULAR_CLASS */
    MIPC_SYS_GET_INFO_CNF_T_SYS_CELLULAR_CLASS              = 0x100,
    /* The presence of circuit voice service, and how such service interacts with data service */
    /* type = uint8_t, refer to SYS_VOICE_CLASS */
    MIPC_SYS_GET_INFO_CNF_T_VOICE_CLASS                     = 0x101,
    /* A bitmap that represents which SIM type are supported */
    /* type = uint8_t, refer to SYS_SIM_CLASS */
    MIPC_SYS_GET_INFO_CNF_T_SIM_CLASS                       = 0x102,
    /* A bitmap that represents which radio technologies are supported by the function */
    /* type = bitmap, refer to SYS_CAP_DATA */
    MIPC_SYS_GET_INFO_CNF_T_DATA_CLASS                      = 0x103,
    /* A bitmap that represents which GSM bands are supported */
    /* type = bitmap, refer to SYS_CAP_GSM_BAND */
    MIPC_SYS_GET_INFO_CNF_T_GSM_BAND_CLASS                  = 0x104,
    /* A bitmap that represents which UMTS bands are supported */
    /* type = bitmap, refer to SYS_CAP_UMTS_BAND */
    MIPC_SYS_GET_INFO_CNF_T_UMTS_BAND_CLASS                 = 0x105,
    /* A bitmap that represents which TDS bands are supported */
    /* type = bitmap, refer to SYS_CAP_TDS_BAND */
    MIPC_SYS_GET_INFO_CNF_T_TDS_BAND_CLASS                  = 0x106,
    /* A bitmap that represents which CDMA bands are supported */
    /* type = bitmap, refer to SYS_CAP_CDMA_BAND */
    MIPC_SYS_GET_INFO_CNF_T_C2K_BAND_CLASS                  = 0x107,
    /* A bitmap that represents which LTE bands are supported */
    /* type = struct, refer to sys_lte_band */
    MIPC_SYS_GET_INFO_CNF_T_LTE_BAND_CLASS                  = 0x108,
    /* A bitmap that represents which NR bands are supported */
    /* type = struct, refer to sys_nr_band */
    MIPC_SYS_GET_INFO_CNF_T_NR_BAND_CLASS                   = 0x109,
    /* A bitmap that represents the type of SMS messages and directional flow are supported */
    /* type = bitmap, refer to SYS_CAP_SMS */
    MIPC_SYS_GET_INFO_CNF_T_SMS_CAPS                        = 0x10A,
    /* A bitmap that represents the control capabilities that the device supports */
    /* type = bitmap, refer to SYS_CAP_CTRL */
    MIPC_SYS_GET_INFO_CNF_T_CTRL_CAPS                       = 0x10B,
    /* A bitmap that represents which AUTH algorithm are supported */
    /* type = uint8_t, refer to SYS_AUTH_ALGO */
    MIPC_SYS_GET_INFO_CNF_T_AUTH_ALGO_CAPS                  = 0x10C,
    /* a bitmap that represents the service capabilities that the device supports */
    /* type = bitmap, refer to SYS_CAP_SERVICE */
    MIPC_SYS_GET_INFO_CNF_T_SERVICE_CAPS                    = 0x10D,
    /* A structure the contains how many SIM and protocol are supported */
    /* type = struct, refer to sys_modem */
    MIPC_SYS_GET_INFO_CNF_T_MULTI_MD                        = 0x10E,
    /* device id (IMEI) */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_DEVICE_ID                       = 0x10F,
    /* manufactuer */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_MANUFCTR                        = 0x110,
    /* firmware version */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_FIRMWARE                        = 0x111,
    /* hardware version */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_HARDWARE                        = 0x112,
    /* maximum concurrent data sessions */
    /* type = uint16_t */
    MIPC_SYS_GET_INFO_CNF_T_MAX_ACTIVE_CTXT                 = 0x113,
    /* current protocol id */
    /* type = uint16_t */
    MIPC_SYS_GET_INFO_CNF_T_EXECUTOR_IDX                    = 0x114,
    /* custom data class name */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_CUSTOM_CLASS_NAME               = 0x115,
    /* product type */
    /* type = uint8_t, refer to SYS_PRODUCT_TYPE */
    MIPC_SYS_GET_INFO_CNF_T_PRODUCT_TYPE                    = 0x116,
    /* Electronic Serial Num. Hex string type,fixed len */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_ESN                             = 0x8117,
    /* International Mobile Equipment Identity software version. string type, fixed len */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_IMEISV                          = 0x8118,
    /* Mobile Equipment Identifier. Hex string type,fixed len */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_MEID                            = 0x8119,
    /* custom firmware version */
    /* type = string */
    MIPC_SYS_GET_INFO_CNF_T_FIRMWARE_CUSTOM                 = 0x11A,
    /* hardware chip id */
    /* type = byte_array */
    MIPC_SYS_GET_INFO_CNF_T_HARDWARE_ID                     = 0x11B,
};

    /* MIPC_MSG.SYS_AT_REQ */
enum mipc_sys_at_req_tlv_enum {
    mipc_sys_at_req_tlv_NONE = 0,
    /* AT command string to execute */
    /* type = string */
    MIPC_SYS_AT_REQ_T_ATCMD                                 = 0x8100,
};

    /* MIPC_MSG.SYS_AT_CNF */
enum mipc_sys_at_cnf_tlv_enum {
    mipc_sys_at_cnf_tlv_NONE = 0,
    /* the AT command execution result */
    /* type = string */
    MIPC_SYS_AT_CNF_T_ATCMD                                 = 0x8100,
};

    /* MIPC_MSG.SYS_REBOOT_REQ */
enum mipc_sys_reboot_req_tlv_enum {
    mipc_sys_reboot_req_tlv_NONE = 0,
    /* specify the reboot mode */
    /* type = uint8_t, refer to SYS_REBOOT_MODE */
    MIPC_SYS_REBOOT_REQ_T_MODE                              = 0x100,
    /* Download Timeout (Unit: second, Only valid when MODE is DOWNLOAD or SETTIMEOUT) */
    /* type = uint32_t */
    MIPC_SYS_REBOOT_REQ_T_TIMEOUT                           = 0x101,
};

    /* MIPC_MSG.SYS_REBOOT_CNF */
enum mipc_sys_reboot_cnf_tlv_enum {
    mipc_sys_reboot_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MAPPING_REQ */
enum mipc_sys_get_mapping_req_tlv_enum {
    mipc_sys_get_mapping_req_tlv_NONE = 0,
    /* type = uint8_t, refer to SYS_SIM_PS */
    MIPC_SYS_GET_MAPPING_REQ_T_MSG                          = 0x100,
};

    /* MIPC_MSG.SYS_GET_MAPPING_CNF */
enum mipc_sys_get_mapping_cnf_tlv_enum {
    mipc_sys_get_mapping_cnf_tlv_NONE = 0,
    /* the number of list element */
    /* type = uint8_t */
    MIPC_SYS_GET_MAPPING_CNF_T_MAPPING_COUNT                = 0x100,
    /* mapping list elements. each element represents a sim to ps mapping */
    /* type = struct_array, refer to sys_mapping */
    MIPC_SYS_GET_MAPPING_CNF_T_MAPPING_LIST                 = 0x101,
};

    /* MIPC_MSG.SYS_SET_MAPPING_REQ */
enum mipc_sys_set_mapping_req_tlv_enum {
    mipc_sys_set_mapping_req_tlv_NONE = 0,
    /* the number of list element */
    /* type = uint8_t */
    MIPC_SYS_SET_MAPPING_REQ_T_MAPPING_COUNT                = 0x100,
    /* mapping list elements. each element represents a sim to ps mapping */
    /* type = struct_array, refer to sys_mapping */
    MIPC_SYS_SET_MAPPING_REQ_T_MAPPING_LIST                 = 0x101,
};

    /* MIPC_MSG.SYS_SET_MAPPING_CNF */
enum mipc_sys_set_mapping_cnf_tlv_enum {
    mipc_sys_set_mapping_cnf_tlv_NONE = 0,
    /* the number of list element */
    /* type = uint8_t */
    MIPC_SYS_SET_MAPPING_CNF_T_MAPPING_COUNT                = 0x100,
    /* mapping list elements. each element represents a sim to ps mapping */
    /* type = struct_array, refer to sys_mapping */
    MIPC_SYS_SET_MAPPING_CNF_T_MAPPING_LIST                 = 0x101,
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_NUM_REQ */
enum mipc_sys_get_thermal_sensor_num_req_tlv_enum {
    mipc_sys_get_thermal_sensor_num_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_NUM_CNF */
enum mipc_sys_get_thermal_sensor_num_cnf_tlv_enum {
    mipc_sys_get_thermal_sensor_num_cnf_tlv_NONE = 0,
    /* the number of thermal sensors */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_NUM_CNF_T_NUM               = 0x100,
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_INFO_REQ */
enum mipc_sys_get_thermal_sensor_info_req_tlv_enum {
    mipc_sys_get_thermal_sensor_info_req_tlv_NONE = 0,
    /* thermal sensor ID */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_REQ_T_ID               = 0x100,
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_INFO_CNF */
enum mipc_sys_get_thermal_sensor_info_cnf_tlv_enum {
    mipc_sys_get_thermal_sensor_info_cnf_tlv_NONE = 0,
    /* thermal sensor ID */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_ID               = 0x100,
    /* thermal sensor name */
    /* type = string */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_NAME             = 0x101,
    /*  */
    /* type = uint8_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_TYPE             = 0x102,
    /*  */
    /* type = uint8_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MEAS_TYPE        = 0x103,
    /*  */
    /* type = int32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MIN_TEMPATURE    = 0x104,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_MAX_TEMPATURE    = 0x105,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_ACCURACY         = 0x106,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_RESOLUTION       = 0x107,
    /*  */
    /* type = int32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_INFO_CNF_T_WARN_TEMPATURE   = 0x108,
};

    /* MIPC_MSG.SYS_SET_THERMAL_SENSOR_REQ */
enum mipc_sys_set_thermal_sensor_req_tlv_enum {
    mipc_sys_set_thermal_sensor_req_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_SET_THERMAL_SENSOR_REQ_T_CONFIG_COUNT          = 0x100,
    /* type = struct_array, refer to sys_thermal_sensor_config */
    MIPC_SYS_SET_THERMAL_SENSOR_REQ_T_CONFIG_LIST           = 0x101,
};

    /* MIPC_MSG.SYS_SET_THERMAL_SENSOR_CNF */
enum mipc_sys_set_thermal_sensor_cnf_tlv_enum {
    mipc_sys_set_thermal_sensor_cnf_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_SET_THERMAL_SENSOR_CNF_T_CONFIG_COUNT          = 0x100,
    /* type = struct_array, refer to sys_thermal_sensor_config */
    MIPC_SYS_SET_THERMAL_SENSOR_CNF_T_CONFIG_LIST           = 0x101,
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_REQ */
enum mipc_sys_get_thermal_sensor_req_tlv_enum {
    mipc_sys_get_thermal_sensor_req_tlv_NONE = 0,
    /* thermal sensor ID */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_REQ_T_ID                    = 0x100,
};

    /* MIPC_MSG.SYS_GET_THERMAL_SENSOR_CNF */
enum mipc_sys_get_thermal_sensor_cnf_tlv_enum {
    mipc_sys_get_thermal_sensor_cnf_tlv_NONE = 0,
    /* type = int32_t */
    MIPC_SYS_GET_THERMAL_SENSOR_CNF_T_TEMPERATURE           = 0x100,
};

    /* MIPC_MSG.SYS_GET_THERMAL_ACTUATOR_NUM_REQ */
enum mipc_sys_get_thermal_actuator_num_req_tlv_enum {
    mipc_sys_get_thermal_actuator_num_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_THERMAL_ACTUATOR_NUM_CNF */
enum mipc_sys_get_thermal_actuator_num_cnf_tlv_enum {
    mipc_sys_get_thermal_actuator_num_cnf_tlv_NONE = 0,
    /* the number of thermal actuators */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_NUM_CNF_T_NUM             = 0x100,
};

    /* MIPC_MSG.SYS_SET_THERMAL_ACTUATOR_REQ */
enum mipc_sys_set_thermal_actuator_req_tlv_enum {
    mipc_sys_set_thermal_actuator_req_tlv_NONE = 0,
    /* the actuator ID */
    /* type = uint32_t */
    MIPC_SYS_SET_THERMAL_ACTUATOR_REQ_T_ID                  = 0x100,
    /* throttle level */
    /* type = uint32_t */
    MIPC_SYS_SET_THERMAL_ACTUATOR_REQ_T_LEVEL               = 0x101,
};

    /* MIPC_MSG.SYS_SET_THERMAL_ACTUATOR_CNF */
enum mipc_sys_set_thermal_actuator_cnf_tlv_enum {
    mipc_sys_set_thermal_actuator_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_THERMAL_ACTUATOR_INFO_REQ */
enum mipc_sys_get_thermal_actuator_info_req_tlv_enum {
    mipc_sys_get_thermal_actuator_info_req_tlv_NONE = 0,
    /* the actuator ID */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_REQ_T_ID             = 0x100,
};

    /* MIPC_MSG.SYS_GET_THERMAL_ACTUATOR_INFO_CNF */
enum mipc_sys_get_thermal_actuator_info_cnf_tlv_enum {
    mipc_sys_get_thermal_actuator_info_cnf_tlv_NONE = 0,
    /* the actuator ID */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_ID             = 0x100,
    /* thermal sensor name */
    /* type = string */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_NAME           = 0x101,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_TOTAL_LEVEL    = 0x102,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_CURRENT_LEVEL  = 0x103,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_USER_IMPACT    = 0x104,
    /*  */
    /* type = uint32_t */
    MIPC_SYS_GET_THERMAL_ACTUATOR_INFO_CNF_T_EFFICIENCY     = 0x105,
};

    /* MIPC_MSG.SYS_SET_CONFIG_REQ */
enum mipc_sys_set_config_req_tlv_enum {
    mipc_sys_set_config_req_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_SET_CONFIG_REQ_T_CLASS                         = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_SET_CONFIG_REQ_T_TYPE                          = 0x101,
    /* the configuration data */
    /* type = byte_array */
    MIPC_SYS_SET_CONFIG_REQ_T_DATA                          = 0x8102,
};

    /* MIPC_MSG.SYS_SET_CONFIG_CNF */
enum mipc_sys_set_config_cnf_tlv_enum {
    mipc_sys_set_config_cnf_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_SYS_SET_CONFIG_CNF_T_DATA                          = 0x8100,
};

    /* MIPC_MSG.SYS_GET_CONFIG_REQ */
enum mipc_sys_get_config_req_tlv_enum {
    mipc_sys_get_config_req_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_GET_CONFIG_REQ_T_CLASS                         = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_GET_CONFIG_REQ_T_TYPE                          = 0x101,
};

    /* MIPC_MSG.SYS_GET_CONFIG_CNF */
enum mipc_sys_get_config_cnf_tlv_enum {
    mipc_sys_get_config_cnf_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_SYS_GET_CONFIG_CNF_T_DATA                          = 0x8100,
};

    /* MIPC_MSG.SYS_REG_CONFIG_REQ */
enum mipc_sys_reg_config_req_tlv_enum {
    mipc_sys_reg_config_req_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_REG_CONFIG_REQ_T_CLASS                         = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_REG_CONFIG_REQ_T_TYPE                          = 0x101,
};

    /* MIPC_MSG.SYS_REG_CONFIG_CNF */
enum mipc_sys_reg_config_cnf_tlv_enum {
    mipc_sys_reg_config_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_SET_ADPCLK_REQ */
enum mipc_sys_set_adpclk_req_tlv_enum {
    mipc_sys_set_adpclk_req_tlv_NONE = 0,
    /* enable or disable */
    /* type = uint8_t, refer to SYS_ADPCLK_STATE */
    MIPC_SYS_SET_ADPCLK_REQ_T_STATE                         = 0x100,
};

    /* MIPC_MSG.SYS_SET_ADPCLK_CNF */
enum mipc_sys_set_adpclk_cnf_tlv_enum {
    mipc_sys_set_adpclk_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_ADPCLK_REQ */
enum mipc_sys_get_adpclk_req_tlv_enum {
    mipc_sys_get_adpclk_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_ADPCLK_CNF */
enum mipc_sys_get_adpclk_cnf_tlv_enum {
    mipc_sys_get_adpclk_cnf_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_GET_ADPCLK_CNF_T_FREQ_INFO_COUNT               = 0x100,
    /* type = struct_array, refer to sys_adpclk_freq_info */
    MIPC_SYS_GET_ADPCLK_CNF_T_FREQ_INFO_LIST                = 0x101,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_MODE_REQ */
enum mipc_sys_set_md_log_mode_req_tlv_enum {
    mipc_sys_set_md_log_mode_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_SET_MD_LOG_MODE_REQ_T_MODE                     = 0x100,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_MODE_CNF */
enum mipc_sys_set_md_log_mode_cnf_tlv_enum {
    mipc_sys_set_md_log_mode_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_MODE_REQ */
enum mipc_sys_get_md_log_mode_req_tlv_enum {
    mipc_sys_get_md_log_mode_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_MODE_CNF */
enum mipc_sys_get_md_log_mode_cnf_tlv_enum {
    mipc_sys_get_md_log_mode_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_GET_MD_LOG_MODE_CNF_T_MODE                     = 0x100,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_LEVEL_REQ */
enum mipc_sys_set_md_log_level_req_tlv_enum {
    mipc_sys_set_md_log_level_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_SET_MD_LOG_LEVEL_REQ_T_LEVEL                   = 0x100,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_LEVEL_CNF */
enum mipc_sys_set_md_log_level_cnf_tlv_enum {
    mipc_sys_set_md_log_level_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_LEVEL_REQ */
enum mipc_sys_get_md_log_level_req_tlv_enum {
    mipc_sys_get_md_log_level_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_LEVEL_CNF */
enum mipc_sys_get_md_log_level_cnf_tlv_enum {
    mipc_sys_get_md_log_level_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_GET_MD_LOG_LEVEL_CNF_T_LEVEL                   = 0x100,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_LOCATION_REQ */
enum mipc_sys_set_md_log_location_req_tlv_enum {
    mipc_sys_set_md_log_location_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_SET_MD_LOG_LOCATION_REQ_T_ENABLE               = 0x100,
};

    /* MIPC_MSG.SYS_SET_MD_LOG_LOCATION_CNF */
enum mipc_sys_set_md_log_location_cnf_tlv_enum {
    mipc_sys_set_md_log_location_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_LOCATION_REQ */
enum mipc_sys_get_md_log_location_req_tlv_enum {
    mipc_sys_get_md_log_location_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_MD_LOG_LOCATION_CNF */
enum mipc_sys_get_md_log_location_cnf_tlv_enum {
    mipc_sys_get_md_log_location_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_GET_MD_LOG_LOCATION_CNF_T_ENABLE               = 0x100,
};

    /* MIPC_MSG.SYS_WRITE_NVRAM_REQ */
enum mipc_sys_write_nvram_req_tlv_enum {
    mipc_sys_write_nvram_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_WRITE_NVRAM_REQ_T_FILE_IDX                     = 0x100,
    /* type = uint32_t */
    MIPC_SYS_WRITE_NVRAM_REQ_T_RECORD_IDX                   = 0x101,
    /* type = byte_array */
    MIPC_SYS_WRITE_NVRAM_REQ_T_DATA                         = 0x8102,
};

    /* MIPC_MSG.SYS_WRITE_NVRAM_CNF */
enum mipc_sys_write_nvram_cnf_tlv_enum {
    mipc_sys_write_nvram_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_WRITE_NVRAM_CNF_T_DATA_LEN                     = 0x100,
};

    /* MIPC_MSG.SYS_READ_NVRAM_REQ */
enum mipc_sys_read_nvram_req_tlv_enum {
    mipc_sys_read_nvram_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_READ_NVRAM_REQ_T_FILE_IDX                      = 0x100,
    /* type = uint32_t */
    MIPC_SYS_READ_NVRAM_REQ_T_RECORD_IDX                    = 0x101,
};

    /* MIPC_MSG.SYS_READ_NVRAM_CNF */
enum mipc_sys_read_nvram_cnf_tlv_enum {
    mipc_sys_read_nvram_cnf_tlv_NONE = 0,
    /* type = byte_array */
    MIPC_SYS_READ_NVRAM_CNF_T_DATA                          = 0x8100,
};

    /* MIPC_MSG.SYS_AUTH_REQ */
enum mipc_sys_auth_req_tlv_enum {
    mipc_sys_auth_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_AUTH_REQ_T_OP                                  = 0x100,
    /* type = byte_array */
    MIPC_SYS_AUTH_REQ_T_ENCDATA                             = 0x8101,
};

    /* MIPC_MSG.SYS_AUTH_CNF */
enum mipc_sys_auth_cnf_tlv_enum {
    mipc_sys_auth_cnf_tlv_NONE = 0,
    /* type = byte_array */
    MIPC_SYS_AUTH_CNF_T_RAND                                = 0x8100,
};

    /* MIPC_MSG.SYS_SET_DAT_REQ */
enum mipc_sys_set_dat_req_tlv_enum {
    mipc_sys_set_dat_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_SET_DAT_REQ_T_INDEX                            = 0x100,
};

    /* MIPC_MSG.SYS_SET_DAT_CNF */
enum mipc_sys_set_dat_cnf_tlv_enum {
    mipc_sys_set_dat_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_DAT_REQ */
enum mipc_sys_get_dat_req_tlv_enum {
    mipc_sys_get_dat_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_DAT_CNF */
enum mipc_sys_get_dat_cnf_tlv_enum {
    mipc_sys_get_dat_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_GET_DAT_CNF_T_INDEX                            = 0x100,
};

    /* MIPC_MSG.SYS_MCF_REQ */
enum mipc_sys_mcf_req_tlv_enum {
    mipc_sys_mcf_req_tlv_NONE = 0,
    /* type = uint8_t, refer to SYS_MCF_OP */
    MIPC_SYS_MCF_REQ_T_OP                                   = 0x10A,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_CONFIG_TYPE                          = 0x10B,
    /* type = string */
    MIPC_SYS_MCF_REQ_T_DUMP_LIDS                            = 0x10C,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_PATH_TYPE                            = 0x10D,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_TRIGGER_DSBP                         = 0x10E,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_ACTION                               = 0x10F,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_FORMAT                               = 0x110,
    /* type = uint32_t */
    MIPC_SYS_MCF_REQ_T_NUM                                  = 0x111,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_LEN                                  = 0x112,
    /* type = uint16_t */
    MIPC_SYS_MCF_REQ_T_REC_ID                               = 0x113,
    /* type = byte_array */
    MIPC_SYS_MCF_REQ_T_VALUE                                = 0x114,
    /* type = string */
    MIPC_SYS_MCF_REQ_T_CONFIG1                              = 0x115,
    /* type = string */
    MIPC_SYS_MCF_REQ_T_CONFIG                               = 0x116,
    /* type = uint8_t */
    MIPC_SYS_MCF_REQ_T_IS_RESET                             = 0x117,
};

    /* MIPC_MSG.SYS_MCF_CNF */
enum mipc_sys_mcf_cnf_tlv_enum {
    mipc_sys_mcf_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_SYS_MCF_CNF_T_MCF_RESULT                           = 0x100,
    /* type = uint32_t */
    MIPC_SYS_MCF_CNF_T_DSBP_RESULT                          = 0x101,
    /* type = uint8_t, refer to SYS_MCF_OP */
    MIPC_SYS_MCF_CNF_T_OP                                   = 0x10A,
    /* type = uint8_t */
    MIPC_SYS_MCF_CNF_T_CONFIG_TYPE                          = 0x10B,
    /* type = uint8_t */
    MIPC_SYS_MCF_CNF_T_PATH_TYPE                            = 0x10D,
    /* type = uint8_t */
    MIPC_SYS_MCF_CNF_T_ACTION                               = 0x10F,
    /* type = uint8_t */
    MIPC_SYS_MCF_CNF_T_FORMAT                               = 0x110,
    /* type = uint8_t */
    MIPC_SYS_MCF_CNF_T_LEN                                  = 0x112,
    /* type = byte_array */
    MIPC_SYS_MCF_CNF_T_VALUE                                = 0x114,
    /* type = string */
    MIPC_SYS_MCF_CNF_T_CONFIG1                              = 0x115,
};

    /* MIPC_MSG.SYS_SET_FCC_LOCK_REQ */
enum mipc_sys_set_fcc_lock_req_tlv_enum {
    mipc_sys_set_fcc_lock_req_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_SET_FCC_LOCK_REQ_T_MODE                        = 0x100,
};

    /* MIPC_MSG.SYS_SET_FCC_LOCK_CNF */
enum mipc_sys_set_fcc_lock_cnf_tlv_enum {
    mipc_sys_set_fcc_lock_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_SET_TIME_REQ */
enum mipc_sys_set_time_req_tlv_enum {
    mipc_sys_set_time_req_tlv_NONE = 0,
    /* year */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_YEAR                            = 0x100,
    /* month */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_MONTH                           = 0x101,
    /* day */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_DAY                             = 0x102,
    /* hour */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_HOUR                            = 0x103,
    /* minute */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_MINUTE                          = 0x104,
    /* second */
    /* type = uint32_t */
    MIPC_SYS_SET_TIME_REQ_T_SECOND                          = 0x105,
    /* time zone offset minutes */
    /* type = int32_t */
    MIPC_SYS_SET_TIME_REQ_T_TZ_OFF_MIN                      = 0x106,
};

    /* MIPC_MSG.SYS_SET_TIME_CNF */
enum mipc_sys_set_time_cnf_tlv_enum {
    mipc_sys_set_time_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_TIME_REQ */
enum mipc_sys_get_time_req_tlv_enum {
    mipc_sys_get_time_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_TIME_CNF */
enum mipc_sys_get_time_cnf_tlv_enum {
    mipc_sys_get_time_cnf_tlv_NONE = 0,
    /* year */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_YEAR                            = 0x100,
    /* month */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_MONTH                           = 0x101,
    /* day */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_DAY                             = 0x102,
    /* hour */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_HOUR                            = 0x103,
    /* minute */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_MINUTE                          = 0x104,
    /* second */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_SECOND                          = 0x105,
    /* timestamp (FRC) */
    /* type = uint32_t */
    MIPC_SYS_GET_TIME_CNF_T_TIMESTAMP                       = 0x106,
    /* time zone offset minutes */
    /* type = int32_t */
    MIPC_SYS_GET_TIME_CNF_T_TZ_OFF_MIN                      = 0x107,
};

    /* MIPC_MSG.SYS_SET_SAR_REQ */
enum mipc_sys_set_sar_req_tlv_enum {
    mipc_sys_set_sar_req_tlv_NONE = 0,
    /* type = uint8_t, refer to SYS_SAR_MODE */
    MIPC_SYS_SET_SAR_REQ_T_MODE                             = 0x100,
    /* type = uint32_t */
    MIPC_SYS_SET_SAR_REQ_T_INDEX                            = 0x101,
};

    /* MIPC_MSG.SYS_SET_SAR_CNF */
enum mipc_sys_set_sar_cnf_tlv_enum {
    mipc_sys_set_sar_cnf_tlv_NONE = 0,
    /* type = uint8_t, refer to SYS_SAR_MODE */
    MIPC_SYS_SET_SAR_CNF_T_MODE                             = 0x100,
    /* type = uint32_t */
    MIPC_SYS_SET_SAR_CNF_T_INDEX                            = 0x101,
};

    /* MIPC_MSG.SYS_GET_SAR_REQ */
enum mipc_sys_get_sar_req_tlv_enum {
    mipc_sys_get_sar_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_SAR_CNF */
enum mipc_sys_get_sar_cnf_tlv_enum {
    mipc_sys_get_sar_cnf_tlv_NONE = 0,
    /* type = uint8_t, refer to SYS_SAR_MODE */
    MIPC_SYS_GET_SAR_CNF_T_MODE                             = 0x100,
    /* type = uint32_t */
    MIPC_SYS_GET_SAR_CNF_T_INDEX                            = 0x101,
};

    /* MIPC_MSG.SYS_SET_POWER_SAVING_REQ */
enum mipc_sys_set_power_saving_req_tlv_enum {
    mipc_sys_set_power_saving_req_tlv_NONE = 0,
    /* 0: disable, 1: enable */
    /* type = uint8_t */
    MIPC_SYS_SET_POWER_SAVING_REQ_T_MODE                    = 0x100,
};

    /* MIPC_MSG.SYS_SET_POWER_SAVING_CNF */
enum mipc_sys_set_power_saving_cnf_tlv_enum {
    mipc_sys_set_power_saving_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_CONNECTIVITY_STATISTICS_REQ */
enum mipc_sys_connectivity_statistics_req_tlv_enum {
    mipc_sys_connectivity_statistics_req_tlv_NONE = 0,
    /* once HOST carry this TLV(no matter what value), means HOST need read statistic info & period(s), DEVICE would carry the info in CNF */
    /* type = uint8_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_READ_FLAG        = 0x100,
    /* once HOST carry this TLV(no matter what value), means HOST need trigger reset statistic counters, then start statistic, DEVICE would stop statistic until period expired(none 0) or receive STOP from HOST */
    /* type = uint8_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_START            = 0x101,
    /* once HOST carry this TLV(no matter what value), means DEVICE should stop statistic now, but dont reset the counters */
    /* type = uint8_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_STOP             = 0x102,
    /* once HOST carry this TLV, means DEVICE should set the PERIOD(uint:second; max value is 86400) */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_REQ_T_PERIOD_VALUE     = 0x103,
};

    /* MIPC_MSG.SYS_CONNECTIVITY_STATISTICS_CNF */
enum mipc_sys_connectivity_statistics_cnf_tlv_enum {
    mipc_sys_connectivity_statistics_cnf_tlv_NONE = 0,
    /* indicate the total number of SMS successfully transmitted during the collection period */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_SMS_TX_COUNTER   = 0x100,
    /* indicate the total number of SMS successfully received during the collection period */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_SMS_RX_COUNTER   = 0x101,
    /* Phase out. Indicate the total amount of data (IP / non-IP) transmitted during the collection period expressed in bytes */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_TX_DATA          = 0x102,
    /* Phase out. Indicate the total amount of data (IP / non-IP) received during the collection period expressed in bytes */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_RX_DATA          = 0x103,
    /* The maximum IP message size that is used during the collection period(uint: B) */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_MAX_MESSAGE_SIZE = 0x104,
    /* The average IP message size that is used during the collection period(uint: B) */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_AVERAGE_MESSAGE_SIZE = 0x105,
    /* the period that set before, uint:second */
    /* type = uint32_t */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_PERIOD_VALUE     = 0x106,
    /* Indicate the total amount of data (IP/non-IP) transmitted during the collection period expressed in bytes. Value size is 8 byte */
    /* type = byte_array */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_TX_DATA_EXT      = 0x107,
    /* Indicate the total amount of data (IP/non-IP) received during the collection period expressed in bytes. Value size is 8 byte */
    /* type = byte_array */
    MIPC_SYS_CONNECTIVITY_STATISTICS_CNF_T_RX_DATA_EXT      = 0x108,
};

    /* MIPC_MSG.SYS_QUERY_SBP_REQ */
enum mipc_sys_query_sbp_req_tlv_enum {
    mipc_sys_query_sbp_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_QUERY_SBP_CNF */
enum mipc_sys_query_sbp_cnf_tlv_enum {
    mipc_sys_query_sbp_cnf_tlv_NONE = 0,
    /* device sbp id */
    /* type = uint32_t */
    MIPC_SYS_QUERY_SBP_CNF_T_SBP_ID                         = 0x100,
    /* type = uint32_t */
    MIPC_SYS_QUERY_SBP_CNF_T_SIM_SBP_ID                     = 0x101,
    /* type = string */
    MIPC_SYS_QUERY_SBP_CNF_T_SBP_FEATURE_BYTE               = 0x102,
    /* type = string */
    MIPC_SYS_QUERY_SBP_CNF_T_SBP_DATA_BYTE                  = 0x103,
};

    /* MIPC_MSG.SYS_SET_TX_IND_INTERVAL_REQ */
enum mipc_sys_set_tx_ind_interval_req_tlv_enum {
    mipc_sys_set_tx_ind_interval_req_tlv_NONE = 0,
    /* the value to set ind interval */
    /* type = uint8_t */
    MIPC_SYS_SET_TX_IND_INTERVAL_REQ_T_INTERVAL             = 0x100,
};

    /* MIPC_MSG.SYS_SET_TX_IND_INTERVAL_CNF */
enum mipc_sys_set_tx_ind_interval_cnf_tlv_enum {
    mipc_sys_set_tx_ind_interval_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SYS_SET_GEO_LOCATION_REQ */
enum mipc_sys_set_geo_location_req_tlv_enum {
    mipc_sys_set_geo_location_req_tlv_NONE = 0,
    /* request id, 0 ~ 7 */
    /* type = uint8_t, refer to SYS_ACCOUNT_ID */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCOUNT_ID              = 0x100,
    /* 0: Do not broadcast this information to all IMS accounts. 1: Broadcast this information to all IMS accounts */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_BROADCAST_FLAG          = 0x101,
    /* latitude from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_LATITUDE                = 0x102,
    /* longitude from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_LONGITUDE               = 0x103,
    /* accurate from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY                = 0x104,
    /* Positioning method */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_METHOD                  = 0x105,
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_CITY                    = 0x106,
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_STATE                   = 0x107,
    /* Zip code */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ZIP                     = 0x108,
    /* Two-letter country code defined by ISO 3166-1 */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_COUNTRY_CODE            = 0x109,
    /* UE Wi-Fi interface mac address */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_UE_WLAN_MAC             = 0x10A,
    /* confidence */
    /* type = uint32_t */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_CONFIDENCE              = 0x10B,
    /* altitude */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ALTITUDE                = 0x10C,
    /* accuracy semi Major Axis */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_SEMI_MAJOR_AXIS = 0x10D,
    /* accuracy semi Minor Axis */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_SEMI_MINOR_AXIS = 0x10E,
    /* accuracy vertical Axis */
    /* type = string */
    MIPC_SYS_SET_GEO_LOCATION_REQ_T_ACCURACY_VERTICAL_AXIS  = 0x10F,
};

    /* MIPC_MSG.SYS_SET_GEO_LOCATION_CNF */
enum mipc_sys_set_geo_location_cnf_tlv_enum {
    mipc_sys_set_geo_location_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_SILENT_REBOOT_REQ */
enum mipc_sys_silent_reboot_req_tlv_enum {
    mipc_sys_silent_reboot_req_tlv_NONE = 0,
    /* 0 means normal mode(default mode), 1 means silent reboot. when silent reboot, MD will use the verified sim pin to auto verify sim pin */
    /* type = uint8_t */
    MIPC_SYS_SILENT_REBOOT_REQ_T_MODE                       = 0x100,
};

    /* MIPC_MSG.SYS_SILENT_REBOOT_CNF */
enum mipc_sys_silent_reboot_cnf_tlv_enum {
    mipc_sys_silent_reboot_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_SET_IA_REQ */
enum mipc_apn_set_ia_req_tlv_enum {
    mipc_apn_set_ia_req_tlv_NONE = 0,
    /* APN name */
    /* type = string */
    MIPC_APN_SET_IA_REQ_T_APN                               = 0x101,
    /* pdp type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_APN_SET_IA_REQ_T_PDP_TYPE                          = 0x102,
    /* roaming type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_APN_SET_IA_REQ_T_ROAMING_TYPE                      = 0x103,
    /* auth type */
    /* type = uint8_t, refer to APN_AUTH_TYPE */
    MIPC_APN_SET_IA_REQ_T_AUTH_TYPE                         = 0x104,
    /* user name */
    /* type = string */
    MIPC_APN_SET_IA_REQ_T_USERID                            = 0x8105,
    /* password */
    /* type = string */
    MIPC_APN_SET_IA_REQ_T_PASSWORD                          = 0x8106,
    /* bearer bit mask */
    /* type = uint32_t */
    MIPC_APN_SET_IA_REQ_T_BEARER_BITMASK                    = 0x107,
    /* compression config */
    /* type = uint8_t, refer to APN_COMPRESSION */
    MIPC_APN_SET_IA_REQ_T_COMPRESSION                       = 0x108,
};

    /* MIPC_MSG.APN_SET_IA_CNF */
enum mipc_apn_set_ia_cnf_tlv_enum {
    mipc_apn_set_ia_cnf_tlv_NONE = 0,
    /* the number of IA APN */
    /* type = uint8_t */
    MIPC_APN_SET_IA_CNF_T_IA_COUNT                          = 0x100,
    /* the list of IA APN */
    /* type = struct_array, refer to apn_ia */
    MIPC_APN_SET_IA_CNF_T_IA_LIST                           = 0x8101,
};

    /* MIPC_MSG.APN_GET_IA_REQ */
enum mipc_apn_get_ia_req_tlv_enum {
    mipc_apn_get_ia_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_GET_IA_CNF */
enum mipc_apn_get_ia_cnf_tlv_enum {
    mipc_apn_get_ia_cnf_tlv_NONE = 0,
    /* the number of IA APN */
    /* type = uint8_t */
    MIPC_APN_GET_IA_CNF_T_IA_COUNT                          = 0x100,
    /* the list of IA APN */
    /* type = struct_array, refer to apn_ia */
    MIPC_APN_GET_IA_CNF_T_IA_LIST                           = 0x8101,
};

    /* MIPC_MSG.APN_ADD_PROFILE_REQ */
enum mipc_apn_add_profile_req_tlv_enum {
    mipc_apn_add_profile_req_tlv_NONE = 0,
    /* the ID of APN profile */
    /* type = uint32_t */
    MIPC_APN_ADD_PROFILE_REQ_T_ID                           = 0x101,
    /* plmn of operator NW */
    /* type = string */
    MIPC_APN_ADD_PROFILE_REQ_T_PLMN_ID                      = 0x102,
    /* apn name */
    /* type = string */
    MIPC_APN_ADD_PROFILE_REQ_T_APN                          = 0x103,
    /* apn type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_APN_ADD_PROFILE_REQ_T_APN_TYPE                     = 0x104,
    /* pdp type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_APN_ADD_PROFILE_REQ_T_PDP_TYPE                     = 0x105,
    /* roaming type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_APN_ADD_PROFILE_REQ_T_ROAMING_TYPE                 = 0x106,
    /* auth type */
    /* type = uint8_t, refer to APN_AUTH_TYPE */
    MIPC_APN_ADD_PROFILE_REQ_T_AUTH_TYPE                    = 0x107,
    /* user name */
    /* type = string */
    MIPC_APN_ADD_PROFILE_REQ_T_USERID                       = 0x8108,
    /* password */
    /* type = string */
    MIPC_APN_ADD_PROFILE_REQ_T_PASSWORD                     = 0x8109,
    /* bearer bitmask */
    /* type = uint32_t */
    MIPC_APN_ADD_PROFILE_REQ_T_BEARER_BITMASK               = 0x10A,
    /* compression */
    /* type = uint8_t, refer to APN_COMPRESSION */
    MIPC_APN_ADD_PROFILE_REQ_T_COMPRESSION                  = 0x10B,
    /* apn is enabled or not, MAX is not set */
    /* type = uint8_t, refer to APN_ENABLED_TYPE */
    MIPC_APN_ADD_PROFILE_REQ_T_ENABLED                      = 0x10C,
};

    /* MIPC_MSG.APN_ADD_PROFILE_CNF */
enum mipc_apn_add_profile_cnf_tlv_enum {
    mipc_apn_add_profile_cnf_tlv_NONE = 0,
    /* number of APN profile in list */
    /* type = uint8_t */
    MIPC_APN_ADD_PROFILE_CNF_T_APN_COUNT                    = 0x100,
    /* the list of APN profile */
    /* type = struct_array, refer to apn_profile */
    MIPC_APN_ADD_PROFILE_CNF_T_APN_LIST                     = 0x8101,
};

    /* MIPC_MSG.APN_LIST_PROFILE_REQ */
enum mipc_apn_list_profile_req_tlv_enum {
    mipc_apn_list_profile_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_LIST_PROFILE_CNF */
enum mipc_apn_list_profile_cnf_tlv_enum {
    mipc_apn_list_profile_cnf_tlv_NONE = 0,
    /* number of APN profile in list */
    /* type = uint8_t */
    MIPC_APN_LIST_PROFILE_CNF_T_APN_COUNT                   = 0x100,
    /* the list of APN profile */
    /* type = struct_array, refer to apn_profile */
    MIPC_APN_LIST_PROFILE_CNF_T_APN_LIST                    = 0x8101,
};

    /* MIPC_MSG.APN_DEL_PROFILE_REQ */
enum mipc_apn_del_profile_req_tlv_enum {
    mipc_apn_del_profile_req_tlv_NONE = 0,
    /* profile ID to delete */
    /* type = uint32_t */
    MIPC_APN_DEL_PROFILE_REQ_T_ID                           = 0x101,
};

    /* MIPC_MSG.APN_DEL_PROFILE_CNF */
enum mipc_apn_del_profile_cnf_tlv_enum {
    mipc_apn_del_profile_cnf_tlv_NONE = 0,
    /* profile number in list */
    /* type = uint8_t */
    MIPC_APN_DEL_PROFILE_CNF_T_APN_COUNT                    = 0x100,
    /* profile list */
    /* type = struct_array, refer to apn_profile */
    MIPC_APN_DEL_PROFILE_CNF_T_APN_LIST                     = 0x8101,
};

    /* MIPC_MSG.APN_SET_PROFILE_STATUS_REQ */
enum mipc_apn_set_profile_status_req_tlv_enum {
    mipc_apn_set_profile_status_req_tlv_NONE = 0,
    /* indicate host/ap will set APN profile or not */
    /* type = uint8_t, refer to APN_PROFILE_MODE */
    MIPC_APN_SET_PROFILE_STATUS_REQ_T_MODE                  = 0x101,
};

    /* MIPC_MSG.APN_SET_PROFILE_STATUS_CNF */
enum mipc_apn_set_profile_status_cnf_tlv_enum {
    mipc_apn_set_profile_status_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.APN_LIST_MD_PROFILE_REQ */
enum mipc_apn_list_md_profile_req_tlv_enum {
    mipc_apn_list_md_profile_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_LIST_MD_PROFILE_CNF */
enum mipc_apn_list_md_profile_cnf_tlv_enum {
    mipc_apn_list_md_profile_cnf_tlv_NONE = 0,
    /* number of APN profile in list */
    /* type = uint8_t */
    MIPC_APN_LIST_MD_PROFILE_CNF_T_APN_COUNT                = 0x100,
    /* the list of APN profile */
    /* type = struct_array, refer to md_apn_profile */
    MIPC_APN_LIST_MD_PROFILE_CNF_T_APN_LIST                 = 0x8101,
};

    /* MIPC_MSG.APN_SET_VZW_APN_REQ */
enum mipc_apn_set_vzw_apn_req_tlv_enum {
    mipc_apn_set_vzw_apn_req_tlv_NONE = 0,
    /* indicate which APN identity to edit */
    /* type = uint8_t */
    MIPC_APN_SET_VZW_APN_REQ_T_APN_ID                       = 0x100,
    /* indicate the APN class */
    /* type = uint8_t */
    MIPC_APN_SET_VZW_APN_REQ_T_CLASS                        = 0x101,
    /* the network identifier, such as IMS,VZWADMIN,etc */
    /* type = string */
    MIPC_APN_SET_VZW_APN_REQ_T_NETWORK_IDENTIFIER           = 0x102,
    /* pdp type,such as IP,IPv6,IPv4v6 */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_APN_SET_VZW_APN_REQ_T_PDP_TYPE                     = 0x103,
    /* apn bearer, such as, LTE */
    /* type = string */
    MIPC_APN_SET_VZW_APN_REQ_T_APN_BEARER                   = 0x104,
    /* apn is enabled or not, MAX is not set */
    /* type = uint8_t, refer to APN_ENABLED_TYPE */
    MIPC_APN_SET_VZW_APN_REQ_T_ENABLED                      = 0x105,
    /* APN inactivity timer */
    /* type = uint32_t */
    MIPC_APN_SET_VZW_APN_REQ_T_APN_TIMER                    = 0x106,
};

    /* MIPC_MSG.APN_SET_VZW_APN_CNF */
enum mipc_apn_set_vzw_apn_cnf_tlv_enum {
    mipc_apn_set_vzw_apn_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.APN_SET_VZW_APN_TIMER_REQ */
enum mipc_apn_set_vzw_apn_timer_req_tlv_enum {
    mipc_apn_set_vzw_apn_timer_req_tlv_NONE = 0,
    /* indicate which APN identity to edit */
    /* type = uint8_t */
    MIPC_APN_SET_VZW_APN_TIMER_REQ_T_APN_ID                 = 0x100,
    /* max connection count */
    /* type = uint8_t */
    MIPC_APN_SET_VZW_APN_TIMER_REQ_T_MAX_CONN               = 0x101,
    /* max connection  */
    /* type = uint8_t */
    MIPC_APN_SET_VZW_APN_TIMER_REQ_T_MAX_CONN_T             = 0x102,
    /* wait time by seconds */
    /* type = uint32_t */
    MIPC_APN_SET_VZW_APN_TIMER_REQ_T_WAIT_TIME              = 0x103,
    /* throttle timer by seconds */
    /* type = uint32_t */
    MIPC_APN_SET_VZW_APN_TIMER_REQ_T_THROTTLE_TIME          = 0x104,
};

    /* MIPC_MSG.APN_SET_VZW_APN_TIMER_CNF */
enum mipc_apn_set_vzw_apn_timer_cnf_tlv_enum {
    mipc_apn_set_vzw_apn_timer_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_ACT_CALL_REQ */
enum mipc_data_act_call_req_tlv_enum {
    mipc_data_act_call_req_tlv_NONE = 0,
    /* APN name */
    /* type = string */
    MIPC_DATA_ACT_CALL_REQ_T_APN                            = 0x101,
    /* APN type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_APN_TYPE                       = 0x102,
    /* PDP type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_PDP_TYPE                       = 0x103,
    /* ROAMING type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_ROAMING_TYPE                   = 0x104,
    /* AUTH type */
    /* type = uint8_t, refer to APN_AUTH_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_AUTH_TYPE                      = 0x105,
    /* username */
    /* type = string */
    MIPC_DATA_ACT_CALL_REQ_T_USERID                         = 0x8106,
    /* password */
    /* type = string */
    MIPC_DATA_ACT_CALL_REQ_T_PASSWORD                       = 0x8107,
    /* v4v6 fallback mode */
    /* type = uint8_t, refer to DATA_FALLBACK_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_IPV4V6_FALLBACK                = 0x108,
    /* specifiy allowed bearer type */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_REQ_T_BEARER_BITMASK                 = 0x109,
    /* how to reuse modem already activated pdn */
    /* type = uint8_t, refer to DATA_REUSE_TYPE */
    MIPC_DATA_ACT_CALL_REQ_T_REUSE_FLAG                     = 0x10A,
    /* indicate whether to bind to RNDIS. 1: bind to RNDIS. 0: not bind to RNDIS */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_REQ_T_IF_TYPE                        = 0x10B,
    /* to indicate URSP ue local configuartion */
    /* type = struct, refer to ursp_ue_local_conf_struct */
    MIPC_DATA_ACT_CALL_REQ_T_URSP_UE_LOCAL_CONF             = 0x10E,
};

    /* MIPC_MSG.DATA_ACT_CALL_CNF */
enum mipc_data_act_call_cnf_tlv_enum {
    mipc_data_act_call_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_ID                             = 0x100,
    /* apn name */
    /* type = string */
    MIPC_DATA_ACT_CALL_CNF_T_APN                            = 0x101,
    /* pdp type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_ACT_CALL_CNF_T_PDP_TYPE                       = 0x102,
    /* v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_V4_COUNT                       = 0x103,
    /* first v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V4_0                           = 0x8104,
    /* second v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V4_1                           = 0x8105,
    /* third v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V4_2                           = 0x8106,
    /* fourth v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V4_3                           = 0x8107,
    /* v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_V6_COUNT                       = 0x108,
    /* first v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V6_0                           = 0x8109,
    /* second v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V6_1                           = 0x810A,
    /* third v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V6_2                           = 0x810B,
    /* fourth v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_V6_3                           = 0x810C,
    /* DNS v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_COUNT                   = 0x10D,
    /* first DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_0                       = 0x810E,
    /* second DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_1                       = 0x810F,
    /* third DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_2                       = 0x8110,
    /* fourth DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V4_3                       = 0x8111,
    /* DNS v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_COUNT                   = 0x112,
    /* first DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_0                       = 0x8113,
    /* second DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_1                       = 0x8114,
    /* third DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_2                       = 0x8115,
    /* fourth DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_DNS_V6_3                       = 0x8116,
    /* PCSCF v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_COUNT                 = 0x117,
    /* first PCSCF v4 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_0                     = 0x8118,
    /* second PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_1                     = 0x8119,
    /* third PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_2                     = 0x811A,
    /* fourth PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V4_3                     = 0x811B,
    /* PCSCF v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_COUNT                 = 0x11C,
    /* first PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_0                     = 0x811D,
    /* second PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_1                     = 0x811E,
    /* third PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_2                     = 0x811F,
    /* fourth PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_PCSCF_V6_3                     = 0x8120,
    /* gateway v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_CNF_T_GW_V4                          = 0x8121,
    /* gateway v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_CNF_T_GW_V6                          = 0x8122,
    /* v4 MTU */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_MTU_V4                         = 0x123,
    /* v6 MTU */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_MTU_V6                         = 0x124,
    /* network interface id */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_INTERFACE_ID                   = 0x125,
    /* data call primary id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_P_ID                           = 0x126,
    /*  fall back data call id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_CNF_T_FB_ID                          = 0x127,
    /*  IPv4 net mask */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_IPv4_NETMASK                   = 0x128,
    /*  IPv6 net mask */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_IPv6_NETMASK                   = 0x129,
    /*  network transmition id */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_CNF_T_TRANS_ID                       = 0x12A,
};

    /* MIPC_MSG.DATA_DEACT_CALL_REQ */
enum mipc_data_deact_call_req_tlv_enum {
    mipc_data_deact_call_req_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_DEACT_CALL_REQ_T_ID                           = 0x101,
};

    /* MIPC_MSG.DATA_DEACT_CALL_CNF */
enum mipc_data_deact_call_cnf_tlv_enum {
    mipc_data_deact_call_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_DEACT_CALL_CNF_T_ID                           = 0x100,
};

    /* MIPC_MSG.DATA_GET_CALL_REQ */
enum mipc_data_get_call_req_tlv_enum {
    mipc_data_get_call_req_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_REQ_T_ID                             = 0x101,
};

    /* MIPC_MSG.DATA_GET_CALL_CNF */
enum mipc_data_get_call_cnf_tlv_enum {
    mipc_data_get_call_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_ID                             = 0x100,
    /* APN name */
    /* type = string */
    MIPC_DATA_GET_CALL_CNF_T_APN                            = 0x101,
    /* PDP type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_GET_CALL_CNF_T_PDP_TYPE                       = 0x102,
    /* v4 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_V4_COUNT                       = 0x103,
    /* first v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_V4_0                           = 0x8104,
    /* second v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_V4_1                           = 0x8105,
    /* third v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_V4_2                           = 0x8106,
    /* fourth v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_V4_3                           = 0x8107,
    /* v6 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_V6_COUNT                       = 0x108,
    /* first v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_V6_0                           = 0x8109,
    /* second v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_V6_1                           = 0x810A,
    /* third v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_V6_2                           = 0x810B,
    /* fourth v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_V6_3                           = 0x810C,
    /* DNS v4 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V4_COUNT                   = 0x10D,
    /* first DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V4_0                       = 0x810E,
    /* second DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V4_1                       = 0x810F,
    /* third DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V4_2                       = 0x8110,
    /* fourth DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V4_3                       = 0x8111,
    /* DNS v6 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V6_COUNT                   = 0x112,
    /* first DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V6_0                       = 0x8113,
    /* second DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V6_1                       = 0x8114,
    /* third DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V6_2                       = 0x8115,
    /* fourth DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_DNS_V6_3                       = 0x8116,
    /* PCSCF v4 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_COUNT                 = 0x117,
    /* first PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_0                     = 0x8118,
    /* second PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_1                     = 0x8119,
    /* third PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_2                     = 0x811A,
    /* fourth PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V4_3                     = 0x811B,
    /* PCSCF v6 address count */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_COUNT                 = 0x11C,
    /* first PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_0                     = 0x811D,
    /* second PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_1                     = 0x811E,
    /* third PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_2                     = 0x811F,
    /* fourth PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_PCSCF_V6_3                     = 0x8120,
    /* gateway v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_GET_CALL_CNF_T_GW_V4                          = 0x8121,
    /* gateway v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_GET_CALL_CNF_T_GW_V6                          = 0x8122,
    /* v4 MTU */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_MTU_V4                         = 0x123,
    /* v6 MTU */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_MTU_V6                         = 0x124,
    /* network interface id */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_INTERFACE_ID                   = 0x125,
    /*  IPv4 net mask */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_IPv4_NETMASK                   = 0x126,
    /*  IPv6 net mask */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_IPv6_NETMASK                   = 0x127,
    /* APN type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_DATA_GET_CALL_CNF_T_APN_TYPE                       = 0x128,
    /* network transmition id */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_CNF_T_TRANS_ID                       = 0x129,
};

    /* MIPC_MSG.DATA_SET_PACKET_FILTER_REQ */
enum mipc_data_set_packet_filter_req_tlv_enum {
    mipc_data_set_packet_filter_req_tlv_NONE = 0,
    /* data call id (apply to which data call) */
    /* type = uint8_t */
    MIPC_DATA_SET_PACKET_FILTER_REQ_T_ID                    = 0x101,
    /* filter count */
    /* type = uint8_t */
    MIPC_DATA_SET_PACKET_FILTER_REQ_T_FILTER_COUNT          = 0x102,
    /* filter content */
    /* type = struct_array, refer to data_packet_filter */
    MIPC_DATA_SET_PACKET_FILTER_REQ_T_FILTER_LIST           = 0x103,
};

    /* MIPC_MSG.DATA_SET_PACKET_FILTER_CNF */
enum mipc_data_set_packet_filter_cnf_tlv_enum {
    mipc_data_set_packet_filter_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_SET_PACKET_FILTER_CNF_T_ID                    = 0x100,
    /* filter count */
    /* type = uint8_t */
    MIPC_DATA_SET_PACKET_FILTER_CNF_T_FILTER_COUNT          = 0x101,
    /* filter content */
    /* type = struct_array, refer to data_packet_filter */
    MIPC_DATA_SET_PACKET_FILTER_CNF_T_FILTER_LIST           = 0x102,
};

    /* MIPC_MSG.DATA_GET_PACKET_FILTER_REQ */
enum mipc_data_get_packet_filter_req_tlv_enum {
    mipc_data_get_packet_filter_req_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_PACKET_FILTER_REQ_T_ID                    = 0x101,
};

    /* MIPC_MSG.DATA_GET_PACKET_FILTER_CNF */
enum mipc_data_get_packet_filter_cnf_tlv_enum {
    mipc_data_get_packet_filter_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_PACKET_FILTER_CNF_T_ID                    = 0x100,
    /* filter count */
    /* type = uint8_t */
    MIPC_DATA_GET_PACKET_FILTER_CNF_T_FILTER_COUNT          = 0x101,
    /* filter content */
    /* type = struct_array, refer to data_packet_filter */
    MIPC_DATA_GET_PACKET_FILTER_CNF_T_FILTER_LIST           = 0x102,
};

    /* MIPC_MSG.DATA_GET_PCO_REQ */
enum mipc_data_get_pco_req_tlv_enum {
    mipc_data_get_pco_req_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_PCO_REQ_T_ID                              = 0x101,
};

    /* MIPC_MSG.DATA_GET_PCO_CNF */
enum mipc_data_get_pco_cnf_tlv_enum {
    mipc_data_get_pco_cnf_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_PCO_CNF_T_ID                              = 0x100,
    /* PCO count */
    /* type = uint8_t */
    MIPC_DATA_GET_PCO_CNF_T_PCO_COUNT                       = 0x101,
    /* PCO content */
    /* type = struct, refer to data_pco_ie */
    MIPC_DATA_GET_PCO_CNF_T_PCO_LIST                        = 0x102,
};

    /* MIPC_MSG.DATA_SET_DATA_ALLOW_REQ */
enum mipc_data_set_data_allow_req_tlv_enum {
    mipc_data_set_data_allow_req_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_SET_DATA_ALLOW_CNF */
enum mipc_data_set_data_allow_cnf_tlv_enum {
    mipc_data_set_data_allow_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_GET_MD_DATA_CALL_LIST_REQ */
enum mipc_data_get_md_data_call_list_req_tlv_enum {
    mipc_data_get_md_data_call_list_req_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_GET_MD_DATA_CALL_LIST_CNF */
enum mipc_data_get_md_data_call_list_cnf_tlv_enum {
    mipc_data_get_md_data_call_list_cnf_tlv_NONE = 0,
    /* data call id list and indicate which is actived */
    /* type = byte_array, refer to MIPC_CID_ACT_STATE */
    MIPC_DATA_GET_MD_DATA_CALL_LIST_CNF_T_CID_LIST          = 0x100,
};

    /* MIPC_MSG.DATA_SET_CONFIG_REQ */
enum mipc_data_set_config_req_tlv_enum {
    mipc_data_set_config_req_tlv_NONE = 0,
    /* mobile data, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_MOBILE_DATA                  = 0x100,
    /* data roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_DATA_ROAMING                 = 0x101,
    /* VOLTE config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_VOLTE                        = 0x102,
    /* ims test mode config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_IMS_TEST_MODE                = 0x103,
    /* data domestic roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_DATA_DOMESTIC_ROAMING        = 0x104,
    /* data international roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_SET_CONFIG_REQ_T_DATA_INTERNATIONAL_ROAMING   = 0x105,
};

    /* MIPC_MSG.DATA_SET_CONFIG_CNF */
enum mipc_data_set_config_cnf_tlv_enum {
    mipc_data_set_config_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_GET_CONFIG_REQ */
enum mipc_data_get_config_req_tlv_enum {
    mipc_data_get_config_req_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_GET_CONFIG_CNF */
enum mipc_data_get_config_cnf_tlv_enum {
    mipc_data_get_config_cnf_tlv_NONE = 0,
    /* mobile data, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_MOBILE_DATA                  = 0x100,
    /* data roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_DATA_ROAMING                 = 0x101,
    /* VOLTE config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_VOLTE                        = 0x102,
    /* ims test mode config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_IMS_TEST_MODE                = 0x103,
    /* data domestic roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_DATA_DOMESTIC_ROAMING        = 0x104,
    /* data international roaming config, enable, disable or no change */
    /* type = uint8_t, refer to DATA_CONFIG_TYPE */
    MIPC_DATA_GET_CONFIG_CNF_T_DATA_INTERNATIONAL_ROAMING   = 0x105,
};

    /* MIPC_MSG.DATA_ABORT_CALL_REQ */
enum mipc_data_abort_call_req_tlv_enum {
    mipc_data_abort_call_req_tlv_NONE = 0,
    /* apn name */
    /* type = string */
    MIPC_DATA_ABORT_CALL_REQ_T_APN                          = 0x100,
};

    /* MIPC_MSG.DATA_ABORT_CALL_CNF */
enum mipc_data_abort_call_cnf_tlv_enum {
    mipc_data_abort_call_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.DATA_GET_CALL_INFO_REQ */
enum mipc_data_get_call_info_req_tlv_enum {
    mipc_data_get_call_info_req_tlv_NONE = 0,
    /* apn name */
    /* type = string */
    MIPC_DATA_GET_CALL_INFO_REQ_T_APN                       = 0x100,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_INFO_REQ_T_ID                        = 0x101,
};

    /* MIPC_MSG.DATA_GET_CALL_INFO_CNF */
enum mipc_data_get_call_info_cnf_tlv_enum {
    mipc_data_get_call_info_cnf_tlv_NONE = 0,
    /* apn name */
    /* type = string */
    MIPC_DATA_GET_CALL_INFO_CNF_T_APN                       = 0x100,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_GET_CALL_INFO_CNF_T_ID                        = 0x101,
    /* the utc time of call established */
    /* type = struct, refer to data_nitz_info */
    MIPC_DATA_GET_CALL_INFO_CNF_T_ESTBLISHED_TIME           = 0x102,
    /* the utc time of call disconnected */
    /* type = struct, refer to data_nitz_info */
    MIPC_DATA_GET_CALL_INFO_CNF_T_END_TIME                  = 0x103,
    /* if PDN is rejected, indicate reject cause from netowrk, 0 means success */
    /* type = uint32_t */
    MIPC_DATA_GET_CALL_INFO_CNF_T_REJECT_CAUSE              = 0x104,
};

    /* MIPC_MSG.DATA_GET_PDP_CID_REQ */
enum mipc_data_get_pdp_cid_req_tlv_enum {
    mipc_data_get_pdp_cid_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.DATA_GET_PDP_CID_CNF */
enum mipc_data_get_pdp_cid_cnf_tlv_enum {
    mipc_data_get_pdp_cid_cnf_tlv_NONE = 0,
    /* minimum pdp cid */
    /* type = uint8_t */
    MIPC_DATA_GET_PDP_CID_CNF_T_MIN_CID                     = 0x100,
    /* max pdp cid */
    /* type = uint8_t */
    MIPC_DATA_GET_PDP_CID_CNF_T_MAX_CID                     = 0x101,
};

    /* MIPC_MSG.DATA_RETRY_TIMER_REQ */
enum mipc_data_retry_timer_req_tlv_enum {
    mipc_data_retry_timer_req_tlv_NONE = 0,
    /* 0: query modem suggested retry time. 1: reset data retry count. 2: retry after a given time period */
    /* type = uint8_t, refer to DATA_RETRY_MODE */
    MIPC_DATA_RETRY_TIMER_REQ_T_MODE                        = 0x100,
    /* apn name */
    /* type = string */
    MIPC_DATA_RETRY_TIMER_REQ_T_APN_NAME                    = 0x101,
};

    /* MIPC_MSG.DATA_RETRY_TIMER_CNF */
enum mipc_data_retry_timer_cnf_tlv_enum {
    mipc_data_retry_timer_cnf_tlv_NONE = 0,
    /* suggest retry type from modem */
    /* type = uint8_t, refer to DATA_RETRY_TYPE */
    MIPC_DATA_RETRY_TIMER_CNF_T_RETRY_TYPE                  = 0x100,
    /* suggest retry time from modem is second */
    /* type = uint32_t */
    MIPC_DATA_RETRY_TIMER_CNF_T_RETRY_TIME                  = 0x101,
};

    /* MIPC_MSG.DATA_GET_QOS_REQ */
enum mipc_data_get_qos_req_tlv_enum {
    mipc_data_get_qos_req_tlv_NONE = 0,
    /* context identifier */
    /* type = uint8_t */
    MIPC_DATA_GET_QOS_REQ_T_CID                             = 0x100,
};

    /* MIPC_MSG.DATA_GET_QOS_CNF */
enum mipc_data_get_qos_cnf_tlv_enum {
    mipc_data_get_qos_cnf_tlv_NONE = 0,
    /* qos info, struct array */
    /* type = struct, refer to data_qos_info */
    MIPC_DATA_GET_QOS_CNF_T_QOS_LIST                        = 0x100,
};

    /* MIPC_MSG.DATA_KEEPALIVE_REQ */
enum mipc_data_keepalive_req_tlv_enum {
    mipc_data_keepalive_req_tlv_NONE = 0,
    /* session handle of stop keep alive */
    /* type = uint32_t */
    MIPC_DATA_KEEPALIVE_REQ_T_STOP_KEEPALIVE                = 0x100,
    /* info of start keep alive */
    /* type = struct, refer to data_start_keepalive_request */
    MIPC_DATA_KEEPALIVE_REQ_T_START_KEEPALIVE               = 0x101,
};

    /* MIPC_MSG.DATA_KEEPALIVE_CNF */
enum mipc_data_keepalive_cnf_tlv_enum {
    mipc_data_keepalive_cnf_tlv_NONE = 0,
    /* connection id */
    /* type = uint32_t */
    MIPC_DATA_KEEPALIVE_CNF_T_SESSION_HANDLE                = 0x100,
    /* keep alive status code */
    /* type = uint8_t, refer to DATA_KEEPALIVE_STATUS_CODE */
    MIPC_DATA_KEEPALIVE_CNF_T_STATUS_CODE                   = 0x101,
};

    /* MIPC_MSG.DATA_GET_5GQOS_REQ */
enum mipc_data_get_5gqos_req_tlv_enum {
    mipc_data_get_5gqos_req_tlv_NONE = 0,
    /* context identifier */
    /* type = uint8_t */
    MIPC_DATA_GET_5GQOS_REQ_T_CID                           = 0x100,
};

    /* MIPC_MSG.DATA_GET_5GQOS_CNF */
enum mipc_data_get_5gqos_cnf_tlv_enum {
    mipc_data_get_5gqos_cnf_tlv_NONE = 0,
    /* 5g qos info, struct array */
    /* type = struct, refer to data_5gqos_info */
    MIPC_DATA_GET_5GQOS_CNF_T_QOS_LIST                      = 0x100,
};

    /* MIPC_MSG.INTERNAL_OPEN_REQ */
enum mipc_internal_open_req_tlv_enum {
    mipc_internal_open_req_tlv_NONE = 0,
    /*  */
    /* type = uint32_t */
    MIPC_INTERNAL_OPEN_REQ_T_VERSION                        = 0x100,
    /*  */
    /* type = string */
    MIPC_INTERNAL_OPEN_REQ_T_CLIENT_NAME                    = 0x101,
    /* indicate whether the host support USIR feature */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_INTERNAL_OPEN_REQ_T_USIR_SUPPORT                   = 0x102,
};

    /* MIPC_MSG.INTERNAL_OPEN_CNF */
enum mipc_internal_open_cnf_tlv_enum {
    mipc_internal_open_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint32_t */
    MIPC_INTERNAL_OPEN_CNF_T_VERSION                        = 0x100,
    /* default timeout value configured by modem */
    /* type = uint32_t */
    MIPC_INTERNAL_OPEN_CNF_T_TIMEOUT                        = 0x101,
};

    /* MIPC_MSG.INTERNAL_CLOSE_REQ */
enum mipc_internal_close_req_tlv_enum {
    mipc_internal_close_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_CLOSE_CNF */
enum mipc_internal_close_cnf_tlv_enum {
    mipc_internal_close_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_TEST_REQ */
enum mipc_internal_test_req_tlv_enum {
    mipc_internal_test_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_TEST_CNF */
enum mipc_internal_test_cnf_tlv_enum {
    mipc_internal_test_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_TEST_CNF_T_TEST                           = 0x100,
};

    /* MIPC_MSG.INTERNAL_REGISTER_IND_REQ */
enum mipc_internal_register_ind_req_tlv_enum {
    mipc_internal_register_ind_req_tlv_NONE = 0,
    /* MIPC message id */
    /* type = uint16_t */
    MIPC_INTERNAL_REGISTER_IND_REQ_T_MSG_ID                 = 0x100,
};

    /* MIPC_MSG.INTERNAL_REGISTER_IND_CNF */
enum mipc_internal_register_ind_cnf_tlv_enum {
    mipc_internal_register_ind_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_UNREGISTER_IND_REQ */
enum mipc_internal_unregister_ind_req_tlv_enum {
    mipc_internal_unregister_ind_req_tlv_NONE = 0,
    /* MIPC message id */
    /* type = uint16_t */
    MIPC_INTERNAL_UNREGISTER_IND_REQ_T_MSG_ID               = 0x100,
};

    /* MIPC_MSG.INTERNAL_UNREGISTER_IND_CNF */
enum mipc_internal_unregister_ind_cnf_tlv_enum {
    mipc_internal_unregister_ind_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_REGISTER_CMD_REQ */
enum mipc_internal_register_cmd_req_tlv_enum {
    mipc_internal_register_cmd_req_tlv_NONE = 0,
    /* MIPC message id */
    /* type = uint16_t */
    MIPC_INTERNAL_REGISTER_CMD_REQ_T_MSG_ID                 = 0x100,
};

    /* MIPC_MSG.INTERNAL_REGISTER_CMD_CNF */
enum mipc_internal_register_cmd_cnf_tlv_enum {
    mipc_internal_register_cmd_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_UNREGISTER_CMD_REQ */
enum mipc_internal_unregister_cmd_req_tlv_enum {
    mipc_internal_unregister_cmd_req_tlv_NONE = 0,
    /* MIPC message id */
    /* type = uint16_t */
    MIPC_INTERNAL_UNREGISTER_CMD_REQ_T_MSG_ID               = 0x100,
};

    /* MIPC_MSG.INTERNAL_UNREGISTER_CMD_CNF */
enum mipc_internal_unregister_cmd_cnf_tlv_enum {
    mipc_internal_unregister_cmd_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_SET_FILTER_REQ */
enum mipc_internal_set_filter_req_tlv_enum {
    mipc_internal_set_filter_req_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to internal_set_filter_req */
    MIPC_INTERNAL_SET_FILTER_REQ_T_STRUCT                   = 0x100,
};

    /* MIPC_MSG.INTERNAL_SET_FILTER_CNF */
enum mipc_internal_set_filter_cnf_tlv_enum {
    mipc_internal_set_filter_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to internal_set_filter_cnf */
    MIPC_INTERNAL_SET_FILTER_CNF_T_STRUCT                   = 0x100,
};

    /* MIPC_MSG.INTERNAL_RESET_FILTER_REQ */
enum mipc_internal_reset_filter_req_tlv_enum {
    mipc_internal_reset_filter_req_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to internal_reset_filter_req */
    MIPC_INTERNAL_RESET_FILTER_REQ_T_STRUCT                 = 0x100,
};

    /* MIPC_MSG.INTERNAL_RESET_FILTER_CNF */
enum mipc_internal_reset_filter_cnf_tlv_enum {
    mipc_internal_reset_filter_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to internal_reset_filter_cnf */
    MIPC_INTERNAL_RESET_FILTER_CNF_T_STRUCT                 = 0x100,
};

    /* MIPC_MSG.INTERNAL_EIF_REQ */
enum mipc_internal_eif_req_tlv_enum {
    mipc_internal_eif_req_tlv_NONE = 0,
    /*  */
    /* type = uint32_t */
    MIPC_INTERNAL_EIF_REQ_T_TRANSID                         = 0x100,
    /*  */
    /* type = uint8_t, refer to INTERNAL_EIF_REQ_CMD */
    MIPC_INTERNAL_EIF_REQ_T_CMD                             = 0x101,
    /*  */
    /* type = struct, refer to full_addr */
    MIPC_INTERNAL_EIF_REQ_T_NEW_ADDR                        = 0x8102,
    /*  */
    /* type = struct, refer to full_addr */
    MIPC_INTERNAL_EIF_REQ_T_OLD_ADDR                        = 0x8103,
    /* pdp type for interface up */
    /* type = uint8_t, refer to EIF_ADDRESS_TYPE */
    MIPC_INTERNAL_EIF_REQ_T_ADDRESS_TYPE                    = 0x104,
};

    /* MIPC_MSG.INTERNAL_EIF_CNF */
enum mipc_internal_eif_cnf_tlv_enum {
    mipc_internal_eif_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_RADIO_STATE_REQ */
enum mipc_nw_get_radio_state_req_tlv_enum {
    mipc_nw_get_radio_state_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_RADIO_STATE_CNF */
enum mipc_nw_get_radio_state_cnf_tlv_enum {
    mipc_nw_get_radio_state_cnf_tlv_NONE = 0,
    /* SW radio state */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_GET_RADIO_STATE_CNF_T_SW_STATE                  = 0x100,
    /* HW radio state */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_GET_RADIO_STATE_CNF_T_HW_STATE                  = 0x101,
};

    /* MIPC_MSG.NW_SET_RADIO_STATE_REQ */
enum mipc_nw_set_radio_state_req_tlv_enum {
    mipc_nw_set_radio_state_req_tlv_NONE = 0,
    /* SW radio state */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_SET_RADIO_STATE_REQ_T_SW_STATE                  = 0x100,
    /* reason to turn radio on/off */
    /* type = uint8_t, refer to NW_RADIO_STATE_CAUSE */
    MIPC_NW_SET_RADIO_STATE_REQ_T_CAUSE                     = 0x101,
    /* HW radio state (only can be set by intenal AP) */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_SET_RADIO_STATE_REQ_T_HW_STATE                  = 0x102,
};

    /* MIPC_MSG.NW_SET_RADIO_STATE_CNF */
enum mipc_nw_set_radio_state_cnf_tlv_enum {
    mipc_nw_set_radio_state_cnf_tlv_NONE = 0,
    /* SW radio state */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_SET_RADIO_STATE_CNF_T_SW_STATE                  = 0x100,
    /* HW radio state */
    /* type = uint8_t, refer to NW_RADIO_STATE */
    MIPC_NW_SET_RADIO_STATE_CNF_T_HW_STATE                  = 0x101,
};

    /* MIPC_MSG.NW_SET_REGISTER_STATE_REQ */
enum mipc_nw_set_register_state_req_tlv_enum {
    mipc_nw_set_register_state_req_tlv_NONE = 0,
    /* auto or manual */
    /* type = uint8_t, refer to NW_REGISTER_MODE */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_MODE                   = 0x100,
    /* the format for operator name, not used in current stage, if register as manual mode, must give the format. */
    /* type = uint8_t */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_FORMAT                 = 0x101,
    /* PLMN id, if register network in manual mode, must provide the PLMN id, for example 46001 */
    /* type = string */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_OPER                   = 0x8102,
    /* Radio access technology, recommend use RAT_MODE. */
    /* type = uint8_t */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_ACT                    = 0x103,
    /* Used for EOPS, interger type range 0~0xFFFFFFFF */
    /* type = uint32_t */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_ARFCN                  = 0x104,
    /* RAT mode, refer to AT+ERAT */
    /* type = uint8_t */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_RAT_MODE               = 0x105,
    /* REQ handling mode: 0 - non block, the response will return once send the cmd; 1 - block, the response will return until the register action finished. */
    /* type = uint8_t */
    MIPC_NW_SET_REGISTER_STATE_REQ_T_BLOCK                  = 0x106,
};

    /* MIPC_MSG.NW_SET_REGISTER_STATE_CNF */
enum mipc_nw_set_register_state_cnf_tlv_enum {
    mipc_nw_set_register_state_cnf_tlv_NONE = 0,
    /* packet service register state */
    /* type = struct, refer to nw_reg_state */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_STATE                  = 0x100,
    /* network error enum, refer to 3GPP 24.008 */
    /* type = uint16_t */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_ERR                 = 0x101,
    /* Currently network register mode: auto or manual */
    /* type = uint8_t, refer to NW_REGISTER_MODE */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_MODE                   = 0x102,
    /* This represents the data speed for current radio technologies can support */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_DATA_SPEED             = 0x103,
    /* provider short name */
    /* type = string */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_NAME                = 0x104,
    /* A string to indicate the roaming. */
    /* type = string */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_ROAMING_TEXT           = 0x105,
    /* the operation error, refer to the NW Error */
    /* type = uint16_t */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_FAIL_CAUSE             = 0x106,
    /* provider long name */
    /* type = string */
    MIPC_NW_SET_REGISTER_STATE_CNF_T_NW_LONG_NAME           = 0x107,
};

    /* MIPC_MSG.NW_GET_REGISTER_STATE_REQ */
enum mipc_nw_get_register_state_req_tlv_enum {
    mipc_nw_get_register_state_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_REGISTER_STATE_CNF */
enum mipc_nw_get_register_state_cnf_tlv_enum {
    mipc_nw_get_register_state_cnf_tlv_NONE = 0,
    /* packet service register state */
    /* type = struct, refer to nw_reg_state */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_STATE                  = 0x100,
    /* network error enum, refer to 3GPP 24.008 */
    /* type = uint16_t */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_ERR                 = 0x101,
    /* auto or manual */
    /* type = uint8_t, refer to NW_REGISTER_MODE */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_MODE                   = 0x102,
    /* This represents the data speed for current radio technologies can support */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_DATA_SPEED             = 0x103,
    /* provider short name */
    /* type = string */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_NAME                = 0x104,
    /* A string to indicate the roaming. */
    /* type = string */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_ROAMING_TEXT           = 0x105,
    /* the operation is fail, refer to the network error for details */
    /* type = uint16_t */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_FAIL_CAUSE             = 0x106,
    /* plmn id, for example, 46001 */
    /* type = string */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_PLMN_ID                = 0x107,
    /* provider long name */
    /* type = string */
    MIPC_NW_GET_REGISTER_STATE_CNF_T_NW_LONG_NAME           = 0x108,
};

    /* MIPC_MSG.NW_GET_PLMN_LIST_REQ */
enum mipc_nw_get_plmn_list_req_tlv_enum {
    mipc_nw_get_plmn_list_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_PLMN_LIST_CNF */
enum mipc_nw_get_plmn_list_cnf_tlv_enum {
    mipc_nw_get_plmn_list_cnf_tlv_NONE = 0,
    /* the number of plmn list */
    /* type = uint8_t */
    MIPC_NW_GET_PLMN_LIST_CNF_T_INFO_COUNT                  = 0x100,
    /* PLMN list element */
    /* type = struct_array, refer to nw_provider */
    MIPC_NW_GET_PLMN_LIST_CNF_T_INFO_LIST                   = 0x101,
    /* The fail cause for this operation. */
    /* type = uint16_t */
    MIPC_NW_GET_PLMN_LIST_CNF_T_FAIL_CAUSE                  = 0x102,
    /* extend plmn list element */
    /* type = struct_array, refer to nw_extend_provider */
    MIPC_NW_GET_PLMN_LIST_CNF_T_EXTEND_INFO_LIST            = 0x103,
};

    /* MIPC_MSG.NW_SET_PS_REQ */
enum mipc_nw_set_ps_req_tlv_enum {
    mipc_nw_set_ps_req_tlv_NONE = 0,
    /* attach or detach */
    /* type = uint8_t, refer to NW_PS */
    MIPC_NW_SET_PS_REQ_T_ACTION                             = 0x100,
};

    /* MIPC_MSG.NW_SET_PS_CNF */
enum mipc_nw_set_ps_cnf_tlv_enum {
    mipc_nw_set_ps_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_PS */
    MIPC_NW_SET_PS_CNF_T_TACH                               = 0x100,
    /* This represents the data speed for current radio technologies can support. */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_SET_PS_CNF_T_DATA_SPEED                         = 0x101,
    /* For 5G only: sub6 or mmwave */
    /* type = uint8_t */
    MIPC_NW_SET_PS_CNF_T_NW_FREQUENCY                       = 0x102,
    /* The fail cause for this operation. */
    /* type = uint16_t */
    MIPC_NW_SET_PS_CNF_T_FAIL_CAUSE                         = 0x103,
};

    /* MIPC_MSG.NW_GET_PS_REQ */
enum mipc_nw_get_ps_req_tlv_enum {
    mipc_nw_get_ps_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_PS_CNF */
enum mipc_nw_get_ps_cnf_tlv_enum {
    mipc_nw_get_ps_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_PS */
    MIPC_NW_GET_PS_CNF_T_TACH                               = 0x100,
    /* This represents the data speed for current radio technologies can support. */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_GET_PS_CNF_T_DATA_SPEED                         = 0x101,
    /* For 5G only: sub6 or mmwave */
    /* type = uint8_t */
    MIPC_NW_GET_PS_CNF_T_NW_FREQUENCY                       = 0x102,
    /* The fail cause for this operation. */
    /* type = uint16_t */
    MIPC_NW_GET_PS_CNF_T_FAIL_CAUSE                         = 0x103,
    /* The ps data registration state. */
    /* type = struct, refer to nw_ps_reg_info */
    MIPC_NW_GET_PS_CNF_T_REG_INFO                           = 0x104,
    /* The cell type. */
    /* type = uint8_t, refer to NW_CELL_TYPE */
    MIPC_NW_GET_PS_CNF_T_CELL_TYPE                          = 0x105,
    /* The cell info: mipc_nw_gsm_cell_struct4 and so on. NOTE: WHEN CELL TYPE IS CELL_TYPE_NSA_EXT, CELL INFO IS THE LTE CELL */
    /* type = struct, refer to nw_gsm_cell */
    MIPC_NW_GET_PS_CNF_T_CELL_INFO                          = 0x8106,
    /* The nr cell info: mipc_nw_nr_cell_struct4. NOTE: JUST VALID WHEN CELL_TYPE IS CELL_TYPE_NSA_EXT, AND CELL_INFO IS LTE CELL. */
    /* type = struct, refer to nw_nr_cell */
    MIPC_NW_GET_PS_CNF_T_NSA_EXT_CELL_INFO                  = 0x8107,
};

    /* MIPC_MSG.NW_SET_SIGNAL_REQ */
enum mipc_nw_set_signal_req_tlv_enum {
    mipc_nw_set_signal_req_tlv_NONE = 0,
    /* The signal report interval, the default value is 5 seconds. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_REQ_T_SIGNAL_STRENGTH_INTERVAL       = 0x100,
    /* The threshold for rssi, the default value is 5. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_REQ_T_RSSI_THRESHOLD                 = 0x101,
    /* The threshold for err rate, the default value is 0. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_REQ_T_ERR_RATE_THRESHOLD             = 0x102,
    /* The threshold for rsrp, the default value is 2 db. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_REQ_T_RSRP_THRESHOLD                 = 0x103,
    /* The threshold for snr, the default value is 0 db. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_REQ_T_SNR_THRESHOLD                  = 0x104,
    /* The value 1 indicates the threshold is used for RAW signal info, this means the rsrp in qdbm unit and snr in qdb unit. The default value is 0, use the dbm and db unit. */
    /* type = uint8_t, refer to NW_SIGNAL_THRESHOLD_MODE */
    MIPC_NW_SET_SIGNAL_REQ_T_THRESHOLD_MODE                 = 0x105,
};

    /* MIPC_MSG.NW_SET_SIGNAL_CNF */
enum mipc_nw_set_signal_cnf_tlv_enum {
    mipc_nw_set_signal_cnf_tlv_NONE = 0,
    /* Current setting for signal report interval, the default value is 5 seconds. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_CNF_T_SIGNAL_STRENGTH_INTERVAL       = 0x104,
    /* Current setting for rssi threshold, the default value is 5. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_CNF_T_RSSI_THRESHOLD                 = 0x105,
    /* Current setting for err rate threshold, the default value is 0. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_CNF_T_ERR_RATE_THRESHOLD             = 0x106,
    /* Current setting for rsrp threshold, the default value is 2 db. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_CNF_T_RSRP_THRESHOLD                 = 0x107,
    /* Current setting for snr threshold, the default value is 0 db. */
    /* type = uint32_t */
    MIPC_NW_SET_SIGNAL_CNF_T_SNR_THRESHOLD                  = 0x108,
    /* The fail cause for this operation. */
    /* type = uint16_t */
    MIPC_NW_SET_SIGNAL_CNF_T_FAIL_CAUSE                     = 0x109,
    /* Signal type, GSM/UMTS/LTE/NR/NSA. Note: When the type is NSA, maybe contains LTE and(or) NR signal info. */
    /* type = uint8_t, refer to NW_SIGNAL_TYPE */
    MIPC_NW_SET_SIGNAL_CNF_T_SIGNAL_TYPE                    = 0x10A,
    /* GSM signal strength. */
    /* type = struct, refer to nw_gsm_signal_strength */
    MIPC_NW_SET_SIGNAL_CNF_T_GSM_SIGNAL                     = 0x10B,
    /* UMTS signal strength. */
    /* type = struct, refer to nw_umts_signal_strength */
    MIPC_NW_SET_SIGNAL_CNF_T_UMTS_SIGNAL                    = 0x10C,
    /* LTE signal strength. */
    /* type = struct, refer to nw_lte_signal_strength */
    MIPC_NW_SET_SIGNAL_CNF_T_LTE_SIGNAL                     = 0x10D,
    /* NR signal strength. */
    /* type = struct, refer to nw_nr_signal_strength */
    MIPC_NW_SET_SIGNAL_CNF_T_NR_SIGNAL                      = 0x10E,
    /* The raw signal data, parse from +ECSQ. */
    /* type = struct_array, refer to nw_raw_signal_info */
    MIPC_NW_SET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_LIST           = 0x10F,
    /* The raw signal info count: when in NSA, the count is 2, and others is 1 */
    /* type = uint8_t */
    MIPC_NW_SET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_COUNT          = 0x110,
};

    /* MIPC_MSG.NW_GET_SIGNAL_REQ */
enum mipc_nw_get_signal_req_tlv_enum {
    mipc_nw_get_signal_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_SIGNAL_CNF */
enum mipc_nw_get_signal_cnf_tlv_enum {
    mipc_nw_get_signal_cnf_tlv_NONE = 0,
    /* Current setting for signal reporting interva, the default value is 5 seconds. */
    /* type = uint32_t */
    MIPC_NW_GET_SIGNAL_CNF_T_SIGNAL_STRENGTH_INTERVAL       = 0x104,
    /* Current rssi threshold setting for signal reporting, the default value is 5. */
    /* type = uint32_t */
    MIPC_NW_GET_SIGNAL_CNF_T_RSSI_THRESHOLD                 = 0x105,
    /* Current err rate threshold setting for signal reporting, the default value is 0. */
    /* type = uint32_t */
    MIPC_NW_GET_SIGNAL_CNF_T_ERR_RATE_THRESHOLD             = 0x106,
    /* Current rsrp threshold setting for signal reporting, the default value is 2 db. */
    /* type = uint32_t */
    MIPC_NW_GET_SIGNAL_CNF_T_RSRP_THRESHOLD                 = 0x107,
    /* Current snr threshold setting for signal reporting, the default value is 0 db. */
    /* type = uint32_t */
    MIPC_NW_GET_SIGNAL_CNF_T_SNR_THRESHOLD                  = 0x108,
    /* The fail cause for operation. */
    /* type = uint16_t */
    MIPC_NW_GET_SIGNAL_CNF_T_FAIL_CAUSE                     = 0x109,
    /* Signal type, GSM/UMTS/LTE/NR/NSA. Note: When the type is NSA, maybe contains LTE and(or) NR signal info. */
    /* type = uint8_t, refer to NW_SIGNAL_TYPE */
    MIPC_NW_GET_SIGNAL_CNF_T_SIGNAL_TYPE                    = 0x10A,
    /* GSM signal strength. */
    /* type = struct, refer to nw_gsm_signal_strength */
    MIPC_NW_GET_SIGNAL_CNF_T_GSM_SIGNAL                     = 0x10B,
    /* UMTS signal strength. */
    /* type = struct, refer to nw_umts_signal_strength */
    MIPC_NW_GET_SIGNAL_CNF_T_UMTS_SIGNAL                    = 0x10C,
    /* LTE signal strength. */
    /* type = struct, refer to nw_lte_signal_strength */
    MIPC_NW_GET_SIGNAL_CNF_T_LTE_SIGNAL                     = 0x10D,
    /* NR signal strength. */
    /* type = struct, refer to nw_nr_signal_strength */
    MIPC_NW_GET_SIGNAL_CNF_T_NR_SIGNAL                      = 0x10E,
    /* The raw signal data, parse from +ECSQ. */
    /* type = struct_array, refer to nw_raw_signal_info */
    MIPC_NW_GET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_LIST           = 0x10F,
    /* The raw signal info count: when in NSA, the count is 2, and others is 1 */
    /* type = uint8_t */
    MIPC_NW_GET_SIGNAL_CNF_T_RAW_SIGNAL_INFO_COUNT          = 0x110,
};

    /* MIPC_MSG.NW_GET_PREFERRED_PROVIDER_REQ */
enum mipc_nw_get_preferred_provider_req_tlv_enum {
    mipc_nw_get_preferred_provider_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_PREFERRED_PROVIDER_CNF */
enum mipc_nw_get_preferred_provider_cnf_tlv_enum {
    mipc_nw_get_preferred_provider_cnf_tlv_NONE = 0,
    /* The provider list length. */
    /* type = uint8_t */
    MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_COUNT              = 0x100,
    /*  */
    /* type = struct_array, refer to nw_provider */
    MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_LIST               = 0x101,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_GET_PREFERRED_PROVIDER_CNF_T_FAIL_CAUSE         = 0x102,
};

    /* MIPC_MSG.NW_SET_PREFERRED_PROVIDER_REQ */
enum mipc_nw_set_preferred_provider_req_tlv_enum {
    mipc_nw_set_preferred_provider_req_tlv_NONE = 0,
    /* The provider list length. */
    /* type = uint8_t */
    MIPC_NW_SET_PREFERRED_PROVIDER_REQ_T_COUNT              = 0x100,
    /*  */
    /* type = struct_array, refer to nw_provider */
    MIPC_NW_SET_PREFERRED_PROVIDER_REQ_T_LIST               = 0x101,
};

    /* MIPC_MSG.NW_SET_PREFERRED_PROVIDER_CNF */
enum mipc_nw_set_preferred_provider_cnf_tlv_enum {
    mipc_nw_set_preferred_provider_cnf_tlv_NONE = 0,
    /* The provider list length. */
    /* type = uint8_t */
    MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_COUNT              = 0x100,
    /*  */
    /* type = struct_array, refer to nw_provider */
    MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_LIST               = 0x101,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_SET_PREFERRED_PROVIDER_CNF_T_FAIL_CAUSE         = 0x102,
};

    /* MIPC_MSG.NW_SET_HOME_PROVIDER_REQ */
enum mipc_nw_set_home_provider_req_tlv_enum {
    mipc_nw_set_home_provider_req_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to nw_provider */
    MIPC_NW_SET_HOME_PROVIDER_REQ_T_PROVIDER                = 0x100,
};

    /* MIPC_MSG.NW_SET_HOME_PROVIDER_CNF */
enum mipc_nw_set_home_provider_cnf_tlv_enum {
    mipc_nw_set_home_provider_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to nw_provider */
    MIPC_NW_SET_HOME_PROVIDER_CNF_T_PROVIDER                = 0x8100,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_SET_HOME_PROVIDER_CNF_T_FAIL_CAUSE              = 0x101,
};

    /* MIPC_MSG.NW_GET_HOME_PROVIDER_REQ */
enum mipc_nw_get_home_provider_req_tlv_enum {
    mipc_nw_get_home_provider_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_HOME_PROVIDER_CNF */
enum mipc_nw_get_home_provider_cnf_tlv_enum {
    mipc_nw_get_home_provider_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to nw_provider */
    MIPC_NW_GET_HOME_PROVIDER_CNF_T_PROVIDER                = 0x8100,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_GET_HOME_PROVIDER_CNF_T_FAIL_CAUSE              = 0x101,
};

    /* MIPC_MSG.NW_GET_IA_STATUS_REQ */
enum mipc_nw_get_ia_status_req_tlv_enum {
    mipc_nw_get_ia_status_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_IA_STATUS_CNF */
enum mipc_nw_get_ia_status_cnf_tlv_enum {
    mipc_nw_get_ia_status_cnf_tlv_NONE = 0,
    /* APN name */
    /* type = string */
    MIPC_NW_GET_IA_STATUS_CNF_T_APN                         = 0x100,
    /* The RAT info. */
    /* type = uint8_t */
    MIPC_NW_GET_IA_STATUS_CNF_T_RAT                         = 0x101,
    /*  */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_NW_GET_IA_STATUS_CNF_T_PDP_TYPE                    = 0x102,
    /*  */
    /* type = uint8_t, refer to APN_AUTH_TYPE */
    MIPC_NW_GET_IA_STATUS_CNF_T_AUTH_TYPE                   = 0x103,
    /* User id. */
    /* type = string */
    MIPC_NW_GET_IA_STATUS_CNF_T_USERID                      = 0x8104,
    /* Password for the user id. */
    /* type = string */
    MIPC_NW_GET_IA_STATUS_CNF_T_PASSWORD                    = 0x8105,
};

    /* MIPC_MSG.NW_GET_NITZ_REQ */
enum mipc_nw_get_nitz_req_tlv_enum {
    mipc_nw_get_nitz_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_NITZ_CNF */
enum mipc_nw_get_nitz_cnf_tlv_enum {
    mipc_nw_get_nitz_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to nw_nitz_info */
    MIPC_NW_GET_NITZ_CNF_T_INFO                             = 0x100,
    /* if time_zone_offset_minutes in INFO field is valid, 0 means invalid and 1 means valid */
    /* type = uint8_t */
    MIPC_NW_GET_NITZ_CNF_T_TZ_VALID                         = 0x101,
};

    /* MIPC_MSG.NW_SET_IDLE_HINT_REQ */
enum mipc_nw_set_idle_hint_req_tlv_enum {
    mipc_nw_set_idle_hint_req_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_FAST_DORMANCY */
    MIPC_NW_SET_IDLE_HINT_REQ_T_STATUS                      = 0x100,
};

    /* MIPC_MSG.NW_SET_IDLE_HINT_CNF */
enum mipc_nw_set_idle_hint_cnf_tlv_enum {
    mipc_nw_set_idle_hint_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_FAST_DORMANCY */
    MIPC_NW_SET_IDLE_HINT_CNF_T_STATUS                      = 0x100,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_SET_IDLE_HINT_CNF_T_FAIL_CAUSE                  = 0x101,
};

    /* MIPC_MSG.NW_GET_IDLE_HINT_REQ */
enum mipc_nw_get_idle_hint_req_tlv_enum {
    mipc_nw_get_idle_hint_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_IDLE_HINT_CNF */
enum mipc_nw_get_idle_hint_cnf_tlv_enum {
    mipc_nw_get_idle_hint_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_FAST_DORMANCY */
    MIPC_NW_GET_IDLE_HINT_CNF_T_STATUS                      = 0x100,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_GET_IDLE_HINT_CNF_T_FAIL_CAUSE                  = 0x101,
};

    /* MIPC_MSG.NW_GET_BASE_STATIONS_REQ */
enum mipc_nw_get_base_stations_req_tlv_enum {
    mipc_nw_get_base_stations_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_BASE_STATIONS_CNF */
enum mipc_nw_get_base_stations_cnf_tlv_enum {
    mipc_nw_get_base_stations_cnf_tlv_NONE = 0,
    /* The gsm cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_GSM_CELL_COUNT          = 0x100,
    /*  */
    /* type = struct_array, refer to nw_gsm_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_GSM_CELL_LIST           = 0x8101,
    /* The umts cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_UMTS_CELL_COUNT         = 0x102,
    /*  */
    /* type = struct_array, refer to nw_umts_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_UMTS_CELL_LIST          = 0x8103,
    /* The tdscdma cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_TDSCDMA_CELL_COUNT      = 0x104,
    /*  */
    /* type = struct_array, refer to nw_tdscdma_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_TDSCDMA_CELL_LIST       = 0x8105,
    /* The lte cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_LTE_CELL_COUNT          = 0x106,
    /*  */
    /* type = struct_array, refer to nw_lte_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_LTE_CELL_LIST           = 0x8107,
    /* The cdma cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_CDMA_CELL_COUNT         = 0x108,
    /*  */
    /* type = struct_array, refer to nw_cdma_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_CDMA_CELL_LIST          = 0x8109,
    /* The nr cell list length. */
    /* type = uint32_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_NR_CELL_COUNT           = 0x10A,
    /*  */
    /* type = struct_array, refer to nw_nr_cell */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_NR_CELL_LIST            = 0x810B,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_GET_BASE_STATIONS_CNF_T_FAIL_CAUSE              = 0x10C,
};

    /* MIPC_MSG.NW_GET_LOCATION_INFO_REQ */
enum mipc_nw_get_location_info_req_tlv_enum {
    mipc_nw_get_location_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_LOCATION_INFO_CNF */
enum mipc_nw_get_location_info_cnf_tlv_enum {
    mipc_nw_get_location_info_cnf_tlv_NONE = 0,
    /*  */
    /* type = struct, refer to nw_location_info */
    MIPC_NW_GET_LOCATION_INFO_CNF_T_INFO                    = 0x8100,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_GET_LOCATION_INFO_CNF_T_FAIL_CAUSE              = 0x101,
};

    /* MIPC_MSG.NW_SET_RAT_REQ */
enum mipc_nw_set_rat_req_tlv_enum {
    mipc_nw_set_rat_req_tlv_NONE = 0,
    /* The rat info. */
    /* type = uint8_t */
    MIPC_NW_SET_RAT_REQ_T_RAT                               = 0x100,
    /* The perfer rat info. */
    /* type = uint8_t */
    MIPC_NW_SET_RAT_REQ_T_PREFER_RAT                        = 0x101,
};

    /* MIPC_MSG.NW_SET_RAT_CNF */
enum mipc_nw_set_rat_cnf_tlv_enum {
    mipc_nw_set_rat_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_PROVIDER_NAME_REQ */
enum mipc_nw_get_provider_name_req_tlv_enum {
    mipc_nw_get_provider_name_req_tlv_NONE = 0,
    /* plmn of operator NW */
    /* type = string */
    MIPC_NW_GET_PROVIDER_NAME_REQ_T_PLMN_ID                 = 0x100,
    /* lac */
    /* type = uint32_t */
    MIPC_NW_GET_PROVIDER_NAME_REQ_T_LAC                     = 0x101,
};

    /* MIPC_MSG.NW_GET_PROVIDER_NAME_CNF */
enum mipc_nw_get_provider_name_cnf_tlv_enum {
    mipc_nw_get_provider_name_cnf_tlv_NONE = 0,
    /* plmn of operator NW */
    /* type = string */
    MIPC_NW_GET_PROVIDER_NAME_CNF_T_PLMN_ID                 = 0x8100,
    /* lac */
    /* type = uint32_t */
    MIPC_NW_GET_PROVIDER_NAME_CNF_T_LAC                     = 0x8101,
    /* stort provider name */
    /* type = string */
    MIPC_NW_GET_PROVIDER_NAME_CNF_T_NW_NAME                 = 0x8102,
    /* long provider name */
    /* type = string */
    MIPC_NW_GET_PROVIDER_NAME_CNF_T_NW_NAME_LONG            = 0x8103,
};

    /* MIPC_MSG.NW_GET_RAT_REQ */
enum mipc_nw_get_rat_req_tlv_enum {
    mipc_nw_get_rat_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_RAT_CNF */
enum mipc_nw_get_rat_cnf_tlv_enum {
    mipc_nw_get_rat_cnf_tlv_NONE = 0,
    /* Access technology of current register PLMN. */
    /* type = uint8_t */
    MIPC_NW_GET_RAT_CNF_T_ACT                               = 0x100,
    /* Indicates GPRS status: 0: GPRS; 1: EDGE. */
    /* type = uint8_t */
    MIPC_NW_GET_RAT_CNF_T_GPRS_STATUS                       = 0x101,
    /* RAT mode setting of MS. */
    /* type = uint8_t */
    MIPC_NW_GET_RAT_CNF_T_RAT_MODE                          = 0x102,
    /* Discarded, please use AT+EPRATL to set prefer RAT list. */
    /* type = uint8_t */
    MIPC_NW_GET_RAT_CNF_T_PREFER_RAT                        = 0x103,
    /* 0: unlock ERAT; 1: lock ERAT, i.e. cannot set RAT */
    /* type = uint8_t */
    MIPC_NW_GET_RAT_CNF_T_LOCK                              = 0x104,
};

    /* MIPC_MSG.NW_SET_NR_REQ */
enum mipc_nw_set_nr_req_tlv_enum {
    mipc_nw_set_nr_req_tlv_NONE = 0,
    /* 1: LTE ONLY(disable NSA+SA); 3: SA ONLY; 5: NSA ONLY; 7: NSA+SA. */
    /* type = uint8_t */
    MIPC_NW_SET_NR_REQ_T_NR_OPT                             = 0x100,
};

    /* MIPC_MSG.NW_SET_NR_CNF */
enum mipc_nw_set_nr_cnf_tlv_enum {
    mipc_nw_set_nr_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_CS_REQ */
enum mipc_nw_get_cs_req_tlv_enum {
    mipc_nw_get_cs_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_CS_CNF */
enum mipc_nw_get_cs_cnf_tlv_enum {
    mipc_nw_get_cs_cnf_tlv_NONE = 0,
    /* CS registration info. */
    /* type = struct, refer to nw_cs_reg_info */
    MIPC_NW_GET_CS_CNF_T_REG_INFO                           = 0x8100,
    /* The cell type. */
    /* type = uint8_t, refer to NW_CELL_TYPE */
    MIPC_NW_GET_CS_CNF_T_CELL_TYPE                          = 0x101,
    /* The cell info: mipc_nw_gsm_cell_struct4 and so on. */
    /* type = struct, refer to nw_gsm_cell */
    MIPC_NW_GET_CS_CNF_T_CELL_INFO                          = 0x8102,
};

    /* MIPC_MSG.NW_GET_BAND_MODE_REQ */
enum mipc_nw_get_band_mode_req_tlv_enum {
    mipc_nw_get_band_mode_req_tlv_NONE = 0,
    /* NW_BAND_OPTION_CURRENT_SETTING indicates to get current setting bands info; NW_BAND_OPTION_SYSTEM_SUPPORT indicates to return all system supports bands. If without this OPTION, the default option is NW_BAND_OPTION_CURRENT_SETTING */
    /* type = uint8_t, refer to NW_BAND_OPTION */
    MIPC_NW_GET_BAND_MODE_REQ_T_OPTION                      = 0x100,
};

    /* MIPC_MSG.NW_GET_BAND_MODE_CNF */
enum mipc_nw_get_band_mode_cnf_tlv_enum {
    mipc_nw_get_band_mode_cnf_tlv_NONE = 0,
    /* A bitmap that represents which GSM bands are supported */
    /* type = bitmap, refer to SYS_CAP_GSM_BAND */
    MIPC_NW_GET_BAND_MODE_CNF_T_GSM_BAND                    = 0x100,
    /* A bitmap that represents which UMTS bands are supported */
    /* type = bitmap, refer to SYS_CAP_UMTS_BAND */
    MIPC_NW_GET_BAND_MODE_CNF_T_UMTS_BAND                   = 0x101,
    /* A bitmap that represents which LTE bands are supported */
    /* type = struct, refer to sys_lte_band */
    MIPC_NW_GET_BAND_MODE_CNF_T_LTE_BAND                    = 0x102,
    /* A bitmap that represents which NR bands are supported */
    /* type = struct, refer to sys_nr_band */
    MIPC_NW_GET_BAND_MODE_CNF_T_NR_BAND                     = 0x103,
};

    /* MIPC_MSG.NW_SET_BAND_MODE_REQ */
enum mipc_nw_set_band_mode_req_tlv_enum {
    mipc_nw_set_band_mode_req_tlv_NONE = 0,
    /* A bitmap that represents which GSM bands are supported */
    /* type = bitmap, refer to SYS_CAP_GSM_BAND */
    MIPC_NW_SET_BAND_MODE_REQ_T_GSM_BAND                    = 0x100,
    /* A bitmap that represents which UMTS bands are supported */
    /* type = bitmap, refer to SYS_CAP_UMTS_BAND */
    MIPC_NW_SET_BAND_MODE_REQ_T_UMTS_BAND                   = 0x101,
    /* A bitmap that represents which LTE bands are supported */
    /* type = struct, refer to sys_lte_band */
    MIPC_NW_SET_BAND_MODE_REQ_T_LTE_BAND                    = 0x102,
    /* A bitmap that represents which NR bands are supported */
    /* type = struct, refer to sys_nr_band */
    MIPC_NW_SET_BAND_MODE_REQ_T_NR_BAND                     = 0x103,
};

    /* MIPC_MSG.NW_SET_BAND_MODE_CNF */
enum mipc_nw_set_band_mode_cnf_tlv_enum {
    mipc_nw_set_band_mode_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_CHANNEL_LOCK_REQ */
enum mipc_nw_set_channel_lock_req_tlv_enum {
    mipc_nw_set_channel_lock_req_tlv_NONE = 0,
    /* The list length for info list. */
    /* type = uint16_t */
    MIPC_NW_SET_CHANNEL_LOCK_REQ_T_CH_LOCK_INFO_LIST_COUNT  = 0x100,
    /* Lock channel information. */
    /* type = struct_array, refer to nw_channel_lock_info */
    MIPC_NW_SET_CHANNEL_LOCK_REQ_T_CH_LOCK_INFO_LIST        = 0x101,
};

    /* MIPC_MSG.NW_SET_CHANNEL_LOCK_CNF */
enum mipc_nw_set_channel_lock_cnf_tlv_enum {
    mipc_nw_set_channel_lock_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_CHANNEL_LOCK_REQ */
enum mipc_nw_get_channel_lock_req_tlv_enum {
    mipc_nw_get_channel_lock_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_CHANNEL_LOCK_CNF */
enum mipc_nw_get_channel_lock_cnf_tlv_enum {
    mipc_nw_get_channel_lock_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_ABORT_PLMN_LIST_SEARCH_REQ */
enum mipc_nw_set_abort_plmn_list_search_req_tlv_enum {
    mipc_nw_set_abort_plmn_list_search_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_ABORT_PLMN_LIST_SEARCH_CNF */
enum mipc_nw_set_abort_plmn_list_search_cnf_tlv_enum {
    mipc_nw_set_abort_plmn_list_search_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_POL_CAPABILITY_REQ */
enum mipc_nw_get_pol_capability_req_tlv_enum {
    mipc_nw_get_pol_capability_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_POL_CAPABILITY_CNF */
enum mipc_nw_get_pol_capability_cnf_tlv_enum {
    mipc_nw_get_pol_capability_cnf_tlv_NONE = 0,
    /* type = struct, refer to nw_pol_info */
    MIPC_NW_GET_POL_CAPABILITY_CNF_T_POL_INFO               = 0x100,
};

    /* MIPC_MSG.NW_SET_PREFER_RAT_REQ */
enum mipc_nw_set_prefer_rat_req_tlv_enum {
    mipc_nw_set_prefer_rat_req_tlv_NONE = 0,
    /* The length for RAT_LIST, the max len is 4 */
    /* type = uint8_t */
    MIPC_NW_SET_PREFER_RAT_REQ_T_RAT_NUM                    = 0x100,
    /* The RAT selection list with priority: rat_list[0] > rat_list[1] > rat_list[2] > rat_list[3], the value can refer to NW_PREFER_RAT_TYPE. */
    /* type = byte_array, refer to NW_PREFER_RAT_TYPE */
    MIPC_NW_SET_PREFER_RAT_REQ_T_RAT_LIST                   = 0x101,
};

    /* MIPC_MSG.NW_SET_PREFER_RAT_CNF */
enum mipc_nw_set_prefer_rat_cnf_tlv_enum {
    mipc_nw_set_prefer_rat_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_ENDC_CONFIG_REQ */
enum mipc_nw_set_endc_config_req_tlv_enum {
    mipc_nw_set_endc_config_req_tlv_NONE = 0,
    /* 1: enable endc; 0: disable endc. */
    /* type = uint8_t */
    MIPC_NW_SET_ENDC_CONFIG_REQ_T_ENDC_STATE                = 0x100,
};

    /* MIPC_MSG.NW_SET_ENDC_CONFIG_CNF */
enum mipc_nw_set_endc_config_cnf_tlv_enum {
    mipc_nw_set_endc_config_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_REQ */
enum mipc_nw_set_lte_carrier_aggregation_switch_req_tlv_enum {
    mipc_nw_set_lte_carrier_aggregation_switch_req_tlv_NONE = 0,
    /* enable/disable lte carrier aggregation switch */
    /* type = uint8_t, refer to NW_LTE_CARRIER_ARRREGATION_SWITCH */
    MIPC_NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_REQ_T_STATUS = 0x100,
};

    /* MIPC_MSG.NW_SET_LTE_CARRIER_AGGREGATION_SWITCH_CNF */
enum mipc_nw_set_lte_carrier_aggregation_switch_cnf_tlv_enum {
    mipc_nw_set_lte_carrier_aggregation_switch_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_REQ */
enum mipc_nw_set_ps_cs_registration_state_roaming_type_req_tlv_enum {
    mipc_nw_set_ps_cs_registration_state_roaming_type_req_tlv_NONE = 0,
    /* type = struct, refer to nw_ps_cs_reg_roaming_info */
    MIPC_NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_REQ_T_PS_CS_REG_ROAMING_INFO = 0x100,
};

    /* MIPC_MSG.NW_SET_PS_CS_REGISTRATION_STATE_ROAMING_TYPE_CNF */
enum mipc_nw_set_ps_cs_registration_state_roaming_type_cnf_tlv_enum {
    mipc_nw_set_ps_cs_registration_state_roaming_type_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_REQ */
enum mipc_nw_get_lte_carrier_aggregation_switch_req_tlv_enum {
    mipc_nw_get_lte_carrier_aggregation_switch_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_CNF */
enum mipc_nw_get_lte_carrier_aggregation_switch_cnf_tlv_enum {
    mipc_nw_get_lte_carrier_aggregation_switch_cnf_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to NW_LTE_CARRIER_ARRREGATION_SWITCH */
    MIPC_NW_GET_LTE_CARRIER_AGGREGATION_SWITCH_CNF_T_STATUS = 0x100,
};

    /* MIPC_MSG.NW_CELL_MEASUREMENT_REQ */
enum mipc_nw_cell_measurement_req_tlv_enum {
    mipc_nw_cell_measurement_req_tlv_NONE = 0,
    /* 1: start cell measurement; 0: abort cell measurement */
    /* type = uint8_t */
    MIPC_NW_CELL_MEASUREMENT_REQ_T_ACTION                   = 0x100,
    /* A bitmap that represents which LTE bands are measurement. */
    /* type = struct, refer to sys_lte_band */
    MIPC_NW_CELL_MEASUREMENT_REQ_T_LTE_BAND                 = 0x101,
    /* A bitmap that represents which NR bands are measurement. */
    /* type = struct, refer to sys_nr_band */
    MIPC_NW_CELL_MEASUREMENT_REQ_T_NR_BAND                  = 0x102,
    /* Scan type for cell measurement. */
    /* type = uint8_t, refer to NW_CELLMEASUREMENT_SCAN_TYPE */
    MIPC_NW_CELL_MEASUREMENT_REQ_T_SCAN_TYPE                = 0x103,
};

    /* MIPC_MSG.NW_CELL_MEASUREMENT_CNF */
enum mipc_nw_cell_measurement_cnf_tlv_enum {
    mipc_nw_cell_measurement_cnf_tlv_NONE = 0,
    /* The cell count for the cell measurement. */
    /* type = uint8_t */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_LIST_COUNT      = 0x103,
    /* The cell count for the cell measurement. */
    /* type = struct_array, refer to nw_cellmeasurement_info */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_LIST            = 0x8104,
    /* The PLMN infos for all cells, this is array(the list for cell_plmn) */
    /* type = struct_array, refer to cell_plmn */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_PLMN_ARRAY           = 0x8105,
    /* The cell count for the cell measurement. */
    /* type = uint8_t */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_LIST_COUNT       = 0x106,
    /* The cell count for the cell measurement. */
    /* type = struct_array, refer to nw_cellmeasurement_info */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_LIST             = 0x8107,
    /* The PLMN infos for NR cells, this is array(the list for cell_plmn) */
    /* type = struct_array, refer to cell_plmn */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_PLMN_ARRAY            = 0x8108,
    /* The BAND infos for LTE cells, this is a list and list count equals LTE_CELL_LIST_COUNT, the band info one-to-one correspondence LTE_CELL_LIST. Note: just cell_band is valid in nw_cell_band_bandwidth! */
    /* type = struct_array, refer to nw_cell_band_bandwidth */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_LTE_CELL_BAND_LIST       = 0x8109,
    /* The BAND infos for NR cells, this is a list and list count equals NR_CELL_LIST_COUNT, the band info one-to-one correspondence NR_CELL_LIST. Note: just cell_band is valid in nw_cell_band_bandwidth! */
    /* type = struct_array, refer to nw_cell_band_bandwidth */
    MIPC_NW_CELL_MEASUREMENT_CNF_T_NR_CELL_BAND_LIST        = 0x810A,
};

    /* MIPC_MSG.NW_CELL_BAND_WHITE_LIST_LOCK_REQ */
enum mipc_nw_cell_band_white_list_lock_req_tlv_enum {
    mipc_nw_cell_band_white_list_lock_req_tlv_NONE = 0,
    /* A bitmap that represents which LTE bands are measurement. */
    /* type = struct, refer to sys_lte_band */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_BAND        = 0x100,
    /* A bitmap that represents which NR bands are measurement. */
    /* type = struct, refer to sys_nr_band */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_BAND         = 0x101,
    /* lte white cell list count */
    /* type = uint8_t */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_CELL_COUNT  = 0x102,
    /* lte white cell list, please just fill the earfcn and physical_cell_id of nw_lte_cell */
    /* type = struct_array, refer to nw_lte_cell */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_LTE_CELL_LIST   = 0x103,
    /* nr white cell list count */
    /* type = uint8_t */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_CELL_COUNT   = 0x104,
    /* nr white cell list, please just fill the nr_arfcn and physical_cell_id of nw_nr_cell */
    /* type = struct_array, refer to nw_nr_cell */
    MIPC_NW_CELL_BAND_WHITE_LIST_LOCK_REQ_T_NR_CELL_LIST    = 0x105,
};

    /* MIPC_MSG.NW_CELL_BAND_WHITE_LIST_LOCK_CNF */
enum mipc_nw_cell_band_white_list_lock_cnf_tlv_enum {
    mipc_nw_cell_band_white_list_lock_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_CELL_BAND_BANDWIDTH_REQ */
enum mipc_nw_get_cell_band_bandwidth_req_tlv_enum {
    mipc_nw_get_cell_band_bandwidth_req_tlv_NONE = 0,
    /*  support both rat lte and nr currently, this is not mandatory. */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_REQ_T_RAT               = 0x100,
};

    /* MIPC_MSG.NW_GET_CELL_BAND_BANDWIDTH_CNF */
enum mipc_nw_get_cell_band_bandwidth_cnf_tlv_enum {
    mipc_nw_get_cell_band_bandwidth_cnf_tlv_NONE = 0,
    /* this parameter will be removed,the value is invalid */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NUM_SERVING_CELL  = 0x100,
    /* this parameter will be removed,the value is invalid */
    /* type = struct_array, refer to nw_cell_band_bandwidth */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_SERVING_CELL_LIST = 0x8101,
    /* this parameter will be removed,the value is invalid */
    /* type = struct_array, refer to nw_cell_band_bandwidth */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_SERVING_CELL_LIST = 0x8102,
    /* num of dl lte serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_DL_SERVING_CELL_COUNT = 0x103,
    /* num of ul lte serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_UL_SERVING_CELL_COUNT = 0x104,
    /* num of dl nr serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_DL_SERVING_CELL_COUNT = 0x105,
    /* num of ul nr serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_UL_SERVING_CELL_COUNT = 0x106,
    /* DL LTE serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_DL_SERVING_CELL_LIST = 0x107,
    /* UL LTE serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_LTE_UL_SERVING_CELL_LIST = 0x108,
    /* DL NR serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_DL_SERVING_CELL_LIST = 0x109,
    /* UL NR serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_GET_CELL_BAND_BANDWIDTH_CNF_T_NR_UL_SERVING_CELL_LIST = 0x10A,
};

    /* MIPC_MSG.NW_GET_NR_REQ */
enum mipc_nw_get_nr_req_tlv_enum {
    mipc_nw_get_nr_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_NR_CNF */
enum mipc_nw_get_nr_cnf_tlv_enum {
    mipc_nw_get_nr_cnf_tlv_NONE = 0,
    /* 1: LTE ONLY(disable NSA+SA); 3: SA ONLY; 5: NSA ONLY; 7: NSA+SA. */
    /* type = uint8_t */
    MIPC_NW_GET_NR_CNF_T_NR_OPT                             = 0x100,
};

    /* MIPC_MSG.NW_GET_SRXLEV_REQ */
enum mipc_nw_get_srxlev_req_tlv_enum {
    mipc_nw_get_srxlev_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_SRXLEV_CNF */
enum mipc_nw_get_srxlev_cnf_tlv_enum {
    mipc_nw_get_srxlev_cnf_tlv_NONE = 0,
    /* LTE SRXLEV INFO. */
    /* type = struct, refer to nw_srxlev_info */
    MIPC_NW_GET_SRXLEV_CNF_T_LTE_SRXLEV_INFO                = 0x100,
    /* NR SRXLEV INFO. */
    /* type = struct, refer to nw_srxlev_info */
    MIPC_NW_GET_SRXLEV_CNF_T_NR_SRXLEV_INFO                 = 0x101,
};

    /* MIPC_MSG.NW_SET_ROAMING_MODE_REQ */
enum mipc_nw_set_roaming_mode_req_tlv_enum {
    mipc_nw_set_roaming_mode_req_tlv_NONE = 0,
    /*  A bitmap that represents which roaming mode to disable */
    /* type = bitmap, refer to NW_ROAMING_MODE */
    MIPC_NW_SET_ROAMING_MODE_REQ_T_ROAMING_MODE             = 0x100,
};

    /* MIPC_MSG.NW_SET_ROAMING_MODE_CNF */
enum mipc_nw_set_roaming_mode_cnf_tlv_enum {
    mipc_nw_set_roaming_mode_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_ROAMING_MODE_REQ */
enum mipc_nw_get_roaming_mode_req_tlv_enum {
    mipc_nw_get_roaming_mode_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_ROAMING_MODE_CNF */
enum mipc_nw_get_roaming_mode_cnf_tlv_enum {
    mipc_nw_get_roaming_mode_cnf_tlv_NONE = 0,
    /*  A bitmap that represents which roaming mode to disable */
    /* type = bitmap, refer to NW_ROAMING_MODE */
    MIPC_NW_GET_ROAMING_MODE_CNF_T_ROAMING_MODE             = 0x100,
};

    /* MIPC_MSG.NW_SET_URC_ENABLE_REQ */
enum mipc_nw_set_urc_enable_req_tlv_enum {
    mipc_nw_set_urc_enable_req_tlv_NONE = 0,
    /*  ind type of to set */
    /* type = uint8_t, refer to NW_IND_TYPE */
    MIPC_NW_SET_URC_ENABLE_REQ_T_TYPE                       = 0x100,
    /*  1 means to enable and 0 means disable the given ind. */
    /* type = uint8_t */
    MIPC_NW_SET_URC_ENABLE_REQ_T_ENABLE                     = 0x101,
};

    /* MIPC_MSG.NW_SET_URC_ENABLE_CNF */
enum mipc_nw_set_urc_enable_cnf_tlv_enum {
    mipc_nw_set_urc_enable_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_RF_STATUS_REQ */
enum mipc_nw_get_rf_status_req_tlv_enum {
    mipc_nw_get_rf_status_req_tlv_NONE = 0,
    /*  rf fault code, 1:RFC, 2:CALIBRATION, 3:OTHERS. */
    /* type = uint32_t, refer to NW_RF_FAULT_CODE */
    MIPC_NW_GET_RF_STATUS_REQ_T_RF_FAULT_CODE               = 0x100,
};

    /* MIPC_MSG.NW_GET_RF_STATUS_CNF */
enum mipc_nw_get_rf_status_cnf_tlv_enum {
    mipc_nw_get_rf_status_cnf_tlv_NONE = 0,
    /*  this parameter has been voided and is no longer in use. */
    /* type = uint32_t, refer to NW_RF_DEFECTIVE */
    MIPC_NW_GET_RF_STATUS_CNF_T_DEFECTIVE                   = 0x100,
    /*  rfc defective, 1 means defective(true) and 0 means indefective(false) */
    /* type = uint32_t, refer to NW_RF_DEFECTIVE */
    MIPC_NW_GET_RF_STATUS_CNF_T_RFC_STATUS                  = 0x101,
    /*  calibration status defective, 1 means defective(true) and 0 means indefective(false) */
    /* type = uint32_t, refer to NW_RF_DEFECTIVE */
    MIPC_NW_GET_RF_STATUS_CNF_T_CALIBRATION_STATUS          = 0x102,
    /*  mipi device defective, 1 means defective(true) and 0 means indefective(false) */
    /* type = uint32_t, refer to NW_RF_DEFECTIVE */
    MIPC_NW_GET_RF_STATUS_CNF_T_MIPI_DEVICE_STATUS          = 0x103,
};

    /* MIPC_MSG.NW_SET_TUW_TIMER_LENGTH_REQ */
enum mipc_nw_set_tuw_timer_length_req_tlv_enum {
    mipc_nw_set_tuw_timer_length_req_tlv_NONE = 0,
    /* Number of updated tuw, 1~3 */
    /* type = uint8_t */
    MIPC_NW_SET_TUW_TIMER_LENGTH_REQ_T_TUW_NUM              = 0x100,
    /* The tuw id and tuw length */
    /* type = struct_array, refer to nw_tuw_info */
    MIPC_NW_SET_TUW_TIMER_LENGTH_REQ_T_TUW                  = 0x101,
};

    /* MIPC_MSG.NW_SET_TUW_TIMER_LENGTH_CNF */
enum mipc_nw_set_tuw_timer_length_cnf_tlv_enum {
    mipc_nw_set_tuw_timer_length_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_TUW_TIMER_LENGTH_REQ */
enum mipc_nw_get_tuw_timer_length_req_tlv_enum {
    mipc_nw_get_tuw_timer_length_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_TUW_TIMER_LENGTH_CNF */
enum mipc_nw_get_tuw_timer_length_cnf_tlv_enum {
    mipc_nw_get_tuw_timer_length_cnf_tlv_NONE = 0,
    /* TUW1 length */
    /* type = uint32_t */
    MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW1                 = 0x100,
    /* TUW2 length */
    /* type = uint32_t */
    MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW2                 = 0x101,
    /* TUW3 length */
    /* type = uint32_t */
    MIPC_NW_GET_TUW_TIMER_LENGTH_CNF_T_TUW3                 = 0x102,
};

    /* MIPC_MSG.NW_GET_5GUW_INFO_REQ */
enum mipc_nw_get_5guw_info_req_tlv_enum {
    mipc_nw_get_5guw_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.NW_GET_5GUW_INFO_CNF */
enum mipc_nw_get_5guw_info_cnf_tlv_enum {
    mipc_nw_get_5guw_info_cnf_tlv_NONE = 0,
    /* 0: don't display 5G UW, 1: display 5G UW. */
    /* type = uint8_t */
    MIPC_NW_GET_5GUW_INFO_CNF_T_DISPLAY_5GUW                = 0x100,
    /* 0: not on n77 band, 1: on n77 band */
    /* type = uint8_t */
    MIPC_NW_GET_5GUW_INFO_CNF_T_ON_N77_BAND                 = 0x101,
    /* 0: not on fr2 band, 1: on fr2 band */
    /* type = uint8_t */
    MIPC_NW_GET_5GUW_INFO_CNF_T_ON_FR2_BAND                 = 0x102,
    /* 0: not allowed, 1: allowed */
    /* type = uint8_t */
    MIPC_NW_GET_5GUW_INFO_CNF_T_5GUW_ALLOWED                = 0x103,
};

    /* MIPC_MSG.SIM_PIN_PROTECT_REQ */
enum mipc_sim_pin_protect_req_tlv_enum {
    mipc_sim_pin_protect_req_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_PIN_PROTECT_REQ_T_PIN_TYPE                     = 0x100,
    /* pin operation */
    /* type = uint8_t, refer to SIM_PIN_PROTECTION */
    MIPC_SIM_PIN_PROTECT_REQ_T_PIN_OP                       = 0x101,
    /* pin code */
    /* type = string */
    MIPC_SIM_PIN_PROTECT_REQ_T_PIN_CODE                     = 0x8102,
};

    /* MIPC_MSG.SIM_PIN_PROTECT_CNF */
enum mipc_sim_pin_protect_cnf_tlv_enum {
    mipc_sim_pin_protect_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_PIN_PROTECT_CNF_T_PIN_TYPE                     = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_PIN_PROTECT_CNF_T_PIN_STATE                    = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_PIN_PROTECT_CNF_T_REMAINING_ATTEMPTS           = 0x102,
};

    /* MIPC_MSG.SIM_CHANGE_PIN_REQ */
enum mipc_sim_change_pin_req_tlv_enum {
    mipc_sim_change_pin_req_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_CHANGE_PIN_REQ_T_PIN_TYPE                      = 0x100,
    /* old pin code */
    /* type = string */
    MIPC_SIM_CHANGE_PIN_REQ_T_OLD_PIN                       = 0x8101,
    /* new pin code */
    /* type = string */
    MIPC_SIM_CHANGE_PIN_REQ_T_NEW_PIN                       = 0x8102,
};

    /* MIPC_MSG.SIM_CHANGE_PIN_CNF */
enum mipc_sim_change_pin_cnf_tlv_enum {
    mipc_sim_change_pin_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_CHANGE_PIN_CNF_T_PIN_TYPE                      = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_CHANGE_PIN_CNF_T_PIN_STATE                     = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_CHANGE_PIN_CNF_T_REMAINING_ATTEMPTS            = 0x102,
};

    /* MIPC_MSG.SIM_VERIFY_PIN_REQ */
enum mipc_sim_verify_pin_req_tlv_enum {
    mipc_sim_verify_pin_req_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_VERIFY_PIN_REQ_T_PIN_TYPE                      = 0x100,
    /* pin code */
    /* type = string */
    MIPC_SIM_VERIFY_PIN_REQ_T_PIN_CODE                      = 0x8101,
};

    /* MIPC_MSG.SIM_VERIFY_PIN_CNF */
enum mipc_sim_verify_pin_cnf_tlv_enum {
    mipc_sim_verify_pin_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_VERIFY_PIN_CNF_T_PIN_TYPE                      = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_VERIFY_PIN_CNF_T_PIN_STATE                     = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_VERIFY_PIN_CNF_T_REMAINING_ATTEMPTS            = 0x102,
};

    /* MIPC_MSG.SIM_UNBLOCK_PIN_REQ */
enum mipc_sim_unblock_pin_req_tlv_enum {
    mipc_sim_unblock_pin_req_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_UNBLOCK_PIN_REQ_T_PIN_TYPE                     = 0x100,
    /* puk code */
    /* type = string */
    MIPC_SIM_UNBLOCK_PIN_REQ_T_PUK_CODE                     = 0x8101,
    /* pin code */
    /* type = string */
    MIPC_SIM_UNBLOCK_PIN_REQ_T_PIN_CODE                     = 0x8102,
};

    /* MIPC_MSG.SIM_UNBLOCK_PIN_CNF */
enum mipc_sim_unblock_pin_cnf_tlv_enum {
    mipc_sim_unblock_pin_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_UNBLOCK_PIN_CNF_T_PIN_TYPE                     = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_UNBLOCK_PIN_CNF_T_PIN_STATE                    = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_UNBLOCK_PIN_CNF_T_REMAINING_ATTEMPTS           = 0x102,
};

    /* MIPC_MSG.SIM_GET_PIN_INFO_REQ */
enum mipc_sim_get_pin_info_req_tlv_enum {
    mipc_sim_get_pin_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_PIN_INFO_CNF */
enum mipc_sim_get_pin_info_cnf_tlv_enum {
    mipc_sim_get_pin_info_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_GET_PIN_INFO_CNF_T_PIN_TYPE                    = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_GET_PIN_INFO_CNF_T_PIN_STATE                   = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_GET_PIN_INFO_CNF_T_REMAINING_ATTEMPTS          = 0x102,
};

    /* MIPC_MSG.SIM_GET_PIN_LIST_REQ */
enum mipc_sim_get_pin_list_req_tlv_enum {
    mipc_sim_get_pin_list_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_PIN_LIST_CNF */
enum mipc_sim_get_pin_list_cnf_tlv_enum {
    mipc_sim_get_pin_list_cnf_tlv_NONE = 0,
    /* pin21 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_PIN1                        = 0x100,
    /* pin2 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_PIN2                        = 0x101,
    /* NW PIN definded in 3GPP 22.022 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_NW_PIN                      = 0x102,
    /* SUB_NW PIN definded in 3GPP 22.022 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_SUB_NW_PIN                  = 0x103,
    /* SP PIN definded in 3GPP 22.022 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_SP_PIN                      = 0x104,
    /* CORP PIN definded in 3GPP 22.022 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_CORP_PIN                    = 0x105,
    /* SIM PIN definded in 3GPP 22.022 */
    /* type = struct, refer to sim_pin_desc */
    MIPC_SIM_GET_PIN_LIST_CNF_T_SIM_PIN                     = 0x106,
};

    /* MIPC_MSG.SIM_STATE_REQ */
enum mipc_sim_state_req_tlv_enum {
    mipc_sim_state_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_STATE_CNF */
enum mipc_sim_state_cnf_tlv_enum {
    mipc_sim_state_cnf_tlv_NONE = 0,
    /* sim slot state */
    /* type = uint8_t, refer to SIM_STATE */
    MIPC_SIM_STATE_CNF_T_STATE                              = 0x100,
    /* sim slot id */
    /* type = uint32_t */
    MIPC_SIM_STATE_CNF_T_SIM_ID                             = 0x101,
    /* sim protocol id */
    /* type = uint32_t */
    MIPC_SIM_STATE_CNF_T_PS_ID                              = 0x102,
};

    /* MIPC_MSG.SIM_STATUS_REQ */
enum mipc_sim_status_req_tlv_enum {
    mipc_sim_status_req_tlv_NONE = 0,
    /* 0 means mbim mode, only retrun STATUS, SIM_ID and PS_ID, 1 means full mode, return all the TLVs defined in STATUS_CNF  */
    /* type = uint8_t */
    MIPC_SIM_STATUS_REQ_T_MODE                              = 0x100,
};

    /* MIPC_MSG.SIM_STATUS_CNF */
enum mipc_sim_status_cnf_tlv_enum {
    mipc_sim_status_cnf_tlv_NONE = 0,
    /* sim status */
    /* type = uint8_t, refer to SIM_STATUS */
    MIPC_SIM_STATUS_CNF_T_STATUS                            = 0x100,
    /* sim slot id,0-based, the value may be 0,1,2,3 */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_SIM_ID                            = 0x101,
    /* sim protocol id,0-based, the value may be 0,1,2,3 */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_PS_ID                             = 0x102,
    /* card present state for android */
    /* type = uint8_t, refer to SIM_CARD_PRESENT_STATE */
    MIPC_SIM_STATUS_CNF_T_CARD_PRESENT_STATE                = 0x103,
    /* always 0, not support now */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_UPIN_STATUS                       = 0x104,
    /* is testsim or not */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_TEST_SIM                          = 0x105,
    /* 0xff means invalid */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_GSM_APP_IDX                       = 0x106,
    /* 0xff means invalid */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_CDMA_APP_IDX                      = 0x107,
    /* 0xff means invalid */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_ISIM_APP_IDX                      = 0x108,
    /* number of application */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CNF_T_APP_COUNT                         = 0x109,
    /* application description */
    /* type = struct_array, refer to app_status_desc */
    MIPC_SIM_STATUS_CNF_T_APP_LIST                          = 0x810A,
    /* eid */
    /* type = string */
    MIPC_SIM_STATUS_CNF_T_EID                               = 0x810B,
    /* iccid string */
    /* type = string */
    MIPC_SIM_STATUS_CNF_T_ICCID                             = 0x810C,
    /* ATR string */
    /* type = string */
    MIPC_SIM_STATUS_CNF_T_ATR                               = 0x810D,
};

    /* MIPC_MSG.SIM_ICCID_REQ */
enum mipc_sim_iccid_req_tlv_enum {
    mipc_sim_iccid_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ICCID_CNF */
enum mipc_sim_iccid_cnf_tlv_enum {
    mipc_sim_iccid_cnf_tlv_NONE = 0,
    /* iccid string */
    /* type = string */
    MIPC_SIM_ICCID_CNF_T_ICCID                              = 0x8100,
};

    /* MIPC_MSG.SIM_IMSI_REQ */
enum mipc_sim_imsi_req_tlv_enum {
    mipc_sim_imsi_req_tlv_NONE = 0,
    /* 0 for GSM, 1 for C2K */
    /* type = uint8_t */
    MIPC_SIM_IMSI_REQ_T_MODE                                = 0x100,
};

    /* MIPC_MSG.SIM_IMSI_CNF */
enum mipc_sim_imsi_cnf_tlv_enum {
    mipc_sim_imsi_cnf_tlv_NONE = 0,
    /* imsi string */
    /* type = string */
    MIPC_SIM_IMSI_CNF_T_IMSI                                = 0x8100,
    /* MNC length */
    /* type = uint8_t */
    MIPC_SIM_IMSI_CNF_T_MNC_LEN                             = 0x101,
};

    /* MIPC_MSG.SIM_MSISDN_REQ */
enum mipc_sim_msisdn_req_tlv_enum {
    mipc_sim_msisdn_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_MSISDN_CNF */
enum mipc_sim_msisdn_cnf_tlv_enum {
    mipc_sim_msisdn_cnf_tlv_NONE = 0,
    /* msisdn count */
    /* type = uint8_t */
    MIPC_SIM_MSISDN_CNF_T_MSISDN_COUNT                      = 0x100,
    /* msisdn list, the msisdn may not exist in the sim card */
    /* type = struct_array, refer to sim_msisdn */
    MIPC_SIM_MSISDN_CNF_T_MSISDN_LIST                       = 0x8101,
};

    /* MIPC_MSG.SIM_GET_ATR_INFO_REQ */
enum mipc_sim_get_atr_info_req_tlv_enum {
    mipc_sim_get_atr_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_ATR_INFO_CNF */
enum mipc_sim_get_atr_info_cnf_tlv_enum {
    mipc_sim_get_atr_info_cnf_tlv_NONE = 0,
    /* length of atr */
    /* type = uint32_t */
    MIPC_SIM_GET_ATR_INFO_CNF_T_ATR_LEN                     = 0x100,
    /* atr string */
    /* type = string */
    MIPC_SIM_GET_ATR_INFO_CNF_T_ATR                         = 0x8101,
};

    /* MIPC_MSG.SIM_OPEN_CHANNEL_REQ */
enum mipc_sim_open_channel_req_tlv_enum {
    mipc_sim_open_channel_req_tlv_NONE = 0,
    /* length of applicaiton id */
    /* type = uint8_t */
    MIPC_SIM_OPEN_CHANNEL_REQ_T_APP_ID_LEN                  = 0x100,
    /* applicaiton id, this app_id is used to select aid after open channel,if APP_ID_LEN =0, only open channel operation is executed, no select aid operation */
    /* type = string */
    MIPC_SIM_OPEN_CHANNEL_REQ_T_APP_ID                      = 0x101,
    /* P2 defined in SIM SPEC(102.221), this prameter is used in select aid cmd after open channel */
    /* type = uint8_t */
    MIPC_SIM_OPEN_CHANNEL_REQ_T_P2                          = 0x102,
    /* channel group of the channel id, this group is optional */
    /* type = uint8_t */
    MIPC_SIM_OPEN_CHANNEL_REQ_T_CHANNEL_GROUP               = 0x103,
};

    /* MIPC_MSG.SIM_OPEN_CHANNEL_CNF */
enum mipc_sim_open_channel_cnf_tlv_enum {
    mipc_sim_open_channel_cnf_tlv_NONE = 0,
    /* status word response from UICC */
    /* type = uint16_t */
    MIPC_SIM_OPEN_CHANNEL_CNF_T_SW                          = 0x100,
    /* channel id */
    /* type = uint8_t */
    MIPC_SIM_OPEN_CHANNEL_CNF_T_CHANNEL                     = 0x101,
    /* response of open channel */
    /* type = byte_array */
    MIPC_SIM_OPEN_CHANNEL_CNF_T_RESP                        = 0x102,
};

    /* MIPC_MSG.SIM_CLOSE_CHANNEL_REQ */
enum mipc_sim_close_channel_req_tlv_enum {
    mipc_sim_close_channel_req_tlv_NONE = 0,
    /* channel id */
    /* type = uint8_t */
    MIPC_SIM_CLOSE_CHANNEL_REQ_T_CHANNEL_ID                 = 0x100,
    /* close a group of channel, if channel id is not 0, close channel id only, if channel id is 0 and channel group is not 0,all the channels belongs to the group will be closed */
    /* type = uint8_t */
    MIPC_SIM_CLOSE_CHANNEL_REQ_T_CHANNEL_GROUP              = 0x101,
};

    /* MIPC_MSG.SIM_CLOSE_CHANNEL_CNF */
enum mipc_sim_close_channel_cnf_tlv_enum {
    mipc_sim_close_channel_cnf_tlv_NONE = 0,
    /* status word returned from sim card */
    /* type = uint16_t */
    MIPC_SIM_CLOSE_CHANNEL_CNF_T_SW                         = 0x100,
};

    /* MIPC_MSG.SIM_CHANNEL_RESTRICTED_ACCESS_REQ */
enum mipc_sim_channel_restricted_access_req_tlv_enum {
    mipc_sim_channel_restricted_access_req_tlv_NONE = 0,
    /* application id */
    /* type = uint8_t, refer to SIM_APP_TYPE */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_APP_ID         = 0x100,
    /* channel id the the application */
    /* type = uint8_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_SESSION_ID     = 0x101,
    /* command */
    /* type = uint8_t, refer to SIM_ACCESS_COMMAND */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_CMD            = 0x102,
    /* file id */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_FILE_ID        = 0x103,
    /* P1 of APDU */
    /* type = uint8_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P1             = 0x104,
    /* P2 of APDU */
    /* type = uint8_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P2             = 0x105,
    /* P3 of APDU */
    /* type = uint8_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_P3             = 0x106,
    /* data length in DATA */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_DATA_LEN       = 0x107,
    /* command data */
    /* type = byte_array */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_DATA           = 0x108,
    /* file path */
    /* type = string */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_REQ_T_PATH           = 0x109,
};

    /* MIPC_MSG.SIM_CHANNEL_RESTRICTED_ACCESS_CNF */
enum mipc_sim_channel_restricted_access_cnf_tlv_enum {
    mipc_sim_channel_restricted_access_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_SW             = 0x100,
    /* response length of apdu */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_RESP_LEN       = 0x101,
    /* response apdu */
    /* type = byte_array */
    MIPC_SIM_CHANNEL_RESTRICTED_ACCESS_CNF_T_RESP_APDU      = 0x102,
};

    /* MIPC_MSG.SIM_CHANNEL_GENERIC_ACCESS_REQ */
enum mipc_sim_channel_generic_access_req_tlv_enum {
    mipc_sim_channel_generic_access_req_tlv_NONE = 0,
    /* application id */
    /* type = uint8_t, refer to SIM_APP_TYPE */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APP_ID            = 0x100,
    /* channel id */
    /* type = uint8_t */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_CHANNEL_ID        = 0x101,
    /* APDU length */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APDU_LEN          = 0x102,
    /* apdu send to sim card */
    /* type = byte_array */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_REQ_T_APDU              = 0x103,
};

    /* MIPC_MSG.SIM_CHANNEL_GENERIC_ACCESS_CNF */
enum mipc_sim_channel_generic_access_cnf_tlv_enum {
    mipc_sim_channel_generic_access_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_SW                = 0x100,
    /* response apdu length */
    /* type = uint16_t */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_LEN          = 0x101,
    /* response apdu returned by sim card */
    /* type = byte_array */
    MIPC_SIM_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_APDU         = 0x102,
};

    /* MIPC_MSG.SIM_LONG_APDU_ACCESS_REQ */
enum mipc_sim_long_apdu_access_req_tlv_enum {
    mipc_sim_long_apdu_access_req_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_VERSION                 = 0x100,
    /* application id length */
    /* type = uint8_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_APP_ID_LEN              = 0x101,
    /* application id */
    /* type = byte_array */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_APP_ID                  = 0x102,
    /* file path */
    /* type = string */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_PATH_ID                 = 0x103,
    /* file id */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_FILE_ID                 = 0x104,
    /* file offset */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_FILE_OFFSET             = 0x105,
    /* number of bytes that will returned by sim card  */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_NUMBER_OF_BYTES         = 0x106,
    /* pin2 */
    /* type = string */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_LOCAL_PIN               = 0x107,
    /* length of binary data that will send to sim card */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_BINARY_DATA_LEN         = 0x108,
    /* binary data that will send to sim card */
    /* type = byte_array */
    MIPC_SIM_LONG_APDU_ACCESS_REQ_T_BINARY_DATA             = 0x109,
};

    /* MIPC_MSG.SIM_LONG_APDU_ACCESS_CNF */
enum mipc_sim_long_apdu_access_cnf_tlv_enum {
    mipc_sim_long_apdu_access_cnf_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_LONG_APDU_ACCESS_CNF_T_VERSION                 = 0x100,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_CNF_T_SW                      = 0x101,
    /* reponse data length */
    /* type = uint16_t */
    MIPC_SIM_LONG_APDU_ACCESS_CNF_T_DATA_LEN                = 0x102,
    /* response data from sim card */
    /* type = byte_array */
    MIPC_SIM_LONG_APDU_ACCESS_CNF_T_DATA                    = 0x103,
};

    /* MIPC_MSG.SIM_APP_LIST_REQ */
enum mipc_sim_app_list_req_tlv_enum {
    mipc_sim_app_list_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_APP_LIST_CNF */
enum mipc_sim_app_list_cnf_tlv_enum {
    mipc_sim_app_list_cnf_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_APP_LIST_CNF_T_VERSION                         = 0x100,
    /* application count */
    /* type = uint8_t */
    MIPC_SIM_APP_LIST_CNF_T_APP_COUNT                       = 0x101,
    /* active application idx in app list */
    /* type = uint8_t */
    MIPC_SIM_APP_LIST_CNF_T_ACTIVE_APP_idx                  = 0x102,
    /* application list */
    /* type = struct_array, refer to sim_app_info */
    MIPC_SIM_APP_LIST_CNF_T_APP_LIST                        = 0x103,
};

    /* MIPC_MSG.SIM_FILE_STATUS_REQ */
enum mipc_sim_file_status_req_tlv_enum {
    mipc_sim_file_status_req_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_REQ_T_VERSION                      = 0x100,
    /* aid length */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_REQ_T_AID_LEN                      = 0x101,
    /* aid */
    /* type = byte_array */
    MIPC_SIM_FILE_STATUS_REQ_T_AID                          = 0x102,
    /* length of file path */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_REQ_T_FILE_PATH_LEN                = 0x103,
    /* file path */
    /* type = string */
    MIPC_SIM_FILE_STATUS_REQ_T_FILE_PATH                    = 0x104,
};

    /* MIPC_MSG.SIM_FILE_STATUS_CNF */
enum mipc_sim_file_status_cnf_tlv_enum {
    mipc_sim_file_status_cnf_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_CNF_T_VERSION                      = 0x101,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_FILE_STATUS_CNF_T_SW                           = 0x102,
    /* types of file accessibility */
    /* type = uint8_t, refer to SIM_FILE_ACCESSIBILITY */
    MIPC_SIM_FILE_STATUS_CNF_T_FILE_ACCESSIBILITY           = 0x103,
    /* file type */
    /* type = uint8_t, refer to SIM_FILE_TYPE */
    MIPC_SIM_FILE_STATUS_CNF_T_FILE_TYPE                    = 0x104,
    /* file structure */
    /* type = uint8_t, refer to SIM_FILE_STRUCTURE */
    MIPC_SIM_FILE_STATUS_CNF_T_FILE                         = 0x105,
    /* The number of items in the UICC file. For transparent and TLV files, this is set to 1 */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_CNF_T_ITEM_COUNT                   = 0x106,
    /* The size of each item, in bytes. For transparent or TLV files, this is the size of the entire EF. For record-based files, this represents the total number of records */
    /* type = uint8_t */
    MIPC_SIM_FILE_STATUS_CNF_T_SIZE                         = 0x107,
    /*  An array of type mipc_sim_pin_type_enum that describes the access condition for each operation (READ, UPDATE, ACTIVATE, and DEACTIVATE in that order) on that file */
    /* type = byte_array, refer to SIM_PIN_TYPE */
    MIPC_SIM_FILE_STATUS_CNF_T_LOCK_STATUS                  = 0x108,
};

    /* MIPC_MSG.SIM_GET_RESET_REQ */
enum mipc_sim_get_reset_req_tlv_enum {
    mipc_sim_get_reset_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_RESET_CNF */
enum mipc_sim_get_reset_cnf_tlv_enum {
    mipc_sim_get_reset_cnf_tlv_NONE = 0,
    /* reset mode */
    /* type = uint8_t, refer to SIM_PASS_THROUGH_MODE */
    MIPC_SIM_GET_RESET_CNF_T_MODE                           = 0x100,
};

    /* MIPC_MSG.SIM_SET_RESET_REQ */
enum mipc_sim_set_reset_req_tlv_enum {
    mipc_sim_set_reset_req_tlv_NONE = 0,
    /* reset mode */
    /* type = uint8_t, refer to SIM_PASS_THROUGH_MODE */
    MIPC_SIM_SET_RESET_REQ_T_MODE                           = 0x100,
};

    /* MIPC_MSG.SIM_SET_RESET_CNF */
enum mipc_sim_set_reset_cnf_tlv_enum {
    mipc_sim_set_reset_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_TERMINAL_CAPABILITY_REQ */
enum mipc_sim_get_terminal_capability_req_tlv_enum {
    mipc_sim_get_terminal_capability_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_TERMINAL_CAPABILITY_CNF */
enum mipc_sim_get_terminal_capability_cnf_tlv_enum {
    mipc_sim_get_terminal_capability_cnf_tlv_NONE = 0,
    /* terminal capability object count */
    /* type = uint8_t */
    MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_COUNT            = 0x100,
    /* data length of terminal capability */
    /* type = uint16_t */
    MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_TC_LEN           = 0x101,
    /* terminal capability */
    /* type = byte_array */
    MIPC_SIM_GET_TERMINAL_CAPABILITY_CNF_T_TC               = 0x102,
};

    /* MIPC_MSG.SIM_SET_TERMINAL_CAPABILITY_REQ */
enum mipc_sim_set_terminal_capability_req_tlv_enum {
    mipc_sim_set_terminal_capability_req_tlv_NONE = 0,
    /* terminal capability object count */
    /* type = uint8_t */
    MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_COUNT            = 0x100,
    /* length of terminal capability data */
    /* type = uint16_t */
    MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_TC_LEN           = 0x101,
    /* terminal capability */
    /* type = byte_array */
    MIPC_SIM_SET_TERMINAL_CAPABILITY_REQ_T_TC               = 0x102,
};

    /* MIPC_MSG.SIM_SET_TERMINAL_CAPABILITY_CNF */
enum mipc_sim_set_terminal_capability_cnf_tlv_enum {
    mipc_sim_set_terminal_capability_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_SET_PIN_EX_REQ */
enum mipc_sim_set_pin_ex_req_tlv_enum {
    mipc_sim_set_pin_ex_req_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_SET_PIN_EX_REQ_T_PIN_TYPE                      = 0x100,
    /* pin operation */
    /* type = uint8_t, refer to SIM_PIN_OPERATION */
    MIPC_SIM_SET_PIN_EX_REQ_T_OP                            = 0x101,
    /* pin code when verify enable and disable pin ,or old pin when change pin,or puk code when operation is unblock pin */
    /* type = string */
    MIPC_SIM_SET_PIN_EX_REQ_T_PIN_CODE                      = 0x8102,
    /* new pin code when unblock or change pin */
    /* type = string */
    MIPC_SIM_SET_PIN_EX_REQ_T_NEW_PIN_CODE                  = 0x8103,
    /* aid length */
    /* type = uint8_t */
    MIPC_SIM_SET_PIN_EX_REQ_T_AID_LEN                       = 0x104,
    /* aid */
    /* type = byte_array */
    MIPC_SIM_SET_PIN_EX_REQ_T_AID                           = 0x105,
};

    /* MIPC_MSG.SIM_SET_PIN_EX_CNF */
enum mipc_sim_set_pin_ex_cnf_tlv_enum {
    mipc_sim_set_pin_ex_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_SET_PIN_EX_CNF_T_PIN_TYPE                      = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_SET_PIN_EX_CNF_T_PIN_STATE                     = 0x101,
    /* remaining attempts */
    /* type = uint32_t */
    MIPC_SIM_SET_PIN_EX_CNF_T_REMAINING_ATTEMPTS            = 0x102,
};

    /* MIPC_MSG.SIM_GET_PIN_EX_REQ */
enum mipc_sim_get_pin_ex_req_tlv_enum {
    mipc_sim_get_pin_ex_req_tlv_NONE = 0,
    /* always 1 */
    /* type = uint8_t */
    MIPC_SIM_GET_PIN_EX_REQ_T_VERSION                       = 0x100,
    /* aid length */
    /* type = uint8_t */
    MIPC_SIM_GET_PIN_EX_REQ_T_AID_LEN                       = 0x101,
    /* aid data */
    /* type = byte_array */
    MIPC_SIM_GET_PIN_EX_REQ_T_AID                           = 0x102,
};

    /* MIPC_MSG.SIM_GET_PIN_EX_CNF */
enum mipc_sim_get_pin_ex_cnf_tlv_enum {
    mipc_sim_get_pin_ex_cnf_tlv_NONE = 0,
    /* pin type */
    /* type = uint8_t, refer to SIM_PIN_TYPE */
    MIPC_SIM_GET_PIN_EX_CNF_T_PIN_TYPE                      = 0x100,
    /* pin state */
    /* type = uint8_t, refer to SIM_PIN_STATE */
    MIPC_SIM_GET_PIN_EX_CNF_T_PIN_STATE                     = 0x101,
    /* remain attempts */
    /* type = uint32_t */
    MIPC_SIM_GET_PIN_EX_CNF_T_REMAINING_ATTEMPTS            = 0x102,
};

    /* MIPC_MSG.SIM_GET_GSM_AUTH_REQ */
enum mipc_sim_get_gsm_auth_req_tlv_enum {
    mipc_sim_get_gsm_auth_req_tlv_NONE = 0,
    /* fixed length: 16 bytes */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND1                       = 0x8100,
    /* fixed length: 16 bytes,if RAND2 exist SIM CARD will run gsm algorithm 2 times */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND2                       = 0x8101,
    /* fixed length: 16 bytes,if RAND2 and RAND3 exist SIM CARD will run gsm algorithm 3 times */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_REQ_T_RAND3                       = 0x8102,
};

    /* MIPC_MSG.SIM_GET_GSM_AUTH_CNF */
enum mipc_sim_get_gsm_auth_cnf_tlv_enum {
    mipc_sim_get_gsm_auth_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_SW                          = 0x100,
    /* fixed length: 4 bytes */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES1                       = 0x101,
    /* fixed length: 8 bytes */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_KC1                         = 0x102,
    /* fixed length: 4 bytes, exist only when rand2 is send */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES2                       = 0x103,
    /* fixed length: 8 bytes, exist only when rand2 is send */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_KC2                         = 0x104,
    /* fixed length: 4 bytes, exist only when rand3 is send */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_SRES3                       = 0x105,
    /* fixed length: 8 bytes, exist only when rand3 is send */
    /* type = byte_array */
    MIPC_SIM_GET_GSM_AUTH_CNF_T_KC3                         = 0x106,
};

    /* MIPC_MSG.SIM_GET_EXT_AUTH_REQ */
enum mipc_sim_get_ext_auth_req_tlv_enum {
    mipc_sim_get_ext_auth_req_tlv_NONE = 0,
    /* channel id.It is suggested that either CH or APP_ID should be carried.If neither CH nor APP_ID is carried, defualt channel will be used. If both parameters are carried, CH will be used. */
    /* type = uint8_t */
    MIPC_SIM_GET_EXT_AUTH_REQ_T_CH                          = 0x100,
    /* mode defined in 31.102 section 7.1.2 */
    /* type = uint8_t */
    MIPC_SIM_GET_EXT_AUTH_REQ_T_MODE                        = 0x101,
    /* data length of CMD_DATA */
    /* type = uint16_t */
    MIPC_SIM_GET_EXT_AUTH_REQ_T_CMD_LEN                     = 0x102,
    /* authentication data defined in 31.102 section 7.1.2 */
    /* type = byte_array */
    MIPC_SIM_GET_EXT_AUTH_REQ_T_CMD_DATA                    = 0x8103,
    /* application id. It is suggested that either CH or APP_ID should be carried.If neither CH nor APP_ID is carried, defualt channel will be used. If both parameters are carried, CH will be used. */
    /* type = uint8_t, refer to SIM_APP_TYPE */
    MIPC_SIM_GET_EXT_AUTH_REQ_T_APP_ID                      = 0x104,
};

    /* MIPC_MSG.SIM_GET_EXT_AUTH_CNF */
enum mipc_sim_get_ext_auth_cnf_tlv_enum {
    mipc_sim_get_ext_auth_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_GET_EXT_AUTH_CNF_T_SW                          = 0x100,
    /* response length */
    /* type = uint16_t */
    MIPC_SIM_GET_EXT_AUTH_CNF_T_RSP_LEN                     = 0x101,
    /* response return from sim card */
    /* type = byte_array */
    MIPC_SIM_GET_EXT_AUTH_CNF_T_RSP_DATA                    = 0x8102,
};

    /* MIPC_MSG.SIM_GET_FACILITY_REQ */
enum mipc_sim_get_facility_req_tlv_enum {
    mipc_sim_get_facility_req_tlv_NONE = 0,
    /* application id */
    /* type = uint8_t, refer to SIM_APP_TYPE */
    MIPC_SIM_GET_FACILITY_REQ_T_APP_ID                      = 0x100,
    /* support FD, SC, AO, OI, OX, AI, IR */
    /* type = string */
    MIPC_SIM_GET_FACILITY_REQ_T_FACILITY                    = 0x101,
};

    /* MIPC_MSG.SIM_GET_FACILITY_CNF */
enum mipc_sim_get_facility_cnf_tlv_enum {
    mipc_sim_get_facility_cnf_tlv_NONE = 0,
    /* 0 means not active, 1 means active */
    /* type = uint8_t */
    MIPC_SIM_GET_FACILITY_CNF_T_STATUS                      = 0x100,
};

    /* MIPC_MSG.SIM_SET_FACILITY_REQ */
enum mipc_sim_set_facility_req_tlv_enum {
    mipc_sim_set_facility_req_tlv_NONE = 0,
    /*  */
    /* type = uint8_t, refer to SIM_APP_TYPE */
    MIPC_SIM_SET_FACILITY_REQ_T_APP_ID                      = 0x100,
    /* support FD SC, AO, OI, OX, AI, IR */
    /* type = string */
    MIPC_SIM_SET_FACILITY_REQ_T_FACILITY                    = 0x101,
    /* pin1 or pin2 code */
    /* type = string */
    MIPC_SIM_SET_FACILITY_REQ_T_PASS_WORD                   = 0x8102,
    /* 0 disable and 1 enable */
    /* type = uint8_t */
    MIPC_SIM_SET_FACILITY_REQ_T_MODE                        = 0x103,
};

    /* MIPC_MSG.SIM_SET_FACILITY_CNF */
enum mipc_sim_set_facility_cnf_tlv_enum {
    mipc_sim_set_facility_cnf_tlv_NONE = 0,
    /* remaining attempts */
    /* type = uint8_t */
    MIPC_SIM_SET_FACILITY_CNF_T_RETRY_COUNT                 = 0x100,
};

    /* MIPC_MSG.SIM_GET_EUICC_SLOTS_STATUS_REQ */
enum mipc_sim_get_euicc_slots_status_req_tlv_enum {
    mipc_sim_get_euicc_slots_status_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_EUICC_SLOTS_STATUS_CNF */
enum mipc_sim_get_euicc_slots_status_cnf_tlv_enum {
    mipc_sim_get_euicc_slots_status_cnf_tlv_NONE = 0,
    /*  physical slots number */
    /* type = uint8_t */
    MIPC_SIM_GET_EUICC_SLOTS_STATUS_CNF_T_SLOTS_INFO_COUNT  = 0x100,
    /* slot info for all slots */
    /* type = struct_array, refer to sim_slots_info */
    MIPC_SIM_GET_EUICC_SLOTS_STATUS_CNF_T_SLOTS_INFO_LIST   = 0x8101,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_CONNECT_REQ */
enum mipc_sim_access_profile_connect_req_tlv_enum {
    mipc_sim_access_profile_connect_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_CONNECT_CNF */
enum mipc_sim_access_profile_connect_cnf_tlv_enum {
    mipc_sim_access_profile_connect_cnf_tlv_NONE = 0,
    /* Indicate which transport protocol is used, 0x00 : T=0,0x01 : T=1 */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_CUR_TYPE          = 0x100,
    /* Indicate what's the capability in transport protocol in the SIM card,0x00 : T=0, 0x01 : T=1, 0x02 : Both T=0 and T=1 supported */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_SUPPORT_TYPE      = 0x101,
    /* the ATR response from SIM card */
    /* type = string */
    MIPC_SIM_ACCESS_PROFILE_CONNECT_CNF_T_ATR               = 0x102,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_DISCONNECT_REQ */
enum mipc_sim_access_profile_disconnect_req_tlv_enum {
    mipc_sim_access_profile_disconnect_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_DISCONNECT_CNF */
enum mipc_sim_access_profile_disconnect_cnf_tlv_enum {
    mipc_sim_access_profile_disconnect_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_POWER_ON_REQ */
enum mipc_sim_access_profile_power_on_req_tlv_enum {
    mipc_sim_access_profile_power_on_req_tlv_NONE = 0,
    /* Indicate which transport protocol is used, 0x00 : T=0,0x01 : T=1 */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_POWER_ON_REQ_T_TYPE             = 0x100,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_POWER_ON_CNF */
enum mipc_sim_access_profile_power_on_cnf_tlv_enum {
    mipc_sim_access_profile_power_on_cnf_tlv_NONE = 0,
    /* Indicate what's the capability in transport protocol in the SIM card, 0x00 : T=0, 0x01 : T=1, 0x02 : Both T=0 and T=1 supported */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_POWER_ON_CNF_T_CUR_TYPE         = 0x101,
    /* the ATR response from SIM card */
    /* type = string */
    MIPC_SIM_ACCESS_PROFILE_POWER_ON_CNF_T_ATR              = 0x102,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_POWER_OFF_REQ */
enum mipc_sim_access_profile_power_off_req_tlv_enum {
    mipc_sim_access_profile_power_off_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_POWER_OFF_CNF */
enum mipc_sim_access_profile_power_off_cnf_tlv_enum {
    mipc_sim_access_profile_power_off_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_RESET_REQ */
enum mipc_sim_access_profile_reset_req_tlv_enum {
    mipc_sim_access_profile_reset_req_tlv_NONE = 0,
    /* Indicate which transport protocol is used, 0x00 : T=0,0x01 : T=1 */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_RESET_REQ_T_TYPE                = 0x100,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_RESET_CNF */
enum mipc_sim_access_profile_reset_cnf_tlv_enum {
    mipc_sim_access_profile_reset_cnf_tlv_NONE = 0,
    /* Indicate what's the capability in transport protocol in the SIM card, 0x00 : T=0, 0x01 : T=1, 0x02 : Both T=0 and T=1 supported */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_RESET_CNF_T_CUR_TYPE            = 0x101,
    /* the ATR response from SIM card */
    /* type = string */
    MIPC_SIM_ACCESS_PROFILE_RESET_CNF_T_ATR                 = 0x102,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_APDU_REQ */
enum mipc_sim_access_profile_apdu_req_tlv_enum {
    mipc_sim_access_profile_apdu_req_tlv_NONE = 0,
    /* Indicate what's the capability in transport protocol in the SIM card, 0x00 : T=0, 0x01 : T=1, 0x02 : Both T=0 and T=1 supported */
    /* type = uint8_t */
    MIPC_SIM_ACCESS_PROFILE_APDU_REQ_T_TYPE                 = 0x100,
    /* the APDU send to sim card */
    /* type = string */
    MIPC_SIM_ACCESS_PROFILE_APDU_REQ_T_APDU                 = 0x101,
};

    /* MIPC_MSG.SIM_ACCESS_PROFILE_APDU_CNF */
enum mipc_sim_access_profile_apdu_cnf_tlv_enum {
    mipc_sim_access_profile_apdu_cnf_tlv_NONE = 0,
    /* the APDU return from sim card */
    /* type = string */
    MIPC_SIM_ACCESS_PROFILE_APDU_CNF_T_APDU                 = 0x100,
};

    /* MIPC_MSG.SIM_SET_SIM_POWER_REQ */
enum mipc_sim_set_sim_power_req_tlv_enum {
    mipc_sim_set_sim_power_req_tlv_NONE = 0,
    /* mode 0 means rf operation only, mode 1 means operation for both sim and rf */
    /* type = uint8_t */
    MIPC_SIM_SET_SIM_POWER_REQ_T_MODE                       = 0x100,
    /*  */
    /* type = uint8_t */
    MIPC_SIM_SET_SIM_POWER_REQ_T_SIM_POWER                  = 0x101,
};

    /* MIPC_MSG.SIM_SET_SIM_POWER_CNF */
enum mipc_sim_set_sim_power_cnf_tlv_enum {
    mipc_sim_set_sim_power_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ */
enum mipc_sim_set_physical_slots_mapping_req_tlv_enum {
    mipc_sim_set_physical_slots_mapping_req_tlv_NONE = 0,
    /* slots number */
    /* type = uint8_t */
    MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ_T_SLOTS_NUM     = 0x100,
    /* 0-based,slots_mapping_list = {1,0} means sim slot0->physical slot1, sim slot1->pysical slot0 */
    /* type = byte_array */
    MIPC_SIM_SET_PHYSICAL_SLOTS_MAPPING_REQ_T_SLOTS_MAPPING_LIST = 0x101,
};

    /* MIPC_MSG.SIM_SET_PHYSICAL_SLOTS_MAPPING_CNF */
enum mipc_sim_set_physical_slots_mapping_cnf_tlv_enum {
    mipc_sim_set_physical_slots_mapping_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ */
enum mipc_sim_extended_channel_generic_access_req_tlv_enum {
    mipc_sim_extended_channel_generic_access_req_tlv_NONE = 0,
    /* channel id  */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_SESSION_ID = 0x100,
    /* CLA byte of APDU, that will send to sim card */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_CLA      = 0x101,
    /* INS byte of APDU, that will send to sim card */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_INS      = 0x102,
    /* P1 byte of APDU, that will send to sim card */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P1       = 0x103,
    /* P2 byte of APDU, that will send to sim card */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P2       = 0x104,
    /* P3 byte of APDU, that will send to sim card */
    /* type = uint8_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_P3       = 0x105,
    /* data length in DATA */
    /* type = uint16_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_DATA_LEN = 0x106,
    /* command data in APDU */
    /* type = byte_array */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_REQ_T_DATA     = 0x107,
};

    /* MIPC_MSG.SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF */
enum mipc_sim_extended_channel_generic_access_cnf_tlv_enum {
    mipc_sim_extended_channel_generic_access_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_SW       = 0x100,
    /* response length of apdu */
    /* type = uint16_t */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_LEN = 0x101,
    /* response apdu */
    /* type = byte_array */
    MIPC_SIM_EXTENDED_CHANNEL_GENERIC_ACCESS_CNF_T_RESP_APDU = 0x102,
};

    /* MIPC_MSG.SIM_UICC_FILE_ACCESS_RECORD_REQ */
enum mipc_sim_uicc_file_access_record_req_tlv_enum {
    mipc_sim_uicc_file_access_record_req_tlv_NONE = 0,
    /* applicaiton id */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_APP_ID           = 0x100,
    /* length of app_id */
    /* type = uint8_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_APP_ID_LEN       = 0x101,
    /* file id */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_FILE_ID          = 0x102,
    /* record number */
    /* type = uint8_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_RECORD_NUM       = 0x103,
    /* length of data */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_DATA_LEN         = 0x104,
    /* command data */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_DATA             = 0x105,
    /* path */
    /* type = string */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_PATH             = 0x106,
    /* local pin code */
    /* type = string */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_REQ_T_PIN2             = 0x107,
};

    /* MIPC_MSG.SIM_UICC_FILE_ACCESS_RECORD_CNF */
enum mipc_sim_uicc_file_access_record_cnf_tlv_enum {
    mipc_sim_uicc_file_access_record_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_SW               = 0x100,
    /* response length of apdu */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_RESP_LEN         = 0x101,
    /* response apdu */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_RECORD_CNF_T_RESP_APDU        = 0x102,
};

    /* MIPC_MSG.SIM_UICC_FILE_ACCESS_BINARY_REQ */
enum mipc_sim_uicc_file_access_binary_req_tlv_enum {
    mipc_sim_uicc_file_access_binary_req_tlv_NONE = 0,
    /* applicaiton id */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_APP_ID           = 0x100,
    /* length of app_id */
    /* type = uint8_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_APP_ID_LEN       = 0x101,
    /* file id */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_FILE_ID          = 0x102,
    /* offset */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_OFFSET           = 0x103,
    /* length of data */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_DATA_LEN         = 0x104,
    /* command data */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_DATA             = 0x105,
    /* path */
    /* type = string */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_PATH             = 0x106,
    /* local pin code */
    /* type = string */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_REQ_T_PIN2             = 0x107,
};

    /* MIPC_MSG.SIM_UICC_FILE_ACCESS_BINARY_CNF */
enum mipc_sim_uicc_file_access_binary_cnf_tlv_enum {
    mipc_sim_uicc_file_access_binary_cnf_tlv_NONE = 0,
    /* status word */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_SW               = 0x100,
    /* response length of apdu */
    /* type = uint16_t */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_RESP_LEN         = 0x101,
    /* response apdu */
    /* type = byte_array */
    MIPC_SIM_UICC_FILE_ACCESS_BINARY_CNF_T_RESP_APDU        = 0x102,
};

    /* MIPC_MSG.SIM_GET_PHYSICAL_SLOTS_MAPPING_REQ */
enum mipc_sim_get_physical_slots_mapping_req_tlv_enum {
    mipc_sim_get_physical_slots_mapping_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_GET_PHYSICAL_SLOTS_MAPPING_CNF */
enum mipc_sim_get_physical_slots_mapping_cnf_tlv_enum {
    mipc_sim_get_physical_slots_mapping_cnf_tlv_NONE = 0,
    /* 0-based, physical slot id, */
    /* type = uint8_t */
    MIPC_SIM_GET_PHYSICAL_SLOTS_MAPPING_CNF_T_ACTIVE_PHYSICAL_SLOT_ID = 0x101,
};

    /* MIPC_MSG.SIM_PIN_COUNT_QUERY_REQ */
enum mipc_sim_pin_count_query_req_tlv_enum {
    mipc_sim_pin_count_query_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_PIN_COUNT_QUERY_CNF */
enum mipc_sim_pin_count_query_cnf_tlv_enum {
    mipc_sim_pin_count_query_cnf_tlv_NONE = 0,
    /* result of pin count query */
    /* type = uint32_t */
    MIPC_SIM_PIN_COUNT_QUERY_CNF_T_RESULT                   = 0x100,
    /* pin1 remaining attempts */
    /* type = uint8_t */
    MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PIN1                     = 0x101,
    /* pin2 remaining attempts */
    /* type = uint8_t */
    MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PIN2                     = 0x102,
    /* puk1 remaining attempts */
    /* type = uint8_t */
    MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PUK1                     = 0x103,
    /* puk2 remaining attempts */
    /* type = uint8_t */
    MIPC_SIM_PIN_COUNT_QUERY_CNF_T_PUK2                     = 0x104,
};

    /* MIPC_MSG.SMS_CFG_REQ */
enum mipc_sms_cfg_req_tlv_enum {
    mipc_sms_cfg_req_tlv_NONE = 0,
    /* set or get DEVICE SMS format setting */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_CFG_REQ_T_FORMAT                               = 0x100,
    /* set the SCA(sms center address) */
    /* type = string */
    MIPC_SMS_CFG_REQ_T_SET_SCA                              = 0x8101,
    /* if need get the sca: 0->no_need, other->need */
    /* type = uint8_t */
    MIPC_SMS_CFG_REQ_T_GET_SCA                              = 0x102,
    /* phase out. no need set, DEVICE always return SMS state now */
    /* type = uint8_t */
    MIPC_SMS_CFG_REQ_T_GET_SMS_STATE                        = 0x103,
    /* phase out. USER PREFER_STORAGE(query) to get store status */
    /* type = uint8_t */
    MIPC_SMS_CFG_REQ_T_GET_STORE_STATUS                     = 0x104,
    /* set or get prefer_ack. prefer_ack means if USER want to ack for the new sms to TE(save in SIM would not need ack from USER) */
    /* type = uint8_t, refer to SMS_ACK */
    MIPC_SMS_CFG_REQ_T_PREFER_ACK                           = 0x105,
    /* set or get prefer_storage. prefer_storage means that which storage USER want to save mt sms */
    /* type = uint8_t, refer to SMS_STORAGE */
    MIPC_SMS_CFG_REQ_T_PREFER_STORAGE                       = 0x106,
    /* indicate if need get all the setting: 0->no_need, other->need. not recommend */
    /* type = uint8_t */
    MIPC_SMS_CFG_REQ_T_GET_ALL_CAN_GET                      = 0x107,
    /* HOST notify DEVICE that HOST's SMS storage is valid(true) or invalid(false), so DEVICE may ack err quick to NW when recv sms. refer to AT+EMEMS in MTK_AT. please dont carry this tlv when prefer save in ME/SIM */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_SMS_CFG_REQ_T_SET_HOST_MEM_AVAILABLE               = 0x108,
};

    /* MIPC_MSG.SMS_CFG_CNF */
enum mipc_sms_cfg_cnf_tlv_enum {
    mipc_sms_cfg_cnf_tlv_NONE = 0,
    /* indicate the format that configured for this protocal */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_CFG_CNF_T_FORMAT                               = 0x100,
    /* indicate the SCA(sms center address) that configured for this protocal */
    /* type = string */
    MIPC_SMS_CFG_CNF_T_SCA                                  = 0x8101,
    /* indicate if the sms module is initialized */
    /* type = uint8_t, refer to SMS_STATE */
    MIPC_SMS_CFG_CNF_T_SMS_STATE                            = 0x102,
    /* indicate the max messages that can be saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_CFG_CNF_T_MAX_MESSAGE                          = 0x103,
    /* indicate if user want to ack for the new sms to TE(save in SIM would not need ack from user) */
    /* type = uint8_t, refer to SMS_ACK */
    MIPC_SMS_CFG_CNF_T_PREFER_ACK                           = 0x104,
    /* indicate which storage user want to save mt sms. TE: new MT msg would indicated with NEW_SMS_IND(PREFER_ACK=FALSE) or NEW_SMS_CMD(PREFER_ACK=TRUE); SIM: new MT msg would indicated with STORE_STATUS_IND. This cfg option is just PREFER(CBM & STATUS_REPORT can not support save in sim now) */
    /* type = uint8_t, refer to SMS_STORAGE */
    MIPC_SMS_CFG_CNF_T_PREFER_STORAGE                       = 0x105,
    /* indicate the used messages number saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_CFG_CNF_T_USED_MESSAGE                         = 0x106,
};

    /* MIPC_MSG.SMS_SEND_REQ */
enum mipc_sms_send_req_tlv_enum {
    mipc_sms_send_req_tlv_NONE = 0,
    /* indicate the format of that msg to be sent */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_SEND_REQ_T_FORMAT                              = 0x100,
    /* pdu contains sca, can refer the pdu parameter in CMGS */
    /* type = byte_array */
    MIPC_SMS_SEND_REQ_T_PDU                                 = 0x8101,
    /* the length of TPDU(without SCA) in PDU IE */
    /* type = uint8_t */
    MIPC_SMS_SEND_REQ_T_PDU_LEN                             = 0x102,
    /* save the sent msg to DEVICE or SIM , default no_save */
    /* type = uint8_t, refer to SMS_SEND_SAVE */
    MIPC_SMS_SEND_REQ_T_SAVE                                = 0x103,
    /* expect_more option, indicate if there is more sms to send, enable to keep link opened. default NULL */
    /* type = uint8_t, refer to SMS_MORE_MSG_TO_SEND */
    MIPC_SMS_SEND_REQ_T_MORE_MSG_TO_SEND                    = 0x104,
};

    /* MIPC_MSG.SMS_SEND_CNF */
enum mipc_sms_send_cnf_tlv_enum {
    mipc_sms_send_cnf_tlv_NONE = 0,
    /* message reference of sent message */
    /* type = uint8_t */
    MIPC_SMS_SEND_CNF_T_MR                                  = 0x103,
    /* if need to save in SEND_REQ, this IE would carry the valid message index in storage */
    /* type = uint16_t */
    MIPC_SMS_SEND_CNF_T_MESSAGE_INDEX                       = 0x104,
};

    /* MIPC_MSG.SMS_READ_REQ */
enum mipc_sms_read_req_tlv_enum {
    mipc_sms_read_req_tlv_NONE = 0,
    /* the format to be read */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_READ_REQ_T_FORMAT                              = 0x100,
    /* which type of sms to be read */
    /* type = uint8_t, refer to SMS_FLAG */
    MIPC_SMS_READ_REQ_T_FLAG                                = 0x101,
    /* which sms should to be read, only valid when flag is INDEX. If flag is INDEX and carry this IE, this IE should be 0 */
    /* type = uint16_t */
    MIPC_SMS_READ_REQ_T_MESSAGE_INDEX                       = 0x102,
    /* keep the status(refer SMS_STATUS) unchange. default value is false */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_SMS_READ_REQ_T_STATUS_UNCHANGE                     = 0x103,
};

    /* MIPC_MSG.SMS_READ_CNF */
enum mipc_sms_read_cnf_tlv_enum {
    mipc_sms_read_cnf_tlv_NONE = 0,
    /* the format readed */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_READ_CNF_T_FORMAT                              = 0x100,
    /* the count of readed sms */
    /* type = uint16_t */
    MIPC_SMS_READ_CNF_T_PDU_COUNT                           = 0x103,
    /* list of read sms */
    /* type = struct_array, refer to sms_pdu */
    MIPC_SMS_READ_CNF_T_PDU_LIST                            = 0x8104,
};

    /* MIPC_MSG.SMS_DELETE_REQ */
enum mipc_sms_delete_req_tlv_enum {
    mipc_sms_delete_req_tlv_NONE = 0,
    /* which type of sms to be delete */
    /* type = uint8_t, refer to SMS_FLAG */
    MIPC_SMS_DELETE_REQ_T_FLAG                              = 0x100,
    /* which sms should to be delete. Only valid when flag is INDEX. If flag is INDEX and carry this IE, this IE's value should be 0 */
    /* type = uint16_t */
    MIPC_SMS_DELETE_REQ_T_MESSAGE_INDEX                     = 0x101,
};

    /* MIPC_MSG.SMS_DELETE_CNF */
enum mipc_sms_delete_cnf_tlv_enum {
    mipc_sms_delete_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SMS_GET_STORE_STATUS_REQ */
enum mipc_sms_get_store_status_req_tlv_enum {
    mipc_sms_get_store_status_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SMS_GET_STORE_STATUS_CNF */
enum mipc_sms_get_store_status_cnf_tlv_enum {
    mipc_sms_get_store_status_cnf_tlv_NONE = 0,
    /* indicate if <the storage full> or <new sms in DEVICE received> */
    /* type = bitmap, refer to SMS_STORE_FLAG */
    MIPC_SMS_GET_STORE_STATUS_CNF_T_FLAG                    = 0x100,
    /* if the falg indicated there is new message, this shows the message_index */
    /* type = uint16_t */
    MIPC_SMS_GET_STORE_STATUS_CNF_T_MESSAGE_INDEX           = 0x101,
    /* indicate the max messages that can be saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_GET_STORE_STATUS_CNF_T_MAX_MESSAGE             = 0x102,
    /* indicate the used messages number saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_GET_STORE_STATUS_CNF_T_USED_MESSAGE            = 0x103,
};

    /* MIPC_MSG.SMS_WRITE_REQ */
enum mipc_sms_write_req_tlv_enum {
    mipc_sms_write_req_tlv_NONE = 0,
    /* indicate the format of that msg to be write to device,defaut PDU_FORMAT */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_WRITE_REQ_T_FORMAT                             = 0x100,
    /* pdu contains sca */
    /* type = byte_array */
    MIPC_SMS_WRITE_REQ_T_PDU                                = 0x8101,
    /* the length of TPDU(without SCA) */
    /* type = uint8_t */
    MIPC_SMS_WRITE_REQ_T_PDU_LEN                            = 0x102,
    /* indicate which storage user want to save sms,default SIM */
    /* type = uint8_t, refer to SMS_STORAGE */
    MIPC_SMS_WRITE_REQ_T_STORAGE                            = 0x103,
    /* message status */
    /* type = uint8_t, refer to SMS_STATUS */
    MIPC_SMS_WRITE_REQ_T_STATUS                             = 0x104,
};

    /* MIPC_MSG.SMS_WRITE_CNF */
enum mipc_sms_write_cnf_tlv_enum {
    mipc_sms_write_cnf_tlv_NONE = 0,
    /* the message index of write location */
    /* type = uint16_t */
    MIPC_SMS_WRITE_CNF_T_MESSAGE_INDEX                      = 0x100,
};

    /* MIPC_MSG.SMS_CBM_CFG_REQ */
enum mipc_sms_cbm_cfg_req_tlv_enum {
    mipc_sms_cbm_cfg_req_tlv_NONE = 0,
    /* indicate which type of cbm msg that USER needed */
    /* type = bitmap, refer to SMS_CBM_TYPE */
    MIPC_SMS_CBM_CFG_REQ_T_OPEN_CBM_TYPE                    = 0x100,
    /* set cfg type of MSG_ID */
    /* type = uint8_t, refer to SMS_CBM_CFG_TYPE */
    MIPC_SMS_CBM_CFG_REQ_T_MSG_ID_CFG_TYPE                  = 0x101,
    /* allow or ban msg_id range config(can be arrary format, most 30 elements), most significant 16 bit means least msg_id in this range, least significant 16 bit means highest msg_id in this range, range contains begining and ending msg_id */
    /* type = uint32_t */
    MIPC_SMS_CBM_CFG_REQ_T_MSG_ID_RANGE                     = 0x102,
    /* allow or ban msg_id config(can be arrary format, most 60 elements) */
    /* type = uint16_t */
    MIPC_SMS_CBM_CFG_REQ_T_MSG_ID_SINGLE                    = 0x103,
    /* set config type of DCS */
    /* type = uint8_t, refer to SMS_CBM_CFG_TYPE */
    MIPC_SMS_CBM_CFG_REQ_T_DCS_CFG_TYPE                     = 0x104,
    /* allow or ban dcs range config(can be arrary format, most 30 elements),most significant 8 bit means least dcs in this range, least significant 8 bit means highest dcs in this range, range contains begining and ending dcs */
    /* type = uint16_t */
    MIPC_SMS_CBM_CFG_REQ_T_DCS_RANGE                        = 0x105,
    /* allow or ban dcs range config(can be arrary format, most 60 elements),similar to MSG_ID_SINGLE */
    /* type = uint8_t */
    MIPC_SMS_CBM_CFG_REQ_T_DCS_SINGLE                       = 0x106,
};

    /* MIPC_MSG.SMS_CBM_CFG_CNF */
enum mipc_sms_cbm_cfg_cnf_tlv_enum {
    mipc_sms_cbm_cfg_cnf_tlv_NONE = 0,
    /* indicate <which type of cbm msg that USER needed> configured in DEVICE */
    /* type = bitmap, refer to SMS_CBM_TYPE */
    MIPC_SMS_CBM_CFG_CNF_T_OPEN_CBM_TYPE                    = 0x100,
    /* indicate <MSG_ID_CFG_TYPE> saved in DEVICE, present when REQ's MSG_ID_CFG_TYPE exist */
    /* type = uint8_t, refer to SMS_CBM_CFG_TYPE */
    MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_CFG_TYPE                  = 0x101,
    /* indicate <MSG_ID_RANGE> saved in DEVICE, maybe present when REQ's MSG_ID_CFG_TYPE exist */
    /* type = uint32_t */
    MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_RANGE                     = 0x102,
    /* indicate <MSG_ID_SINGLE> saved in DEVICE, maybe present when REQ's MSG_ID_CFG_TYPE exist */
    /* type = uint16_t */
    MIPC_SMS_CBM_CFG_CNF_T_MSG_ID_SINGLE                    = 0x103,
    /* indicate <DCS_CFG_TYPE> saved in DEVICE, present when REQ's DCS_CFG_TYPE exist */
    /* type = uint8_t, refer to SMS_CBM_CFG_TYPE */
    MIPC_SMS_CBM_CFG_CNF_T_DCS_CFG_TYPE                     = 0x104,
    /* indicate <DCS_RANGE> saved in DEVICE, maybe present when REQ's DCS_CFG_TYPE exist */
    /* type = uint16_t */
    MIPC_SMS_CBM_CFG_CNF_T_DCS_RANGE                        = 0x105,
    /* indicate <DCS_SINGLE> saved in DEVICE, maybe present when REQ's DCS_CFG_TYPE exist */
    /* type = uint8_t */
    MIPC_SMS_CBM_CFG_CNF_T_DCS_SINGLE                       = 0x106,
};

    /* MIPC_MSG.SMS_SCBM_REQ */
enum mipc_sms_scbm_req_tlv_enum {
    mipc_sms_scbm_req_tlv_NONE = 0,
    /* DEVICE would indicate HOST when entered SCBM mode using SCBM_IND, HOST use this value to decide quit now(or DEVICE would quit in 5min later auto) */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_SMS_SCBM_REQ_T_QUIT_SCBM_MODE                      = 0x100,
};

    /* MIPC_MSG.SMS_SCBM_CNF */
enum mipc_sms_scbm_cnf_tlv_enum {
    mipc_sms_scbm_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_SEND_USSD_REQ */
enum mipc_ss_send_ussd_req_tlv_enum {
    mipc_ss_send_ussd_req_tlv_NONE = 0,
    /* data coding scheme */
    /* type = uint32_t */
    MIPC_SS_SEND_USSD_REQ_T_DCS                             = 0x101,
    /* length of ussd payload */
    /* type = uint8_t */
    MIPC_SS_SEND_USSD_REQ_T_PAYLOAD_LEN                     = 0x102,
    /* byte array of ussd payload */
    /* type = byte_array */
    MIPC_SS_SEND_USSD_REQ_T_PAYLOAD                         = 0x8103,
    /* lang of send ussd req */
    /* type = string */
    MIPC_SS_SEND_USSD_REQ_T_LANG                            = 0x104,
};

    /* MIPC_MSG.SS_SEND_USSD_CNF */
enum mipc_ss_send_ussd_cnf_tlv_enum {
    mipc_ss_send_ussd_cnf_tlv_NONE = 0,
    /* ussd response */
    /* type = uint8_t, refer to SS_USSD */
    MIPC_SS_SEND_USSD_CNF_T_USSD_RESPONSE                   = 0x100,
    /*  ussd state */
    /* type = uint8_t, refer to SS_SESSION */
    MIPC_SS_SEND_USSD_CNF_T_USSD_SESSION_STATE              = 0x101,
    /* data coding scheme */
    /* type = uint32_t */
    MIPC_SS_SEND_USSD_CNF_T_DCS                             = 0x102,
    /* length of ussd */
    /* type = uint8_t */
    MIPC_SS_SEND_USSD_CNF_T_PAYLOAD_LEN                     = 0x103,
    /* pointer to ussd payload */
    /* type = byte_array */
    MIPC_SS_SEND_USSD_CNF_T_PAYLOAD                         = 0x8104,
};

    /* MIPC_MSG.SS_CANCEL_USSD_REQ */
enum mipc_ss_cancel_ussd_req_tlv_enum {
    mipc_ss_cancel_ussd_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_CANCEL_USSD_CNF */
enum mipc_ss_cancel_ussd_cnf_tlv_enum {
    mipc_ss_cancel_ussd_cnf_tlv_NONE = 0,
    /* ussd response */
    /* type = uint8_t, refer to SS_USSD */
    MIPC_SS_CANCEL_USSD_CNF_T_USSD_RESPONSE                 = 0x100,
    /* ussd session state */
    /* type = uint8_t, refer to SS_SESSION */
    MIPC_SS_CANCEL_USSD_CNF_T_USSD_SESSION_STATE            = 0x101,
    /* data coding scheme */
    /* type = uint32_t */
    MIPC_SS_CANCEL_USSD_CNF_T_DCS                           = 0x102,
    /* payload length */
    /* type = uint8_t */
    MIPC_SS_CANCEL_USSD_CNF_T_PAYLOAD_LEN                   = 0x103,
    /* pointer to payload */
    /* type = byte_array */
    MIPC_SS_CANCEL_USSD_CNF_T_PAYLOAD                       = 0x8104,
};

    /* MIPC_MSG.SS_SET_CLIR_REQ */
enum mipc_ss_set_clir_req_tlv_enum {
    mipc_ss_set_clir_req_tlv_NONE = 0,
    /* the value to set CLIR */
    /* type = uint8_t */
    MIPC_SS_SET_CLIR_REQ_T_N_VALUE                          = 0x100,
};

    /* MIPC_MSG.SS_SET_CLIR_CNF */
enum mipc_ss_set_clir_cnf_tlv_enum {
    mipc_ss_set_clir_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_GET_CLIR_REQ */
enum mipc_ss_get_clir_req_tlv_enum {
    mipc_ss_get_clir_req_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_GET_CLIR_CNF */
enum mipc_ss_get_clir_cnf_tlv_enum {
    mipc_ss_get_clir_cnf_tlv_NONE = 0,
    /* n value of CLIR */
    /* type = uint8_t */
    MIPC_SS_GET_CLIR_CNF_T_CLIR_N                           = 0x100,
    /* m value of CLIR */
    /* type = uint8_t */
    MIPC_SS_GET_CLIR_CNF_T_CLIR_M                           = 0x101,
};

    /* MIPC_MSG.SS_SET_CALL_WAITING_REQ */
enum mipc_ss_set_call_waiting_req_tlv_enum {
    mipc_ss_set_call_waiting_req_tlv_NONE = 0,
    /* to enable or disable call waiting */
    /* type = uint8_t, refer to SS_CALL_WAITING */
    MIPC_SS_SET_CALL_WAITING_REQ_T_CW_ENABLE_DISABLE        = 0x100,
    /* service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_SET_CALL_WAITING_REQ_T_SERVICE_CLASS            = 0x101,
};

    /* MIPC_MSG.SS_SET_CALL_WAITING_CNF */
enum mipc_ss_set_call_waiting_cnf_tlv_enum {
    mipc_ss_set_call_waiting_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_QUERY_CALL_WAITING_REQ */
enum mipc_ss_query_call_waiting_req_tlv_enum {
    mipc_ss_query_call_waiting_req_tlv_NONE = 0,
    /* service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_QUERY_CALL_WAITING_REQ_T_SERVICE_CLASS          = 0x100,
};

    /* MIPC_MSG.SS_QUERY_CALL_WAITING_CNF */
enum mipc_ss_query_call_waiting_cnf_tlv_enum {
    mipc_ss_query_call_waiting_cnf_tlv_NONE = 0,
    /* active or nor active of call waiting */
    /* type = uint8_t, refer to SS_ACTIVE_STATUS */
    MIPC_SS_QUERY_CALL_WAITING_CNF_T_CALL_WAITING_STATUS    = 0x100,
    /* service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_QUERY_CALL_WAITING_CNF_T_SERVICE_CLASS          = 0x101,
};

    /* MIPC_MSG.SS_SET_CALL_FORWARD_REQ */
enum mipc_ss_set_call_forward_req_tlv_enum {
    mipc_ss_set_call_forward_req_tlv_NONE = 0,
    /* ss operation type */
    /* type = uint8_t, refer to SS_SET_CALL_FORWARD_OPERATION_CODE */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_SS_OPERATION             = 0x100,
    /* call forward reason */
    /* type = uint8_t, refer to SS_CALL_FORWARD_REASON */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_CALL_FORWARD_REASON      = 0x101,
    /* call forward dial number */
    /* type = string */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_DIAL_NUMBER              = 0x8102,
    /* service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_SERVICE_CLASS            = 0x103,
    /* type of address */
    /* type = uint16_t */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_TOA                      = 0x104,
    /* call forward timer no reply */
    /* type = uint8_t */
    MIPC_SS_SET_CALL_FORWARD_REQ_T_TIMER_SECONDS            = 0x105,
};

    /* MIPC_MSG.SS_SET_CALL_FORWARD_CNF */
enum mipc_ss_set_call_forward_cnf_tlv_enum {
    mipc_ss_set_call_forward_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_QUERY_CALL_FORWARD_REQ */
enum mipc_ss_query_call_forward_req_tlv_enum {
    mipc_ss_query_call_forward_req_tlv_NONE = 0,
    /* query service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_QUERY_CALL_FORWARD_REQ_T_SERVICE_CLASS          = 0x100,
    /* call forward reason to query */
    /* type = uint8_t, refer to SS_CALL_FORWARD_REASON */
    MIPC_SS_QUERY_CALL_FORWARD_REQ_T_CALL_FORWARD_REASON    = 0x101,
};

    /* MIPC_MSG.SS_QUERY_CALL_FORWARD_CNF */
enum mipc_ss_query_call_forward_cnf_tlv_enum {
    mipc_ss_query_call_forward_cnf_tlv_NONE = 0,
    /* number of call forward */
    /* type = uint8_t */
    MIPC_SS_QUERY_CALL_FORWARD_CNF_T_CALL_FORWARD_COUNT     = 0x100,
    /* list of call forward */
    /* type = struct_array, refer to ss_call_forward */
    MIPC_SS_QUERY_CALL_FORWARD_CNF_T_CALL_FORWARD_LIST      = 0x8101,
};

    /* MIPC_MSG.SS_SET_CALL_BARRING_REQ */
enum mipc_ss_set_call_barring_req_tlv_enum {
    mipc_ss_set_call_barring_req_tlv_NONE = 0,
    /* Lock,unlock call barring */
    /* type = uint8_t, refer to SS_CALL_BARRING_LOCK */
    MIPC_SS_SET_CALL_BARRING_REQ_T_LOCK                     = 0x100,
    /* facility for call barring */
    /* type = uint8_t, refer to SS_CALL_BARRING_FAC */
    MIPC_SS_SET_CALL_BARRING_REQ_T_FACILITY                 = 0x101,
    /* pass word */
    /* type = string */
    MIPC_SS_SET_CALL_BARRING_REQ_T_PASSWORD                 = 0x8102,
    /* query service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_SET_CALL_BARRING_REQ_T_SERVICE_CLASS            = 0x103,
};

    /* MIPC_MSG.SS_SET_CALL_BARRING_CNF */
enum mipc_ss_set_call_barring_cnf_tlv_enum {
    mipc_ss_set_call_barring_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_QUERY_CALL_BARRING_REQ */
enum mipc_ss_query_call_barring_req_tlv_enum {
    mipc_ss_query_call_barring_req_tlv_NONE = 0,
    /* facility for call barring */
    /* type = uint8_t, refer to SS_CALL_BARRING_FAC */
    MIPC_SS_QUERY_CALL_BARRING_REQ_T_FACILITY               = 0x100,
    /* query service class */
    /* type = uint16_t, refer to SS_SERVICE_CLASS */
    MIPC_SS_QUERY_CALL_BARRING_REQ_T_SERVICE_CLASS          = 0x101,
};

    /* MIPC_MSG.SS_QUERY_CALL_BARRING_CNF */
enum mipc_ss_query_call_barring_cnf_tlv_enum {
    mipc_ss_query_call_barring_cnf_tlv_NONE = 0,
    /* call barring status, active, not active, or service class indication */
    /* type = uint16_t */
    MIPC_SS_QUERY_CALL_BARRING_CNF_T_CALL_BARRING_STATUS    = 0x100,
};

    /* MIPC_MSG.SS_CHANGE_BARRING_PASSWORD_REQ */
enum mipc_ss_change_barring_password_req_tlv_enum {
    mipc_ss_change_barring_password_req_tlv_NONE = 0,
    /* facility for call barring */
    /* type = uint8_t, refer to SS_CALL_BARRING_FAC */
    MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_FACILITY          = 0x100,
    /* old password */
    /* type = string */
    MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_OLD_PWD           = 0x101,
    /* new password */
    /* type = string */
    MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_NEW_PWD           = 0x102,
    /* new password confirmed */
    /* type = string */
    MIPC_SS_CHANGE_BARRING_PASSWORD_REQ_T_NEW_PWD_CONFIRM   = 0x103,
};

    /* MIPC_MSG.SS_CHANGE_BARRING_PASSWORD_CNF */
enum mipc_ss_change_barring_password_cnf_tlv_enum {
    mipc_ss_change_barring_password_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_SET_SUPP_SVC_NOTIFICATION_REQ */
enum mipc_ss_set_supp_svc_notification_req_tlv_enum {
    mipc_ss_set_supp_svc_notification_req_tlv_NONE = 0,
    /* set the +CSSI intermediate result code presentation status to TE. 0 disable, 1 enable */
    /* type = uint8_t */
    MIPC_SS_SET_SUPP_SVC_NOTIFICATION_REQ_T_STATUS_I        = 0x100,
    /* set the +CSSU unsolicited result code presentation status to TE. 0 disable, 1 enable */
    /* type = uint8_t */
    MIPC_SS_SET_SUPP_SVC_NOTIFICATION_REQ_T_STATUS_U        = 0x101,
};

    /* MIPC_MSG.SS_SET_SUPP_SVC_NOTIFICATION_CNF */
enum mipc_ss_set_supp_svc_notification_cnf_tlv_enum {
    mipc_ss_set_supp_svc_notification_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_QUERY_CLIP_REQ */
enum mipc_ss_query_clip_req_tlv_enum {
    mipc_ss_query_clip_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_QUERY_CLIP_CNF */
enum mipc_ss_query_clip_cnf_tlv_enum {
    mipc_ss_query_clip_cnf_tlv_NONE = 0,
    /* shows the result code presentation status to the TE. 0 disable, 1 enable */
    /* type = uint8_t */
    MIPC_SS_QUERY_CLIP_CNF_T_CODE_STATUS                    = 0x100,
    /* shows the subscriber CLIP service status in the netowrk */
    /* type = uint8_t */
    MIPC_SS_QUERY_CLIP_CNF_T_NW_STATUS                      = 0x101,
};

    /* MIPC_MSG.SS_SET_CLIP_REQ */
enum mipc_ss_set_clip_req_tlv_enum {
    mipc_ss_set_clip_req_tlv_NONE = 0,
    /* integer type. 0 disable, 1 enable */
    /* type = uint8_t */
    MIPC_SS_SET_CLIP_REQ_T_STATUS                           = 0x100,
};

    /* MIPC_MSG.SS_SET_CLIP_CNF */
enum mipc_ss_set_clip_cnf_tlv_enum {
    mipc_ss_set_clip_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SS_GET_COLP_REQ */
enum mipc_ss_get_colp_req_tlv_enum {
    mipc_ss_get_colp_req_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_GET_COLP_CNF */
enum mipc_ss_get_colp_cnf_tlv_enum {
    mipc_ss_get_colp_cnf_tlv_NONE = 0,
    /* n value of COLP */
    /* type = uint8_t */
    MIPC_SS_GET_COLP_CNF_T_COLP_N                           = 0x100,
    /* m value of COLP */
    /* type = uint8_t */
    MIPC_SS_GET_COLP_CNF_T_COLP_M                           = 0x101,
};

    /* MIPC_MSG.SS_SET_COLP_REQ */
enum mipc_ss_set_colp_req_tlv_enum {
    mipc_ss_set_colp_req_tlv_NONE = 0,
    /* the value to set COLP */
    /* type = uint8_t */
    MIPC_SS_SET_COLP_REQ_T_N_VALUE                          = 0x100,
};

    /* MIPC_MSG.SS_SET_COLP_CNF */
enum mipc_ss_set_colp_cnf_tlv_enum {
    mipc_ss_set_colp_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_GET_COLR_REQ */
enum mipc_ss_get_colr_req_tlv_enum {
    mipc_ss_get_colr_req_tlv_NONE = 0,
};

    /* MIPC_MSG.SS_GET_COLR_CNF */
enum mipc_ss_get_colr_cnf_tlv_enum {
    mipc_ss_get_colr_cnf_tlv_NONE = 0,
    /* status value of COLR */
    /* type = uint8_t */
    MIPC_SS_GET_COLR_CNF_T_STATUS                           = 0x100,
};

    /* MIPC_MSG.STK_SET_PAC_REQ */
enum mipc_stk_set_pac_req_tlv_enum {
    mipc_stk_set_pac_req_tlv_NONE = 0,
    /* the bitmask, each bit indicates if the host likes to handle/receive a notification for a specific proactive command or not. (size is 32 bytes = 256 bits */
    /* type = byte_array */
    MIPC_STK_SET_PAC_REQ_T_PAC_BITMASK_PTR                  = 0x101,
};

    /* MIPC_MSG.STK_SET_PAC_CNF */
enum mipc_stk_set_pac_cnf_tlv_enum {
    mipc_stk_set_pac_cnf_tlv_NONE = 0,
    /* each byte identifies the current support for a specific proactive command */
    /* type = byte_array */
    MIPC_STK_SET_PAC_CNF_T_PAC_PROFILE                      = 0x100,
};

    /* MIPC_MSG.STK_GET_PAC_REQ */
enum mipc_stk_get_pac_req_tlv_enum {
    mipc_stk_get_pac_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.STK_GET_PAC_CNF */
enum mipc_stk_get_pac_cnf_tlv_enum {
    mipc_stk_get_pac_cnf_tlv_NONE = 0,
    /* each byte identifies the current support for a specific proactive command */
    /* type = byte_array */
    MIPC_STK_GET_PAC_CNF_T_PAC_PROFILE                      = 0x100,
};

    /* MIPC_MSG.STK_SEND_TERMINAL_RESPONSE_REQ */
enum mipc_stk_send_terminal_response_req_tlv_enum {
    mipc_stk_send_terminal_response_req_tlv_NONE = 0,
    /*  length of terminal response */
    /* type = uint32_t */
    MIPC_STK_SEND_TERMINAL_RESPONSE_REQ_T_TR_LEN            = 0x101,
    /* pointer to terminal response */
    /* type = byte_array */
    MIPC_STK_SEND_TERMINAL_RESPONSE_REQ_T_TR_PTR            = 0x102,
};

    /* MIPC_MSG.STK_SEND_TERMINAL_RESPONSE_CNF */
enum mipc_stk_send_terminal_response_cnf_tlv_enum {
    mipc_stk_send_terminal_response_cnf_tlv_NONE = 0,
    /* status words */
    /* type = uint16_t */
    MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_STATUS_WORDS      = 0x100,
    /* length of terminal response */
    /* type = uint32_t */
    MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_TR_LEN            = 0x101,
    /* pointer to terminal response */
    /* type = byte_array */
    MIPC_STK_SEND_TERMINAL_RESPONSE_CNF_T_TR_PTR            = 0x102,
};

    /* MIPC_MSG.STK_SEND_ENVELOPE_REQ */
enum mipc_stk_send_envelope_req_tlv_enum {
    mipc_stk_send_envelope_req_tlv_NONE = 0,
    /* length of envelop */
    /* type = uint32_t */
    MIPC_STK_SEND_ENVELOPE_REQ_T_ENVELOPE_LEN               = 0x101,
    /* pointer to envelop */
    /* type = byte_array */
    MIPC_STK_SEND_ENVELOPE_REQ_T_ENVELOPE_PTR               = 0x102,
};

    /* MIPC_MSG.STK_SEND_ENVELOPE_CNF */
enum mipc_stk_send_envelope_cnf_tlv_enum {
    mipc_stk_send_envelope_cnf_tlv_NONE = 0,
    /* status words */
    /* type = uint16_t */
    MIPC_STK_SEND_ENVELOPE_CNF_T_STATUS_WORDS               = 0x100,
};

    /* MIPC_MSG.STK_GET_ENVELOPE_INFO_REQ */
enum mipc_stk_get_envelope_info_req_tlv_enum {
    mipc_stk_get_envelope_info_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.STK_GET_ENVELOPE_INFO_CNF */
enum mipc_stk_get_envelope_info_cnf_tlv_enum {
    mipc_stk_get_envelope_info_cnf_tlv_NONE = 0,
    /* type = byte_array */
    MIPC_STK_GET_ENVELOPE_INFO_CNF_T_ENVELOPE_BITMASK       = 0x100,
};

    /* MIPC_MSG.STK_HANDLE_CALL_SETUP_FROM_SIM_REQ */
enum mipc_stk_handle_call_setup_from_sim_req_tlv_enum {
    mipc_stk_handle_call_setup_from_sim_req_tlv_NONE = 0,
    /* integer, example: 0, 1, 32, 33 */
    /* type = uint8_t */
    MIPC_STK_HANDLE_CALL_SETUP_FROM_SIM_REQ_T_DATA          = 0x100,
};

    /* MIPC_MSG.STK_HANDLE_CALL_SETUP_FROM_SIM_CNF */
enum mipc_stk_handle_call_setup_from_sim_cnf_tlv_enum {
    mipc_stk_handle_call_setup_from_sim_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.STK_SEND_BIPCONF_REQ */
enum mipc_stk_send_bipconf_req_tlv_enum {
    mipc_stk_send_bipconf_req_tlv_NONE = 0,
    /* send bipconf req cmd number */
    /* type = uint32_t */
    MIPC_STK_SEND_BIPCONF_REQ_T_CMD_NUM                     = 0x100,
    /* send bipconf result */
    /* type = uint32_t */
    MIPC_STK_SEND_BIPCONF_REQ_T_RESULT                      = 0x101,
};

    /* MIPC_MSG.STK_SEND_BIPCONF_CNF */
enum mipc_stk_send_bipconf_cnf_tlv_enum {
    mipc_stk_send_bipconf_cnf_tlv_NONE = 0,
};

    /* MIPC_MSG.CALL_DIAL_REQ */
enum mipc_call_dial_req_tlv_enum {
    mipc_call_dial_req_tlv_NONE = 0,
    /* type = string */
    MIPC_CALL_DIAL_REQ_T_DIAL_ADDRESS                       = 0x8100,
    /* type = uint32_t, refer to CALL_DIAL_ADDRESS_TYPE */
    MIPC_CALL_DIAL_REQ_T_DIAL_ADDRESS_TYPE                  = 0x101,
    /* type = uint32_t, refer to CALL_DIAL_TYPE */
    MIPC_CALL_DIAL_REQ_T_TYPE                               = 0x102,
    /* type = uint32_t, refer to CALL_DIAL_DOMAIN */
    MIPC_CALL_DIAL_REQ_T_DOMAIN                             = 0x103,
    /* only support AUTO, CS_ONLY, 3GPP2_ONLY */
    /* type = uint32_t, refer to CALL_DIAL_DOMAIN */
    MIPC_CALL_DIAL_REQ_T_ECC_RETRY_DOMAIN                   = 0x104,
    /* A bitmap indicating the Emergency Service Category Value according to 3GPP TS 24.008 */
    /* type = uint16_t */
    MIPC_CALL_DIAL_REQ_T_ECC_CATEGORY                       = 0x105,
    /* Requests calling line identification restriction (once) */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_DIAL_REQ_T_CLIR                               = 0x106,
    /* when set ecc test mode, it's necessary */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_DIAL_REQ_T_IS_ECC_TESTING                     = 0x107,
};

    /* MIPC_MSG.CALL_DIAL_CNF */
enum mipc_call_dial_cnf_tlv_enum {
    mipc_call_dial_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_SS_REQ */
enum mipc_call_ss_req_tlv_enum {
    mipc_call_ss_req_tlv_NONE = 0,
    /* type = uint32_t, refer to CALL_SS_ACTION */
    MIPC_CALL_SS_REQ_T_ACTION                               = 0x100,
    /* this field is only necessary when action=MIPC_CALL_SS_ACTION_HOLD_CALL or MIPC_CALL_SS_ACTION_RESUME_CALL */
    /* type = uint32_t */
    MIPC_CALL_SS_REQ_T_CALLID                               = 0x101,
};

    /* MIPC_MSG.CALL_SS_CNF */
enum mipc_call_ss_cnf_tlv_enum {
    mipc_call_ss_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_HANGUP_REQ */
enum mipc_call_hangup_req_tlv_enum {
    mipc_call_hangup_req_tlv_NONE = 0,
    /* type = uint32_t, refer to CALL_HANGUP_MODE */
    MIPC_CALL_HANGUP_REQ_T_MODE                             = 0x100,
    /* this field is only necessary when mode=MIPC_CALL_HANGUP_MODE_HANGUP or MIPC_CALL_HANGUP_MODE_FORCE_HANGUP */
    /* type = uint32_t */
    MIPC_CALL_HANGUP_REQ_T_CALLID                           = 0x101,
    /* type = uint32_t, refer to CALL_HANGUP_CAUSE */
    MIPC_CALL_HANGUP_REQ_T_CAUSE                            = 0x102,
};

    /* MIPC_MSG.CALL_HANGUP_CNF */
enum mipc_call_hangup_cnf_tlv_enum {
    mipc_call_hangup_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_ANSWER_REQ */
enum mipc_call_answer_req_tlv_enum {
    mipc_call_answer_req_tlv_NONE = 0,
    /* type = uint32_t, refer to CALL_ANSWER_MODE */
    MIPC_CALL_ANSWER_REQ_T_MODE                             = 0x100,
    /* this field is only necessary when mode=MIPC_CALL_ANSWER_MODE_AUDIO_CALL, MIPC_CALL_ANSWER_MODE_Rx_VIDEO_CALL or MIPC_CALL_ANSWER_MODE_Tx_VIDEO_CALL */
    /* type = uint32_t */
    MIPC_CALL_ANSWER_REQ_T_CALLID                           = 0x101,
};

    /* MIPC_MSG.CALL_ANSWER_CNF */
enum mipc_call_answer_cnf_tlv_enum {
    mipc_call_answer_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_GET_CALL_STATUS_REQ */
enum mipc_call_get_call_status_req_tlv_enum {
    mipc_call_get_call_status_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_GET_CALL_STATUS_REQ_T_CALLID                  = 0x100,
};

    /* MIPC_MSG.CALL_GET_CALL_STATUS_CNF */
enum mipc_call_get_call_status_cnf_tlv_enum {
    mipc_call_get_call_status_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_COUNT                   = 0x100,
    /* type = uint32_t */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_CALLID                  = 0x10B,
    /* type = uint32_t, refer to CALL_DIRECTION */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_DIRECTION               = 0x10C,
    /* type = uint32_t, refer to CALL_MODE */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_MODE                    = 0x10D,
    /* type = uint32_t, refer to CALL_CLCC_STATE */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_CALL_CLCC_STATE         = 0x10E,
    /* type = uint32_t, refer to CALL_DIAL_ADDRESS_TYPE */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_NUMBER_TYPE             = 0x10F,
    /* type of address (refer TS 24.008 [8] subclause 10.5.4.7) */
    /* type = uint32_t */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_TON                     = 0x110,
    /* type = string */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_NUMBER                  = 0x8111,
    /* type = uint32_t, refer to CALL_RAT */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_RAT                     = 0x112,
    /* type = bitmap, refer to CALL_TYPE */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_TYPE                    = 0x113,
    /* type = struct, refer to call_detail_info */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_DETAIL_INFO             = 0x8114,
    /* type = struct, refer to call_video_cap */
    MIPC_CALL_GET_CALL_STATUS_CNF_T_VIDEO_CAP               = 0x115,
};

    /* MIPC_MSG.CALL_CONFERENCE_REQ */
enum mipc_call_conference_req_tlv_enum {
    mipc_call_conference_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_CONFERENCE_REQ_T_CONF_CALLID                  = 0x100,
    /* type = uint32_t, refer to CALL_CONF_ACTION */
    MIPC_CALL_CONFERENCE_REQ_T_ACTION                       = 0x101,
    /* type = string */
    MIPC_CALL_CONFERENCE_REQ_T_NUMBER                       = 0x8102,
    /* the target call id for action */
    /* type = uint32_t */
    MIPC_CALL_CONFERENCE_REQ_T_TARGET_CALLID                = 0x103,
};

    /* MIPC_MSG.CALL_CONFERENCE_CNF */
enum mipc_call_conference_cnf_tlv_enum {
    mipc_call_conference_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_GET_CONFERENCE_INFO_REQ */
enum mipc_call_get_conference_info_req_tlv_enum {
    mipc_call_get_conference_info_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_GET_CONFERENCE_INFO_REQ_T_CONF_CALLID         = 0x100,
};

    /* MIPC_MSG.CALL_GET_CONFERENCE_INFO_CNF */
enum mipc_call_get_conference_info_cnf_tlv_enum {
    mipc_call_get_conference_info_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_COUNT               = 0x100,
    /* type = uint32_t, refer to CALL_DIRECTION */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_DIRECTION           = 0x10B,
    /* call number */
    /* type = string */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_NUMBER  = 0x810C,
    /* type = string */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_NAME    = 0x810D,
    /* type = uint32_t, refer to CONF_PARTICIPANT_STATUS */
    MIPC_CALL_GET_CONFERENCE_INFO_CNF_T_PARTICIPANT_STATUS  = 0x10E,
};

    /* MIPC_MSG.CALL_GET_FINISH_REASON_REQ */
enum mipc_call_get_finish_reason_req_tlv_enum {
    mipc_call_get_finish_reason_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_GET_FINISH_REASON_CNF */
enum mipc_call_get_finish_reason_cnf_tlv_enum {
    mipc_call_get_finish_reason_cnf_tlv_NONE = 0,
    /* the value listed in GSM 04.08 annex H */
    /* type = uint32_t */
    MIPC_CALL_GET_FINISH_REASON_CNF_T_REASON                = 0x100,
    /* the describes reason value */
    /* type = string */
    MIPC_CALL_GET_FINISH_REASON_CNF_T_REASON_STR            = 0x101,
};

    /* MIPC_MSG.CALL_DTMF_REQ */
enum mipc_call_dtmf_req_tlv_enum {
    mipc_call_dtmf_req_tlv_NONE = 0,
    /* DTMF START or STOP */
    /* type = uint32_t, refer to DTMF_MODE */
    MIPC_CALL_DTMF_REQ_T_MODE                               = 0x100,
    /* this field is only necessary when mode=START or SINGLE_TONE */
    /* type = string */
    MIPC_CALL_DTMF_REQ_T_DIGIT                              = 0x101,
};

    /* MIPC_MSG.CALL_DTMF_CNF */
enum mipc_call_dtmf_cnf_tlv_enum {
    mipc_call_dtmf_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_GET_ECC_LIST_REQ */
enum mipc_call_get_ecc_list_req_tlv_enum {
    mipc_call_get_ecc_list_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_GET_ECC_LIST_CNF */
enum mipc_call_get_ecc_list_cnf_tlv_enum {
    mipc_call_get_ecc_list_cnf_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_GET_ECC_LIST_CNF_T_INFO_COUNT                 = 0x100,
    /* type = struct_array, refer to ecc_info */
    MIPC_CALL_GET_ECC_LIST_CNF_T_INFO_LIST                  = 0x101,
};

    /* MIPC_MSG.CALL_SET_ECC_LIST_REQ */
enum mipc_call_set_ecc_list_req_tlv_enum {
    mipc_call_set_ecc_list_req_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_SET_ECC_LIST_REQ_T_INFO_COUNT                 = 0x100,
    /* type = struct_array, refer to ecc_info */
    MIPC_CALL_SET_ECC_LIST_REQ_T_INFO_LIST                  = 0x101,
};

    /* MIPC_MSG.CALL_SET_ECC_LIST_CNF */
enum mipc_call_set_ecc_list_cnf_tlv_enum {
    mipc_call_set_ecc_list_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_SET_FLIGHT_MODE_ECC_SESSION_REQ */
enum mipc_call_set_flight_mode_ecc_session_req_tlv_enum {
    mipc_call_set_flight_mode_ecc_session_req_tlv_NONE = 0,
    /* 0 means normal mode, 1 means flight mode */
    /* type = uint8_t */
    MIPC_CALL_SET_FLIGHT_MODE_ECC_SESSION_REQ_T_IS_FLIGHT_MODE = 0x100,
};

    /* MIPC_MSG.CALL_SET_FLIGHT_MODE_ECC_SESSION_CNF */
enum mipc_call_set_flight_mode_ecc_session_cnf_tlv_enum {
    mipc_call_set_flight_mode_ecc_session_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_SET_EXIT_ECBM_MODE_REQ */
enum mipc_call_set_exit_ecbm_mode_req_tlv_enum {
    mipc_call_set_exit_ecbm_mode_req_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_SET_EXIT_ECBM_MODE_CNF */
enum mipc_call_set_exit_ecbm_mode_cnf_tlv_enum {
    mipc_call_set_exit_ecbm_mode_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_CONFERENCE_DIAL_REQ */
enum mipc_call_conference_dial_req_tlv_enum {
    mipc_call_conference_dial_req_tlv_NONE = 0,
    /* type = uint32_t, refer to CALL_CONFERENCE_DIAL_TYPE */
    MIPC_CALL_CONFERENCE_DIAL_REQ_T_TYPE                    = 0x100,
    /* Requests calling line identification restriction (once) */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_CONFERENCE_DIAL_REQ_T_CLIR                    = 0x101,
    /* the count of dial_address */
    /* type = uint32_t */
    MIPC_CALL_CONFERENCE_DIAL_REQ_T_COUNT                   = 0x102,
    /* type = string */
    MIPC_CALL_CONFERENCE_DIAL_REQ_T_DIAL_ADDRESS            = 0x8103,
};

    /* MIPC_MSG.CALL_CONFERENCE_DIAL_CNF */
enum mipc_call_conference_dial_cnf_tlv_enum {
    mipc_call_conference_dial_cnf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.IMS_SET_CONFIG_REQ */
enum mipc_ims_set_config_req_tlv_enum {
    mipc_ims_set_config_req_tlv_NONE = 0,
    /* the configuration class, CLASS_IMS_FEATURE mapping AT+EIMSCFG, CLASS_IMS_CONFIG mapping AT+ECFGSET, IMS_PROVISION mapping AT+EPVSSET, IMS_CAPABILITY is used to set ims capability */
    /* type = uint32_t, refer to IMS_CONFIG_CLASS */
    MIPC_IMS_SET_CONFIG_REQ_T_CLASS                         = 0x100,
    /* the string of configuration type, for example, this string will be send to lowlayer with AT+ECFGSET = type,data */
    /* type = string */
    MIPC_IMS_SET_CONFIG_REQ_T_TYPE                          = 0x101,
    /* the configuration data,for example, this string will be send to lowlayer with AT+ECFGSET = type,data */
    /* type = byte_array */
    MIPC_IMS_SET_CONFIG_REQ_T_DATA                          = 0x102,
};

    /* MIPC_MSG.IMS_SET_CONFIG_CNF */
enum mipc_ims_set_config_cnf_tlv_enum {
    mipc_ims_set_config_cnf_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_IMS_SET_CONFIG_CNF_T_DATA                          = 0x100,
};

    /* MIPC_MSG.IMS_GET_CONFIG_REQ */
enum mipc_ims_get_config_req_tlv_enum {
    mipc_ims_get_config_req_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to IMS_CONFIG_CLASS */
    MIPC_IMS_GET_CONFIG_REQ_T_CLASS                         = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_IMS_GET_CONFIG_REQ_T_TYPE                          = 0x101,
};

    /* MIPC_MSG.IMS_GET_CONFIG_CNF */
enum mipc_ims_get_config_cnf_tlv_enum {
    mipc_ims_get_config_cnf_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_IMS_GET_CONFIG_CNF_T_DATA                          = 0x100,
};

    /* MIPC_MSG.IMS_GET_STATE_REQ */
enum mipc_ims_get_state_req_tlv_enum {
    mipc_ims_get_state_req_tlv_NONE = 0,
    /* the event of ims state */
    /* type = uint8_t, refer to IMS_STATE_IND_EVENT */
    MIPC_IMS_GET_STATE_REQ_T_EVENT                          = 0x100,
};

    /* MIPC_MSG.IMS_GET_STATE_CNF */
enum mipc_ims_get_state_cnf_tlv_enum {
    mipc_ims_get_state_cnf_tlv_NONE = 0,
    /* the event of ims state */
    /* type = uint8_t, refer to IMS_STATE_IND_EVENT */
    MIPC_IMS_GET_STATE_CNF_T_EVENT                          = 0x100,
    /* the ims registration state */
    /* type = uint8_t, refer to IMS_STATE */
    MIPC_IMS_GET_STATE_CNF_T_REG_STATE                      = 0x101,
    /* the ims registration ext info */
    /* type = uint32_t */
    MIPC_IMS_GET_STATE_CNF_T_EXT_INFO                       = 0x102,
    /* the ims wfc state */
    /* type = uint8_t */
    MIPC_IMS_GET_STATE_CNF_T_WFC                            = 0x103,
    /* the ims account id */
    /* type = uint32_t */
    MIPC_IMS_GET_STATE_CNF_T_ACCOUNT_ID                     = 0x104,
    /* the ims account id */
    /* type = byte_array */
    MIPC_IMS_GET_STATE_CNF_T_URI                            = 0x8105,
    /* expire time */
    /* type = uint32_t */
    MIPC_IMS_GET_STATE_CNF_T_EXPIRE_TIME                    = 0x106,
    /* error code */
    /* type = uint32_t */
    MIPC_IMS_GET_STATE_CNF_T_ERROR_CODE                     = 0x107,
    /* error message */
    /* type = string */
    MIPC_IMS_GET_STATE_CNF_T_ERROR_MESSAGE                  = 0x108,
};

    /* MIPC_MSG.SYS_AT_IND */
enum mipc_sys_at_ind_tlv_enum {
    mipc_sys_at_ind_tlv_NONE = 0,
    /* type = string */
    MIPC_SYS_AT_IND_T_ATCMD                                 = 0x8100,
};

    /* MIPC_MSG.SYS_THERMAL_SENSOR_IND */
enum mipc_sys_thermal_sensor_ind_tlv_enum {
    mipc_sys_thermal_sensor_ind_tlv_NONE = 0,
    /* type = int32_t */
    MIPC_SYS_THERMAL_SENSOR_IND_T_TEMPERATURE               = 0x100,
    /* type = struct, refer to sys_thermal_sensor_config */
    MIPC_SYS_THERMAL_SENSOR_IND_T_THRESHOLD                 = 0x101,
    /* type = uint8_t */
    MIPC_SYS_THERMAL_SENSOR_IND_T_INFO_COUNT                = 0x102,
    /* type = struct, refer to sys_thermal_sensor_info */
    MIPC_SYS_THERMAL_SENSOR_IND_T_INFO                      = 0x103,
};

    /* MIPC_MSG.SYS_CONFIG_IND */
enum mipc_sys_config_ind_tlv_enum {
    mipc_sys_config_ind_tlv_NONE = 0,
    /* the reason of configuration change */
    /* type = uint32_t, refer to SYS_CONFIG_CHANGE_REASON */
    MIPC_SYS_CONFIG_IND_T_REASON                            = 0x100,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_CONFIG_IND_T_CLASS                             = 0x101,
};

    /* MIPC_MSG.SYS_ADPCLK_IND */
enum mipc_sys_adpclk_ind_tlv_enum {
    mipc_sys_adpclk_ind_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_ADPCLK_IND_T_FREQ_INFO_COUNT                   = 0x100,
    /* type = struct_array, refer to sys_adpclk_freq_info */
    MIPC_SYS_ADPCLK_IND_T_FREQ_INFO_LIST                    = 0x101,
};

    /* MIPC_MSG.SYS_MCF_IND */
enum mipc_sys_mcf_ind_tlv_enum {
    mipc_sys_mcf_ind_tlv_NONE = 0,
    /* type = uint8_t */
    MIPC_SYS_MCF_IND_T_TYPE                                 = 0x10A,
    /* type = uint8_t */
    MIPC_SYS_MCF_IND_T_RESULT                               = 0x10B,
};

    /* MIPC_MSG.SYS_SBP_IND */
enum mipc_sys_sbp_ind_tlv_enum {
    mipc_sys_sbp_ind_tlv_NONE = 0,
    /* the sys sbp id */
    /* type = uint32_t */
    MIPC_SYS_SBP_IND_T_SBP_ID                               = 0x100,
    /* the sim sys sbp id */
    /* type = uint32_t */
    MIPC_SYS_SBP_IND_T_SIM_SBP_ID                           = 0x8101,
};

    /* MIPC_MSG.SYS_EL2_IP_UL_IND */
enum mipc_sys_el2_ip_ul_ind_tlv_enum {
    mipc_sys_el2_ip_ul_ind_tlv_NONE = 0,
    /* el2 ip ul tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_IP_UL_IND_T_TX_BPS                         = 0x100,
};

    /* MIPC_MSG.SYS_EL2_IP_DL_IND */
enum mipc_sys_el2_ip_dl_ind_tlv_enum {
    mipc_sys_el2_ip_dl_ind_tlv_NONE = 0,
    /* el2 ip dl tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_IP_DL_IND_T_TX_BPS                         = 0x100,
};

    /* MIPC_MSG.SYS_EL2_MAC_UL_IND */
enum mipc_sys_el2_mac_ul_ind_tlv_enum {
    mipc_sys_el2_mac_ul_ind_tlv_NONE = 0,
    /* el2 mac ul tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_MAC_UL_IND_T_TX_BPS                        = 0x100,
};

    /* MIPC_MSG.SYS_EL2_MAC_DL_IND */
enum mipc_sys_el2_mac_dl_ind_tlv_enum {
    mipc_sys_el2_mac_dl_ind_tlv_NONE = 0,
    /* el2 mac dl tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_MAC_DL_IND_T_TX_BPS                        = 0x100,
};

    /* MIPC_MSG.SYS_EL2_PDCP_UL_IND */
enum mipc_sys_el2_pdcp_ul_ind_tlv_enum {
    mipc_sys_el2_pdcp_ul_ind_tlv_NONE = 0,
    /* el2 pdcp ul tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_PDCP_UL_IND_T_TX_BPS                       = 0x100,
};

    /* MIPC_MSG.SYS_EL2_PDCP_DL_IND */
enum mipc_sys_el2_pdcp_dl_ind_tlv_enum {
    mipc_sys_el2_pdcp_dl_ind_tlv_NONE = 0,
    /* el2 pdcp dl tx bps */
    /* type = uint32_t */
    MIPC_SYS_EL2_PDCP_DL_IND_T_TX_BPS                       = 0x100,
};

    /* MIPC_MSG.SYS_NL2_MAC_UL_IND */
enum mipc_sys_nl2_mac_ul_ind_tlv_enum {
    mipc_sys_nl2_mac_ul_ind_tlv_NONE = 0,
    /* nl2 mac ul tx bps */
    /* type = uint32_t */
    MIPC_SYS_NL2_MAC_UL_IND_T_TX_BPS                        = 0x100,
};

    /* MIPC_MSG.SYS_NL2_MAC_DL_IND */
enum mipc_sys_nl2_mac_dl_ind_tlv_enum {
    mipc_sys_nl2_mac_dl_ind_tlv_NONE = 0,
    /* nl2 mac dl tx bps */
    /* type = uint32_t */
    MIPC_SYS_NL2_MAC_DL_IND_T_TX_BPS                        = 0x100,
};

    /* MIPC_MSG.SYS_NL2_PDCP_UL_IND */
enum mipc_sys_nl2_pdcp_ul_ind_tlv_enum {
    mipc_sys_nl2_pdcp_ul_ind_tlv_NONE = 0,
    /* nl2 pdcp ul tx bps */
    /* type = uint32_t */
    MIPC_SYS_NL2_PDCP_UL_IND_T_TX_BPS                       = 0x100,
};

    /* MIPC_MSG.SYS_NL2_PDCP_DL_IND */
enum mipc_sys_nl2_pdcp_dl_ind_tlv_enum {
    mipc_sys_nl2_pdcp_dl_ind_tlv_NONE = 0,
    /* nl2 pdcp dl tx bps */
    /* type = uint32_t */
    MIPC_SYS_NL2_PDCP_DL_IND_T_TX_BPS                       = 0x100,
};

    /* MIPC_MSG.SYS_GEO_LOCATION_IND */
enum mipc_sys_geo_location_ind_tlv_enum {
    mipc_sys_geo_location_ind_tlv_NONE = 0,
    /* request id, 0 ~ 7 */
    /* type = uint8_t, refer to SYS_ACCOUNT_ID */
    MIPC_SYS_GEO_LOCATION_IND_T_ACCOUNT_ID                  = 0x100,
    /* 0: Do not broadcast this information to all IMS accounts. 1: Broadcast this information to all IMS accounts */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_SYS_GEO_LOCATION_IND_T_BROADCAST_FLAG              = 0x101,
    /* latitude from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_LATITUDE                    = 0x102,
    /* longitude from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_LONGITUDE                   = 0x103,
    /* accurate from GPS, 0 as failed */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_ACCURACY                    = 0x104,
    /* Positioning method */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_METHOD                      = 0x105,
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_CITY                        = 0x106,
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_STATE                       = 0x107,
    /* Zip code */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_ZIP                         = 0x108,
    /* Two-letter country code defined by ISO 3166-1 */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_COUNTRY_CODE                = 0x109,
    /* UE Wi-Fi interface mac address */
    /* type = string */
    MIPC_SYS_GEO_LOCATION_IND_T_UE_WLAN_MAC                 = 0x10A,
    /* confidence */
    /* type = uint32_t */
    MIPC_SYS_GEO_LOCATION_IND_T_CONFIDENCE                  = 0x10B,
};

    /* MIPC_MSG.APN_IA_CFG_IND */
enum mipc_apn_ia_cfg_ind_tlv_enum {
    mipc_apn_ia_cfg_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_PROFILE_CFG_IND */
enum mipc_apn_profile_cfg_ind_tlv_enum {
    mipc_apn_profile_cfg_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.APN_VZW_CHG_IND */
enum mipc_apn_vzw_chg_ind_tlv_enum {
    mipc_apn_vzw_chg_ind_tlv_NONE = 0,
    /* apn profile count */
    /* type = uint8_t */
    MIPC_APN_VZW_CHG_IND_T_APN_COUNT                        = 0x100,
    /* the list of APN profile */
    /* type = struct_array, refer to vzw_apn_profile */
    MIPC_APN_VZW_CHG_IND_T_APN_LIST                         = 0x101,
};

    /* MIPC_MSG.DATA_ACT_CALL_IND */
enum mipc_data_act_call_ind_tlv_enum {
    mipc_data_act_call_ind_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_ID                             = 0x100,
    /* apn name */
    /* type = string */
    MIPC_DATA_ACT_CALL_IND_T_APN                            = 0x101,
    /* pdp type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_ACT_CALL_IND_T_PDP_TYPE                       = 0x102,
    /* v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_V4_COUNT                       = 0x103,
    /* first v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_V4_0                           = 0x8104,
    /* second v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_V4_1                           = 0x8105,
    /* third v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_V4_2                           = 0x8106,
    /* fourth v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_V4_3                           = 0x8107,
    /* v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_V6_COUNT                       = 0x108,
    /* first v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_V6_0                           = 0x8109,
    /* second v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_V6_1                           = 0x810A,
    /* third v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_V6_2                           = 0x810B,
    /* fourth v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_V6_3                           = 0x810C,
    /* DNS v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V4_COUNT                   = 0x10D,
    /* first DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V4_0                       = 0x810E,
    /* second DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V4_1                       = 0x810F,
    /* third DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V4_2                       = 0x8110,
    /* fourth DNS v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V4_3                       = 0x8111,
    /* DNS v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V6_COUNT                   = 0x112,
    /* first DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V6_0                       = 0x8113,
    /* second DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V6_1                       = 0x8114,
    /* third DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V6_2                       = 0x8115,
    /* fourth DNS v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_DNS_V6_3                       = 0x8116,
    /* PCSCF v4 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_COUNT                 = 0x117,
    /* first PCSCF v4 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_0                     = 0x8118,
    /* second PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_1                     = 0x8119,
    /* third PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_2                     = 0x811A,
    /* fourth PCSCF v4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V4_3                     = 0x811B,
    /* PCSCF v6 address count */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_COUNT                 = 0x11C,
    /* first PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_0                     = 0x811D,
    /* second PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_1                     = 0x811E,
    /* third PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_2                     = 0x811F,
    /* fourth PCSCF v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_PCSCF_V6_3                     = 0x8120,
    /* gateway v4 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_GW_V4                          = 0x8121,
    /* gateway v6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_ACT_CALL_IND_T_GW_V6                          = 0x8122,
    /* v4 MTU */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_IND_T_MTU_V4                         = 0x123,
    /* v6 MTU */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_IND_T_MTU_V6                         = 0x124,
    /* network interface id */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_IND_T_INTERFACE_ID                   = 0x125,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_P_ID                           = 0x126,
    /*  fall back data call id */
    /* type = uint8_t */
    MIPC_DATA_ACT_CALL_IND_T_FB_ID                          = 0x127,
    /* network transmition id */
    /* type = uint32_t */
    MIPC_DATA_ACT_CALL_IND_T_TRANS_ID                       = 0x128,
};

    /* MIPC_MSG.DATA_DEACT_CALL_IND */
enum mipc_data_deact_call_ind_tlv_enum {
    mipc_data_deact_call_ind_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_DEACT_CALL_IND_T_ID                           = 0x100,
    /* network error enum, refer to 3GPP 24.008 */
    /* type = uint8_t */
    MIPC_DATA_DEACT_CALL_IND_T_RES                          = 0x101,
};

    /* MIPC_MSG.DATA_MOD_CALL_IND */
enum mipc_data_mod_call_ind_tlv_enum {
    mipc_data_mod_call_ind_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_ID                             = 0x100,
    /* apn */
    /* type = string */
    MIPC_DATA_MOD_CALL_IND_T_APN                            = 0x101,
    /* pdp type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_MOD_CALL_IND_T_PDP_TYPE                       = 0x102,
    /* the count of ipv4 address */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_V4_COUNT                       = 0x103,
    /* first ipv4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_V4_0                           = 0x8104,
    /* second ipv4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_V4_1                           = 0x8105,
    /* third ipv4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_V4_2                           = 0x8106,
    /* forth ipv4 address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_V4_3                           = 0x8107,
    /* count of ipv6 address */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_V6_COUNT                       = 0x108,
    /* first ipv6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_V6_0                           = 0x8109,
    /* second ipv6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_V6_1                           = 0x810A,
    /* third ipv6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_V6_2                           = 0x810B,
    /* forth ipv6 address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_V6_3                           = 0x810C,
    /* count of DNS  address */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V4_COUNT                   = 0x10D,
    /* first ipv4 DNS address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V4_0                       = 0x810E,
    /* second ipv4 DNS address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V4_1                       = 0x810F,
    /* third ipv4 DNS address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V4_2                       = 0x8110,
    /* forth ipv4 DNS address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V4_3                       = 0x8111,
    /* count of ipv6 DNS address */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V6_COUNT                   = 0x112,
    /* first ipv6 DNS address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V6_0                       = 0x8113,
    /* second ipv6 DNS address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V6_1                       = 0x8114,
    /* third ipv6 DNS address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V6_2                       = 0x8115,
    /* forth ipv6 DNS address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_DNS_V6_3                       = 0x8116,
    /*  count of P-CSCF */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_COUNT                 = 0x117,
    /* first address of P-CSCF */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_0                     = 0x8118,
    /* second address of P-CSCF */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_1                     = 0x8119,
    /* third address of P-CSCF */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_2                     = 0x811A,
    /* forth address of P-CSCF */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V4_3                     = 0x811B,
    /* count of ipv6 P-CSCF */
    /* type = uint8_t */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_COUNT                 = 0x11C,
    /* first address of ipv6 P-CSCF */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_0                     = 0x811D,
    /* second address of ipv6 P-CSCF */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_1                     = 0x811E,
    /* third address of ipv6 P-CSCF */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_2                     = 0x811F,
    /* forth address of ipv6 P-CSCF */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_PCSCF_V6_3                     = 0x8120,
    /* ipv4 gateway address */
    /* type = struct, refer to data_v4_addr */
    MIPC_DATA_MOD_CALL_IND_T_GW_V4                          = 0x8121,
    /* ipv6 gateway address */
    /* type = struct, refer to data_v6_addr */
    MIPC_DATA_MOD_CALL_IND_T_GW_V6                          = 0x8122,
    /* mtu of ipv4 */
    /* type = uint32_t */
    MIPC_DATA_MOD_CALL_IND_T_MTU_V4                         = 0x123,
    /* mtu of ipv6 */
    /* type = uint32_t */
    MIPC_DATA_MOD_CALL_IND_T_MTU_V6                         = 0x124,
    /* interface ID */
    /* type = uint32_t */
    MIPC_DATA_MOD_CALL_IND_T_INTERFACE_ID                   = 0x125,
    /* network transmition id */
    /* type = uint32_t */
    MIPC_DATA_MOD_CALL_IND_T_TRANS_ID                       = 0x126,
};

    /* MIPC_MSG.DATA_MOD_PCO_IND */
enum mipc_data_mod_pco_ind_tlv_enum {
    mipc_data_mod_pco_ind_tlv_NONE = 0,
    /* data call ID */
    /* type = uint8_t */
    MIPC_DATA_MOD_PCO_IND_T_ID                              = 0x100,
    /* pco count */
    /* type = uint8_t */
    MIPC_DATA_MOD_PCO_IND_T_PCO_COUNT                       = 0x101,
    /* pco struct list */
    /* type = struct_array, refer to data_pco_ie */
    MIPC_DATA_MOD_PCO_IND_T_PCO_LIST                        = 0x102,
};

    /* MIPC_MSG.DATA_WWAN_ACT_CALL_IND */
enum mipc_data_wwan_act_call_ind_tlv_enum {
    mipc_data_wwan_act_call_ind_tlv_NONE = 0,
    /* interface ID */
    /* type = uint32_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_INTERFACE_ID              = 0x100,
    /* data call ID */
    /* type = uint32_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_CID                       = 0x101,
    /* APN name */
    /* type = string */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_APN                       = 0x102,
    /* APN type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_APN_TYPE                  = 0x103,
    /* PDP type */
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_PDP_TYPE                  = 0x104,
    /* mtu of ipv4 */
    /* type = uint32_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_MTU                    = 0x105,
    /* mtu of ipv6 */
    /* type = uint32_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_MTU                    = 0x106,
    /* ipv4 address count */
    /* type = uint8_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_ADDR_COUNT             = 0x107,
    /* ipv4 address struct list */
    /* type = struct_array, refer to addr */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V4_ADDR_LIST              = 0x8108,
    /* ipv6 address count */
    /* type = uint8_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_ADDR_COUNT             = 0x109,
    /* ipv6 address struct list */
    /* type = struct_array, refer to addr */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_V6_ADDR_LIST              = 0x810A,
    /* ipv4 DNS address count */
    /* type = uint8_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V4_ADDR_COUNT         = 0x10B,
    /* ipv4 DNS address struct list */
    /* type = struct_array, refer to addr */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V4_ADDR_LIST          = 0x810C,
    /* ipv6 DNS address count */
    /* type = uint8_t */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V6_ADDR_COUNT         = 0x10D,
    /* ipv6 DNS address struct list */
    /* type = struct_array, refer to addr */
    MIPC_DATA_WWAN_ACT_CALL_IND_T_DNS_V6_ADDR_LIST          = 0x810E,
};

    /* MIPC_MSG.DATA_WWAN_DEACT_CALL_IND */
enum mipc_data_wwan_deact_call_ind_tlv_enum {
    mipc_data_wwan_deact_call_ind_tlv_NONE = 0,
    /* interface ID */
    /* type = uint32_t */
    MIPC_DATA_WWAN_DEACT_CALL_IND_T_INTERFACE_ID            = 0x100,
    /* data call ID */
    /* type = uint32_t */
    MIPC_DATA_WWAN_DEACT_CALL_IND_T_CID                     = 0x101,
    /* apn name */
    /* type = string */
    MIPC_DATA_WWAN_DEACT_CALL_IND_T_APN                     = 0x102,
    /* apn type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_DATA_WWAN_DEACT_CALL_IND_T_APN_TYPE                = 0x103,
};

    /* MIPC_MSG.DATA_CALL_ACT_REG_IND */
enum mipc_data_call_act_reg_ind_tlv_enum {
    mipc_data_call_act_reg_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.DATA_CALL_DEACT_REG_IND */
enum mipc_data_call_deact_reg_ind_tlv_enum {
    mipc_data_call_deact_reg_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.DATA_CALL_MOD_REG_IND */
enum mipc_data_call_mod_reg_ind_tlv_enum {
    mipc_data_call_mod_reg_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.DATA_MD_ACT_CALL_IND */
enum mipc_data_md_act_call_ind_tlv_enum {
    mipc_data_md_act_call_ind_tlv_NONE = 0,
    /* data call ID */
    /* type = uint32_t */
    MIPC_DATA_MD_ACT_CALL_IND_T_CID                         = 0x100,
    /* apn name */
    /* type = string */
    MIPC_DATA_MD_ACT_CALL_IND_T_APN                         = 0x101,
    /* apn index to indicate same apn profile */
    /* type = uint32_t */
    MIPC_DATA_MD_ACT_CALL_IND_T_APN_IDX                     = 0x102,
};

    /* MIPC_MSG.DATA_MD_DEACT_CALL_IND */
enum mipc_data_md_deact_call_ind_tlv_enum {
    mipc_data_md_deact_call_ind_tlv_NONE = 0,
    /* data call ID */
    /* type = uint32_t */
    MIPC_DATA_MD_DEACT_CALL_IND_T_CID                       = 0x100,
};

    /* MIPC_MSG.DATA_IWLAN_PRIORITY_LIST_IND */
enum mipc_data_iwlan_priority_list_ind_tlv_enum {
    mipc_data_iwlan_priority_list_ind_tlv_NONE = 0,
    /* notification */
    /* type = string */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_CMD                 = 0x100,
    /* pdn type */
    /* type = string */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_TYPE                = 0x101,
    /* setup priority */
    /* type = uint8_t, refer to MIPC_EIWLPL_PRIORITY_TYPE */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_SETUP_PRIORITY      = 0x102,
    /* cellular priority */
    /* type = uint8_t, refer to MIPC_EIWLPL_PRIORITY_TYPE */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_CELLULAR_PRIORITY   = 0x103,
    /* cellular priority */
    /* type = uint8_t, refer to MIPC_EIWLPL_PRIORITY_TYPE */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_WIFI_PRIORITY       = 0x104,
    /* description for long print */
    /* type = string */
    MIPC_DATA_IWLAN_PRIORITY_LIST_IND_T_DESCRIPTION         = 0x105,
};

    /* MIPC_MSG.DATA_KEEPALIVE_STATUS_IND */
enum mipc_data_keepalive_status_ind_tlv_enum {
    mipc_data_keepalive_status_ind_tlv_NONE = 0,
    /* connection id */
    /* type = uint32_t */
    MIPC_DATA_KEEPALIVE_STATUS_IND_T_SESSION_HANDLE         = 0x100,
    /* keep alive status code */
    /* type = uint8_t, refer to DATA_KEEPALIVE_STATUS_CODE */
    MIPC_DATA_KEEPALIVE_STATUS_IND_T_STATUS_CODE            = 0x101,
};

    /* MIPC_MSG.DATA_RETRY_TIMER_IND */
enum mipc_data_retry_timer_ind_tlv_enum {
    mipc_data_retry_timer_ind_tlv_NONE = 0,
    /* apn name */
    /* type = string */
    MIPC_DATA_RETRY_TIMER_IND_T_APN_NAME                    = 0x100,
};

    /* MIPC_MSG.INTERNAL_TEST_IND */
enum mipc_internal_test_ind_tlv_enum {
    mipc_internal_test_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_EIF_IND */
enum mipc_internal_eif_ind_tlv_enum {
    mipc_internal_eif_ind_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_EIF_IND_T_TRANSID                         = 0x100,
    /* type = uint8_t, refer to INTERNAL_EIF_IND_CMD */
    MIPC_INTERNAL_EIF_IND_T_CMD                             = 0x101,
    /* type = uint32_t */
    MIPC_INTERNAL_EIF_IND_T_CAUSE                           = 0x102,
    /* type = uint32_t */
    MIPC_INTERNAL_EIF_IND_T_MTU                             = 0x103,
    /* type = uint8_t */
    MIPC_INTERNAL_EIF_IND_T_NET_V4_ADDR_COUNT               = 0x104,
    /* type = struct_array, refer to v4_full_addr */
    MIPC_INTERNAL_EIF_IND_T_NET_V4_ADDR_LIST                = 0x8105,
    /* type = uint8_t */
    MIPC_INTERNAL_EIF_IND_T_NET_V6_ADDR_COUNT               = 0x106,
    /* type = struct_array, refer to v6_full_addr */
    MIPC_INTERNAL_EIF_IND_T_NET_V6_ADDR_LIST                = 0x8107,
};

    /* MIPC_MSG.INTERNAL_HO_IND */
enum mipc_internal_ho_ind_tlv_enum {
    mipc_internal_ho_ind_tlv_NONE = 0,
    /* data call id */
    /* type = uint8_t */
    MIPC_INTERNAL_HO_IND_T_ID                               = 0x100,
    /* APN type */
    /* type = uint32_t, refer to APN_TYPE */
    MIPC_INTERNAL_HO_IND_T_APN_TYPE                         = 0x101,
    /* HO current progress */
    /* type = uint8_t, refer to INTERNAL_HO_PROGRESS */
    MIPC_INTERNAL_HO_IND_T_PROGRESS                         = 0x102,
    /* source RAN */
    /* type = uint8_t, refer to RAN */
    MIPC_INTERNAL_HO_IND_T_SRC_RAN                          = 0x103,
    /* target RAN */
    /* type = uint8_t, refer to RAN */
    MIPC_INTERNAL_HO_IND_T_DST_RAN                          = 0x104,
};

    /* MIPC_MSG.NW_REGISTER_IND */
enum mipc_nw_register_ind_tlv_enum {
    mipc_nw_register_ind_tlv_NONE = 0,
    /* type = struct, refer to nw_reg_state */
    MIPC_NW_REGISTER_IND_T_STATE                            = 0x100,
    /* network error enum, refer to 3GPP 24.008 */
    /* type = uint16_t */
    MIPC_NW_REGISTER_IND_T_NW_ERR                           = 0x101,
    /* type = uint8_t, refer to NW_REGISTER_MODE */
    MIPC_NW_REGISTER_IND_T_MODE                             = 0x102,
    /* This represents the data speed for current radio technologies can support */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_REGISTER_IND_T_DATA_SPEED                       = 0x103,
    /* provider short name */
    /* type = string */
    MIPC_NW_REGISTER_IND_T_NW_NAME                          = 0x104,
    /* Raoming text info. */
    /* type = string */
    MIPC_NW_REGISTER_IND_T_ROAMING_TEXT                     = 0x105,
    /* Not valid for indication. */
    /* type = uint16_t */
    MIPC_NW_REGISTER_IND_T_FAIL_CAUSE                       = 0x106,
    /* provider long name */
    /* type = string */
    MIPC_NW_REGISTER_IND_T_NW_LONG_NAME                     = 0x107,
};

    /* MIPC_MSG.NW_SIGNAL_IND */
enum mipc_nw_signal_ind_tlv_enum {
    mipc_nw_signal_ind_tlv_NONE = 0,
    /* Current interval setting for signal reporting, the default value is 5 seconds. */
    /* type = uint32_t */
    MIPC_NW_SIGNAL_IND_T_SIGNAL_STRENGTH_INTERVAL           = 0x104,
    /* Current rssi threshold setting for signal reporting, the default value is 5. */
    /* type = uint32_t */
    MIPC_NW_SIGNAL_IND_T_RSSI_THRESHOLD                     = 0x105,
    /* Current err rate threshold setting for signal reporting, the default value is 0. */
    /* type = uint32_t */
    MIPC_NW_SIGNAL_IND_T_ERR_RATE_THRESHOLD                 = 0x106,
    /* Current rsrp threshold setting for signal reporting, the default value is 2 db. */
    /* type = uint32_t */
    MIPC_NW_SIGNAL_IND_T_RSRP_THRESHOLD                     = 0x107,
    /* Current snr threshold setting for signal reporting, the default value is 0 db. */
    /* type = uint32_t */
    MIPC_NW_SIGNAL_IND_T_SNR_THRESHOLD                      = 0x108,
    /* Signal type, GSM/UMTS/LTE/NR/NSA. Note: When the type is NSA, maybe contains LTE and(or) NR signal info. */
    /* type = uint8_t, refer to NW_SIGNAL_TYPE */
    MIPC_NW_SIGNAL_IND_T_SIGNAL_TYPE                        = 0x109,
    /* GSM signal strength. */
    /* type = struct, refer to nw_gsm_signal_strength */
    MIPC_NW_SIGNAL_IND_T_GSM_SIGNAL                         = 0x10A,
    /* UMTS signal strength. */
    /* type = struct, refer to nw_umts_signal_strength */
    MIPC_NW_SIGNAL_IND_T_UMTS_SIGNAL                        = 0x10B,
    /* LTE signal strength. */
    /* type = struct, refer to nw_lte_signal_strength */
    MIPC_NW_SIGNAL_IND_T_LTE_SIGNAL                         = 0x10C,
    /* NR signal strength. */
    /* type = struct, refer to nw_nr_signal_strength */
    MIPC_NW_SIGNAL_IND_T_NR_SIGNAL                          = 0x10D,
    /* The raw signal data, parse from +ECSQ. */
    /* type = struct_array, refer to nw_raw_signal_info */
    MIPC_NW_SIGNAL_IND_T_RAW_SIGNAL_INFO_LIST               = 0x10E,
    /* The raw signal info count: when in NSA, the count is 2, and others is 1 */
    /* type = uint8_t */
    MIPC_NW_SIGNAL_IND_T_RAW_SIGNAL_INFO_COUNT              = 0x10F,
};

    /* MIPC_MSG.NW_PS_IND */
enum mipc_nw_ps_ind_tlv_enum {
    mipc_nw_ps_ind_tlv_NONE = 0,
    /* PS attach state. */
    /* type = uint8_t */
    MIPC_NW_PS_IND_T_TACH                                   = 0x100,
    /* This represents the data speed for current radio technologies can support */
    /* type = uint32_t, refer to NW_DATA_SPEED */
    MIPC_NW_PS_IND_T_DATA_SPEED                             = 0x101,
    /* Just valid for 5G. */
    /* type = uint8_t */
    MIPC_NW_PS_IND_T_NW_FREQUENCY                           = 0x102,
    /* The ps data registration state. */
    /* type = struct, refer to nw_ps_reg_info */
    MIPC_NW_PS_IND_T_REG_INFO                               = 0x103,
    /* The cell type. */
    /* type = uint8_t, refer to NW_CELL_TYPE */
    MIPC_NW_PS_IND_T_CELL_TYPE                              = 0x104,
};

    /* MIPC_MSG.NW_RADIO_IND */
enum mipc_nw_radio_ind_tlv_enum {
    mipc_nw_radio_ind_tlv_NONE = 0,
    /* sw radio status. */
    /* type = uint8_t */
    MIPC_NW_RADIO_IND_T_SW_STATE                            = 0x100,
    /* hw radio status. */
    /* type = uint8_t */
    MIPC_NW_RADIO_IND_T_HW_STATE                            = 0x101,
};

    /* MIPC_MSG.NW_IA_IND */
enum mipc_nw_ia_ind_tlv_enum {
    mipc_nw_ia_ind_tlv_NONE = 0,
    /* APN name. */
    /* type = string */
    MIPC_NW_IA_IND_T_APN                                    = 0x100,
    /* RAT info. */
    /* type = uint8_t */
    MIPC_NW_IA_IND_T_RAT                                    = 0x101,
    /* type = uint8_t, refer to APN_PDP_TYPE */
    MIPC_NW_IA_IND_T_PDP_TYPE                               = 0x102,
    /* type = uint8_t, refer to APN_AUTH_TYPE */
    MIPC_NW_IA_IND_T_AUTH_TYPE                              = 0x103,
    /* User id. */
    /* type = string */
    MIPC_NW_IA_IND_T_USERID                                 = 0x8104,
    /* Password for user id. */
    /* type = string */
    MIPC_NW_IA_IND_T_PASSWORD                               = 0x8105,
};

    /* MIPC_MSG.NW_NITZ_IND */
enum mipc_nw_nitz_ind_tlv_enum {
    mipc_nw_nitz_ind_tlv_NONE = 0,
    /* type = struct, refer to nw_nitz_info */
    MIPC_NW_NITZ_IND_T_INFO                                 = 0x100,
};

    /* MIPC_MSG.NW_LOCATION_INFO_IND */
enum mipc_nw_location_info_ind_tlv_enum {
    mipc_nw_location_info_ind_tlv_NONE = 0,
    /* type = struct, refer to nw_location_info */
    MIPC_NW_LOCATION_INFO_IND_T_INFO                        = 0x8100,
};

    /* MIPC_MSG.NW_CS_IND */
enum mipc_nw_cs_ind_tlv_enum {
    mipc_nw_cs_ind_tlv_NONE = 0,
    /* type = struct, refer to nw_reg_change_info */
    MIPC_NW_CS_IND_T_INFO                                   = 0x8100,
};

    /* MIPC_MSG.NW_CSCON_IND */
enum mipc_nw_cscon_ind_tlv_enum {
    mipc_nw_cscon_ind_tlv_NONE = 0,
    /* type = struct, refer to nw_cscon_status */
    MIPC_NW_CSCON_IND_T_STATUS                              = 0x100,
};

    /* MIPC_MSG.NW_PREFERRED_PROVIDER_IND */
enum mipc_nw_preferred_provider_ind_tlv_enum {
    mipc_nw_preferred_provider_ind_tlv_NONE = 0,
    /* The provider list length. */
    /* type = uint8_t */
    MIPC_NW_PREFERRED_PROVIDER_IND_T_PROVIDER_COUNT         = 0x100,
    /*  */
    /* type = struct_array, refer to nw_provider */
    MIPC_NW_PREFERRED_PROVIDER_IND_T_PROVIDER_LIST          = 0x101,
};

    /* MIPC_MSG.NW_CAINFO_IND */
enum mipc_nw_cainfo_ind_tlv_enum {
    mipc_nw_cainfo_ind_tlv_NONE = 0,
    /* num of dl lte serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_CAINFO_IND_T_LTE_DL_SERVING_CELL_COUNT          = 0x100,
    /* num of ul lte serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_CAINFO_IND_T_LTE_UL_SERVING_CELL_COUNT          = 0x101,
    /* num of dl nr serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_CAINFO_IND_T_NR_DL_SERVING_CELL_COUNT           = 0x102,
    /* num of ul nr serving cell, the max of it is 32 */
    /* type = uint8_t */
    MIPC_NW_CAINFO_IND_T_NR_UL_SERVING_CELL_COUNT           = 0x103,
    /* DL LTE serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_CAINFO_IND_T_LTE_DL_SERVING_CELL_LIST           = 0x104,
    /* UL LTE serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_CAINFO_IND_T_LTE_UL_SERVING_CELL_LIST           = 0x105,
    /* DL NR serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_CAINFO_IND_T_NR_DL_SERVING_CELL_LIST            = 0x106,
    /* UL NR serving cell list */
    /* type = struct_array, refer to nw_lte_nr_ca_info */
    MIPC_NW_CAINFO_IND_T_NR_UL_SERVING_CELL_LIST            = 0x107,
};

    /* MIPC_MSG.NW_EONS_IND */
enum mipc_nw_eons_ind_tlv_enum {
    mipc_nw_eons_ind_tlv_NONE = 0,
    /* pnn. */
    /* type = uint32_t */
    MIPC_NW_EONS_IND_T_PNN                                  = 0x100,
    /* opl */
    /* type = uint32_t */
    MIPC_NW_EONS_IND_T_OPL                                  = 0x101,
};

    /* MIPC_MSG.NW_CIEV_IND */
enum mipc_nw_ciev_ind_tlv_enum {
    mipc_nw_ciev_ind_tlv_NONE = 0,
    /* ciev urc type. */
    /* type = uint32_t */
    MIPC_NW_CIEV_IND_T_CIEV_TYPE                            = 0x100,
    /* the ecbm status value of ciev 102 */
    /* type = uint32_t */
    MIPC_NW_CIEV_IND_T_ECBM_STATUS                          = 0x101,
    /* plmn of operator NW of ciev 10 */
    /* type = string */
    MIPC_NW_CIEV_IND_T_PLMN_ID                              = 0x102,
    /* provider name long of ciev 10 */
    /* type = string */
    MIPC_NW_CIEV_IND_T_NW_NAME_LONG                         = 0x103,
    /* provider name short of ciev 10 */
    /* type = string */
    MIPC_NW_CIEV_IND_T_NW_NAME_SHORT                        = 0x104,
};

    /* MIPC_MSG.NW_EGMSS_IND */
enum mipc_nw_egmss_ind_tlv_enum {
    mipc_nw_egmss_ind_tlv_NONE = 0,
    /* rat. */
    /* type = uint32_t */
    MIPC_NW_EGMSS_IND_T_RAT                                 = 0x100,
    /* mcc */
    /* type = uint32_t */
    MIPC_NW_EGMSS_IND_T_MCC                                 = 0x101,
    /* attach status: 1 attached to the network on the rat; 0 have selected the rat and is going to perform PLMN search. */
    /* type = uint32_t */
    MIPC_NW_EGMSS_IND_T_STATUS                              = 0x102,
    /* current reported rat */
    /* type = uint32_t */
    MIPC_NW_EGMSS_IND_T_CUR_REPORTED_RAT                    = 0x103,
    /* is home country or not, 0: not home contury, 1: home country */
    /* type = uint32_t */
    MIPC_NW_EGMSS_IND_T_IS_HOME_COUNTRY                     = 0x104,
};

    /* MIPC_MSG.NW_PSBEARER_IND */
enum mipc_nw_psbearer_ind_tlv_enum {
    mipc_nw_psbearer_ind_tlv_NONE = 0,
    /* cell data speed support  */
    /* type = uint32_t */
    MIPC_NW_PSBEARER_IND_T_CELL_DATA_SPEED_SUPPORT          = 0x100,
    /* max data bearer capability */
    /* type = uint32_t */
    MIPC_NW_PSBEARER_IND_T_MAX_DATA_BEARER_CAPABILITY       = 0x101,
    /* The number of secondary cells used for down link. */
    /* type = uint32_t */
    MIPC_NW_PSBEARER_IND_T_SEC_CELL_NUM_IN_DL               = 0x102,
    /* The number of secondary cells used for upper link. */
    /* type = uint32_t */
    MIPC_NW_PSBEARER_IND_T_SEC_CELL_NUM_IN_UL               = 0x103,
};

    /* MIPC_MSG.NW_ECELL_IND */
enum mipc_nw_ecell_ind_tlv_enum {
    mipc_nw_ecell_ind_tlv_NONE = 0,
    /* The gsm cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_GSM_CELL_COUNT                      = 0x100,
    /*  */
    /* type = struct_array, refer to nw_gsm_cell */
    MIPC_NW_ECELL_IND_T_GSM_CELL_LIST                       = 0x101,
    /* The umts cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_UMTS_CELL_COUNT                     = 0x102,
    /*  */
    /* type = struct_array, refer to nw_umts_cell */
    MIPC_NW_ECELL_IND_T_UMTS_CELL_LIST                      = 0x103,
    /* The tdscdma cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_TDSCDMA_CELL_COUNT                  = 0x104,
    /*  */
    /* type = struct_array, refer to nw_tdscdma_cell */
    MIPC_NW_ECELL_IND_T_TDSCDMA_CELL_LIST                   = 0x105,
    /* The lte cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_LTE_CELL_COUNT                      = 0x106,
    /*  */
    /* type = struct_array, refer to nw_lte_cell */
    MIPC_NW_ECELL_IND_T_LTE_CELL_LIST                       = 0x107,
    /* The cdma cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_CDMA_CELL_COUNT                     = 0x108,
    /*  */
    /* type = struct_array, refer to nw_cdma_cell */
    MIPC_NW_ECELL_IND_T_CDMA_CELL_LIST                      = 0x109,
    /* The nr cell list length. */
    /* type = uint32_t */
    MIPC_NW_ECELL_IND_T_NR_CELL_COUNT                       = 0x10A,
    /*  */
    /* type = struct_array, refer to nw_nr_cell */
    MIPC_NW_ECELL_IND_T_NR_CELL_LIST                        = 0x10B,
    /* The fail cause for current operation. */
    /* type = uint16_t */
    MIPC_NW_ECELL_IND_T_FAIL_CAUSE                          = 0x10C,
};

    /* MIPC_MSG.NW_NRUW_INFO_IND */
enum mipc_nw_nruw_info_ind_tlv_enum {
    mipc_nw_nruw_info_ind_tlv_NONE = 0,
    /* 0: don't display 5G UW, 1: display 5G UW. */
    /* type = uint8_t */
    MIPC_NW_NRUW_INFO_IND_T_DISPLAY_5GUW                    = 0x100,
    /* 0: not on n77 band, 1: on n77 band */
    /* type = uint8_t */
    MIPC_NW_NRUW_INFO_IND_T_ON_N77_BAND                     = 0x101,
    /* 0: not on fr2 band, 1: on fr2 band */
    /* type = uint8_t */
    MIPC_NW_NRUW_INFO_IND_T_ON_FR2_BAND                     = 0x102,
    /* 0: not allowed, 1: allowed */
    /* type = uint8_t */
    MIPC_NW_NRUW_INFO_IND_T_5GUW_ALLOWED                    = 0x103,
};

    /* MIPC_MSG.SIM_STATE_IND */
enum mipc_sim_state_ind_tlv_enum {
    mipc_sim_state_ind_tlv_NONE = 0,
    /* mapping  to mbim sim state */
    /* type = uint8_t, refer to SIM_STATE */
    MIPC_SIM_STATE_IND_T_STATE                              = 0x100,
    /* sim slot id */
    /* type = uint32_t */
    MIPC_SIM_STATE_IND_T_SIM_ID                             = 0x101,
    /* sim protocol id */
    /* type = uint32_t */
    MIPC_SIM_STATE_IND_T_PS_ID                              = 0x102,
    /* is present or not */
    /* type = uint32_t */
    MIPC_SIM_STATE_IND_T_IS_PRESENT                         = 0x103,
    /* sub state of sim card */
    /* type = uint8_t, refer to SIM_SUB_STATE */
    MIPC_SIM_STATE_IND_T_SUB_STATE                          = 0x104,
};

    /* MIPC_MSG.SIM_STATUS_IND */
enum mipc_sim_status_ind_tlv_enum {
    mipc_sim_status_ind_tlv_NONE = 0,
    /* sim status */
    /* type = uint8_t, refer to SIM_STATUS */
    MIPC_SIM_STATUS_IND_T_STATUS                            = 0x100,
    /* sim slot id */
    /* type = uint32_t */
    MIPC_SIM_STATUS_IND_T_SIM_ID                            = 0x101,
    /* sim protocol id */
    /* type = uint32_t */
    MIPC_SIM_STATUS_IND_T_PS_ID                             = 0x102,
};

    /* MIPC_MSG.SIM_EUICC_SLOTS_STATUS_IND */
enum mipc_sim_euicc_slots_status_ind_tlv_enum {
    mipc_sim_euicc_slots_status_ind_tlv_NONE = 0,
    /* physical slots number */
    /* type = uint8_t */
    MIPC_SIM_EUICC_SLOTS_STATUS_IND_T_SLOTS_INFO_COUNT      = 0x100,
    /* slots info */
    /* type = struct_array, refer to sim_slots_info */
    MIPC_SIM_EUICC_SLOTS_STATUS_IND_T_SLOTS_INFO_LIST       = 0x8101,
};

    /* MIPC_MSG.SIM_ICCID_IND */
enum mipc_sim_iccid_ind_tlv_enum {
    mipc_sim_iccid_ind_tlv_NONE = 0,
    /* iccid string */
    /* type = string */
    MIPC_SIM_ICCID_IND_T_ICCID                              = 0x8100,
};

    /* MIPC_MSG.SIM_STATUS_CHANGE_WITH_CAUSE_IND */
enum mipc_sim_status_change_with_cause_ind_tlv_enum {
    mipc_sim_status_change_with_cause_ind_tlv_NONE = 0,
    /* is sim inserted */
    /* type = uint8_t */
    MIPC_SIM_STATUS_CHANGE_WITH_CAUSE_IND_T_IS_SIM_INSERTED = 0x100,
    /* sim change cause */
    /* type = uint8_t, refer to SIM_CAUSE */
    MIPC_SIM_STATUS_CHANGE_WITH_CAUSE_IND_T_CAUSE           = 0x101,
};

    /* MIPC_MSG.SIM_PHYSICAL_SLOTS_MAPPING_DONE_IND */
enum mipc_sim_physical_slots_mapping_done_ind_tlv_enum {
    mipc_sim_physical_slots_mapping_done_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SIM_CSIM_IMSI_CHANGE_IND */
enum mipc_sim_csim_imsi_change_ind_tlv_enum {
    mipc_sim_csim_imsi_change_ind_tlv_NONE = 0,
    /* 0 means csim ismi_m not programmed, 1 means csim imsi_m programmed */
    /* type = uint8_t */
    MIPC_SIM_CSIM_IMSI_CHANGE_IND_T_STATUS                  = 0x100,
};

    /* MIPC_MSG.SMS_CFG_IND */
enum mipc_sms_cfg_ind_tlv_enum {
    mipc_sms_cfg_ind_tlv_NONE = 0,
    /* indicate the format that configured for this protocal */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_CFG_IND_T_FORMAT                               = 0x100,
    /* indicate the SCA(sms center address) that configured for this protocal */
    /* type = string */
    MIPC_SMS_CFG_IND_T_SCA                                  = 0x8101,
    /* indicate if the sms module is initialized */
    /* type = uint8_t, refer to SMS_STATE */
    MIPC_SMS_CFG_IND_T_SMS_STATE                            = 0x102,
    /* indicate the max messages that can be saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_CFG_IND_T_MAX_MESSAGE                          = 0x103,
    /* indicate if user want to ack for the new sms to TE, save in SIM would not need ack from user */
    /* type = uint8_t, refer to SMS_ACK */
    MIPC_SMS_CFG_IND_T_PREFER_ACK                           = 0x104,
    /* indicate which storage user want to save mt sms */
    /* type = uint8_t, refer to SMS_STORAGE */
    MIPC_SMS_CFG_IND_T_PREFER_STORAGE                       = 0x105,
    /* indicate the used messages number saved in this protocal */
    /* type = uint16_t */
    MIPC_SMS_CFG_IND_T_USED_MESSAGE                         = 0x106,
};

    /* MIPC_MSG.SMS_NEW_SMS_IND */
enum mipc_sms_new_sms_ind_tlv_enum {
    mipc_sms_new_sms_ind_tlv_NONE = 0,
    /* the format of this class0 sms */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_NEW_SMS_IND_T_FORMAT                           = 0x100,
    /* should be 1 in this case */
    /* type = uint16_t */
    MIPC_SMS_NEW_SMS_IND_T_PDU_COUNT                        = 0x103,
    /* type = struct_array, refer to sms_pdu */
    MIPC_SMS_NEW_SMS_IND_T_PDU_LIST                         = 0x8104,
    /* [PDU_3GPP2]valid when 3gpp2 format */
    /* type = byte_array */
    MIPC_SMS_NEW_SMS_IND_T_PDU_C2K                          = 0x8105,
};

    /* MIPC_MSG.SMS_STORE_STATUS_IND */
enum mipc_sms_store_status_ind_tlv_enum {
    mipc_sms_store_status_ind_tlv_NONE = 0,
    /* indicate if <the storage full> or <new sms in DEVICE received> */
    /* type = bitmap, refer to SMS_STORE_FLAG */
    MIPC_SMS_STORE_STATUS_IND_T_FLAG                        = 0x100,
    /* if the falg indicated there is new message, this shows the message_index */
    /* type = uint16_t */
    MIPC_SMS_STORE_STATUS_IND_T_MESSAGE_INDEX               = 0x101,
};

    /* MIPC_MSG.SMS_NEW_STATUS_REPORT_IND */
enum mipc_sms_new_status_report_ind_tlv_enum {
    mipc_sms_new_status_report_ind_tlv_NONE = 0,
    /* pdu detail info, lenght is controled by PDU_LEN */
    /* type = byte_array */
    MIPC_SMS_NEW_STATUS_REPORT_IND_T_PDU                    = 0x8100,
};

    /* MIPC_MSG.SMS_NEW_CBM_IND */
enum mipc_sms_new_cbm_ind_tlv_enum {
    mipc_sms_new_cbm_ind_tlv_NONE = 0,
    /* cbm type indication,show the type of cbm message in this indication */
    /* type = bitmap, refer to SMS_CBM_TYPE */
    MIPC_SMS_NEW_CBM_IND_T_CBM_TYPE                         = 0x100,
    /* refer TS23.041 9.3.24 for more information, valid only in CBM_TYPE=ETWS_PRIMARY */
    /* type = uint16_t */
    MIPC_SMS_NEW_CBM_IND_T_WARNING_TYPE                     = 0x101,
    /* refer TS23.041 9.4.1.2.2 for more information */
    /* type = uint16_t */
    MIPC_SMS_NEW_CBM_IND_T_MESSAGE_ID                       = 0x102,
    /* refer TS23.041 9.4.1.2.1 for more information */
    /* type = uint16_t */
    MIPC_SMS_NEW_CBM_IND_T_SERIAL_NUMBER                    = 0x103,
    /* refer TS23.041 9.4.2.2.4 for more information, invalid when CBM_TYPE=ETWS_PRIMARY */
    /* type = uint8_t */
    MIPC_SMS_NEW_CBM_IND_T_DCS                              = 0x104,
    /* refer TS23.041 9.4.2.2.5 for more information, invalid when CBM_TYPE=ETWS_PRIMARY */
    /* type = byte_array */
    MIPC_SMS_NEW_CBM_IND_T_DATA                             = 0x8105,
    /* refer TS23.041 9.4.1.3.6 for more information, only valid in CBM_TYPE=ETWS_PRIMARY */
    /* type = byte_array */
    MIPC_SMS_NEW_CBM_IND_T_SECUR_INFO                       = 0x106,
};

    /* MIPC_MSG.SMS_SCBM_IND */
enum mipc_sms_scbm_ind_tlv_enum {
    mipc_sms_scbm_ind_tlv_NONE = 0,
    /* indicate the SCBM status in DEVICE */
    /* type = uint8_t, refer to SMS_SCBM_STATUS */
    MIPC_SMS_SCBM_IND_T_STATUS_UPDATE                       = 0x100,
};

    /* MIPC_MSG.SS_USSD_IND */
enum mipc_ss_ussd_ind_tlv_enum {
    mipc_ss_ussd_ind_tlv_NONE = 0,
    /* ussd response */
    /* type = uint8_t, refer to SS_USSD */
    MIPC_SS_USSD_IND_T_USSD_RESPONSE                        = 0x100,
    /* ussd session state */
    /* type = uint8_t, refer to SS_SESSION */
    MIPC_SS_USSD_IND_T_USSD_SESSION_STATE                   = 0x101,
    /* data coding scheme */
    /* type = uint32_t */
    MIPC_SS_USSD_IND_T_DCS                                  = 0x102,
    /* length of payload */
    /* type = uint8_t */
    MIPC_SS_USSD_IND_T_PAYLOAD_LEN                          = 0x103,
    /* payload pointer */
    /* type = byte_array */
    MIPC_SS_USSD_IND_T_PAYLOAD                              = 0x104,
};

    /* MIPC_MSG.SS_ECMCCSS_IND */
enum mipc_ss_ecmccss_ind_tlv_enum {
    mipc_ss_ecmccss_ind_tlv_NONE = 0,
    /* the id of current call */
    /* type = uint32_t */
    MIPC_SS_ECMCCSS_IND_T_CALL_ID                           = 0x100,
    /* urc type */
    /* type = uint32_t */
    MIPC_SS_ECMCCSS_IND_T_SERVICE                           = 0x101,
    /* raw string */
    /* type = string */
    MIPC_SS_ECMCCSS_IND_T_RAW_STRING                        = 0x102,
};

    /* MIPC_MSG.STK_PAC_IND */
enum mipc_stk_pac_ind_tlv_enum {
    mipc_stk_pac_ind_tlv_NONE = 0,
    /* proactive command type from UICC */
    /* type = uint8_t, refer to STK_PAC_TYPE */
    MIPC_STK_PAC_IND_T_PAC_TYPE                             = 0x100,
    /* length of proactive command */
    /* type = uint16_t */
    MIPC_STK_PAC_IND_T_PAC_LEN                              = 0x101,
    /* pointer to proactive command payload */
    /* type = byte_array */
    MIPC_STK_PAC_IND_T_PAC                                  = 0x8102,
};

    /* MIPC_MSG.STK_SIM_REFRESH_IND */
enum mipc_stk_sim_refresh_ind_tlv_enum {
    mipc_stk_sim_refresh_ind_tlv_NONE = 0,
    /* the result of sim refresh */
    /* type = uint8_t, refer to SIM_REFRESH_RESULT_TYPE */
    MIPC_STK_SIM_REFRESH_IND_T_SIM_REFRESH_RESULT           = 0x100,
    /* ef id of the updated file */
    /* type = uint32_t */
    MIPC_STK_SIM_REFRESH_IND_T_EF_ID                        = 0x101,
    /* aid of application caused refresh */
    /* type = string */
    MIPC_STK_SIM_REFRESH_IND_T_AID                          = 0x102,
};

    /* MIPC_MSG.CALL_STATUS_IND */
enum mipc_call_status_ind_tlv_enum {
    mipc_call_status_ind_tlv_NONE = 0,
    /* call ID */
    /* type = uint32_t */
    MIPC_CALL_STATUS_IND_T_CALLID                           = 0x100,
    /* type = uint32_t, refer to CALL_DIRECTION */
    MIPC_CALL_STATUS_IND_T_DIRECTION                        = 0x101,
    /* type = uint32_t, refer to CALL_MODE */
    MIPC_CALL_STATUS_IND_T_MODE                             = 0x102,
    /* type of address (refer TS 24.008 [8] subclause 10.5.4.7) */
    /* type = uint32_t */
    MIPC_CALL_STATUS_IND_T_TON                              = 0x103,
    /* type = string */
    MIPC_CALL_STATUS_IND_T_NUMBER                           = 0x8104,
    /* type = bitmap, refer to CALL_TYPE */
    MIPC_CALL_STATUS_IND_T_TYPE                             = 0x105,
    /* type = struct, refer to call_detail_info */
    MIPC_CALL_STATUS_IND_T_DETAIL_INFO                      = 0x8106,
    /* type = struct, refer to call_video_cap */
    MIPC_CALL_STATUS_IND_T_VIDEO_CAP                        = 0x107,
    /* the message type */
    /* type = uint32_t, refer to CALL_MSG_TYPE */
    MIPC_CALL_STATUS_IND_T_MSG_TYPE                         = 0x109,
    /* This information is only provided for MSG_TYPE=DISCONNECT, which is sent when modem receive RELEASE ir RELEAS COMPLETE CC nessage from the network. It is defined in SPEC 24.008 Annex H. */
    /* type = uint32_t */
    MIPC_CALL_STATUS_IND_T_DISC_CAUSE                       = 0x10A,
};

    /* MIPC_MSG.CALL_EVENT_IND */
enum mipc_call_event_ind_tlv_enum {
    mipc_call_event_ind_tlv_NONE = 0,
    /* call event */
    /* type = uint32_t, refer to CALL_EVENT */
    MIPC_CALL_EVENT_IND_T_EVENT                             = 0x100,
    /* the reason of call reject (when EVENT=MT_REJECT) */
    /* type = uint32_t, refer to CALL_REJECT_REASON */
    MIPC_CALL_EVENT_IND_T_REJECT_REASON                     = 0x10B,
    /* the handover information (when EVENT=SRVCC) */
    /* type = uint32_t */
    MIPC_CALL_EVENT_IND_T_SRVCCH                            = 0x115,
    /* the handover information (when EVENT=MT_REDIRECT) */
    /* type = string */
    MIPC_CALL_EVENT_IND_T_REDIRECT_NUMBER                   = 0x811F,
    /* the current voice codec (when EVENT=AUDIO_CODEC_CHANGE) */
    /* type = uint16_t, refer to CALL_AUDIO_CODEC */
    MIPC_CALL_EVENT_IND_T_AUDIO_CODEC                       = 0x129,
    /* the current voice codec (when EVENT=SPEECH_ATTACH) */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_EVENT_IND_T_SPEECH_ON                         = 0x133,
    /* the current voice codec (when EVENT=SPEECH_ATTACH) */
    /* type = uint32_t, refer to SPEECH_RAT */
    MIPC_CALL_EVENT_IND_T_SPEECH_RAT                        = 0x134,
    /* the current voice codec (when EVENT=SPEECH_ATTACH) */
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_EVENT_IND_T_SPEECH_IRHO_ON                    = 0x135,
    /* the call num (when EVENT=ECONFSRVCC) */
    /* type = uint32_t */
    MIPC_CALL_EVENT_IND_T_COUNT                             = 0x15B,
    /* the call id (when EVENT=ECONFSRVCC) */
    /* type = uint32_t */
    MIPC_CALL_EVENT_IND_T_CALL_ID                           = 0x15C,
};

    /* MIPC_MSG.CALL_MODE_IND */
enum mipc_call_mode_ind_tlv_enum {
    mipc_call_mode_ind_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_MODE_IND_T_CALLID                             = 0x100,
    /* type = uint32_t, refer to CALL_MODE */
    MIPC_CALL_MODE_IND_T_MODE                               = 0x101,
    /* type = uint32_t, refer to SDP_DIRECTION */
    MIPC_CALL_MODE_IND_T_SDP_CAMERA_DIRECTION               = 0x102,
    /* type = uint32_t, refer to SDP_DIRECTION */
    MIPC_CALL_MODE_IND_T_SDP_AUDIO_DIRECTION                = 0x103,
    /* type = uint32_t, refer to SDP_AUDIO_CODEC */
    MIPC_CALL_MODE_IND_T_SDP_AUDIO_CODEC                    = 0x104,
};

    /* MIPC_MSG.CALL_SIP_IND */
enum mipc_call_sip_ind_tlv_enum {
    mipc_call_sip_ind_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_SIP_IND_T_CALLID                              = 0x100,
    /* type = uint32_t, refer to SIP_DIRECTION */
    MIPC_CALL_SIP_IND_T_DIRECTION                           = 0x101,
    /* type = uint32_t, refer to SIP_MSG_TYPE */
    MIPC_CALL_SIP_IND_T_MSG_TYPE                            = 0x102,
    /* only used when MSG_TYPE=REQUEST */
    /* type = uint32_t, refer to SIP_METHOD */
    MIPC_CALL_SIP_IND_T_METHOD                              = 0x103,
    /* only used when MSG_TYPE=RESPONSE */
    /* type = uint32_t */
    MIPC_CALL_SIP_IND_T_RESPONSE_CODE                       = 0x104,
    /* reason header field in SIP message */
    /* type = string */
    MIPC_CALL_SIP_IND_T_REASON_TEXT                         = 0x105,
};

    /* MIPC_MSG.CALL_CONFERENCE_IND */
enum mipc_call_conference_ind_tlv_enum {
    mipc_call_conference_ind_tlv_NONE = 0,
    /* the conference cal id */
    /* type = uint32_t */
    MIPC_CALL_CONFERENCE_IND_T_CONF_CALLID                  = 0x100,
};

    /* MIPC_MSG.CALL_IMS_EVENT_PACKAGE_IND */
enum mipc_call_ims_event_package_ind_tlv_enum {
    mipc_call_ims_event_package_ind_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_CALLID                = 0x100,
    /* type = uint32_t, refer to IMS_EVENT_PACKAGE_TYPE */
    MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_TYPE                  = 0x101,
    /* type = string */
    MIPC_CALL_IMS_EVENT_PACKAGE_IND_T_DATA                  = 0x8102,
};

    /* MIPC_MSG.CALL_ECC_LIST_CHANGE_IND */
enum mipc_call_ecc_list_change_ind_tlv_enum {
    mipc_call_ecc_list_change_ind_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.CALL_SS_IND */
enum mipc_call_ss_ind_tlv_enum {
    mipc_call_ss_ind_tlv_NONE = 0,
    /* it is manufacturer specific, which of these codes are supported */
    /* type = uint32_t, refer to CALL_SS_CODE1 */
    MIPC_CALL_SS_IND_T_CODE1                                = 0x100,
    /* it is manufacturer specific, which of these codes are supported */
    /* type = uint32_t, refer to CALL_SS_CODE2 */
    MIPC_CALL_SS_IND_T_CODE2                                = 0x101,
    /* it is manufacturer specific, which of these codes are supported */
    /* type = uint32_t */
    MIPC_CALL_SS_IND_T_INDEX                                = 0x102,
    /* type = string */
    MIPC_CALL_SS_IND_T_NUMBER                               = 0x8103,
    /* type of address (refer TS 24.008 [8] subclause 10.5.4.7) */
    /* type = uint32_t */
    MIPC_CALL_SS_IND_T_TOA                                  = 0x104,
    /* string type subaddress of format specified by SATYPE */
    /* type = string */
    MIPC_CALL_SS_IND_T_SUBADDR                              = 0x105,
    /* type of subaddress octet in integer format (refer TS 24.008 [8] subclause 10.5.4.8) */
    /* type = uint32_t */
    MIPC_CALL_SS_IND_T_SATYPE                               = 0x106,
};

    /* MIPC_MSG.CALL_ECBM_CHANGE_IND */
enum mipc_call_ecbm_change_ind_tlv_enum {
    mipc_call_ecbm_change_ind_tlv_NONE = 0,
    /* type = uint8_t, refer to CALL_ECBM_MODE */
    MIPC_CALL_ECBM_CHANGE_IND_T_MODE                        = 0x100,
};

    /* MIPC_MSG.CALL_CRSS_IND */
enum mipc_call_crss_ind_tlv_enum {
    mipc_call_crss_ind_tlv_NONE = 0,
    /* type of CRSS IND */
    /* type = uint8_t, refer to CRSS_TYPE */
    MIPC_CALL_CRSS_IND_T_CRSS_TYPE                          = 0x100,
    /* string type phone number of format specified by <type> */
    /* type = string */
    MIPC_CALL_CRSS_IND_T_NUMBER                             = 0x101,
    /* type of address octet in integer format (refer TS 24.008 [8] subclause 10.5.4.7) */
    /* type = uint8_t, refer to NUMBER_TYPE */
    MIPC_CALL_CRSS_IND_T_CALL_NUMBER_TYPE                   = 0x102,
    /* indicates number presentation */
    /* type = uint8_t, refer to NUMBER_PRESENTATION */
    MIPC_CALL_CRSS_IND_T_NUMBER_PRESENTATION                = 0x103,
    /* string type subaddress of format specified by <satype> */
    /* type = string */
    MIPC_CALL_CRSS_IND_T_SUB_ADDRESS                        = 0x104,
    /* type of subaddress octet in integer format (refer TS 24.008 [8] subclause 10.5.4.8) */
    /* type = uint8_t */
    MIPC_CALL_CRSS_IND_T_SA_TYPE                            = 0x105,
    /* type = string */
    MIPC_CALL_CRSS_IND_T_ALPHAID                            = 0x106,
};

    /* MIPC_MSG.IMS_CONFIG_IND */
enum mipc_ims_config_ind_tlv_enum {
    mipc_ims_config_ind_tlv_NONE = 0,
    /* the reason of ims configuration changed indication */
    /* type = uint8_t, refer to IMS_CONFIG_IND_REASON */
    MIPC_IMS_CONFIG_IND_T_REASON                            = 0x100,
    /* the reason of ims configuration changed indication */
    /* type = byte_array */
    MIPC_IMS_CONFIG_IND_T_CONFIG_DATA                       = 0x101,
};

    /* MIPC_MSG.IMS_STATE_IND */
enum mipc_ims_state_ind_tlv_enum {
    mipc_ims_state_ind_tlv_NONE = 0,
    /* the event of ims state changed indication */
    /* type = uint8_t, refer to IMS_STATE_IND_EVENT */
    MIPC_IMS_STATE_IND_T_EVENT                              = 0x100,
    /* the ims registration state */
    /* type = uint8_t */
    MIPC_IMS_STATE_IND_T_REG_STATE                          = 0x101,
    /* the ims registration ext info */
    /* type = uint32_t */
    MIPC_IMS_STATE_IND_T_EXT_INFO                           = 0x102,
    /* the ims wfc state */
    /* type = uint8_t */
    MIPC_IMS_STATE_IND_T_WFC                                = 0x103,
    /* the ims account id */
    /* type = uint32_t */
    MIPC_IMS_STATE_IND_T_ACCOUNT_ID                         = 0x104,
    /* the ims account id */
    /* type = byte_array */
    MIPC_IMS_STATE_IND_T_URI                                = 0x105,
    /* expire time */
    /* type = uint32_t */
    MIPC_IMS_STATE_IND_T_EXPIRE_TIME                        = 0x106,
    /* error code */
    /* type = uint32_t */
    MIPC_IMS_STATE_IND_T_ERROR_CODE                         = 0x107,
    /* error message */
    /* type = string */
    MIPC_IMS_STATE_IND_T_ERROR_MESSAGE                      = 0x108,
};

    /* MIPC_MSG.SYS_REBOOT_CMD */
enum mipc_sys_reboot_cmd_tlv_enum {
    mipc_sys_reboot_cmd_tlv_NONE = 0,
    /* specify the reboot mode */
    /* type = uint8_t, refer to SYS_REBOOT_MODE */
    MIPC_SYS_REBOOT_CMD_T_MODE                              = 0x100,
    /* Download Timeout (Unit: second, Only valid when MODE is DOWNLOAD or SETTIMEOUT) */
    /* type = uint32_t */
    MIPC_SYS_REBOOT_CMD_T_TIMEOUT                           = 0x101,
    /* new sbp id */
    /* type = uint32_t */
    MIPC_SYS_REBOOT_CMD_T_SBP_ID                            = 0x102,
};

    /* MIPC_MSG.SYS_REBOOT_RSP */
enum mipc_sys_reboot_rsp_tlv_enum {
    mipc_sys_reboot_rsp_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_SET_CONFIG_DIPC_CMD */
enum mipc_sys_set_config_dipc_cmd_tlv_enum {
    mipc_sys_set_config_dipc_cmd_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_SET_CONFIG_DIPC_CMD_T_CLASS                    = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_SET_CONFIG_DIPC_CMD_T_TYPE                     = 0x101,
    /* the configuration data */
    /* type = byte_array */
    MIPC_SYS_SET_CONFIG_DIPC_CMD_T_DATA                     = 0x102,
};

    /* MIPC_MSG.SYS_SET_CONFIG_DIPC_RSP */
enum mipc_sys_set_config_dipc_rsp_tlv_enum {
    mipc_sys_set_config_dipc_rsp_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_SYS_SET_CONFIG_DIPC_RSP_T_DATA                     = 0x100,
};

    /* MIPC_MSG.SYS_CONFIG_NEEDED_TO_UPDATE_CMD */
enum mipc_sys_config_needed_to_update_cmd_tlv_enum {
    mipc_sys_config_needed_to_update_cmd_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_CMD_T_CLASS            = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_CONFIG_NEEDED_TO_UPDATE_CMD_T_TYPE             = 0x101,
};

    /* MIPC_MSG.SYS_CONFIG_NEEDED_TO_UPDATE_RSP */
enum mipc_sys_config_needed_to_update_rsp_tlv_enum {
    mipc_sys_config_needed_to_update_rsp_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.SYS_GET_CONFIG_DIPC_CMD */
enum mipc_sys_get_config_dipc_cmd_tlv_enum {
    mipc_sys_get_config_dipc_cmd_tlv_NONE = 0,
    /* the configuration class */
    /* type = uint32_t, refer to SYS_CONFIG_CLASS */
    MIPC_SYS_GET_CONFIG_DIPC_CMD_T_CLASS                    = 0x100,
    /* the string of configuration type */
    /* type = string */
    MIPC_SYS_GET_CONFIG_DIPC_CMD_T_TYPE                     = 0x101,
};

    /* MIPC_MSG.SYS_GET_CONFIG_DIPC_RSP */
enum mipc_sys_get_config_dipc_rsp_tlv_enum {
    mipc_sys_get_config_dipc_rsp_tlv_NONE = 0,
    /* the response data */
    /* type = byte_array */
    MIPC_SYS_GET_CONFIG_DIPC_RSP_T_DATA                     = 0x100,
};

    /* MIPC_MSG.SYS_SET_TIME_CMD */
enum mipc_sys_set_time_cmd_tlv_enum {
    mipc_sys_set_time_cmd_tlv_NONE = 0,
    /* type = struct, refer to nw_nitz_info */
    MIPC_SYS_SET_TIME_CMD_T_INFO                            = 0x100,
    /* if time_zone_offset_minutes in INFO field is valid, 0 means invalid and 1 means valid */
    /* type = uint8_t */
    MIPC_SYS_SET_TIME_CMD_T_TZ_VALID                        = 0x101,
};

    /* MIPC_MSG.SYS_SET_TIME_RSP */
enum mipc_sys_set_time_rsp_tlv_enum {
    mipc_sys_set_time_rsp_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_TEST_CMD */
enum mipc_internal_test_cmd_tlv_enum {
    mipc_internal_test_cmd_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_TEST_RSP */
enum mipc_internal_test_rsp_tlv_enum {
    mipc_internal_test_rsp_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_EIPPORT_CMD */
enum mipc_internal_eipport_cmd_tlv_enum {
    mipc_internal_eipport_cmd_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPPORT_CMD_T_TRANSID                     = 0x100,
    /* type = uint8_t, refer to INTERNAL_EIPPORT_ACTION */
    MIPC_INTERNAL_EIPPORT_CMD_T_ACTION                      = 0x101,
    /* type = uint8_t */
    MIPC_INTERNAL_EIPPORT_CMD_T_IFID                        = 0x102,
    /* type = struct, refer to addr */
    MIPC_INTERNAL_EIPPORT_CMD_T_ADDR                        = 0x8103,
    /* type = uint8_t */
    MIPC_INTERNAL_EIPPORT_CMD_T_PROTO                       = 0x104,
    /* type = uint16_t */
    MIPC_INTERNAL_EIPPORT_CMD_T_PORT                        = 0x105,
};

    /* MIPC_MSG.INTERNAL_EIPPORT_RSP */
enum mipc_internal_eipport_rsp_tlv_enum {
    mipc_internal_eipport_rsp_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPPORT_RSP_T_TRANSID                     = 0x100,
    /* type = uint8_t, refer to INTERNAL_EIPPORT_ACTION */
    MIPC_INTERNAL_EIPPORT_RSP_T_ACTION                      = 0x101,
    /* type = uint8_t, refer to INTERNAL_EIPPORT_RESULT */
    MIPC_INTERNAL_EIPPORT_RSP_T_RESULT                      = 0x102,
};

    /* MIPC_MSG.INTERNAL_EIPSPI_CMD */
enum mipc_internal_eipspi_cmd_tlv_enum {
    mipc_internal_eipspi_cmd_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_TRANSID                      = 0x100,
    /* type = uint8_t, refer to INTERNAL_EIPSPI_ACTION */
    MIPC_INTERNAL_EIPSPI_CMD_T_ACTION                       = 0x101,
    /* type = struct, refer to addr */
    MIPC_INTERNAL_EIPSPI_CMD_T_SRC_ADDR                     = 0x8102,
    /* type = struct, refer to addr */
    MIPC_INTERNAL_EIPSPI_CMD_T_DST_ADDR                     = 0x8103,
    /* type = uint8_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_PROTO                        = 0x104,
    /* type = uint8_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_MODE                         = 0x105,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_MIN_SPI                      = 0x106,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_MAX_SPI                      = 0x107,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_CMD_T_SPI                          = 0x8108,
};

    /* MIPC_MSG.INTERNAL_EIPSPI_RSP */
enum mipc_internal_eipspi_rsp_tlv_enum {
    mipc_internal_eipspi_rsp_tlv_NONE = 0,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_RSP_T_TRANSID                      = 0x100,
    /* type = uint8_t */
    MIPC_INTERNAL_EIPSPI_RSP_T_ACTION                       = 0x101,
    /* type = uint32_t */
    MIPC_INTERNAL_EIPSPI_RSP_T_SPI                          = 0x8102,
};

    /* MIPC_MSG.SMS_NEW_SMS_CMD */
enum mipc_sms_new_sms_cmd_tlv_enum {
    mipc_sms_new_sms_cmd_tlv_NONE = 0,
    /* the format of this sms */
    /* type = uint8_t, refer to SMS_FORMAT */
    MIPC_SMS_NEW_SMS_CMD_T_FORMAT                           = 0x100,
    /* should be 1 in this case */
    /* type = uint16_t */
    MIPC_SMS_NEW_SMS_CMD_T_PDU_COUNT                        = 0x103,
    /* type = struct_array, refer to sms_pdu */
    MIPC_SMS_NEW_SMS_CMD_T_PDU_LIST                         = 0x8104,
};

    /* MIPC_MSG.SMS_NEW_SMS_RSP */
enum mipc_sms_new_sms_rsp_tlv_enum {
    mipc_sms_new_sms_rsp_tlv_NONE = 0,
    /* ack for the NEW_SMS_CMD,RP_ACK or RP_ERROR */
    /* type = uint8_t, refer to NEW_SMS_ACK */
    MIPC_SMS_NEW_SMS_RSP_T_NEW_SMS_ACK                      = 0x100,
    /* cause in TS23.040 9.2.3.22 */
    /* type = uint8_t */
    MIPC_SMS_NEW_SMS_RSP_T_CAUSE                            = 0x101,
};

    /* MIPC_MSG.SMS_NEW_STATUS_REPORT_CMD */
enum mipc_sms_new_status_report_cmd_tlv_enum {
    mipc_sms_new_status_report_cmd_tlv_NONE = 0,
    /* pdu detail info */
    /* type = byte_array */
    MIPC_SMS_NEW_STATUS_REPORT_CMD_T_PDU                    = 0x8100,
};

    /* MIPC_MSG.SMS_NEW_STATUS_REPORT_RSP */
enum mipc_sms_new_status_report_rsp_tlv_enum {
    mipc_sms_new_status_report_rsp_tlv_NONE = 0,
    /* ack for the NEW_STATUS_REPORT_CMD,RP_ACK or RP_ERROR */
    /* type = uint8_t, refer to NEW_SMS_ACK */
    MIPC_SMS_NEW_STATUS_REPORT_RSP_T_ACK_TYPE               = 0x100,
    /* cause in TS23.040 9.2.3.22 */
    /* type = uint8_t */
    MIPC_SMS_NEW_STATUS_REPORT_RSP_T_CAUSE                  = 0x101,
};

    /* MIPC_MSG.CALL_APPROVE_INCOMING_CMD */
enum mipc_call_approve_incoming_cmd_tlv_enum {
    mipc_call_approve_incoming_cmd_tlv_NONE = 0,
    /* call ID */
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_CMD_T_CALLID                 = 0x100,
    /* type = string */
    MIPC_CALL_APPROVE_INCOMING_CMD_T_NUMBER                 = 0x8101,
    /* type of address (refer TS 24.008 [8] subclause 10.5.4.7) */
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_CMD_T_TOA                    = 0x102,
    /* sequence number which is piggybacked from the incoming call */
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_CMD_T_SEQ_NO                 = 0x103,
    /* type = uint32_t, refer to CALL_MODE */
    MIPC_CALL_APPROVE_INCOMING_CMD_T_MODE                   = 0x104,
};

    /* MIPC_MSG.CALL_APPROVE_INCOMING_RSP */
enum mipc_call_approve_incoming_rsp_tlv_enum {
    mipc_call_approve_incoming_rsp_tlv_NONE = 0,
    /* type = uint8_t, refer to BOOLEAN */
    MIPC_CALL_APPROVE_INCOMING_RSP_T_IS_APPROVE             = 0x100,
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_RSP_T_CAUSE                  = 0x101,
    /* call ID */
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_RSP_T_CALLID                 = 0x102,
    /* sequence number which is piggybacked from the incoming call */
    /* type = uint32_t */
    MIPC_CALL_APPROVE_INCOMING_RSP_T_SEQ_NO                 = 0x103,
};

    /* MIPC_MSG.INTERNAL_TEST_NTF */
enum mipc_internal_test_ntf_tlv_enum {
    mipc_internal_test_ntf_tlv_NONE = 0,
    /* no proprietary TLV */
};

    /* MIPC_MSG.INTERNAL_INJECT_TST_NTF */
enum mipc_internal_inject_tst_ntf_tlv_enum {
    mipc_internal_inject_tst_ntf_tlv_NONE = 0,
    /* type = string */
    MIPC_INTERNAL_INJECT_TST_NTF_T_MODULE                   = 0x100,
    /* type = uint8_t */
    MIPC_INTERNAL_INJECT_TST_NTF_T_INDEX                    = 0x101,
    /* type = string */
    MIPC_INTERNAL_INJECT_TST_NTF_T_INJECT_STRING            = 0x102,
};

enum MIPC_COMMON_TLV_enum {
    MIPC_COMMON_TLV_NONE = 0,
    /*  */
    MIPC_T_RESULT                                           = 0,
};

enum mipc_boolean_const_enum {
    mipc_boolean_const_NONE = 0,
    /* BOOLEAN */
    MIPC_BOOLEAN_FALSE                                      = 0,
    MIPC_BOOLEAN_TRUE                                       = 1,
};
typedef enum mipc_boolean_const_enum mipc_boolean_const_enum;

enum mipc_sys_sim_ps_const_enum {
    mipc_sys_sim_ps_const_NONE = 0,
    /* SYS_SIM_PS */
    MIPC_SYS_SIM_PS_SIM0                                    = 0x01,
    MIPC_SYS_SIM_PS_SIM1                                    = 0x02,
    MIPC_SYS_SIM_PS_SIM2                                    = 0x04,
    MIPC_SYS_SIM_PS_SIM3                                    = 0x08,
    MIPC_SYS_SIM_PS_PS0                                     = 0x10,
    MIPC_SYS_SIM_PS_PS1                                     = 0x20,
    MIPC_SYS_SIM_PS_PS2                                     = 0x40,
    MIPC_SYS_SIM_PS_PS3                                     = 0x80,
    MIPC_SYS_SIM_PS_ALL                                     = 0xFF,
};
typedef enum mipc_sys_sim_ps_const_enum mipc_sys_sim_ps_const_enum;

enum mipc_sys_reboot_mode_const_enum {
    mipc_sys_reboot_mode_const_NONE = 0,
    /* SYS_REBOOT_MODE */
    /* normal reboot mode */
    MIPC_SYS_REBOOT_MODE_NORMAL                             = 0,
    MIPC_SYS_REBOOT_MODE_DOWNLOAD                           = 1,
    MIPC_SYS_REBOOT_MODE_POWEROFF                           = 2,
    MIPC_SYS_REBOOT_MODE_PRESHUTDOWN                        = 3,
    MIPC_SYS_REBOOT_MODE_DOWNLOAD_NONRST                    = 4,
    MIPC_SYS_REBOOT_MODE_SBP_CHANGE                         = 5,
};
typedef enum mipc_sys_reboot_mode_const_enum mipc_sys_reboot_mode_const_enum;

enum mipc_sys_cap_cellular_class_const_enum {
    mipc_sys_cap_cellular_class_const_NONE = 0,
    /* SYS_CAP_CELLULAR_CLASS */
    MIPC_SYS_CAP_CELLULAR_CLASS_GSM                         = 0x00000001,
    MIPC_SYS_CAP_CELLULAR_CLASS_CDMA                        = 0x00000002,
};
typedef enum mipc_sys_cap_cellular_class_const_enum mipc_sys_cap_cellular_class_const_enum;

enum mipc_sys_voice_class_const_enum {
    mipc_sys_voice_class_const_NONE = 0,
    /* SYS_VOICE_CLASS */
    MIPC_SYS_VOICE_CLASS_UNKNOWN                            = 0,
    MIPC_SYS_VOICE_CLASS_NO_VOICE                           = 1,
    MIPC_SYS_VOICE_CLASS_SEPARATE_VOICE_DATA                = 2,
    MIPC_SYS_VOICE_CLASS_SIMULTANEOUS_VOICE_DATA            = 3,
};
typedef enum mipc_sys_voice_class_const_enum mipc_sys_voice_class_const_enum;

enum mipc_sys_sim_class_const_enum {
    mipc_sys_sim_class_const_NONE = 0,
    /* SYS_SIM_CLASS */
    MIPC_SYS_SIM_CLASS_UNKNOWN                              = 0,
    MIPC_SYS_SIM_CLASS_LOGICAL                              = 1,
    MIPC_SYS_SIM_CLASS_REMOVABLE                            = 2,
};
typedef enum mipc_sys_sim_class_const_enum mipc_sys_sim_class_const_enum;

enum mipc_sys_cap_data_const_enum {
    mipc_sys_cap_data_const_NONE = 0,
    /* SYS_CAP_DATA */
    MIPC_SYS_CAP_DATA_NONE                                  = 0x00000000,
    MIPC_SYS_CAP_DATA_GPRS                                  = 0x00000001,
    MIPC_SYS_CAP_DATA_EDGE                                  = 0x00000002,
    MIPC_SYS_CAP_DATA_UMTS                                  = 0x00000004,
    MIPC_SYS_CAP_DATA_HSDPA                                 = 0x00000008,
    MIPC_SYS_CAP_DATA_HSUPA                                 = 0x00000010,
    MIPC_SYS_CAP_DATA_LTE                                   = 0x00000020,
    MIPC_SYS_CAP_DATA_5G_NSA                                = 0x00000040,
    MIPC_SYS_CAP_DATA_5G_SA                                 = 0x00000080,
    MIPC_SYS_CAP_DATA_1XRTT                                 = 0x00010000,
    MIPC_SYS_CAP_DATA_1XEVDO                                = 0x00020000,
    MIPC_SYS_CAP_DATA_1XEVDO_REVA                           = 0x00040000,
    MIPC_SYS_CAP_DATA_1XEVDV                                = 0x00080000,
    MIPC_SYS_CAP_DATA_3XRTT                                 = 0x00100000,
    MIPC_SYS_CAP_DATA_1XEVDO_REVB                           = 0x00200000,
    MIPC_SYS_CAP_DATA_UMB                                   = 0x00400000,
    MIPC_SYS_CAP_DATA_HSPA_PLUS                             = 0x40000000,
    MIPC_SYS_CAP_DATA_CUSTOM                                = 0x80000000,
};
typedef enum mipc_sys_cap_data_const_enum mipc_sys_cap_data_const_enum;

enum mipc_sys_cap_sms_const_enum {
    mipc_sys_cap_sms_const_NONE = 0,
    /* SYS_CAP_SMS */
    MIPC_SYS_CAP_SMS_NONE                                   = 0x00000000,
    MIPC_SYS_CAP_SMS_PDU_RECEIVE                            = 0x00000001,
    MIPC_SYS_CAP_SMS_PDU_SEND                               = 0x00000002,
    MIPC_SYS_CAP_SMS_TEXT_RECEIVE                           = 0x00000004,
    MIPC_SYS_CAP_SMS_TEXT_SEND                              = 0x00000008,
};
typedef enum mipc_sys_cap_sms_const_enum mipc_sys_cap_sms_const_enum;

enum mipc_sys_cap_ctrl_const_enum {
    mipc_sys_cap_ctrl_const_NONE = 0,
    /* SYS_CAP_CTRL */
    MIPC_SYS_CAP_CTRL_NONE                                  = 0x00000000,
    MIPC_SYS_CAP_CTRL_REG_MANUAL                            = 0x00000001,
    MIPC_SYS_CAP_CTRL_HW_RADIO_SWITCH                       = 0x00000002,
    MIPC_SYS_CAP_CTRL_CDMA_MOBILE_IP                        = 0x00000004,
    MIPC_SYS_CAP_CTRL_CDMA_SIMPLE_IP                        = 0x00000008,
    MIPC_SYS_CAP_CTRL_MULTI_CARRIER                         = 0x00000010,
    MIPC_SYS_CAP_CTRL_ESIM                                  = 0x00000020,
    MIPC_SYS_CAP_CTRL_UE_POLICY_ROUTE_SELECTION             = 0x00000040,
    MIPC_SYS_CAP_CTRL_SIM_HOT_SWAP_CAPABLE                  = 0x00000080,
};
typedef enum mipc_sys_cap_ctrl_const_enum mipc_sys_cap_ctrl_const_enum;

enum mipc_sys_auth_algo_const_enum {
    mipc_sys_auth_algo_const_NONE = 0,
    /* SYS_AUTH_ALGO */
    MIPC_SYS_AUTH_ALGO_NONE                                 = 0,
    MIPC_SYS_AUTH_ALGO_SIM                                  = 1,
    MIPC_SYS_AUTH_ALGO_AKA                                  = 2,
    MIPC_SYS_AUTH_ALGO_AKAP                                 = 3,
};
typedef enum mipc_sys_auth_algo_const_enum mipc_sys_auth_algo_const_enum;

enum mipc_sys_cap_service_const_enum {
    mipc_sys_cap_service_const_NONE = 0,
    /* SYS_CAP_SERVICE */
    MIPC_SYS_CAP_SERVICE_NONE                               = 0x00000000,
    MIPC_SYS_CAP_SERVICE_LTE_ATTACH                         = 0x00000001,
    MIPC_SYS_CAP_SERVICE_CONTEXT_MGMT                       = 0x00000002,
    MIPC_SYS_CAP_SERVICE_MULTI_SIM                          = 0x00000004,
    MIPC_SYS_CAP_SERVICE_EX_SAR                             = 0x00000008,
    MIPC_SYS_CAP_SERVICE_NETWORK_BLACKLIST                  = 0x00000010,
    MIPC_SYS_CAP_SERVICE_5G_NSA                             = 0x00000020,
};
typedef enum mipc_sys_cap_service_const_enum mipc_sys_cap_service_const_enum;

enum mipc_sys_cap_gsm_band_const_enum {
    mipc_sys_cap_gsm_band_const_NONE = 0,
    /* SYS_CAP_GSM_BAND */
    MIPC_SYS_CAP_GSM_BAND_900                               = 0x00000002,
    MIPC_SYS_CAP_GSM_BAND_DCS_1800                          = 0x00000008,
    MIPC_SYS_CAP_GSM_BAND_PCS_1900                          = 0x00000010,
    MIPC_SYS_CAP_GSM_BAND_PCS_850                           = 0x00000080,
};
typedef enum mipc_sys_cap_gsm_band_const_enum mipc_sys_cap_gsm_band_const_enum;

enum mipc_sys_cap_umts_band_const_enum {
    mipc_sys_cap_umts_band_const_NONE = 0,
    /* SYS_CAP_UMTS_BAND */
    MIPC_SYS_CAP_UMTS_BAND_I                                = 0x00000001,
    MIPC_SYS_CAP_UMTS_BAND_II                               = 0x00000002,
    MIPC_SYS_CAP_UMTS_BAND_III                              = 0x00000004,
    MIPC_SYS_CAP_UMTS_BAND_IV                               = 0x00000008,
    MIPC_SYS_CAP_UMTS_BAND_V                                = 0x00000010,
    MIPC_SYS_CAP_UMTS_BAND_VI                               = 0x00000020,
    MIPC_SYS_CAP_UMTS_BAND_VII                              = 0x00000040,
    MIPC_SYS_CAP_UMTS_BAND_VIII                             = 0x00000080,
    MIPC_SYS_CAP_UMTS_BAND_IX                               = 0x00000100,
    MIPC_SYS_CAP_UMTS_BAND_X                                = 0x00000200,
};
typedef enum mipc_sys_cap_umts_band_const_enum mipc_sys_cap_umts_band_const_enum;

enum mipc_sys_cap_cdma_band_const_enum {
    mipc_sys_cap_cdma_band_const_NONE = 0,
    /* SYS_CAP_CDMA_BAND */
    MIPC_SYS_CAP_CDMA_BAND_0                                = 0x00000001,
    MIPC_SYS_CAP_CDMA_BAND_1                                = 0x00000002,
    MIPC_SYS_CAP_CDMA_BAND_2                                = 0x00000004,
    MIPC_SYS_CAP_CDMA_BAND_3                                = 0x00000008,
    MIPC_SYS_CAP_CDMA_BAND_4                                = 0x00000010,
    MIPC_SYS_CAP_CDMA_BAND_5                                = 0x00000020,
    MIPC_SYS_CAP_CDMA_BAND_6                                = 0x00000040,
    MIPC_SYS_CAP_CDMA_BAND_7                                = 0x00000080,
    MIPC_SYS_CAP_CDMA_BAND_8                                = 0x00000100,
    MIPC_SYS_CAP_CDMA_BAND_9                                = 0x00000200,
    MIPC_SYS_CAP_CDMA_BAND_10                               = 0x00000400,
    MIPC_SYS_CAP_CDMA_BAND_11                               = 0x00000800,
    MIPC_SYS_CAP_CDMA_BAND_12                               = 0x00001000,
    MIPC_SYS_CAP_CDMA_BAND_13                               = 0x00002000,
    MIPC_SYS_CAP_CDMA_BAND_14                               = 0x00004000,
    MIPC_SYS_CAP_CDMA_BAND_15                               = 0x00008000,
    MIPC_SYS_CAP_CDMA_BAND_16                               = 0x00010000,
    MIPC_SYS_CAP_CDMA_BAND_17                               = 0x00020000,
    MIPC_SYS_CAP_CDMA_BAND_18                               = 0x00040000,
    MIPC_SYS_CAP_CDMA_BAND_19                               = 0x00080000,
    MIPC_SYS_CAP_CDMA_BAND_20                               = 0x00100000,
};
typedef enum mipc_sys_cap_cdma_band_const_enum mipc_sys_cap_cdma_band_const_enum;

enum mipc_sys_cap_tds_band_const_enum {
    mipc_sys_cap_tds_band_const_NONE = 0,
    /* SYS_CAP_TDS_BAND */
    MIPC_SYS_CAP_TDS_BAND_A                                 = 0x00000001,
    MIPC_SYS_CAP_TDS_BAND_B                                 = 0x00000002,
    MIPC_SYS_CAP_TDS_BAND_C                                 = 0x00000004,
    MIPC_SYS_CAP_TDS_BAND_D                                 = 0x00000008,
    MIPC_SYS_CAP_TDS_BAND_E                                 = 0x00000010,
    MIPC_SYS_CAP_TDS_BAND_F                                 = 0x00000020,
};
typedef enum mipc_sys_cap_tds_band_const_enum mipc_sys_cap_tds_band_const_enum;

enum mipc_sys_product_type_const_enum {
    mipc_sys_product_type_const_NONE = 0,
    /* SYS_PRODUCT_TYPE */
    MIPC_SYS_PRODUCT_TYPE_SMARTPHONE                        = 0x00,
    MIPC_SYS_PRODUCT_TYPE_DATACARD                          = 0x01,
};
typedef enum mipc_sys_product_type_const_enum mipc_sys_product_type_const_enum;

enum mipc_sys_config_class_const_enum {
    mipc_sys_config_class_const_NONE = 0,
    /* SYS_CONFIG_CLASS */
    /*  */
    MIPC_SYS_CONFIG_CLASS_GENERAL_MD_CONFIG                 = 0,
    /* for AT+EGMC support */
    MIPC_SYS_CONFIG_CLASS_LEGACY_MD_CONFIG                  = 1,
    /*  */
    MIPC_SYS_CONFIG_CLASS_HOST_RELAY_DIPC_CONFIG            = 2,
    /* for AT+EWOCFGSET support */
    MIPC_SYS_CONFIG_CLASS_N3X_CONFIG                        = 3,
    /* for AT+EIWLCFGSET support */
    MIPC_SYS_CONFIG_CLASS_IWLAN_CONFIG                      = 4,
};
typedef enum mipc_sys_config_class_const_enum mipc_sys_config_class_const_enum;

enum mipc_ims_config_class_const_enum {
    mipc_ims_config_class_const_NONE = 0,
    /* IMS_CONFIG_CLASS */
    /* for AT+EIMSCFG support */
    MIPC_IMS_CONFIG_CLASS_IMS_FEATURE                       = 0,
    /* for AT+ECFGSET support */
    MIPC_IMS_CONFIG_CLASS_IMS_CONFIG                        = 1,
    /* for AT+EPVSSET support */
    MIPC_IMS_CONFIG_CLASS_IMS_PROVISION                     = 2,
    /*  */
    MIPC_IMS_CONFIG_CLASS_IMS_CAPABILITY                    = 3,
};
typedef enum mipc_ims_config_class_const_enum mipc_ims_config_class_const_enum;

enum mipc_ims_config_ind_reason_const_enum {
    mipc_ims_config_ind_reason_const_NONE = 0,
    /* IMS_CONFIG_IND_REASON */
    MIPC_IMS_CONFIG_IND_REASON_IMS_READY                    = 0,
    MIPC_IMS_CONFIG_IND_REASON_USER_CHANGE                  = 1,
};
typedef enum mipc_ims_config_ind_reason_const_enum mipc_ims_config_ind_reason_const_enum;

enum mipc_ims_state_ind_event_const_enum {
    mipc_ims_state_ind_event_const_NONE = 0,
    /* IMS_STATE_IND_EVENT */
    MIPC_IMS_STATE_IND_EVENT_REG_STATE                      = 0,
    MIPC_IMS_STATE_IND_EVENT_WFC                            = 1,
    MIPC_IMS_STATE_IND_EVENT_REG_URI                        = 2,
    MIPC_IMS_STATE_IND_EVENT_REG_RESP                       = 3,
};
typedef enum mipc_ims_state_ind_event_const_enum mipc_ims_state_ind_event_const_enum;

enum mipc_ims_state_const_enum {
    mipc_ims_state_const_NONE = 0,
    /* IMS_STATE */
    MIPC_IMS_STATE_UNREGISTERED                             = 0,
    MIPC_IMS_STATE_REGISTERED                               = 1,
};
typedef enum mipc_ims_state_const_enum mipc_ims_state_const_enum;

enum mipc_sys_config_change_reason_const_enum {
    mipc_sys_config_change_reason_const_NONE = 0,
    /* SYS_CONFIG_CHANGE_REASON */
    MIPC_SYS_CONFIG_CHANGE_REASON_SIM_READY                 = 0,
    MIPC_SYS_CONFIG_CHANGE_REASON_USER_CHANGE               = 1,
};
typedef enum mipc_sys_config_change_reason_const_enum mipc_sys_config_change_reason_const_enum;

enum mipc_sys_adpclk_state_const_enum {
    mipc_sys_adpclk_state_const_NONE = 0,
    /* SYS_ADPCLK_STATE */
    /*  */
    MIPC_SYS_ADPCLK_STATE_DISABLE                           = 0,
    /*  */
    MIPC_SYS_ADPCLK_STATE_ENABLE                            = 1,
};
typedef enum mipc_sys_adpclk_state_const_enum mipc_sys_adpclk_state_const_enum;

enum mipc_sys_mcf_op_const_enum {
    mipc_sys_mcf_op_const_NONE = 0,
    /* SYS_MCF_OP */
    MIPC_SYS_MCF_OP_SET_OTA_AND_OPOTA_FILE_PATH             = 0,
    MIPC_SYS_MCF_OP_SET_OTA_FILE_PATH                       = 1,
    MIPC_SYS_MCF_OP_SET_OPOTA_FILE_PATH                     = 2,
    MIPC_SYS_MCF_OP_SET_FILE_PATH_IN_MCF_DSBP_ACTIVE_MODE   = 3,
    MIPC_SYS_MCF_OP_GET_APPLIED_FILE_PATH                   = 4,
    MIPC_SYS_MCF_OP_DUMP_LID_DATA                           = 5,
    MIPC_SYS_MCF_OP_SET_FILE_PATH_AND_AUTO_SELECT_BIN       = 6,
    MIPC_SYS_MCF_OP_UPDATE_OPOTA_FILE                       = 7,
    MIPC_SYS_MCF_OP_INI_OPERATION                           = 8,
    MIPC_SYS_MCF_OP_LID_VARIABLE_OPERATION                  = 9,
    MIPC_SYS_MCF_OP_QUERY_VARIABLE_VALUE                    = 10,
    MIPC_SYS_MCF_OP_ASSIGN_COMBINED_PATH                    = 11,
};
typedef enum mipc_sys_mcf_op_const_enum mipc_sys_mcf_op_const_enum;

enum mipc_sys_sar_mode_const_enum {
    mipc_sys_sar_mode_const_NONE = 0,
    /* SYS_SAR_MODE */
    MIPC_SYS_SAR_MODE_BY_DEVICE                             = 0x00,
    MIPC_SYS_SAR_MODE_BY_HOST                               = 0x01,
};
typedef enum mipc_sys_sar_mode_const_enum mipc_sys_sar_mode_const_enum;

enum mipc_sys_account_id_const_enum {
    mipc_sys_account_id_const_NONE = 0,
    /* SYS_ACCOUNT_ID */
    MIPC_SYS_ACCOUNT_ID_SIM1_NORMAL                         = 0,
    MIPC_SYS_ACCOUNT_ID_SIM1_EMERGENCY                      = 1,
    MIPC_SYS_ACCOUNT_ID_SIM2_NORMAL                         = 2,
    MIPC_SYS_ACCOUNT_ID_SIM2_EMERGENCY                      = 3,
};
typedef enum mipc_sys_account_id_const_enum mipc_sys_account_id_const_enum;

enum mipc_apn_pdp_type_const_enum {
    mipc_apn_pdp_type_const_NONE = 0,
    /* APN_PDP_TYPE */
    MIPC_APN_PDP_TYPE_DEFAULT                               = 0,
    MIPC_APN_PDP_TYPE_IPV4                                  = 1,
    MIPC_APN_PDP_TYPE_IPV6                                  = 2,
    MIPC_APN_PDP_TYPE_IPV4V6                                = 3,
    MIPC_APN_PDP_TYPE_IPV4_AND_IPV6                         = 4,
};
typedef enum mipc_apn_pdp_type_const_enum mipc_apn_pdp_type_const_enum;

enum mipc_apn_enabled_type_const_enum {
    mipc_apn_enabled_type_const_NONE = 0,
    /* APN_ENABLED_TYPE */
    MIPC_APN_ENABLED_TYPE_DISABLED                          = 0,
    MIPC_APN_ENABLED_TYPE_ENABLED                           = 1,
    MIPC_APN_ENABLED_TYPE_MAX                               = 2,
};
typedef enum mipc_apn_enabled_type_const_enum mipc_apn_enabled_type_const_enum;

enum mipc_eif_address_type_const_enum {
    mipc_eif_address_type_const_NONE = 0,
    /* EIF_ADDRESS_TYPE */
    MIPC_EIF_ADDRESS_TYPE_DEFAULT                           = 0,
    MIPC_EIF_ADDRESS_TYPE_IPV4                              = 1,
    MIPC_EIF_ADDRESS_TYPE_IPV6                              = 2,
    MIPC_EIF_ADDRESS_TYPE_IPV4V6                            = 3,
};
typedef enum mipc_eif_address_type_const_enum mipc_eif_address_type_const_enum;

enum mipc_apn_auth_type_const_enum {
    mipc_apn_auth_type_const_NONE = 0,
    /* APN_AUTH_TYPE */
    MIPC_APN_AUTH_TYPE_NONE                                 = 0,
    MIPC_APN_AUTH_TYPE_PAP                                  = 1,
    MIPC_APN_AUTH_TYPE_CHAP                                 = 2,
    MIPC_APN_AUTH_TYPE_PAP_OR_CHAP                          = 3,
};
typedef enum mipc_apn_auth_type_const_enum mipc_apn_auth_type_const_enum;

enum mipc_apn_type_const_enum {
    mipc_apn_type_const_NONE = 0,
    /* APN_TYPE */
    MIPC_APN_TYPE_UNKNOWN                                   = 0x00000000,
    MIPC_APN_TYPE_DEFAULT                                   = 0x00000001,
    MIPC_APN_TYPE_IMS                                       = 0x00000002,
    MIPC_APN_TYPE_MMS                                       = 0x00000004,
    MIPC_APN_TYPE_SUPL                                      = 0x00000008,
    MIPC_APN_TYPE_DUN                                       = 0x00000010,
    MIPC_APN_TYPE_HIPRI                                     = 0x00000020,
    MIPC_APN_TYPE_FOTA                                      = 0x00000040,
    MIPC_APN_TYPE_CBS                                       = 0x00000080,
    MIPC_APN_TYPE_EMERGENCY                                 = 0x00000100,
    MIPC_APN_TYPE_IA                                        = 0x00000200,
    MIPC_APN_TYPE_DM                                        = 0x00000400,
    MIPC_APN_TYPE_WAP                                       = 0x00000800,
    MIPC_APN_TYPE_NET                                       = 0x00001000,
    MIPC_APN_TYPE_CMMAIL                                    = 0x00002000,
    MIPC_APN_TYPE_TETHERING                                 = 0x00004000,
    MIPC_APN_TYPE_RCSE                                      = 0x00008000,
    MIPC_APN_TYPE_XCAP                                      = 0x00010000,
    MIPC_APN_TYPE_RCS                                       = 0x00020000,
    MIPC_APN_TYPE_RCS_PCSCF                                 = 0x00040000,
    MIPC_APN_TYPE_VSIM                                      = 0x00080000,
    MIPC_APN_TYPE_BIP                                       = 0x00100000,
    MIPC_APN_TYPE_NW_ASSIGNED                               = 0x80000000,
};
typedef enum mipc_apn_type_const_enum mipc_apn_type_const_enum;

enum mipc_apn_compression_const_enum {
    mipc_apn_compression_const_NONE = 0,
    /* APN_COMPRESSION */
    MIPC_APN_COMPRESSION_NONE                               = 0,
    MIPC_APN_COMPRESSION_ENABLE                             = 1,
};
typedef enum mipc_apn_compression_const_enum mipc_apn_compression_const_enum;

enum mipc_apn_profile_mode_const_enum {
    mipc_apn_profile_mode_const_NONE = 0,
    /* APN_PROFILE_MODE */
    MIPC_APN_PROFILE_MODE_HOST_NOT_SET_APN_PROFILE          = 0,
    MIPC_APN_PROFILE_MODE_HOST_SET_APN_PROFILE              = 1,
};
typedef enum mipc_apn_profile_mode_const_enum mipc_apn_profile_mode_const_enum;

enum mipc_data_fallback_type_const_enum {
    mipc_data_fallback_type_const_NONE = 0,
    /* DATA_FALLBACK_TYPE */
    MIPC_DATA_FALLBACK_TYPE_DISABLE                         = 0,
    MIPC_DATA_FALLBACK_TYPE_IPV4_FIRST                      = 1,
    MIPC_DATA_FALLBACK_TYPE_IPV6_FIRST                      = 2,
};
typedef enum mipc_data_fallback_type_const_enum mipc_data_fallback_type_const_enum;

enum mipc_mipc_cid_act_state_const_enum {
    mipc_mipc_cid_act_state_const_NONE = 0,
    /* MIPC_CID_ACT_STATE */
    MIPC_MIPC_CID_ACT_STATE_DEACTIVATED                     = 0,
    MIPC_MIPC_CID_ACT_STATE_ACTIVATED                       = 1,
};
typedef enum mipc_mipc_cid_act_state_const_enum mipc_mipc_cid_act_state_const_enum;

enum mipc_data_reuse_type_const_enum {
    mipc_data_reuse_type_const_NONE = 0,
    /* DATA_REUSE_TYPE */
    MIPC_DATA_REUSE_TYPE_DEFAULT                            = 0,
    MIPC_DATA_REUSE_TYPE_USER_SETTING_FIRST                 = 1,
    MIPC_DATA_REUSE_TYPE_NOT_REUSE                          = 2,
    MIPC_DATA_REUSE_TYPE_REUSE_ONLY                         = 3,
};
typedef enum mipc_data_reuse_type_const_enum mipc_data_reuse_type_const_enum;

enum mipc_data_config_type_const_enum {
    mipc_data_config_type_const_NONE = 0,
    /* DATA_CONFIG_TYPE */
    MIPC_DATA_CONFIG_TYPE_DISABLE                           = 0,
    MIPC_DATA_CONFIG_TYPE_ENABLE                            = 1,
    MIPC_DATA_CONFIG_TYPE_NO_CHANGE                         = 2,
};
typedef enum mipc_data_config_type_const_enum mipc_data_config_type_const_enum;

enum mipc_data_retry_mode_const_enum {
    mipc_data_retry_mode_const_NONE = 0,
    /* DATA_RETRY_MODE */
    MIPC_DATA_RETRY_MODE_QUERY_TIMER                        = 0,
    MIPC_DATA_RETRY_MODE_RESET_TIMER                        = 1,
    MIPC_DATA_RETRY_MODE_RETRY_AFTER_TIMER                  = 2,
};
typedef enum mipc_data_retry_mode_const_enum mipc_data_retry_mode_const_enum;

enum mipc_data_retry_type_const_enum {
    mipc_data_retry_type_const_NONE = 0,
    /* DATA_RETRY_TYPE */
    MIPC_DATA_RETRY_TYPE_RETRY_TYPE_NO_SUGGEST              = 0,
    MIPC_DATA_RETRY_TYPE_RETRY_TYPE_NO_RETRY                = 1,
    MIPC_DATA_RETRY_TYPE_RETRY_TYPE_WITH_SUGGEST            = 2,
};
typedef enum mipc_data_retry_type_const_enum mipc_data_retry_type_const_enum;

enum mipc_data_keepalive_status_code_const_enum {
    mipc_data_keepalive_status_code_const_NONE = 0,
    /* DATA_KEEPALIVE_STATUS_CODE */
    MIPC_DATA_KEEPALIVE_STATUS_CODE_ACTIVE                  = 0,
    MIPC_DATA_KEEPALIVE_STATUS_CODE_INACTIVE                = 1,
    MIPC_DATA_KEEPALIVE_STATUS_CODE_PENDING                 = 2,
};
typedef enum mipc_data_keepalive_status_code_const_enum mipc_data_keepalive_status_code_const_enum;

enum mipc_data_keepalive_type_const_enum {
    mipc_data_keepalive_type_const_NONE = 0,
    /* DATA_KEEPALIVE_TYPE */
    MIPC_DATA_KEEPALIVE_TYPE_NATT_IPV4                      = 0,
    MIPC_DATA_KEEPALIVE_TYPE_NATT_IPV6                      = 1,
    MIPC_DATA_KEEPALIVE_TYPE_IPV4_TCP                       = 2,
    MIPC_DATA_KEEPALIVE_TYPE_IPV4_UDP                       = 3,
    MIPC_DATA_KEEPALIVE_TYPE_IPV6_TCP                       = 4,
    MIPC_DATA_KEEPALIVE_TYPE_IPV6_UDP                       = 5,
};
typedef enum mipc_data_keepalive_type_const_enum mipc_data_keepalive_type_const_enum;

enum mipc_mipc_eiwlpl_priority_type_const_enum {
    mipc_mipc_eiwlpl_priority_type_const_NONE = 0,
    /* MIPC_EIWLPL_PRIORITY_TYPE */
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_START                    = 0,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_NULL                     = 1,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_CELLULAR                 = 2,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_WIFI                     = 3,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_CELLULAR_GREATER_THAN_WIFI = 4,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_WIFI_GREATER_THAN_CELLULAR = 5,
    MIPC_MIPC_EIWLPL_PRIORITY_TYPE_END                      = 6,
};
typedef enum mipc_mipc_eiwlpl_priority_type_const_enum mipc_mipc_eiwlpl_priority_type_const_enum;

enum mipc_internal_eif_req_cmd_const_enum {
    mipc_internal_eif_req_cmd_const_NONE = 0,
    /* INTERNAL_EIF_REQ_CMD */
    MIPC_INTERNAL_EIF_REQ_CMD_IFUP                          = 0,
    MIPC_INTERNAL_EIF_REQ_CMD_IFDOWN                        = 1,
    MIPC_INTERNAL_EIF_REQ_CMD_IPUPDATE                      = 2,
    MIPC_INTERNAL_EIF_REQ_CMD_IFQUERY                       = 3,
    MIPC_INTERNAL_EIF_REQ_CMD_NO_RA_INITIAL                 = 4,
    MIPC_INTERNAL_EIF_REQ_CMD_NO_RA_REFRESH                 = 5,
    MIPC_INTERNAL_EIF_REQ_CMD_IPADD                         = 6,
    MIPC_INTERNAL_EIF_REQ_CMD_IPDEL                         = 7,
    MIPC_INTERNAL_EIF_REQ_CMD_IPCHG                         = 8,
};
typedef enum mipc_internal_eif_req_cmd_const_enum mipc_internal_eif_req_cmd_const_enum;

enum mipc_internal_eif_ind_cmd_const_enum {
    mipc_internal_eif_ind_cmd_const_NONE = 0,
    /* INTERNAL_EIF_IND_CMD */
    MIPC_INTERNAL_EIF_IND_CMD_IFUP                          = 0,
    MIPC_INTERNAL_EIF_IND_CMD_IFDOWN                        = 1,
    MIPC_INTERNAL_EIF_IND_CMD_IPCHG                         = 4,
    MIPC_INTERNAL_EIF_IND_CMD_IFCHANGE                      = 5,
};
typedef enum mipc_internal_eif_ind_cmd_const_enum mipc_internal_eif_ind_cmd_const_enum;

enum mipc_internal_eipport_action_const_enum {
    mipc_internal_eipport_action_const_NONE = 0,
    /* INTERNAL_EIPPORT_ACTION */
    MIPC_INTERNAL_EIPPORT_ACTION_ALLOC                      = 0,
    MIPC_INTERNAL_EIPPORT_ACTION_FREE                       = 1,
};
typedef enum mipc_internal_eipport_action_const_enum mipc_internal_eipport_action_const_enum;

enum mipc_internal_eipport_result_const_enum {
    mipc_internal_eipport_result_const_NONE = 0,
    /* INTERNAL_EIPPORT_RESULT */
    MIPC_INTERNAL_EIPPORT_RESULT_FAILURE                    = 0,
    MIPC_INTERNAL_EIPPORT_RESULT_SUCCESS                    = 1,
};
typedef enum mipc_internal_eipport_result_const_enum mipc_internal_eipport_result_const_enum;

enum mipc_internal_eipspi_action_const_enum {
    mipc_internal_eipspi_action_const_NONE = 0,
    /* INTERNAL_EIPSPI_ACTION */
    MIPC_INTERNAL_EIPSPI_ACTION_ALLOC                       = 0,
    MIPC_INTERNAL_EIPSPI_ACTION_FREE                        = 1,
};
typedef enum mipc_internal_eipspi_action_const_enum mipc_internal_eipspi_action_const_enum;

enum mipc_internal_ho_progress_const_enum {
    mipc_internal_ho_progress_const_NONE = 0,
    /* INTERNAL_HO_PROGRESS */
    MIPC_INTERNAL_HO_PROGRESS_START                         = 0,
    MIPC_INTERNAL_HO_PROGRESS_STOP_SUCCESS                  = 1,
    MIPC_INTERNAL_HO_PROGRESS_STOP_FAILED                   = 0xFF,
};
typedef enum mipc_internal_ho_progress_const_enum mipc_internal_ho_progress_const_enum;

enum mipc_ssc_mode_enum_const_enum {
    mipc_ssc_mode_enum_const_NONE = 0,
    /* SSC_MODE_ENUM */
    MIPC_SSC_MODE_ENUM_NONE                                 = 0,
    MIPC_SSC_MODE_ENUM_SSC_MODE_1                           = 1,
    MIPC_SSC_MODE_ENUM_SSC_MODE_2                           = 2,
    MIPC_SSC_MODE_ENUM_SSC_MODE_3                           = 3,
    MIPC_SSC_MODE_ENUM_MAX                                  = 0x7F,
};
typedef enum mipc_ssc_mode_enum_const_enum mipc_ssc_mode_enum_const_enum;

enum mipc_nw_radio_state_const_enum {
    mipc_nw_radio_state_const_NONE = 0,
    /* NW_RADIO_STATE */
    MIPC_NW_RADIO_STATE_OFF                                 = 0,
    MIPC_NW_RADIO_STATE_ON                                  = 1,
};
typedef enum mipc_nw_radio_state_const_enum mipc_nw_radio_state_const_enum;

enum mipc_nw_radio_state_cause_const_enum {
    mipc_nw_radio_state_cause_const_NONE = 0,
    /* NW_RADIO_STATE_CAUSE */
    MIPC_NW_RADIO_STATE_CAUSE_UNSPECIFIED                   = 0,
    MIPC_NW_RADIO_STATE_CAUSE_DUPLEX_MODE_CHANGE            = 1,
    MIPC_NW_RADIO_STATE_CAUSE_POWER_OFF                     = 2,
    MIPC_NW_RADIO_STATE_CAUSE_SIM_SWITCH                    = 3,
};
typedef enum mipc_nw_radio_state_cause_const_enum mipc_nw_radio_state_cause_const_enum;

enum mipc_nw_provider_state_const_enum {
    mipc_nw_provider_state_const_NONE = 0,
    /* NW_PROVIDER_STATE */
    /*  */
    MIPC_NW_PROVIDER_STATE_UNKNOWN                          = 0,
    /*  */
    MIPC_NW_PROVIDER_STATE_AVAILABLE                        = 1,
    /*  */
    MIPC_NW_PROVIDER_STATE_CURRENT                          = 2,
    /*  */
    MIPC_NW_PROVIDER_STATE_FORBIDDEN                        = 3,
};
typedef enum mipc_nw_provider_state_const_enum mipc_nw_provider_state_const_enum;

enum mipc_nw_register_mode_const_enum {
    mipc_nw_register_mode_const_NONE = 0,
    /* NW_REGISTER_MODE */
    MIPC_NW_REGISTER_MODE_AUTOMATIC                         = 0,
    MIPC_NW_REGISTER_MODE_MANUAL                            = 1,
};
typedef enum mipc_nw_register_mode_const_enum mipc_nw_register_mode_const_enum;

enum mipc_nw_register_state_const_enum {
    mipc_nw_register_state_const_NONE = 0,
    /* NW_REGISTER_STATE */
    MIPC_NW_REGISTER_STATE_NOT_REGISTERED                   = 0,
    MIPC_NW_REGISTER_STATE_HOME                             = 1,
    MIPC_NW_REGISTER_STATE_SEARCHING                        = 2,
    MIPC_NW_REGISTER_STATE_DENIED                           = 3,
    MIPC_NW_REGISTER_STATE_UNKNOWN                          = 4,
    MIPC_NW_REGISTER_STATE_ROAMING                          = 5,
    MIPC_NW_REGISTER_STATE_HOME_SMS_ONLY                    = 6,
    MIPC_NW_REGISTER_STATE_ROAMING_SMS_ONLY                 = 7,
    MIPC_NW_REGISTER_STATE_ATTACHED_ECC_ONLY                = 8,
    MIPC_NW_REGISTER_STATE_HOME_CSFB_NOT_PREF               = 9,
    MIPC_NW_REGISTER_STATE_ROAMING_CSFB_NOT_PREF            = 10,
};
typedef enum mipc_nw_register_state_const_enum mipc_nw_register_state_const_enum;

enum mipc_nw_ps_const_enum {
    mipc_nw_ps_const_NONE = 0,
    /* NW_PS */
    MIPC_NW_PS_DETACH                                       = 0,
    MIPC_NW_PS_ATTACH                                       = 1,
};
typedef enum mipc_nw_ps_const_enum mipc_nw_ps_const_enum;

enum mipc_nw_ia_const_enum {
    mipc_nw_ia_const_NONE = 0,
    /* NW_IA */
    MIPC_NW_IA_DETACH                                       = 0,
    MIPC_NW_IA_ATTACH                                       = 1,
};
typedef enum mipc_nw_ia_const_enum mipc_nw_ia_const_enum;

enum mipc_nw_fast_dormancy_const_enum {
    mipc_nw_fast_dormancy_const_NONE = 0,
    /* NW_FAST_DORMANCY */
    MIPC_NW_FAST_DORMANCY_DISABLE                           = 0,
    MIPC_NW_FAST_DORMANCY_ENABLE                            = 1,
};
typedef enum mipc_nw_fast_dormancy_const_enum mipc_nw_fast_dormancy_const_enum;

enum mipc_nw_blacklist_type_const_enum {
    mipc_nw_blacklist_type_const_NONE = 0,
    /* NW_BLACKLIST_TYPE */
    MIPC_NW_BLACKLIST_TYPE_SIM                              = 0,
    MIPC_NW_BLACKLIST_TYPE_NETWORK                          = 1,
};
typedef enum mipc_nw_blacklist_type_const_enum mipc_nw_blacklist_type_const_enum;

enum mipc_nw_cell_type_const_enum {
    mipc_nw_cell_type_const_NONE = 0,
    /* NW_CELL_TYPE */
    MIPC_NW_CELL_TYPE_NONE                                  = 0,
    MIPC_NW_CELL_TYPE_GSM                                   = 1,
    MIPC_NW_CELL_TYPE_CDMA                                  = 2,
    MIPC_NW_CELL_TYPE_LTE                                   = 3,
    MIPC_NW_CELL_TYPE_UMTS                                  = 4,
    MIPC_NW_CELL_TYPE_TD_SCDMA                              = 5,
    MIPC_NW_CELL_TYPE_NR                                    = 6,
    /* Just valid when in NSA case, this means the cell info has LTE and NR. */
    MIPC_NW_CELL_TYPE_NSA_EXT                               = 7,
};
typedef enum mipc_nw_cell_type_const_enum mipc_nw_cell_type_const_enum;

enum mipc_nw_ch_lock_const_enum {
    mipc_nw_ch_lock_const_NONE = 0,
    /* NW_CH_LOCK */
    MIPC_NW_CH_LOCK_CANCEL                                  = 0,
    MIPC_NW_CH_LOCK_ENABLE_CH_LK_EM                         = 1,
    MIPC_NW_CH_LOCK_ENABLE_CH_LK_CBRS                       = 2,
    MIPC_NW_CH_LOCK_CONFIG_CH_LK_CBRS                       = 3,
};
typedef enum mipc_nw_ch_lock_const_enum mipc_nw_ch_lock_const_enum;

enum mipc_nw_ch_lock_mode_const_enum {
    mipc_nw_ch_lock_mode_const_NONE = 0,
    /* NW_CH_LOCK_MODE */
    MIPC_NW_CH_LOCK_MODE_IDLE_MODE_ONLY                     = 0,
    MIPC_NW_CH_LOCK_MODE_IDLE_MR                            = 1,
    MIPC_NW_CH_LOCK_MODE_IDLE_HOCCO                         = 2,
    MIPC_NW_CH_LOCK_MODE_IDLE_AND_CONNECTED                 = 3,
    MIPC_NW_CH_LOCK_MODE_UNCHANGED                          = 255,
};
typedef enum mipc_nw_ch_lock_mode_const_enum mipc_nw_ch_lock_mode_const_enum;

enum mipc_nw_data_speed_const_enum {
    mipc_nw_data_speed_const_NONE = 0,
    /* NW_DATA_SPEED */
    MIPC_NW_DATA_SPEED_NONE_SPECIFIED                       = 0x0000,
    MIPC_NW_DATA_SPEED_GPRS                                 = 0x0001,
    MIPC_NW_DATA_SPEED_EDGE                                 = 0x0002,
    MIPC_NW_DATA_SPEED_UMTS                                 = 0x0004,
    MIPC_NW_DATA_SPEED_HSDPA                                = 0x0008,
    MIPC_NW_DATA_SPEED_HSUPA                                = 0x0010,
    MIPC_NW_DATA_SPEED_HSDPA_UPA                            = 0x0018,
    MIPC_NW_DATA_SPEED_HSDPAP                               = 0x0020,
    MIPC_NW_DATA_SPEED_HSDPAP_UPA                           = 0x0030,
    MIPC_NW_DATA_SPEED_HSUPAP                               = 0x0040,
    MIPC_NW_DATA_SPEED_HSUPAP_DPA                           = 0x0048,
    MIPC_NW_DATA_SPEED_HSPAP                                = 0x0060,
    MIPC_NW_DATA_SPEED_DC_DPA                               = 0x0088,
    MIPC_NW_DATA_SPEED_DC_DPA_UPA                           = 0x0098,
    MIPC_NW_DATA_SPEED_DC_HSDPAP                            = 0x00a0,
    MIPC_NW_DATA_SPEED_DC_HSDPAP_UPA                        = 0x00b0,
    MIPC_NW_DATA_SPEED_DC_HSUPAP_DPA                        = 0x00c8,
    MIPC_NW_DATA_SPEED_DC_HSPAP                             = 0x00e0,
    MIPC_NW_DATA_SPEED_1XRTT                                = 0x0100,
    MIPC_NW_DATA_SPEED_HRPD                                 = 0x0200,
    MIPC_NW_DATA_SPEED_EHRPD                                = 0x0400,
    MIPC_NW_DATA_SPEED_LTE                                  = 0x1000,
    MIPC_NW_DATA_SPEED_LTE_CA                               = 0x2000,
    MIPC_NW_DATA_SPEED_ENDC                                 = 0x4000,
    MIPC_NW_DATA_SPEED_NR                                   = 0x8000,
    MIPC_NW_DATA_SPEED_NOT_CHANGE                           = 0xffff,
};
typedef enum mipc_nw_data_speed_const_enum mipc_nw_data_speed_const_enum;

enum mipc_nw_signal_type_const_enum {
    mipc_nw_signal_type_const_NONE = 0,
    /* NW_SIGNAL_TYPE */
    MIPC_NW_SIGNAL_TYPE_GSM                                 = 0,
    MIPC_NW_SIGNAL_TYPE_UMTS                                = 1,
    MIPC_NW_SIGNAL_TYPE_LTE                                 = 2,
    MIPC_NW_SIGNAL_TYPE_NR                                  = 3,
    MIPC_NW_SIGNAL_TYPE_NR_NSA                              = 4,
};
typedef enum mipc_nw_signal_type_const_enum mipc_nw_signal_type_const_enum;

enum mipc_nw_cscon_mode_const_enum {
    mipc_nw_cscon_mode_const_NONE = 0,
    /* NW_CSCON_MODE */
    MIPC_NW_CSCON_MODE_IDLE                                 = 0,
    MIPC_NW_CSCON_MODE_CONNECTED                            = 1,
    MIPC_NW_CSCON_MODE_UNKNOWN                              = 255,
};
typedef enum mipc_nw_cscon_mode_const_enum mipc_nw_cscon_mode_const_enum;

enum mipc_nw_cscon_state_const_enum {
    mipc_nw_cscon_state_const_NONE = 0,
    /* NW_CSCON_STATE */
    MIPC_NW_CSCON_STATE_UTRAN_URA_PCH                       = 0,
    MIPC_NW_CSCON_STATE_UTRAN_CELL_PCH                      = 1,
    MIPC_NW_CSCON_STATE_UTRAN_CELL_FACH                     = 2,
    MIPC_NW_CSCON_STATE_UTRAN_CELL_DCH                      = 3,
    MIPC_NW_CSCON_STATE_GERAN_CS_CONNECTED                  = 4,
    MIPC_NW_CSCON_STATE_GERAN_PS_CONNECTED                  = 5,
    MIPC_NW_CSCON_STATE_GERAN_CS_PS_CONNECTED               = 6,
    MIPC_NW_CSCON_STATE_EUTRAN_CONNECTED                    = 7,
    MIPC_NW_CSCON_STATE_NR_RAN_CONNECTED                    = 8,
    MIPC_NW_CSCON_STATE_NR_RAN_INACTIVE                     = 8,
    MIPC_NW_CSCON_STATE_UNKNOWN                             = 255,
};
typedef enum mipc_nw_cscon_state_const_enum mipc_nw_cscon_state_const_enum;

enum mipc_nw_cscon_access_const_enum {
    mipc_nw_cscon_access_const_NONE = 0,
    /* NW_CSCON_ACCESS */
    MIPC_NW_CSCON_ACCESS_GERAN                              = 0,
    MIPC_NW_CSCON_ACCESS_UTRAN_TDD                          = 1,
    MIPC_NW_CSCON_ACCESS_UTRAN_FDD                          = 2,
    MIPC_NW_CSCON_ACCESS_EUTRAN_TDD                         = 3,
    MIPC_NW_CSCON_ACCESS_EUTRAN_FDD                         = 4,
    MIPC_NW_CSCON_ACCESS_NR                                 = 5,
    MIPC_NW_CSCON_ACCESS_UNKNOWN                            = 255,
};
typedef enum mipc_nw_cscon_access_const_enum mipc_nw_cscon_access_const_enum;

enum mipc_nw_cscon_core_network_const_enum {
    mipc_nw_cscon_core_network_const_NONE = 0,
    /* NW_CSCON_CORE_NETWORK */
    MIPC_NW_CSCON_CORE_NETWORK_EPC                          = 0,
    MIPC_NW_CSCON_CORE_NETWORK_5GCN                         = 1,
    MIPC_NW_CSCON_CORE_NETWORK_UNKNOWN                      = 255,
};
typedef enum mipc_nw_cscon_core_network_const_enum mipc_nw_cscon_core_network_const_enum;

enum mipc_nw_prefer_rat_type_const_enum {
    mipc_nw_prefer_rat_type_const_NONE = 0,
    /* NW_PREFER_RAT_TYPE */
    MIPC_NW_PREFER_RAT_TYPE_GSM                             = 1,
    MIPC_NW_PREFER_RAT_TYPE_UMTS                            = 2,
    MIPC_NW_PREFER_RAT_TYPE_LTE                             = 4,
    MIPC_NW_PREFER_RAT_TYPE_NR                              = 128,
};
typedef enum mipc_nw_prefer_rat_type_const_enum mipc_nw_prefer_rat_type_const_enum;

enum mipc_nw_lte_carrier_arrregation_switch_const_enum {
    mipc_nw_lte_carrier_arrregation_switch_const_NONE = 0,
    /* NW_LTE_CARRIER_ARRREGATION_SWITCH */
    MIPC_NW_LTE_CARRIER_ARRREGATION_SWITCH_TURNOFF          = 0,
    MIPC_NW_LTE_CARRIER_ARRREGATION_SWITCH_TURNON           = 1,
};
typedef enum mipc_nw_lte_carrier_arrregation_switch_const_enum mipc_nw_lte_carrier_arrregation_switch_const_enum;

enum mipc_nw_ps_cs_reg_state_const_enum {
    mipc_nw_ps_cs_reg_state_const_NONE = 0,
    /* NW_PS_CS_REG_STATE */
    MIPC_NW_PS_CS_REG_STATE_IN_SERVICE                      = 0,
    MIPC_NW_PS_CS_REG_STATE_OUT_OF_SERVICE                  = 1,
    MIPC_NW_PS_CS_REG_STATE_EMERGENCY_ONLY                  = 2,
    MIPC_NW_PS_CS_REG_STATE_POWER_OFF                       = 3,
};
typedef enum mipc_nw_ps_cs_reg_state_const_enum mipc_nw_ps_cs_reg_state_const_enum;

enum mipc_nw_ps_cs_roaming_type_const_enum {
    mipc_nw_ps_cs_roaming_type_const_NONE = 0,
    /* NW_PS_CS_ROAMING_TYPE */
    MIPC_NW_PS_CS_ROAMING_TYPE_NOT_ROAMING                  = 0,
    MIPC_NW_PS_CS_ROAMING_TYPE_UNKNOWN                      = 1,
    MIPC_NW_PS_CS_ROAMING_TYPE_DOMESTIC                     = 2,
    MIPC_NW_PS_CS_ROAMING_TYPE_INTERNATIONAL                = 3,
};
typedef enum mipc_nw_ps_cs_roaming_type_const_enum mipc_nw_ps_cs_roaming_type_const_enum;

enum mipc_nw_ril_ps_cs_reg_state_const_enum {
    mipc_nw_ril_ps_cs_reg_state_const_NONE = 0,
    /* NW_RIL_PS_CS_REG_STATE */
    MIPC_NW_RIL_PS_CS_REG_STATE_NOT_REGISTERED_AND_NOT_SEARCHING = 0,
    MIPC_NW_RIL_PS_CS_REG_STATE_HOME_NETWORK                = 1,
    MIPC_NW_RIL_PS_CS_REG_STATE_NOT_REGISTERED_AND_SEARCHING = 2,
    MIPC_NW_RIL_PS_CS_REG_STATE_REG_DENIED                  = 3,
    MIPC_NW_RIL_PS_CS_REG_STATE_UNKNOWN                     = 4,
    MIPC_NW_RIL_PS_CS_REG_STATE_ROAMING                     = 5,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED1           = 6,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED2           = 7,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED3           = 8,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED4           = 9,
    MIPC_NW_RIL_PS_CS_REG_STATE_NOT_REGISTERED_AND_NOT_SEARCHING_EMERGENCY_CALL_ENABLED = 10,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED5           = 11,
    MIPC_NW_RIL_PS_CS_REG_STATE_NOT_REGISTERED_AND_SEARCHING_EMERGENCY_CALL_ENABLED = 12,
    MIPC_NW_RIL_PS_CS_REG_STATE_REG_DENIED_EMERGENCY_CALL_ENABLED = 13,
    MIPC_NW_RIL_PS_CS_REG_STATE_UNKNOWN_EMERGENCY_CALL_ENABLED = 14,
    MIPC_NW_RIL_PS_CS_REG_STATE_GOOGLE_UNDEFINED6           = 15,
};
typedef enum mipc_nw_ril_ps_cs_reg_state_const_enum mipc_nw_ril_ps_cs_reg_state_const_enum;

enum mipc_nw_cellmeasurement_scan_type_const_enum {
    mipc_nw_cellmeasurement_scan_type_const_NONE = 0,
    /* NW_CELLMEASUREMENT_SCAN_TYPE */
    MIPC_NW_CELLMEASUREMENT_SCAN_TYPE_ONLINE_CUS_DEP        = 0,
    MIPC_NW_CELLMEASUREMENT_SCAN_TYPE_OFFLINE               = 1,
    MIPC_NW_CELLMEASUREMENT_SCAN_TYPE_ONLINE_NETWORK_DEP    = 2,
};
typedef enum mipc_nw_cellmeasurement_scan_type_const_enum mipc_nw_cellmeasurement_scan_type_const_enum;

enum mipc_nw_band_option_const_enum {
    mipc_nw_band_option_const_NONE = 0,
    /* NW_BAND_OPTION */
    /* Current setting bands. */
    MIPC_NW_BAND_OPTION_CURRENT_SETTING                     = 0,
    /* Which bands md system supports. */
    MIPC_NW_BAND_OPTION_SYSTEM_SUPPORT                      = 1,
};
typedef enum mipc_nw_band_option_const_enum mipc_nw_band_option_const_enum;

enum mipc_nw_signal_threshold_mode_const_enum {
    mipc_nw_signal_threshold_mode_const_NONE = 0,
    /* NW_SIGNAL_THRESHOLD_MODE */
    MIPC_NW_SIGNAL_THRESHOLD_MODE_MAP_VALUE                 = 0,
    MIPC_NW_SIGNAL_THRESHOLD_MODE_RAW                       = 1,
};
typedef enum mipc_nw_signal_threshold_mode_const_enum mipc_nw_signal_threshold_mode_const_enum;

enum mipc_nw_roaming_mode_const_enum {
    mipc_nw_roaming_mode_const_NONE = 0,
    /* NW_ROAMING_MODE */
    MIPC_NW_ROAMING_MODE_DIS_NONE                           = 0x0,
    MIPC_NW_ROAMING_MODE_DIS_INTERNATIONAL                  = 0x1,
    MIPC_NW_ROAMING_MODE_DIS_NATIONAL                       = 0x2,
    MIPC_NW_ROAMING_MODE_DIS_H_P_PLMN_SEARCH                = 0x4,
};
typedef enum mipc_nw_roaming_mode_const_enum mipc_nw_roaming_mode_const_enum;

enum mipc_nw_ind_type_const_enum {
    mipc_nw_ind_type_const_NONE = 0,
    /* NW_IND_TYPE */
    MIPC_NW_IND_TYPE_ECELL                                  = 1,
};
typedef enum mipc_nw_ind_type_const_enum mipc_nw_ind_type_const_enum;

enum mipc_nw_rf_fault_code_const_enum {
    mipc_nw_rf_fault_code_const_NONE = 0,
    /* NW_RF_FAULT_CODE */
    MIPC_NW_RF_FAULT_CODE_RFC                               = 1,
    MIPC_NW_RF_FAULT_CODE_CALIBRATION                       = 2,
    MIPC_NW_RF_FAULT_CODE_OTHERS                            = 3,
};
typedef enum mipc_nw_rf_fault_code_const_enum mipc_nw_rf_fault_code_const_enum;

enum mipc_nw_rf_defective_const_enum {
    mipc_nw_rf_defective_const_NONE = 0,
    /* NW_RF_DEFECTIVE */
    MIPC_NW_RF_DEFECTIVE_INDEFECTIVE                        = 0,
    MIPC_NW_RF_DEFECTIVE_DEFECTIVE                          = 1,
};
typedef enum mipc_nw_rf_defective_const_enum mipc_nw_rf_defective_const_enum;

enum mipc_nw_tuw_id_const_enum {
    mipc_nw_tuw_id_const_NONE = 0,
    /* NW_TUW_ID */
    MIPC_NW_TUW_ID_TUW1                                     = 1,
    MIPC_NW_TUW_ID_TUW2                                     = 2,
    MIPC_NW_TUW_ID_TUW3                                     = 3,
};
typedef enum mipc_nw_tuw_id_const_enum mipc_nw_tuw_id_const_enum;

enum mipc_sim_status_const_enum {
    mipc_sim_status_const_NONE = 0,
    /* SIM_STATUS */
    /* sim not inserted */
    MIPC_SIM_STATUS_NOT_INSERT                              = 0,
    /* CPIN response BUSY */
    MIPC_SIM_STATUS_BUSY                                    = 1,
    /* CPIN response READY */
    MIPC_SIM_STATUS_READY                                   = 2,
    /* MT is waiting SIM PIN to be given  */
    MIPC_SIM_STATUS_SIM_PIN                                 = 3,
    /* MT is waiting SIM PUK to be given  */
    MIPC_SIM_STATUS_SIM_PUK                                 = 4,
    /* MT is waiting phone to SIM card password to be givenn  */
    MIPC_SIM_STATUS_PH_SIM_PIN                              = 5,
    /* MT is waiting phone-to-very first SIM card password to be given  */
    MIPC_SIM_STATUS_PH_FSIM_PIN                             = 6,
    /* MT is waiting phone-to-very first SIM card unblocking password to be given  */
    MIPC_SIM_STATUS_PH_FSIM_PUK                             = 7,
    /* MT is waiting SIM PIN2 to be given  */
    MIPC_SIM_STATUS_SIM_PIN2                                = 8,
    /* MT is waiting SIM PUK2 to be given n  */
    MIPC_SIM_STATUS_SIM_PUK2                                = 9,
    /* MT is waiting network personalization password to be given */
    MIPC_SIM_STATUS_PH_NET_PIN                              = 10,
    /* MT is waiting network personalization unblocking password to be given */
    MIPC_SIM_STATUS_PH_NET_PUK                              = 11,
    /* MT is waiting network subset personalization password to be given  */
    MIPC_SIM_STATUS_PH_NETSUB_PIN                           = 12,
    /* MT is waiting network subset personalization unblocking password to be given  */
    MIPC_SIM_STATUS_PH_NETSUB_PUK                           = 13,
    /* MT is waiting service provider personalization password to be given  */
    MIPC_SIM_STATUS_PH_SP_PIN                               = 14,
    /* MT is waiting service provider personalization unblocking password to be given  */
    MIPC_SIM_STATUS_PH_SP_PUK                               = 15,
    /* MT is waiting corporate personalization password to be given */
    MIPC_SIM_STATUS_PH_CORP_PIN                             = 16,
    /* MT is waiting corporate personalization unblocking password to be given */
    MIPC_SIM_STATUS_PH_CORP_PUK                             = 17,
    /* CARD Reboot */
    MIPC_SIM_STATUS_CARD_REBOOT                             = 18,
    /* CARD restricted  */
    MIPC_SIM_STATUS_CARD_RESTRICTED                         = 19,
    /* eUICC but no profile  */
    MIPC_SIM_STATUS_EMPT_EUICC                              = 20,
    /* SIM initialization done after CPIN ready  */
    MIPC_SIM_STATUS_COMPLETE_READY                          = 21,
};
typedef enum mipc_sim_status_const_enum mipc_sim_status_const_enum;

enum mipc_sim_state_const_enum {
    mipc_sim_state_const_NONE = 0,
    /* SIM_STATE */
    MIPC_SIM_STATE_UNKNOWN                                  = 0,
    MIPC_SIM_STATE_OFFEMPTY                                 = 1,
    MIPC_SIM_STATE_OFF                                      = 2,
    MIPC_SIM_STATE_EMPTY                                    = 3,
    MIPC_SIM_STATE_NOTREADY                                 = 4,
    MIPC_SIM_STATE_ACTIVE                                   = 5,
    MIPC_SIM_STATE_ERROR                                    = 6,
    MIPC_SIM_STATE_ACTIVE_ESIM                              = 7,
    MIPC_SIM_STATE_ACTIVE_ESIM_NOPROFILE                    = 8,
};
typedef enum mipc_sim_state_const_enum mipc_sim_state_const_enum;

enum mipc_sim_card_present_state_const_enum {
    mipc_sim_card_present_state_const_NONE = 0,
    /* SIM_CARD_PRESENT_STATE */
    MIPC_SIM_CARD_PRESENT_STATE_ABSENT                      = 0,
    MIPC_SIM_CARD_PRESENT_STATE_PRESENT                     = 1,
    MIPC_SIM_CARD_PRESENT_STATE_ERROR                       = 2,
    MIPC_SIM_CARD_PRESENT_STATE_RESTRICTED                  = 3,
};
typedef enum mipc_sim_card_present_state_const_enum mipc_sim_card_present_state_const_enum;

enum mipc_sim_sub_state_const_enum {
    mipc_sim_sub_state_const_NONE = 0,
    /* SIM_SUB_STATE */
    MIPC_SIM_SUB_STATE_UNKNOWN                              = 0,
    MIPC_SIM_SUB_STATE_PLUG_IN                              = 1,
    MIPC_SIM_SUB_STATE_PLUG_OUT                             = 2,
    MIPC_SIM_SUB_STATE_RECOVERY_START                       = 3,
    MIPC_SIM_SUB_STATE_RECOVERY_EN                          = 4,
};
typedef enum mipc_sim_sub_state_const_enum mipc_sim_sub_state_const_enum;

enum mipc_sim_pin_type_const_enum {
    mipc_sim_pin_type_const_NONE = 0,
    /* SIM_PIN_TYPE */
    MIPC_SIM_PIN_TYPE_NONE                                  = 0,
    MIPC_SIM_PIN_TYPE_PIN1                                  = 1,
    MIPC_SIM_PIN_TYPE_PIN2                                  = 2,
    MIPC_SIM_PIN_TYPE_PUK1                                  = 3,
    MIPC_SIM_PIN_TYPE_PUK2                                  = 4,
    MIPC_SIM_PIN_TYPE_NW                                    = 5,
    MIPC_SIM_PIN_TYPE_SUB_NW                                = 6,
    MIPC_SIM_PIN_TYPE_SP                                    = 7,
    MIPC_SIM_PIN_TYPE_CORP                                  = 8,
    MIPC_SIM_PIN_TYPE_SIM                                   = 9,
    MIPC_SIM_PIN_TYPE_NS_SP                                 = 10,
    MIPC_SIM_PIN_TYPE_SIM_C                                 = 11,
    MIPC_SIM_PIN_TYPE_PUK_N                                 = 12,
    MIPC_SIM_PIN_TYPE_PUK_NS                                = 13,
    MIPC_SIM_PIN_TYPE_PUK_SP                                = 14,
    MIPC_SIM_PIN_TYPE_PUK_C                                 = 15,
    MIPC_SIM_PIN_TYPE_PUK_SIM                               = 16,
    MIPC_SIM_PIN_TYPE_PUK_NS_SP                             = 17,
    MIPC_SIM_PIN_TYPE_PUK_SIM_C                             = 18,
};
typedef enum mipc_sim_pin_type_const_enum mipc_sim_pin_type_const_enum;

enum mipc_sim_pin_protection_const_enum {
    mipc_sim_pin_protection_const_NONE = 0,
    /* SIM_PIN_PROTECTION */
    MIPC_SIM_PIN_PROTECTION_DISABLE                         = 0,
    MIPC_SIM_PIN_PROTECTION_ENABLE                          = 1,
};
typedef enum mipc_sim_pin_protection_const_enum mipc_sim_pin_protection_const_enum;

enum mipc_sim_pin_mode_const_enum {
    mipc_sim_pin_mode_const_NONE = 0,
    /* SIM_PIN_MODE */
    MIPC_SIM_PIN_MODE_NOT_SUPPORT                           = 0,
    MIPC_SIM_PIN_MODE_ENABLE                                = 1,
    MIPC_SIM_PIN_MODE_DISABLE                               = 2,
};
typedef enum mipc_sim_pin_mode_const_enum mipc_sim_pin_mode_const_enum;

enum mipc_sim_pin_format_const_enum {
    mipc_sim_pin_format_const_NONE = 0,
    /* SIM_PIN_FORMAT */
    MIPC_SIM_PIN_FORMAT_UNKNOWN                             = 0,
    MIPC_SIM_PIN_FORMAT_NUMERIC                             = 1,
    MIPC_SIM_PIN_FORMAT_ALPHA_NUMERIC                       = 2,
};
typedef enum mipc_sim_pin_format_const_enum mipc_sim_pin_format_const_enum;

enum mipc_sim_pin_state_const_enum {
    mipc_sim_pin_state_const_NONE = 0,
    /* SIM_PIN_STATE */
    MIPC_SIM_PIN_STATE_UNLOCKED                             = 0,
    MIPC_SIM_PIN_STATE_LOCKED                               = 1,
};
typedef enum mipc_sim_pin_state_const_enum mipc_sim_pin_state_const_enum;

enum mipc_sim_pin_operation_const_enum {
    mipc_sim_pin_operation_const_NONE = 0,
    /* SIM_PIN_OPERATION */
    MIPC_SIM_PIN_OPERATION_ENTER                            = 0,
    MIPC_SIM_PIN_OPERATION_ENABLE                           = 1,
    MIPC_SIM_PIN_OPERATION_DISABLE                          = 2,
    MIPC_SIM_PIN_OPERATION_CHANGE                           = 3,
};
typedef enum mipc_sim_pin_operation_const_enum mipc_sim_pin_operation_const_enum;

enum mipc_sim_pass_through_mode_const_enum {
    mipc_sim_pass_through_mode_const_NONE = 0,
    /* SIM_PASS_THROUGH_MODE */
    MIPC_SIM_PASS_THROUGH_MODE_DISABLE                      = 0,
    MIPC_SIM_PASS_THROUGH_MODE_ENABLE                       = 1,
};
typedef enum mipc_sim_pass_through_mode_const_enum mipc_sim_pass_through_mode_const_enum;

enum mipc_sim_app_type_const_enum {
    mipc_sim_app_type_const_NONE = 0,
    /* SIM_APP_TYPE */
    /* unknown type */
    MIPC_SIM_APP_TYPE_UNKNOWN                               = 0,
    /* legacy SIM directories rooted at the MF */
    MIPC_SIM_APP_TYPE_MF                                    = 1,
    /* legacy SIM directories rooted at the DF_GSM */
    MIPC_SIM_APP_TYPE_MFSIM                                 = 2,
    /* legacy SIM directories rooted at the DF_CDMA */
    MIPC_SIM_APP_TYPE_MFRUIM                                = 3,
    /* USIM application */
    MIPC_SIM_APP_TYPE_USIM                                  = 4,
    /* CSIM application */
    MIPC_SIM_APP_TYPE_CSIM                                  = 5,
    /* ISIM application */
    MIPC_SIM_APP_TYPE_ISIM                                  = 6,
};
typedef enum mipc_sim_app_type_const_enum mipc_sim_app_type_const_enum;

enum mipc_sim_access_command_const_enum {
    mipc_sim_access_command_const_NONE = 0,
    /* SIM_ACCESS_COMMAND */
    MIPC_SIM_ACCESS_COMMAND_READ_BINARY                     = 176,
    MIPC_SIM_ACCESS_COMMAND_READ_RECORD                     = 178,
    MIPC_SIM_ACCESS_COMMAND_GET_RESPONSE                    = 192,
    MIPC_SIM_ACCESS_COMMAND_UPDATE_BINARY                   = 214,
    MIPC_SIM_ACCESS_COMMAND_UPDATE_RECORD                   = 220,
    MIPC_SIM_ACCESS_COMMAND_STATUS                          = 242,
    MIPC_SIM_ACCESS_COMMAND_RETRIEVE_DATA                   = 203,
    MIPC_SIM_ACCESS_COMMAND_SET_DATA                        = 219,
};
typedef enum mipc_sim_access_command_const_enum mipc_sim_access_command_const_enum;

enum mipc_sim_file_accessibility_const_enum {
    mipc_sim_file_accessibility_const_NONE = 0,
    /* SIM_FILE_ACCESSIBILITY */
    MIPC_SIM_FILE_ACCESSIBILITY_UNKNOWN                     = 0,
    MIPC_SIM_FILE_ACCESSIBILITY_NOTSHAREABLE                = 1,
    MIPC_SIM_FILE_ACCESSIBILITY_SHAREABLE                   = 2,
};
typedef enum mipc_sim_file_accessibility_const_enum mipc_sim_file_accessibility_const_enum;

enum mipc_sim_file_type_const_enum {
    mipc_sim_file_type_const_NONE = 0,
    /* SIM_FILE_TYPE */
    MIPC_SIM_FILE_TYPE_UNKNOWN                              = 0,
    MIPC_SIM_FILE_TYPE_WORKING_EF                           = 1,
    MIPC_SIM_FILE_TYPE_INTERNAL_EF                          = 2,
    MIPC_SIM_FILE_TYPE_DF_OR_ADF                            = 3,
};
typedef enum mipc_sim_file_type_const_enum mipc_sim_file_type_const_enum;

enum mipc_sim_file_structure_const_enum {
    mipc_sim_file_structure_const_NONE = 0,
    /* SIM_FILE_STRUCTURE */
    MIPC_SIM_FILE_STRUCTURE_UNKNOWN                         = 0,
    MIPC_SIM_FILE_STRUCTURE_TRANSPARENT                     = 1,
    MIPC_SIM_FILE_STRUCTURE_CYCLIC                          = 2,
    MIPC_SIM_FILE_STRUCTURE_LINEAR                          = 3,
    MIPC_SIM_FILE_STRUCTURE_BERTLV                          = 4,
};
typedef enum mipc_sim_file_structure_const_enum mipc_sim_file_structure_const_enum;

enum mipc_sim_enabled_const_enum {
    mipc_sim_enabled_const_NONE = 0,
    /* SIM_ENABLED */
    MIPC_SIM_ENABLED_UNKNOWN                                = 0,
    MIPC_SIM_ENABLED_ENABLED_NOT_VERIFIED                   = 1,
    MIPC_SIM_ENABLED_ENABLED_VERIFIED                       = 2,
    MIPC_SIM_ENABLED_DISABLED                               = 3,
    MIPC_SIM_ENABLED_ENABLED_BLOCKED                        = 4,
    MIPC_SIM_ENABLED_ENABLED_PERM_BLOCKED                   = 5,
};
typedef enum mipc_sim_enabled_const_enum mipc_sim_enabled_const_enum;

enum mipc_sim_app_state_const_enum {
    mipc_sim_app_state_const_NONE = 0,
    /* SIM_APP_STATE */
    MIPC_SIM_APP_STATE_UNKNOWN                              = 0,
    MIPC_SIM_APP_STATE_DETECTED                             = 1,
    MIPC_SIM_APP_STATE_PIN                                  = 2,
    MIPC_SIM_APP_STATE_PUK                                  = 3,
    MIPC_SIM_APP_STATE_SUBSTATE                             = 4,
    MIPC_SIM_APP_STATE_READY                                = 5,
};
typedef enum mipc_sim_app_state_const_enum mipc_sim_app_state_const_enum;

enum mipc_sim_app_sub_status_const_enum {
    mipc_sim_app_sub_status_const_NONE = 0,
    /* SIM_APP_SUB_STATUS */
    MIPC_SIM_APP_SUB_STATUS_UNKNOWN                         = 0,
    MIPC_SIM_APP_SUB_STATUS_IN_PROGRESS                     = 1,
    MIPC_SIM_APP_SUB_STATUS_READY                           = 2,
    MIPC_SIM_APP_SUB_STATUS_NW                              = 3,
    MIPC_SIM_APP_SUB_STATUS_NW_PUK                          = 4,
    MIPC_SIM_APP_SUB_STATUS_SUB_NW                          = 5,
    MIPC_SIM_APP_SUB_STATUS_SUB_NW_PUK                      = 6,
    MIPC_SIM_APP_SUB_STATUS_CORP                            = 7,
    MIPC_SIM_APP_SUB_STATUS_CORP_PUK                        = 8,
    MIPC_SIM_APP_SUB_STATUS_SP                              = 9,
    MIPC_SIM_APP_SUB_STATUS_SP_PUK                          = 10,
    MIPC_SIM_APP_SUB_STATUS_IMSI                            = 11,
    MIPC_SIM_APP_SUB_STATUS_IMSI_PUK                        = 12,
};
typedef enum mipc_sim_app_sub_status_const_enum mipc_sim_app_sub_status_const_enum;

enum mipc_sim_cause_const_enum {
    mipc_sim_cause_const_NONE = 0,
    /* SIM_CAUSE */
    MIPC_SIM_CAUSE_CARD_REMOVED                             = 0,
    MIPC_SIM_CAUSE_ACCESS_ERROR                             = 1,
    MIPC_SIM_CAUSE_SIM_REFRESH                              = 2,
    MIPC_SIM_CAUSE_SIM_REFRESH_POWER_OFF                    = 3,
    MIPC_SIM_CAUSE_SIM_PUK1                                 = 4,
    MIPC_SIM_CAUSE_SIM_ACCESS_PROFILE_ON                    = 5,
    MIPC_SIM_CAUSE_SIM_ACCESS_PROFILE_OFF                   = 6,
    MIPC_SIM_CAUSE_DUAIL_DISCONNECTED                       = 7,
    MIPC_SIM_CAUSE_DUAIL_CONNECTED                          = 8,
    MIPC_SIM_CAUSE_SIM_VSIM_ON                              = 9,
    MIPC_SIM_CAUSE_SIM_VSIM_OFF                             = 10,
    MIPC_SIM_CAUSE_SIM_PLUG_OUT                             = 11,
    MIPC_SIM_CAUSE_SIM_PLUG_IN                              = 12,
    MIPC_SIM_CAUSE_SIM_RECOVERY_START                       = 13,
    MIPC_SIM_CAUSE_SIM_RECOVERY_END                         = 14,
    MIPC_SIM_CAUSE_SIM_IMEI_LOCK_FAIL                       = 15,
    MIPC_SIM_CAUSE_SIM_OP09_LOCK_FAIL                       = 16,
    MIPC_SIM_CAUSE_SIM_CARD_TECHNICAL_PROBLEM               = 17,
    MIPC_SIM_CAUSE_SIM_POWER_OFF_BY_L4                      = 18,
    MIPC_SIM_CAUSE_SIM_OP20_IMEI_LOCK                       = 19,
    MIPC_SIM_CAUSE_SIM_PLUG_IN_REPLACED                     = 20,
    MIPC_SIM_CAUSE_SIM_OP01_LOCK                            = 21,
    MIPC_SIM_CAUSE_SIM_OP01_UNLOCK                          = 22,
    MIPC_SIM_CAUSE_SIM_FAST_RECOVERY_START                  = 23,
    MIPC_SIM_CAUSE_SIM_FAST_RECOVERY_SUCCESS                = 24,
    MIPC_SIM_CAUSE_SIM_TRAY_PLUG_OUT                        = 25,
    MIPC_SIM_CAUSE_SIM_PLUG_IN_NO_INIT                      = 26,
    MIPC_SIM_CAUSE_SIM_PRESENCE_DETECTION_FAIL              = 27,
    MIPC_SIM_CAUSE_SIM_STATE_DISABLE                        = 28,
    MIPC_SIM_CAUSE_SIM_STATE_ENABLE                         = 29,
};
typedef enum mipc_sim_cause_const_enum mipc_sim_cause_const_enum;

enum mipc_sms_state_const_enum {
    mipc_sms_state_const_NONE = 0,
    /* SMS_STATE */
    /* some SMS related operation would be baned because of not initialized */
    MIPC_SMS_STATE_NOT_INITIALIZED                          = 0,
    /* SIM_OK & SMS_MODULE_INITIALIZED, sms operation permit now */
    MIPC_SMS_STATE_INITIALIZED                              = 1,
};
typedef enum mipc_sms_state_const_enum mipc_sms_state_const_enum;

enum mipc_sms_format_const_enum {
    mipc_sms_format_const_NONE = 0,
    /* SMS_FORMAT */
    MIPC_SMS_FORMAT_PDU                                     = 0,
    MIPC_SMS_FORMAT_TEXT                                    = 1,
    MIPC_SMS_FORMAT_CDMA                                    = 2,
    /* for other mipc than cfg */
    MIPC_SMS_FORMAT_PDU_3GPP2                               = 4,
    MIPC_SMS_FORMAT_QUERY                                   = 0xFD,
    MIPC_SMS_FORMAT_NULL                                    = 0xFE,
    MIPC_SMS_FORMAT_INVALID                                 = 0xFF,
};
typedef enum mipc_sms_format_const_enum mipc_sms_format_const_enum;

enum mipc_sms_cbm_type_const_enum {
    mipc_sms_cbm_type_const_NONE = 0,
    /* SMS_CBM_TYPE */
    MIPC_SMS_CBM_TYPE_ETWS_PRIMARY                          = 0x00000001,
    MIPC_SMS_CBM_TYPE_ETWS_SECONDARY                        = 0x00000002,
    MIPC_SMS_CBM_TYPE_CMAS                                  = 0x00000004,
    MIPC_SMS_CBM_TYPE_OTHERS                                = 0x80000000,
};
typedef enum mipc_sms_cbm_type_const_enum mipc_sms_cbm_type_const_enum;

enum mipc_sms_flag_const_enum {
    mipc_sms_flag_const_NONE = 0,
    /* SMS_FLAG */
    MIPC_SMS_FLAG_ALL                                       = 0,
    MIPC_SMS_FLAG_NEW                                       = 1,
    MIPC_SMS_FLAG_OLD                                       = 2,
    MIPC_SMS_FLAG_SENT                                      = 3,
    MIPC_SMS_FLAG_DRAFT                                     = 4,
    MIPC_SMS_FLAG_INDEX                                     = 5,
    MIPC_SMS_FLAG_INVALID                                   = 0xFF,
};
typedef enum mipc_sms_flag_const_enum mipc_sms_flag_const_enum;

enum mipc_sms_status_const_enum {
    mipc_sms_status_const_NONE = 0,
    /* SMS_STATUS */
    MIPC_SMS_STATUS_REC_UNREAD                              = 0,
    MIPC_SMS_STATUS_REC_READ                                = 1,
    MIPC_SMS_STATUS_STO_UNSENT                              = 2,
    MIPC_SMS_STATUS_STO_SENT                                = 3,
    MIPC_SMS_STATUS_INVALID                                 = 0xFF,
};
typedef enum mipc_sms_status_const_enum mipc_sms_status_const_enum;

enum mipc_sms_class_const_enum {
    mipc_sms_class_const_NONE = 0,
    /* SMS_CLASS */
    MIPC_SMS_CLASS_0                                        = 0,
    MIPC_SMS_CLASS_1                                        = 1,
    MIPC_SMS_CLASS_2                                        = 2,
    MIPC_SMS_CLASS_3                                        = 3,
    MIPC_SMS_CLASS_NONE                                     = 0xFE,
    MIPC_SMS_CLASS_INVALID                                  = 0xFF,
};
typedef enum mipc_sms_class_const_enum mipc_sms_class_const_enum;

enum mipc_sms_store_flag_const_enum {
    mipc_sms_store_flag_const_NONE = 0,
    /* SMS_STORE_FLAG */
    MIPC_SMS_STORE_FLAG_NONE                                = 0x00000000,
    MIPC_SMS_STORE_FLAG_STORE_FULL                          = 0x00000001,
    MIPC_SMS_STORE_FLAG_NEW_MESSAGE                         = 0x00000002,
};
typedef enum mipc_sms_store_flag_const_enum mipc_sms_store_flag_const_enum;

enum mipc_sms_storage_const_enum {
    mipc_sms_storage_const_NONE = 0,
    /* SMS_STORAGE */
    MIPC_SMS_STORAGE_SIM                                    = 0,
    MIPC_SMS_STORAGE_ME                                     = 1,
    MIPC_SMS_STORAGE_TE                                     = 2,
    MIPC_SMS_STORAGE_MT                                     = 4,
    MIPC_SMS_STORAGE_QUERY                                  = 0xFD,
    MIPC_SMS_STORAGE_NULL                                   = 0xFE,
    MIPC_SMS_STORAGE_INVALID                                = 0xFF,
};
typedef enum mipc_sms_storage_const_enum mipc_sms_storage_const_enum;

enum mipc_sms_ack_const_enum {
    mipc_sms_ack_const_NONE = 0,
    /* SMS_ACK */
    MIPC_SMS_ACK_NONEED                                     = 0,
    MIPC_SMS_ACK_NEEDED                                     = 1,
    MIPC_SMS_ACK_QUERY                                      = 0xFD,
    MIPC_SMS_ACK_NULL                                       = 0xFE,
    MIPC_SMS_ACK_INVALID                                    = 0xFF,
};
typedef enum mipc_sms_ack_const_enum mipc_sms_ack_const_enum;

enum mipc_new_sms_ack_const_enum {
    mipc_new_sms_ack_const_NONE = 0,
    /* NEW_SMS_ACK */
    MIPC_NEW_SMS_ACK_RP_ACK                                 = 0,
    MIPC_NEW_SMS_ACK_RP_ERROR                               = 1,
    MIPC_NEW_SMS_ACK_INVALID                                = 0xFF,
};
typedef enum mipc_new_sms_ack_const_enum mipc_new_sms_ack_const_enum;

enum mipc_sms_send_save_const_enum {
    mipc_sms_send_save_const_NONE = 0,
    /* SMS_SEND_SAVE */
    MIPC_SMS_SEND_SAVE_NO_SAVE                              = 0,
    MIPC_SMS_SEND_SAVE_SAVE_IN_SIM                          = 1,
    MIPC_SMS_SEND_SAVE_INVALID                              = 0xFF,
};
typedef enum mipc_sms_send_save_const_enum mipc_sms_send_save_const_enum;

enum mipc_sms_more_msg_to_send_const_enum {
    mipc_sms_more_msg_to_send_const_NONE = 0,
    /* SMS_MORE_MSG_TO_SEND */
    /*  */
    MIPC_SMS_MORE_MSG_TO_SEND_DISABLE                       = 0,
    /* after a while MD would return to disable, refer AT+CMMS=1 */
    MIPC_SMS_MORE_MSG_TO_SEND_ENABLE_ONCE                   = 1,
    /* MD would not return to disable automatically, refer AT+CMMS=2 */
    MIPC_SMS_MORE_MSG_TO_SEND_ENABLE_ALWAYS                 = 2,
    /* NULL value, nothing todo */
    MIPC_SMS_MORE_MSG_TO_SEND_NULL                          = 0xFE,
    /* INVALID value */
    MIPC_SMS_MORE_MSG_TO_SEND_INVALID                       = 0xFF,
};
typedef enum mipc_sms_more_msg_to_send_const_enum mipc_sms_more_msg_to_send_const_enum;

enum mipc_sms_cbm_cfg_type_const_enum {
    mipc_sms_cbm_cfg_type_const_NONE = 0,
    /* SMS_CBM_CFG_TYPE */
    /* list in corresponding cfg IE would indicate to USER */
    MIPC_SMS_CBM_CFG_TYPE_ALLOW                             = 1,
    /* list in corresponding cfg IE would not indicate to USER */
    MIPC_SMS_CBM_CFG_TYPE_BAN                               = 2,
    /* query DEVICE's value of corresponding cfg */
    MIPC_SMS_CBM_CFG_TYPE_QUERY                             = 0xFD,
};
typedef enum mipc_sms_cbm_cfg_type_const_enum mipc_sms_cbm_cfg_type_const_enum;

enum mipc_sms_scbm_status_const_enum {
    mipc_sms_scbm_status_const_NONE = 0,
    /* SMS_SCBM_STATUS */
    MIPC_SMS_SCBM_STATUS_EXIT                               = 0,
    MIPC_SMS_SCBM_STATUS_ENTERED                            = 1,
    MIPC_SMS_SCBM_STATUS_DISABLED                           = 2,
    MIPC_SMS_SCBM_STATUS_REINITED                           = 3,
};
typedef enum mipc_sms_scbm_status_const_enum mipc_sms_scbm_status_const_enum;

enum mipc_ss_ussd_const_enum {
    mipc_ss_ussd_const_NONE = 0,
    /* SS_USSD */
    MIPC_SS_USSD_NO_ACTION_REQUIRED                         = 0,
    MIPC_SS_USSD_ACTION_REQUIRED                            = 1,
    MIPC_SS_USSD_TERMINATED_BY_NW                           = 2,
    MIPC_SS_USSD_OTHER_LOCAL_CLIENT                         = 3,
    MIPC_SS_USSD_OPERATION_NOT_SUPPORTED                    = 4,
    MIPC_SS_USSD_NW_TIME_OUT                                = 5,
};
typedef enum mipc_ss_ussd_const_enum mipc_ss_ussd_const_enum;

enum mipc_ss_session_const_enum {
    mipc_ss_session_const_NONE = 0,
    /* SS_SESSION */
    MIPC_SS_SESSION_NEW                                     = 0,
    MIPC_SS_SESSION_EXISTING                                = 1,
};
typedef enum mipc_ss_session_const_enum mipc_ss_session_const_enum;

enum mipc_ss_call_waiting_const_enum {
    mipc_ss_call_waiting_const_NONE = 0,
    /* SS_CALL_WAITING */
    MIPC_SS_CALL_WAITING_DISABLE                            = 0,
    MIPC_SS_CALL_WAITING_ENABLE                             = 1,
};
typedef enum mipc_ss_call_waiting_const_enum mipc_ss_call_waiting_const_enum;

enum mipc_ss_set_call_forward_operation_code_const_enum {
    mipc_ss_set_call_forward_operation_code_const_NONE = 0,
    /* SS_SET_CALL_FORWARD_OPERATION_CODE */
    MIPC_SS_SET_CALL_FORWARD_OPERATION_CODE_SS_ACTIVATE     = 0,
    MIPC_SS_SET_CALL_FORWARD_OPERATION_CODE_SS_DEACTIVATE   = 1,
    MIPC_SS_SET_CALL_FORWARD_OPERATION_CODE_SS_REGISTRATION = 3,
    MIPC_SS_SET_CALL_FORWARD_OPERATION_CODE_SS_ERASURE      = 4,
};
typedef enum mipc_ss_set_call_forward_operation_code_const_enum mipc_ss_set_call_forward_operation_code_const_enum;

enum mipc_ss_call_forward_reason_const_enum {
    mipc_ss_call_forward_reason_const_NONE = 0,
    /* SS_CALL_FORWARD_REASON */
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_UNCONDITIONAL  = 21,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_BUSY           = 67,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_NO_REPLY       = 61,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_NOT_REACHABLE  = 62,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_ALL            = 2,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_ALL_CONDITIONAL = 4,
    MIPC_SS_CALL_FORWARD_REASON_CALL_FORWARD_NOT_REGISTER   = 68,
};
typedef enum mipc_ss_call_forward_reason_const_enum mipc_ss_call_forward_reason_const_enum;

enum mipc_ss_active_status_const_enum {
    mipc_ss_active_status_const_NONE = 0,
    /* SS_ACTIVE_STATUS */
    MIPC_SS_ACTIVE_STATUS_NOT_ACTIVE                        = 0,
    MIPC_SS_ACTIVE_STATUS_ACTIVE                            = 1,
};
typedef enum mipc_ss_active_status_const_enum mipc_ss_active_status_const_enum;

enum mipc_ss_type_of_address_const_enum {
    mipc_ss_type_of_address_const_NONE = 0,
    /* SS_TYPE_OF_ADDRESS */
    MIPC_SS_TYPE_OF_ADDRESS_NORMAL                          = 0,
    MIPC_SS_TYPE_OF_ADDRESS_INTERNATIONAL                   = 1,
};
typedef enum mipc_ss_type_of_address_const_enum mipc_ss_type_of_address_const_enum;

enum mipc_ss_service_class_const_enum {
    mipc_ss_service_class_const_NONE = 0,
    /* SS_SERVICE_CLASS */
    MIPC_SS_SERVICE_CLASS_VOICE                             = 1,
    MIPC_SS_SERVICE_CLASS_DATA                              = 2,
    MIPC_SS_SERVICE_CLASS_FAX                               = 4,
    MIPC_SS_SERVICE_CLASS_SMS                               = 8,
    MIPC_SS_SERVICE_CLASS_DATA_CIRCUIT_SYNC                 = 16,
    MIPC_SS_SERVICE_CLASS_DATA_CIRCUIT_ASYNC                = 32,
    MIPC_SS_SERVICE_CLASS_DEDICATED_PACKET_ACCESS           = 64,
    MIPC_SS_SERVICE_CLASS_DEDICATED_PAD_ACCESS              = 128,
    MIPC_SS_SERVICE_CLASS_MTK_LINE2                         = 256,
    MIPC_SS_SERVICE_CLASS_MTK_VIDEO                         = 512,
};
typedef enum mipc_ss_service_class_const_enum mipc_ss_service_class_const_enum;

enum mipc_ss_call_barring_lock_const_enum {
    mipc_ss_call_barring_lock_const_NONE = 0,
    /* SS_CALL_BARRING_LOCK */
    MIPC_SS_CALL_BARRING_LOCK_UNLOCK                        = 0,
    MIPC_SS_CALL_BARRING_LOCK_LOCK                          = 1,
};
typedef enum mipc_ss_call_barring_lock_const_enum mipc_ss_call_barring_lock_const_enum;

enum mipc_ss_call_barring_fac_const_enum {
    mipc_ss_call_barring_fac_const_NONE = 0,
    /* SS_CALL_BARRING_FAC */
    MIPC_SS_CALL_BARRING_FAC_AO                             = 0,
    MIPC_SS_CALL_BARRING_FAC_OI                             = 1,
    MIPC_SS_CALL_BARRING_FAC_OX                             = 2,
    MIPC_SS_CALL_BARRING_FAC_AI                             = 3,
    MIPC_SS_CALL_BARRING_FAC_IR                             = 4,
    MIPC_SS_CALL_BARRING_FAC_AB                             = 5,
    MIPC_SS_CALL_BARRING_FAC_AG                             = 6,
    MIPC_SS_CALL_BARRING_FAC_AC                             = 7,
};
typedef enum mipc_ss_call_barring_fac_const_enum mipc_ss_call_barring_fac_const_enum;

enum mipc_stk_not_handled_const_enum {
    mipc_stk_not_handled_const_NONE = 0,
    /* STK_NOT_HANDLED */
    MIPC_STK_NOT_HANDLED_BY_FUNCTION_CANNOT_BE_HANDLED_BY_HOST = 0,
    MIPC_STK_NOT_HANDLED_By_FUNCTION_MAY_BE_HANDLED_BY_HOST = 1,
};
typedef enum mipc_stk_not_handled_const_enum mipc_stk_not_handled_const_enum;

enum mipc_stk_handled_const_enum {
    mipc_stk_handled_const_NONE = 0,
    /* STK_HANDLED */
    MIPC_STK_HANDLED_BY_FUNCTION_ONLY_TRANSPARENT_TO_HOST   = 2,
    MIPC_STK_HANDLED_BY_FUNCTION_NOTIFICATION_TO_HOST_POSSIBLE = 3,
    MIPC_STK_HANDLED_BY_FUNCTION_NOTIFICATIONS_TO_HOST_ENABLE = 4,
    MIPC_STK_HANDLED_BY_FUNCTION_CAN_BE_OVERRIDDEN_BY_HOST  = 5,
    MIPC_STK_HANDLED_BY_HOST_FUNCTION_NOT_ABLE_TO_HANDLE    = 6,
    MIPC_STK_HANDLED_BY_HOST_FUNCTION_ABLE_TO_HANDLE        = 7,
};
typedef enum mipc_stk_handled_const_enum mipc_stk_handled_const_enum;

enum mipc_stk_pac_type_const_enum {
    mipc_stk_pac_type_const_NONE = 0,
    /* STK_PAC_TYPE */
    MIPC_STK_PAC_TYPE_PROACTIVE_COMMAND                     = 0,
    MIPC_STK_PAC_TYPE_NOTIFICATION                          = 1,
    MIPC_STK_PAC_TYPE_SESSION_END                           = 2,
};
typedef enum mipc_stk_pac_type_const_enum mipc_stk_pac_type_const_enum;

enum mipc_sim_refresh_result_type_const_enum {
    mipc_sim_refresh_result_type_const_NONE = 0,
    /* SIM_REFRESH_RESULT_TYPE */
    MIPC_SIM_REFRESH_RESULT_TYPE_SIM_FILE_UPDATE            = 0,
    MIPC_SIM_REFRESH_RESULT_TYPE_SIM_INIT                   = 1,
    MIPC_SIM_REFRESH_RESULT_TYPE_SIM_RESET                  = 2,
    MIPC_SIM_REFRESH_RESULT_TYPE_APP_INIT                   = 3,
    MIPC_SIM_REFRESH_RESULT_TYPE_SIM_INIT_FULL_FILE_CHANGE  = 4,
    MIPC_SIM_REFRESH_RESULT_TYPE_SIM_INIT_FILE_CHANGE       = 5,
    MIPC_SIM_REFRESH_RESULT_TYPE_SESSION_RESET              = 6,
};
typedef enum mipc_sim_refresh_result_type_const_enum mipc_sim_refresh_result_type_const_enum;

enum mipc_ran_const_enum {
    mipc_ran_const_NONE = 0,
    /* RAN */
    MIPC_RAN_UNKNOWN                                        = 0,
    MIPC_RAN_CELL                                           = 1,
    MIPC_RAN_WIFI                                           = 2,
};
typedef enum mipc_ran_const_enum mipc_ran_const_enum;

enum mipc_call_clcc_state_const_enum {
    mipc_call_clcc_state_const_NONE = 0,
    /* CALL_CLCC_STATE */
    MIPC_CALL_CLCC_STATE_ACTIVE                             = 0,
    MIPC_CALL_CLCC_STATE_HELD                               = 1,
    MIPC_CALL_CLCC_STATE_DIALING                            = 2,
    MIPC_CALL_CLCC_STATE_ALERTING                           = 3,
    MIPC_CALL_CLCC_STATE_INCOMING                           = 4,
    MIPC_CALL_CLCC_STATE_WAITING                            = 5,
};
typedef enum mipc_call_clcc_state_const_enum mipc_call_clcc_state_const_enum;

enum mipc_call_direction_const_enum {
    mipc_call_direction_const_NONE = 0,
    /* CALL_DIRECTION */
    MIPC_CALL_DIRECTION_MO_CALL                             = 0,
    MIPC_CALL_DIRECTION_MT_CALL                             = 1,
};
typedef enum mipc_call_direction_const_enum mipc_call_direction_const_enum;

enum mipc_sdp_direction_const_enum {
    mipc_sdp_direction_const_NONE = 0,
    /* SDP_DIRECTION */
    MIPC_SDP_DIRECTION_INACTIVE                             = 0,
    MIPC_SDP_DIRECTION_SEND_ONLY                            = 1,
    MIPC_SDP_DIRECTION_RECV_ONLY                            = 2,
    MIPC_SDP_DIRECTION_SEND_RECV                            = 3,
};
typedef enum mipc_sdp_direction_const_enum mipc_sdp_direction_const_enum;

enum mipc_speech_rat_const_enum {
    mipc_speech_rat_const_NONE = 0,
    /* SPEECH_RAT */
    MIPC_SPEECH_RAT_GSM                                     = 1,
    MIPC_SPEECH_RAT_UTMS                                    = 2,
    MIPC_SPEECH_RAT_IMS                                     = 4,
};
typedef enum mipc_speech_rat_const_enum mipc_speech_rat_const_enum;

enum mipc_call_rat_const_enum {
    mipc_call_rat_const_NONE = 0,
    /* CALL_RAT */
    MIPC_CALL_RAT_UNKNOWN                                   = 0,
    MIPC_CALL_RAT_CS                                        = 1,
    MIPC_CALL_RAT_VoLTE                                     = 2,
    MIPC_CALL_RAT_WFC                                       = 3,
};
typedef enum mipc_call_rat_const_enum mipc_call_rat_const_enum;

enum mipc_call_type_const_enum {
    mipc_call_type_const_NONE = 0,
    /* CALL_TYPE */
    /*  */
    MIPC_CALL_TYPE_MPTY                                     = 0x00000001,
    /*  */
    MIPC_CALL_TYPE_EMERGENCY                                = 0x00000010,
    /*  */
    MIPC_CALL_TYPE_VIDEO                                    = 0x00000100,
    /*  */
    MIPC_CALL_TYPE_RTT                                      = 0x00001000,
    /*  */
    MIPC_CALL_TYPE_IN_BAND_TONE                             = 0x00010000,
    /*  */
    MIPC_CALL_TYPE_TCH                                      = 0x00100000,
};
typedef enum mipc_call_type_const_enum mipc_call_type_const_enum;

enum mipc_call_mode_const_enum {
    mipc_call_mode_const_NONE = 0,
    /* CALL_MODE */
    MIPC_CALL_MODE_VOICE                                    = 0,
    MIPC_CALL_MODE_DATA                                     = 1,
    MIPC_CALL_MODE_VFD_VOICE                                = 3,
    MIPC_CALL_MODE_AVD_VOICE                                = 4,
    MIPC_CALL_MODE_AVF_VOICE                                = 5,
    MIPC_CALL_MODE_VFD_DATA                                 = 6,
    MIPC_CALL_MODE_AVD_DATA                                 = 7,
    MIPC_CALL_MODE_UNKNOWN                                  = 9,
    MIPC_CALL_MODE_IMS_VOICE_CALL                           = 20,
    MIPC_CALL_MODE_IMS_VIDEO_CALL                           = 21,
    MIPC_CALL_MODE_IMS_VOICE_CONFERENCE                     = 22,
    MIPC_CALL_MODE_IMS_VIDEO_CONFERENCE                     = 23,
    MIPC_CALL_MODE_IMS_VOICE_CONFERENCE_PARTICIPANT         = 24,
    MIPC_CALL_MODE_IMS_VIDEO_CONFERENCE_PARTICIPANT         = 25,
    MIPC_CALL_MODE_C2K_VOICE_CALL                           = 40,
    MIPC_CALL_MODE_C2K_OTASP_CALL_STD                       = 41,
    MIPC_CALL_MODE_C2K_OTASP_CALL_NO_STD                    = 42,
    MIPC_CALL_MODE_C2K_ECC_CALL                             = 43,
};
typedef enum mipc_call_mode_const_enum mipc_call_mode_const_enum;

enum mipc_call_dial_address_type_const_enum {
    mipc_call_dial_address_type_const_NONE = 0,
    /* CALL_DIAL_ADDRESS_TYPE */
    MIPC_CALL_DIAL_ADDRESS_TYPE_NONE                        = 0,
    MIPC_CALL_DIAL_ADDRESS_TYPE_SIP_URI                     = 1,
    MIPC_CALL_DIAL_ADDRESS_TYPE_NUMBER                      = 2,
};
typedef enum mipc_call_dial_address_type_const_enum mipc_call_dial_address_type_const_enum;

enum mipc_call_audio_codec_const_enum {
    mipc_call_audio_codec_const_NONE = 0,
    /* CALL_AUDIO_CODEC */
    MIPC_CALL_AUDIO_CODEC_NONE                              = 0x0000,
    MIPC_CALL_AUDIO_CODEC_QCELP13K                          = 0x0001,
    MIPC_CALL_AUDIO_CODEC_EVRC                              = 0x0002,
    MIPC_CALL_AUDIO_CODEC_EVRC_B                            = 0x0003,
    MIPC_CALL_AUDIO_CODEC_EVRC_WB                           = 0x0004,
    MIPC_CALL_AUDIO_CODEC_EVRC_NW                           = 0x0005,
    MIPC_CALL_AUDIO_CODEC_AMR_NB                            = 0x0006,
    MIPC_CALL_AUDIO_CODEC_AMR_WB                            = 0x0007,
    MIPC_CALL_AUDIO_CODEC_GSM_EFR                           = 0x0008,
    MIPC_CALL_AUDIO_CODEC_GSM_FR                            = 0x0009,
    MIPC_CALL_AUDIO_CODEC_GSM_HR                            = 0x000a,
    MIPC_CALL_AUDIO_CODEC_EVS_NB                            = 0x0017,
    MIPC_CALL_AUDIO_CODEC_EVS_WB                            = 0x0018,
    MIPC_CALL_AUDIO_CODEC_EVS_SW                            = 0x0019,
    MIPC_CALL_AUDIO_CODEC_EVS_FB                            = 0x0020,
    MIPC_CALL_AUDIO_CODEC_EVS_AWB                           = 0x0021,
};
typedef enum mipc_call_audio_codec_const_enum mipc_call_audio_codec_const_enum;

enum mipc_sdp_audio_codec_const_enum {
    mipc_sdp_audio_codec_const_NONE = 0,
    /* SDP_AUDIO_CODEC */
    MIPC_SDP_AUDIO_CODEC_AMR                                = 1,
    MIPC_SDP_AUDIO_CODEC_AMR_WB                             = 2,
    MIPC_SDP_AUDIO_CODEC_EVS                                = 17,
};
typedef enum mipc_sdp_audio_codec_const_enum mipc_sdp_audio_codec_const_enum;

enum mipc_call_event_const_enum {
    mipc_call_event_const_NONE = 0,
    /* CALL_EVENT */
    /*  */
    MIPC_CALL_EVENT_MT_REJECTED                             = 1,
    /*  */
    MIPC_CALL_EVENT_MT_REDIRECT                             = 2,
    /*  */
    MIPC_CALL_EVENT_SRVCC                                   = 3,
    /*  */
    MIPC_CALL_EVENT_AUDIO_CODEC_CHANGE                      = 4,
    /*  */
    MIPC_CALL_EVENT_SPEECH_ATTACH                           = 5,
    /*  */
    MIPC_CALL_EVENT_CRING                                   = 6,
    /*  */
    MIPC_CALL_EVENT_ECONFSRVCC                              = 9,
};
typedef enum mipc_call_event_const_enum mipc_call_event_const_enum;

enum mipc_call_msg_type_const_enum {
    mipc_call_msg_type_const_NONE = 0,
    /* CALL_MSG_TYPE */
    MIPC_CALL_MSG_TYPE_MT_CALL                              = 0,
    MIPC_CALL_MSG_TYPE_DISCONNECT                           = 1,
    MIPC_CALL_MSG_TYPE_ALERT                                = 2,
    MIPC_CALL_MSG_TYPE_CALL_PROCESS                         = 3,
    MIPC_CALL_MSG_TYPE_SYNC                                 = 4,
    MIPC_CALL_MSG_TYPE_PROGRESS                             = 5,
    MIPC_CALL_MSG_TYPE_CONNECTED                            = 6,
    MIPC_CALL_MSG_TYPE_ALL_CALLS_DISC                       = 129,
    MIPC_CALL_MSG_TYPE_CALL_ID_ASSIGN                       = 130,
    MIPC_CALL_MSG_TYPE_STATE_CHANGE_HELD                    = 131,
    MIPC_CALL_MSG_TYPE_STATE_CHANGE_ACTIVE                  = 132,
    MIPC_CALL_MSG_TYPE_STATE_CHANGE_DISCONNECTED            = 133,
    MIPC_CALL_MSG_TYPE_STATE_CHANGE_MO_DISCONNECTING        = 134,
    MIPC_CALL_MSG_TYPE_STATE_HELD_BY_REMOTE                 = 135,
    MIPC_CALL_MSG_TYPE_STATE_ACTIVE_BY_REMOTE               = 136,
};
typedef enum mipc_call_msg_type_const_enum mipc_call_msg_type_const_enum;

enum mipc_call_reject_reason_const_enum {
    mipc_call_reject_reason_const_NONE = 0,
    /* CALL_REJECT_REASON */
    MIPC_CALL_REJECT_REASON_UNDEFINED                       = 0,
};
typedef enum mipc_call_reject_reason_const_enum mipc_call_reject_reason_const_enum;

enum mipc_call_dial_type_const_enum {
    mipc_call_dial_type_const_NONE = 0,
    /* CALL_DIAL_TYPE */
    MIPC_CALL_DIAL_TYPE_VOICE                               = 1,
    MIPC_CALL_DIAL_TYPE_VIDEO                               = 2,
    MIPC_CALL_DIAL_TYPE_EMERGENCY                           = 3,
    MIPC_CALL_DIAL_TYPE_RTT                                 = 4,
};
typedef enum mipc_call_dial_type_const_enum mipc_call_dial_type_const_enum;

enum mipc_call_conference_dial_type_const_enum {
    mipc_call_conference_dial_type_const_NONE = 0,
    /* CALL_CONFERENCE_DIAL_TYPE */
    MIPC_CALL_CONFERENCE_DIAL_TYPE_VOICE                    = 1,
    MIPC_CALL_CONFERENCE_DIAL_TYPE_VIDEO                    = 2,
};
typedef enum mipc_call_conference_dial_type_const_enum mipc_call_conference_dial_type_const_enum;

enum mipc_call_dial_domain_const_enum {
    mipc_call_dial_domain_const_NONE = 0,
    /* CALL_DIAL_DOMAIN */
    /* Automatic - LTE(IMS), WG(CS), 1x(C2K) */
    MIPC_CALL_DIAL_DOMAIN_AUTO                              = 0,
    /* CS only - WG(CS) */
    MIPC_CALL_DIAL_DOMAIN_CS_ONLY                           = 1,
    /* 3GPP only - LTE(IMS), WG(CS) */
    MIPC_CALL_DIAL_DOMAIN_3GPP_ONLY                         = 2,
    /* 3GPP2 only - 1x(C2K) */
    MIPC_CALL_DIAL_DOMAIN_3GPP2_ONLY                        = 3,
};
typedef enum mipc_call_dial_domain_const_enum mipc_call_dial_domain_const_enum;

enum mipc_call_ss_action_const_enum {
    mipc_call_ss_action_const_NONE = 0,
    /* CALL_SS_ACTION */
    /* release all held calls, or set User-Determined User Busy for a waiting call */
    MIPC_CALL_SS_ACTION_RELEASE_ALL_HELD_OR_WAITING_CALL    = 0,
    /* release all active calls and accept the other(waiting or held) call */
    MIPC_CALL_SS_ACTION_RELEASE_ALL_ACTIVE_AND_ACCEPT_CALL  = 1,
    /* places all active call on hold and accept the other(held or waiting) call */
    MIPC_CALL_SS_ACTION_PLACE_ALL_ACTIVE_CALL_ON_HOLD_AND_ACCEPT_CALL = 2,
    /* Connects two calls and siconnects the subscriber from both calls */
    MIPC_CALL_SS_ACTION_EXPLICIT_CALL_AND_TRANSFER          = 4,
    /* Activate the Completion of Calls to Busy Subscriber Request. (CCBS) */
    MIPC_CALL_SS_ACTION_COMPLETION_CALL_BUSY_SUBSCRIBER     = 5,
    /* change a specific call to on-hold (only the IMS call support this feature) */
    MIPC_CALL_SS_ACTION_HOLD_CALL                           = 131,
    /* change a specific call to active (only the IMS call support this feature) */
    MIPC_CALL_SS_ACTION_RESUME_CALL                         = 132,
};
typedef enum mipc_call_ss_action_const_enum mipc_call_ss_action_const_enum;

enum mipc_call_conf_action_const_enum {
    mipc_call_conf_action_const_NONE = 0,
    /* CALL_CONF_ACTION */
    /* merges the call to the conversation */
    MIPC_CALL_CONF_ACTION_MERGE                             = 0,
    /* adds a call to the conversation */
    MIPC_CALL_CONF_ACTION_ADD_PARTICIPANT                   = 1,
    /* remove a call from the conversation */
    MIPC_CALL_CONF_ACTION_REMOVE_PARTICIPANT                = 2,
    /* split a party from the CS MTPY(conference), for cs only */
    MIPC_CALL_CONF_ACTION_SPLIT                             = 3,
};
typedef enum mipc_call_conf_action_const_enum mipc_call_conf_action_const_enum;

enum mipc_call_hangup_mode_const_enum {
    mipc_call_hangup_mode_const_NONE = 0,
    /* CALL_HANGUP_MODE */
    /*  */
    MIPC_CALL_HANGUP_MODE_HANGUP                            = 0,
    /*  */
    MIPC_CALL_HANGUP_MODE_HANGUP_ALL                        = 1,
    /*  */
    MIPC_CALL_HANGUP_MODE_FORCE_HANGUP                      = 2,
};
typedef enum mipc_call_hangup_mode_const_enum mipc_call_hangup_mode_const_enum;

enum mipc_call_hangup_cause_const_enum {
    mipc_call_hangup_cause_const_NONE = 0,
    /* CALL_HANGUP_CAUSE */
    MIPC_CALL_HANGUP_CAUSE_USER_HANGUP                      = 0,
    MIPC_CALL_HANGUP_CAUSE_IMS_NO_COVERAGE                  = 1,
    MIPC_CALL_HANGUP_CAUSE_IS_LOW_BATTERY                   = 2,
    MIPC_CALL_HANGUP_CAUSE_IMS_FORWARD                      = 3,
    MIPC_CALL_HANGUP_CAUSE_IMS_SPECIAL_HUNGUP               = 4,
    MIPC_CALL_HANGUP_CAUSE_IMS_607_UNWANTED                 = 5,
    MIPC_CALL_HANGUP_CAUSE_CS_INCOMING_REJECTED_NO_FORWARD  = 6,
};
typedef enum mipc_call_hangup_cause_const_enum mipc_call_hangup_cause_const_enum;

enum mipc_call_answer_mode_const_enum {
    mipc_call_answer_mode_const_NONE = 0,
    /* CALL_ANSWER_MODE */
    /*  */
    MIPC_CALL_ANSWER_MODE_DEFAULT                           = 0,
    /* accepts as audio call */
    MIPC_CALL_ANSWER_MODE_AUDIO_CALL                        = 1,
    /* accepts as one way only video call (Rx) */
    MIPC_CALL_ANSWER_MODE_Rx_VIDEO_CALL                     = 2,
    /* accepts as one way only video call (Tx) */
    MIPC_CALL_ANSWER_MODE_Tx_VIDEO_CALL                     = 3,
};
typedef enum mipc_call_answer_mode_const_enum mipc_call_answer_mode_const_enum;

enum mipc_call_ss_code1_const_enum {
    mipc_call_ss_code1_const_NONE = 0,
    /* CALL_SS_CODE1 */
    /* unconditional call forwarding is active */
    MIPC_CALL_SS_CODE1_UCF_ACTIVE                           = 0,
    /* some of the conditional call forwardings are active */
    MIPC_CALL_SS_CODE1_CCF_ACTIVE                           = 1,
    /* call has been forwarded */
    MIPC_CALL_SS_CODE1_FORWARDED_CALL                       = 2,
    /* call is waiting */
    MIPC_CALL_SS_CODE1_WAITING_CALL                         = 3,
    /* this is a CUG call (also <index> present) */
    MIPC_CALL_SS_CODE1_CUG_CALL                             = 4,
    /* outgoing calls are barred */
    MIPC_CALL_SS_CODE1_OUTGOING_CALLS_ARE_BARRED            = 5,
    /* incoming calls are barred */
    MIPC_CALL_SS_CODE1_INCOMING_CALLS_ARE_BARRED            = 6,
    /* CLIR suppression rejected */
    MIPC_CALL_SS_CODE1_CLIR_SUPPRESSION_REJECTED            = 7,
    /* call has been deflected */
    MIPC_CALL_SS_CODE1_DEFLECTED_CALL                       = 8,
};
typedef enum mipc_call_ss_code1_const_enum mipc_call_ss_code1_const_enum;

enum mipc_call_ss_code2_const_enum {
    mipc_call_ss_code2_const_NONE = 0,
    /* CALL_SS_CODE2 */
    /* this is a forwarded call (MT call setup) */
    MIPC_CALL_SS_CODE2_FORWARDED_CALL                       = 0,
    /* this is a CUG call (also <index> present) (MT call setup) */
    MIPC_CALL_SS_CODE2_CUG_CALL                             = 1,
    /* call has been put on hold (during a voice call) */
    MIPC_CALL_SS_CODE2_HOLD_CALL                            = 2,
    /* call has been retrieved (during a voice call) */
    MIPC_CALL_SS_CODE2_RETRIEVED_CALL                       = 3,
    /* multiparty call entered (during a voice call) */
    MIPC_CALL_SS_CODE2_MULTIPARTY_CALL                      = 4,
    /* call on hold has been released (this is not a SS notification) (during a voice call) */
    MIPC_CALL_SS_CODE2_HOLD_CALL_HAS_BEEN_RELEASEED         = 5,
    /* forward check SS message received (can be received whenever) */
    MIPC_CALL_SS_CODE2_FORWARD_CHECK_SS_MSG_RECEIVED        = 6,
    /* all is being connected (alerting) with the remote party in alerting state in explicit call transfer operation (during a voice call) */
    MIPC_CALL_SS_CODE2_CONNECTED_CALL_WITH_REMOTE_PARTY_IN_ALERTING = 7,
    /* call has been connected with the other remote party in explicit call transfer operation (also number and subaddress parameters may be present) (during a voice call or MT call setup) */
    MIPC_CALL_SS_CODE2_CONNECTED_CALL_WITH_REMOTE_PARTY_IN_EXPLICIT_CALL_TRANSFER = 8,
    /* this is a deflected call (MT call setup) */
    MIPC_CALL_SS_CODE2_DEFLECTED_CALL                       = 9,
    /* additional incoming call forwarded */
    MIPC_CALL_SS_CODE2_ADDITIONAL_INCOMING_CALL_FORWARDED   = 10,
    /* Call Forwarded */
    MIPC_CALL_SS_CODE2_CALL_FORWARDED                       = 11,
    /* Call Forwarded Unconditional */
    MIPC_CALL_SS_CODE2_CALL_FORWARDED_UNCONDITIONAL         = 12,
    /* Call Forwarded Conditional */
    MIPC_CALL_SS_CODE2_CALL_FORWARDED_CONDITIONAL           = 13,
    /* Call Busy Forwarded */
    MIPC_CALL_SS_CODE2_CALL_BUSY_FORWARDED                  = 14,
    /* Call Forwarded on No Reply */
    MIPC_CALL_SS_CODE2_CALL_FORWARDED_ON_NO_REPLY           = 15,
    /* Call Forwarded on Not Reachable */
    MIPC_CALL_SS_CODE2_CALL_FORWARDED_ON_NOT_REACHABLE      = 16,
};
typedef enum mipc_call_ss_code2_const_enum mipc_call_ss_code2_const_enum;

enum mipc_conf_participant_status_const_enum {
    mipc_conf_participant_status_const_NONE = 0,
    /* CONF_PARTICIPANT_STATUS */
    MIPC_CONF_PARTICIPANT_STATUS_PENDING                    = 0,
    MIPC_CONF_PARTICIPANT_STATUS_DIALING_OUT                = 1,
    MIPC_CONF_PARTICIPANT_STATUS_DIALING_IN                 = 2,
    MIPC_CONF_PARTICIPANT_STATUS_ALERTING                   = 3,
    MIPC_CONF_PARTICIPANT_STATUS_ON_HOLD                    = 4,
    MIPC_CONF_PARTICIPANT_STATUS_CONNECTED                  = 5,
    MIPC_CONF_PARTICIPANT_STATUS_DISCONNECTING              = 6,
    MIPC_CONF_PARTICIPANT_STATUS_DISCONNECTED               = 7,
    MIPC_CONF_PARTICIPANT_STATUS_MUTED_VIA_FOCUS            = 8,
    MIPC_CONF_PARTICIPANT_STATUS_CONNECT_FAIL               = 9,
};
typedef enum mipc_conf_participant_status_const_enum mipc_conf_participant_status_const_enum;

enum mipc_sip_direction_const_enum {
    mipc_sip_direction_const_NONE = 0,
    /* SIP_DIRECTION */
    MIPC_SIP_DIRECTION_SEND                                 = 0,
    MIPC_SIP_DIRECTION_RECEIVE                              = 1,
};
typedef enum mipc_sip_direction_const_enum mipc_sip_direction_const_enum;

enum mipc_sip_msg_type_const_enum {
    mipc_sip_msg_type_const_NONE = 0,
    /* SIP_MSG_TYPE */
    MIPC_SIP_MSG_TYPE_REQUEST                               = 0,
    MIPC_SIP_MSG_TYPE_RESPONSE                              = 1,
};
typedef enum mipc_sip_msg_type_const_enum mipc_sip_msg_type_const_enum;

enum mipc_sip_method_const_enum {
    mipc_sip_method_const_NONE = 0,
    /* SIP_METHOD */
    MIPC_SIP_METHOD_INVITE                                  = 1,
    MIPC_SIP_METHOD_REFER                                   = 2,
    MIPC_SIP_METHOD_UPDATE                                  = 3,
    MIPC_SIP_METHOD_CANCEL                                  = 4,
    MIPC_SIP_METHOD_MESSAGE                                 = 5,
    MIPC_SIP_METHOD_ACK                                     = 6,
    MIPC_SIP_METHOD_BYE                                     = 7,
    MIPC_SIP_METHOD_OPTIONS                                 = 8,
    MIPC_SIP_METHOD_SUBSCRIBE                               = 9,
    MIPC_SIP_METHOD_NOTIFY                                  = 10,
    MIPC_SIP_METHOD_PUBLISH                                 = 11,
    MIPC_SIP_METHOD_INFO                                    = 12,
    MIPC_SIP_METHOD_PRACK                                   = 13,
};
typedef enum mipc_sip_method_const_enum mipc_sip_method_const_enum;

enum mipc_ims_event_package_type_const_enum {
    mipc_ims_event_package_type_const_NONE = 0,
    /* IMS_EVENT_PACKAGE_TYPE */
    MIPC_IMS_EVENT_PACKAGE_TYPE_CONFERENCE                  = 1,
    MIPC_IMS_EVENT_PACKAGE_TYPE_DIALOG                      = 2,
    MIPC_IMS_EVENT_PACKAGE_TYPE_MWI                         = 3,
};
typedef enum mipc_ims_event_package_type_const_enum mipc_ims_event_package_type_const_enum;

enum mipc_ecc_info_type_const_enum {
    mipc_ecc_info_type_const_NONE = 0,
    /* ECC_INFO_TYPE */
    MIPC_ECC_INFO_TYPE_HOST                                 = 0,
    MIPC_ECC_INFO_TYPE_SIM                                  = 1,
    MIPC_ECC_INFO_TYPE_MCF                                  = 2,
};
typedef enum mipc_ecc_info_type_const_enum mipc_ecc_info_type_const_enum;

enum mipc_dtmf_mode_const_enum {
    mipc_dtmf_mode_const_NONE = 0,
    /* DTMF_MODE */
    /*  */
    MIPC_DTMF_MODE_START                                    = 0,
    /*  */
    MIPC_DTMF_MODE_STOP                                     = 1,
    /*  */
    MIPC_DTMF_MODE_SINGLE_TONE                              = 2,
};
typedef enum mipc_dtmf_mode_const_enum mipc_dtmf_mode_const_enum;

enum mipc_call_ecbm_mode_const_enum {
    mipc_call_ecbm_mode_const_NONE = 0,
    /* CALL_ECBM_MODE */
    /* ecbm mode off */
    MIPC_CALL_ECBM_MODE_ECBM_OFF                            = 0,
    /* ecbm mode on */
    MIPC_CALL_ECBM_MODE_ECBM_ON                             = 1,
    /* no ecbm mode */
    MIPC_CALL_ECBM_MODE_NO_ECBM                             = 2,
};
typedef enum mipc_call_ecbm_mode_const_enum mipc_call_ecbm_mode_const_enum;

enum mipc_call_cli_validity_const_enum {
    mipc_call_cli_validity_const_NONE = 0,
    /* CALL_CLI_VALIDITY */
    /* CLI VALID */
    MIPC_CALL_CLI_VALIDITY_CLI_VALID                        = 0,
    /* CLI has been with held by the originator */
    MIPC_CALL_CLI_VALIDITY_CLI_WITHHELD                     = 1,
    /* CLI is not valid due to interworking problems or limitations of originating network */
    MIPC_CALL_CLI_VALIDITY_CLI_INTERWORK                    = 2,
    /* CLI is not valid due to calling party being of type payphone */
    MIPC_CALL_CLI_VALIDITY_CLI_PAYPHONE                     = 3,
    /* CLI is not valid due to other reasons */
    MIPC_CALL_CLI_VALIDITY_CLI_OTHERS                       = 4,
};
typedef enum mipc_call_cli_validity_const_enum mipc_call_cli_validity_const_enum;

enum mipc_call_cni_validity_const_enum {
    mipc_call_cni_validity_const_NONE = 0,
    /* CALL_CNI_VALIDITY */
    /* CNI VALID */
    MIPC_CALL_CNI_VALIDITY_CNI_VALID                        = 0,
    /* CNI has been with held by the originator */
    MIPC_CALL_CNI_VALIDITY_CNI_WITHHELD                     = 1,
    /* CNI is not valid due to interworking problems or limitations of originating network */
    MIPC_CALL_CNI_VALIDITY_CNI_INTERWORK                    = 2,
    /* CNI is not valid due to calling party being of type payphone */
    MIPC_CALL_CNI_VALIDITY_CNI_PAYPHONE                     = 3,
    /* CNI is not valid due to other reasons */
    MIPC_CALL_CNI_VALIDITY_CNI_OTHERS                       = 4,
};
typedef enum mipc_call_cni_validity_const_enum mipc_call_cni_validity_const_enum;

enum mipc_crss_type_const_enum {
    mipc_crss_type_const_NONE = 0,
    /* CRSS_TYPE */
    /* 3GPP Call Waiting  */
    MIPC_CRSS_TYPE_CRSS_CALL_WAITING                        = 0,
    /* 3GPP Calling line dentification presentation */
    MIPC_CRSS_TYPE_CRSS_CALLING_LINE_ID_PRESET              = 1,
    /* 3GPP Called line identification presentation */
    MIPC_CRSS_TYPE_CRSS_CALLED_LINE_ID_PRESET               = 2,
    /* 3GPP connected line dentification presentation */
    MIPC_CRSS_TYPE_CRSS_CONNECTED_LINE_ID_PRESET            = 3,
    /* 3GPP2 Call Waiting  */
    MIPC_CRSS_TYPE_CDMA_CALL_WAITING                        = 4,
    /* 3GPP2 Calling line dentification presentation */
    MIPC_CRSS_TYPE_CDMA_CALLING_LINE_ID_PRESET              = 5,
};
typedef enum mipc_crss_type_const_enum mipc_crss_type_const_enum;

enum mipc_number_presentation_const_enum {
    mipc_number_presentation_const_NONE = 0,
    /* NUMBER_PRESENTATION */
    /* alowed */
    MIPC_NUMBER_PRESENTATION_ALLOWED                        = 0,
    /* restricted */
    MIPC_NUMBER_PRESENTATION_RESTRICTED                     = 1,
    /* unknown or not specified */
    MIPC_NUMBER_PRESENTATION_UNKNOWN                        = 2,
};
typedef enum mipc_number_presentation_const_enum mipc_number_presentation_const_enum;

enum mipc_number_type_const_enum {
    mipc_number_type_const_NONE = 0,
    /* NUMBER_TYPE */
    /* unknown */
    MIPC_NUMBER_TYPE_UNKNOWN                                = 0,
    /* international call */
    MIPC_NUMBER_TYPE_INTERNATIONAL                          = 1,
    /* national call */
    MIPC_NUMBER_TYPE_NATIONAL                               = 2,
};
typedef enum mipc_number_type_const_enum mipc_number_type_const_enum;

enum mipc_result_const_enum {
    mipc_result_const_NONE = 0,
    /* RESULT */
    /* The operation succeeded */
    MIPC_RESULT_SUCCESS                                     = 0,
    /* The operation failed because the device is busy. In the absence of any explicit information from the function to clear this condition, the host can use subsequent actions by the function (e.g., notifications or command completions) as a hint to retry the failed operation. */
    MIPC_RESULT_BUSY                                        = 1,
    /* The operation failed (a generic failure). */
    MIPC_RESULT_FAILURE                                     = 2,
    /* The operation failed because the SIM card was not fully inserted in to the device. */
    MIPC_RESULT_SIM_NOT_INSERTED                            = 3,
    /* The operation failed because the SIM card is bad and cannot be used any further. */
    MIPC_RESULT_BAD_SIM                                     = 4,
    /* The operation failed because a PIN must be entered to proceed. */
    MIPC_RESULT_PIN_REQUIRED                                = 5,
    /* The operation failed because the PIN is disabled. */
    MIPC_RESULT_PIN_DISABLED                                = 6,
    /* The operation failed because the device is not registered with any network. */
    MIPC_RESULT_NOT_REGISTERED                              = 7,
    /* The operation failed because no network providers could be found. */
    MIPC_RESULT_PROVIDERS_NOT_FOUND                         = 8,
    /* The operation failed because the device does not support the operation. */
    MIPC_RESULT_NO_DEVICE_SUPPORT                           = 9,
    /* The operation failed because the service provider is not currently visible. */
    MIPC_RESULT_PROVIDER_NOT_VISIBLE                        = 10,
    /* The operation failed because the requested data-class was not available. */
    MIPC_RESULT_DATA_CLASS_NOT_AVAILABLE                    = 11,
    /* The operation failed because the packet service is detached. */
    MIPC_RESULT_PACKET_SERVICE_DETACHED                     = 12,
    /* The operation failed because the maximum number of activated contexts has been reached. */
    MIPC_RESULT_MAX_ACTIVATED_CONTEXTS                      = 13,
    /* The operation failed because the device is in the process of initializing. Retry the operation after the ReadyState of the device changes to MBIMSubscriberReadyStateInitialized. */
    MIPC_RESULT_NOT_INITIALIZED                             = 14,
    /* The operation failed because a voice call is in progress. */
    MIPC_RESULT_VOICE_CALL_IN_PROGRESS                      = 15,
    /* The operation failed because the context is not activated. */
    MIPC_RESULT_CONTEXT_NOT_ACTIVATED                       = 16,
    /* The operation failed because service is not activated. */
    MIPC_RESULT_SERVICE_NOT_ACTIVATED                       = 17,
    /* The operation failed because the access string is invalid. */
    MIPC_RESULT_INVALID_ACCESS_STRING                       = 18,
    /* The operation failed because the username and/or password supplied are invalid. */
    MIPC_RESULT_INVALID_USERID_PASSWORD                     = 19,
    /* The operation failed because the radio is currently powered off. */
    MIPC_RESULT_RADIO_POWER_OFF                             = 20,
    /* The operation failed because of invalid parameters. */
    MIPC_RESULT_INVALID_PARAMETERS                          = 21,
    /* The operation failed because of a read failure. */
    MIPC_RESULT_READ_FAILURE                                = 22,
    /* The operation failed because of a write failure. */
    MIPC_RESULT_WRITE_FAILURE                               = 23,
    /* Reserved. */
    MIPC_RESULT_Reserved_24                                 = 24,
    /* The phonebook operation failed because there is no phone book. */
    MIPC_RESULT_NO_PHONEBOOK                                = 25,
    /* A parameter with dynamic size is larger than the function can handle */
    MIPC_RESULT_PARAMETER_TOO_LONG                          = 26,
    /* The SIM Toolkit application on the SIM card is busy and the command could not be processed */
    MIPC_RESULT_STK_BUSY                                    = 27,
    /* The operation failed because the operation is not allowed. */
    MIPC_RESULT_OPERATION_NOT_ALLOWED                       = 28,
    /* The phonebook or sms operation failed because the because of device or SIM memory failure. */
    MIPC_RESULT_MEMORY_FAILURE                              = 29,
    /* The phonebook or sms operation failed because of an invalid memory index. */
    MIPC_RESULT_INVALID_MEMORY_INDEX                        = 30,
    /* The phonebook or sms operation failed because the device or SIM memory is full. */
    MIPC_RESULT_MEMORY_FULL                                 = 31,
    /* The phonebook or sms operation failed because the filter type is not supported. */
    MIPC_RESULT_FILTER_NOT_SUPPORTED                        = 32,
    /* Attempt to open a device service failed because the number of opened streams has reached the device service instance limit for this service. */
    MIPC_RESULT_DSS_INSTANCE_LIMIT                          = 33,
    /* The device service operation attempted is invalid. */
    MIPC_RESULT_INVALID_DEVICE_SERVICE_OPERATION            = 34,
    /* The device sets this error on an AKA or AKAPrime challenge response when the AKA or AKAPrime challenge sent has incorrect AUTN. */
    MIPC_RESULT_AUTH_INCORRECT_AUTN                         = 35,
    /* The device sets this error on a an AKA or AKAPrime challenge response when the AKA or AKAPrime challenge sent has synchronization failure. When this error code is returned the AUTS field would be set. */
    MIPC_RESULT_AUTH_SYNC_FAILURE                           = 36,
    /* The device sets this error on an AKAPrime challenge response when the AKAPrime challenge sent does not have the AMF bit set to 1. */
    MIPC_RESULT_AUTH_AMF_NOT_SET                            = 37,
    /* The operation failed because it could not support the type of context identified by ContextType. */
    MIPC_RESULT_CONTEXT_NOT_SUPPORTED                       = 38,
    /* The SMS operation failed because the service center address is either invalid or unknown. */
    MIPC_RESULT_SMS_UNKNOWN_SMSC_ADDRESS                    = 100,
    /* The SMS operation failed because of a network timeout. */
    MIPC_RESULT_SMS_NETWORK_TIMEOUT                         = 101,
    /* The SMS operation failed because the SMS language is not supported.This applies to CDMA based devices only. */
    MIPC_RESULT_SMS_LANG_NOT_SUPPORTED                      = 102,
    /* The SMS operation failed because the SMS encoding is not supported. This applies to CDMA based device only. */
    MIPC_RESULT_SMS_ENCODING_NOT_SUPPORTED                  = 103,
    /* The SMS operation failed because the SMS format is not supported. */
    MIPC_RESULT_SMS_FORMAT_NOT_SUPPORTED                    = 104,
    /*  */
    MIPC_RESULT_COMMON_END                                  = 0x3FFFF,
    /* CAT module extension result begin */
    MIPC_RESULT_CAT_EXT_BEGIN                               = 0x00080000,
    /* CAT module extension result end */
    MIPC_RESULT_CAT_EXT_END                                 = 0x000BFFFF,
    /* CC module extension result begin */
    MIPC_RESULT_CC_EXT_BEGIN                                = 0x000C0000,
    /* this call id is force hangup before */
    MIPC_RESULT_CC_CALL_FORCE_RELEASED_BEFORE               = 0x000C0001,
    /* CC module extension result end */
    MIPC_RESULT_CC_EXT_END                                  = 0x000FFFFF,
    /* NW module extension result begin */
    MIPC_RESULT_NW_EXT_BEGIN                                = 0x00100000,
    /* NW module extension result end */
    MIPC_RESULT_NW_EXT_END                                  = 0x0013FFFF,
    /* PDN module extension result begin */
    MIPC_RESULT_PDN_EXT_BEGIN                               = 0x00140000,
    /* PDN module network error begin */
    MIPC_RESULT_PDN_EXT_NETWORK_ERROR_BEGIN                 = 0x00140000,
    /* PDN module network SM error cause begin */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_BEGIN              = 0x00140C00,
    /* there is no such cause in SM spec, just for default */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_EMPTY              = 0x00140C01,
    /* OPERATOR DETERMINED BARRING as spec */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_OPERATOR_DETERMINED_BARRING = 0x00140C08,
    /* LLC_SND_FAILURE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_LLC_SND_FAILURE    = 0x00140C19,
    /* INSUFF_RESOURCE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_INSUFF_RESOURCE    = 0x00140C1A,
    /* UNKNOWN_APN */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNKNOWN_APN        = 0x00140C1B,
    /* UNKNOWN_PDP_ADDR_OR_TYPE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNKNOWN_PDP_ADDR_OR_TYPE = 0x00140C1C,
    /* AUTHENTICATION_FAILURE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_AUTHENTICATION_FAILURE = 0x00140C1D,
    /* ACTIVATION_REJ_GGSN */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_ACTIVATION_REJ_GGSN = 0x00140C1E,
    /* ACTIVATION_REJ_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_ACTIVATION_REJ_UNSPECIFIED = 0x00140C1F,
    /* UNSUPPORTED_SERVICE_OPTION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNSUPPORTED_SERVICE_OPTION = 0x00140C20,
    /* UNSUBSCRIBED_SERVICE_OPTION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNSUBSCRIBED_SERVICE_OPTION = 0x00140C21,
    /* SERVICE_OPTION_TEMPORARILY_OUT_OF_ORDER */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SERVICE_OPTION_TEMPORARILY_OUT_OF_ORDER = 0x00140C22,
    /* PTI_ALREADY_USED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PTI_ALREADY_USED   = 0x00140C23,
    /* REGULAR_DEACTIVATION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_REGULAR_DEACTIVATION = 0x00140C24,
    /* QOS_NOT_ACCEPTED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_QOS_NOT_ACCEPTED   = 0x00140C25,
    /* NETWORK_FAIL */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_NETWORK_FAIL       = 0x00140C26,
    /* REACTIVATION_REQD */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_REACTIVATION_REQD  = 0x00140C27,
    /* UNSUPPORTED_NW_CONTEXT_ACTIVATION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNSUPPORTED_NW_CONTEXT_ACTIVATION = 0x00140C28,
    /* SEMANTIC_ERROR_IN_TFT_OP */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SEMANTIC_ERROR_IN_TFT_OP = 0x00140C29,
    /* SYNTACTICAL_ERROR_IN_TFT_OP */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SYNTACTICAL_ERROR_IN_TFT_OP = 0x00140C2A,
    /* UNKNOWN_PDP_CONTEXT */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNKNOWN_PDP_CONTEXT = 0x00140C2B,
    /* SEMANTIC_ERROR_IN_PACKET_FILTER */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SEMANTIC_ERROR_IN_PACKET_FILTER = 0x00140C2C,
    /* SYNTAX_ERROR_IN_PACKET_FILTER */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SYNTAX_ERROR_IN_PACKET_FILTER = 0x00140C2D,
    /* PDP_CONTEXT_WO_TFT_ALREADY_ACT */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PDP_CONTEXT_WO_TFT_ALREADY_ACT = 0x00140C2E,
    /* PTI_MISMATCH */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PTI_MISMATCH       = 0x00140C2F,
    /* ACTIVATION_REJ_BCM_VIOLATION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_ACTIVATION_REJ_BCM_VIOLATION = 0x00140C30,
    /* LAST_PDN_DISC_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_LAST_PDN_DISC_NOT_ALLOWED = 0x00140C31,
    /* PDP_TYPE_IPV4_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PDP_TYPE_IPV4_ONLY_ALLOWED = 0x00140C32,
    /* PDP_TYPE_IPV6_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PDP_TYPE_IPV6_ONLY_ALLOWED = 0x00140C33,
    /* SINGLE_ADDR_BEARERS_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SINGLE_ADDR_BEARERS_ONLY_ALLOWED = 0x00140C34,
    /* ESM_INFORMATION_NOT_RECEIVED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_ESM_INFORMATION_NOT_RECEIVED = 0x00140C35,
    /* PDN_CONNENCTION_NOT_EXIST */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_PDN_CONNENCTION_NOT_EXIST = 0x00140C36,
    /* MULTIPLE_PDN_APN_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_MULTIPLE_PDN_APN_NOT_ALLOWED = 0x00140C37,
    /* COLLISION_WITH_NW_INITIATED_REQ */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_COLLISION_WITH_NW_INITIATED_REQ = 0x00140C38,
    /* UNSUPPORTED_QCI_VALUE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_UNSUPPORTED_QCI_VALUE = 0x00140C3B,
    /* MAXIMUM_NUM_OF_PDP_CONTEXTS_REACHED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_MAXIMUM_NUM_OF_PDP_CONTEXTS_REACHED = 0x00140C41,
    /* REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION = 0x00140C42,
    /* INVALID_TI */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_INVALID_TI         = 0x00140C51,
    /* SM_SEMANTICALLY_INCORRECT_MSG */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SM_SEMANTICALLY_INCORRECT_MSG = 0x00140C5F,
    /* INVALID_MAND_INFO */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_INVALID_MAND_INFO  = 0x00140C60,
    /* SM_MSG_TYPE_NON_EXISTENT_OR_NOT_IMPLEMENTED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SM_MSG_TYPE_NON_EXISTENT_OR_NOT_IMPLEMENTED = 0x00140C61,
    /* SM_MSG_TYPE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SM_MSG_TYPE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE = 0x00140C62,
    /* IE_NON_EXISTENCE_OR_NOT_IMPLEMENTED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_IE_NON_EXISTENCE_OR_NOT_IMPLEMENTED = 0x00140C63,
    /* CONDITIONAL_IE_ERROR */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_CONDITIONAL_IE_ERROR = 0x00140C64,
    /* SM_MSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SM_MSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE = 0x00140C65,
    /* SM_PROTOCOL_ERROR_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_SM_PROTOCOL_ERROR_UNSPECIFIED = 0x00140C6F,
    /* APN_RESTRICTION_VALUE_INCOMPATIBLE_WITH_ACTIVE_PDP_CTX */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_APN_RESTRICTION_VALUE_INCOMPATIBLE_WITH_ACTIVE_PDP_CTX = 0x00140C70,
    /* PDN module network SM error cause end */
    MIPC_RESULT_PDN_EXT_NETWORK_SM_CAUSE_END                = 0x00140C71,
    /* PDN module network ESM error cause begin */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_BEGIN             = 0x00140D00,
    /* there is no spec,default value */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_NO_CAUSE          = 0x00140D01,
    /* ESM_OPERATOR_DETERMINED_BARRING */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_OPERATOR_DETERMINED_BARRING = 0x00140D08,
    /* ESM_INSUFFICIENT_RESOURCES */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_INSUFFICIENT_RESOURCES = 0x00140D1A,
    /* ESM_UNKNOWN_OR_MISSING_APN */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_UNKNOWN_OR_MISSING_APN = 0x00140D1B,
    /* ESM_UNKNOWN_PDN_TYPE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_UNKNOWN_PDN_TYPE  = 0x00140D1C,
    /* USER_AUTH_FAILED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_USER_AUTH_FAILED  = 0x00140D1D,
    /* REQUEST_REJECTED_BY_SGW_OR_PDNGW */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_REQUEST_REJECTED_BY_SGW_OR_PDNGW  = 0x00140D1E,
    /* REQUEST_REJECTED_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_REQUEST_REJECTED_UNSPECIFIED = 0x00140D1F,
    /* SERVICE_OPT_NOT_SUPPORTED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SERVICE_OPT_NOT_SUPPORTED = 0x00140D20,
    /* REQ_SERVICE_NOT_SUBSCRIBED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_REQ_SERVICE_NOT_SUBSCRIBED = 0x00140D21,
    /* ESM_SERVICE_TEMP_OUT_OF_ORDER */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SERVICE_TEMP_OUT_OF_ORDER = 0x00140D22,
    /* PTI_ALREADY_USED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PTI_ALREADY_USED  = 0x00140D23,
    /* REGULAR_DEACTIVATION */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_REGULAR_DEACTIVATION = 0x00140D24,
    /* EPS_QOS_NOT_ACCEPTED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_EPS_QOS_NOT_ACCEPTED = 0x00140D25,
    /* NETWORK_FAILURE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_NETWORK_FAILURE   = 0x00140D26,
    /* REACTIVATION_REQUESTED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_REACTIVATION_REQUESTED = 0x00140D27,
    /* SEMANTIC_ERROR_IN_TFT */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SEMANTIC_ERROR_IN_TFT = 0x00140D29,
    /* SYNTACTIC_ERROR_IN_TFT  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SYNTACTIC_ERROR_IN_TFT = 0x00140D2A,
    /* INVALID_EPS_BEARER_IDENTITY  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_INVALID_EPS_BEARER_IDENTITY = 0x00140D2B,
    /* SEMANTIC_ERROR_IN_PACKET_FILTERS  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SEMANTIC_ERROR_IN_PACKET_FILTERS = 0x00140D2C,
    /* SYNTACTIC_ERROR_IN_PACKET_FILTERS  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SYNTACTIC_ERROR_IN_PACKET_FILTERS = 0x00140D2D,
    /* EPSB_CTXT_WITHOUT_TFT_ACTIVATED  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_EPSB_CTXT_WITHOUT_TFT_ACTIVATED = 0x00140D2E,
    /* PTI_MISMATCH */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PTI_MISMATCH      = 0x00140D2F,
    /* LAST_PDN_DISC_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_LAST_PDN_DISC_NOT_ALLOWED = 0x00140D31,
    /* PDN_TYPE_IPV4_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PDN_TYPE_IPV4_ONLY_ALLOWED = 0x00140D32,
    /* PDN_TYPE_IPV6_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PDN_TYPE_IPV6_ONLY_ALLOWED = 0x00140D33,
    /* SINGLE_ADDRESS_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SINGLE_ADDRESS_ONLY_ALLOWED = 0x00140D34,
    /* ESM_INFORMATION_NOT_RECEIVED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_ESM_INFORMATION_NOT_RECEIVED = 0x00140D35,
    /* PDN_CONNENCTION_NOT_EXIST */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PDN_CONNENCTION_NOT_EXIST = 0x00140D36,
    /* MULTIPLE_PDN_APN_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_MULTIPLE_PDN_APN_NOT_ALLOWED = 0x00140D37,
    /* COLLISION_WITH_NW_INIT_REQUEST */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_COLLISION_WITH_NW_INIT_REQUESTD = 0x00140D38,
    /* UNSUPPORTED_QCI_VALUE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_UNSUPPORTED_QCI_VALUE = 0x00140D3B,
    /* MAXIMUM_NUM_OF_EPS_BEARERS_REACHED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_MAXIMUM_NUM_OF_EPS_BEARERS_REACHED = 0x00140D41,
    /* ESM_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_ESM_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION = 0x00140D42,
    /* INVALID_PTI_VALUE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_INVALID_PTI_VALUE = 0x00140D51,
    /* SEMANTIC_INCORRECT_MSG */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_SEMANTIC_INCORRECT_MSG = 0x00140D5F,
    /* INVALID_MANDATORY_IE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_INVALID_MANDATORY_IE = 0x00140D60,
    /* MSG_TYPE_NON_EXISTENT */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_MSG_TYPE_NON_EXISTENT = 0x00140D61,
    /* MSG_TYPE_NOT_COMPATIBLE_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_MSG_TYPE_NOT_COMPATIBLE_STATE = 0x00140D62,
    /* IE_NON_EXISTENT_NOT_IMPLEMENTED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_IE_NON_EXISTENT_NOT_IMPLEMENTED = 0x00140D63,
    /* CONDITIONAL_IE_ERROR */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_CONDITIONAL_IE_ERROR = 0x00140D64,
    /* MSG_NOT_COMPATIBLE_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_MSG_NOT_COMPATIBLE_STATE = 0x00140D65,
    /* PROTOCOL_ERROR_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_PROTOCOL_ERROR_UNSPECIFIED = 0x00140D6F,
    /* APN_RESTRICT_VALUE_INCOMPATIBLE  */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_APN_RESTRICT_VALUE_INCOMPATIBLE  = 0x00140D70,
    /* PDN module network ESM error cause begin */
    MIPC_RESULT_PDN_EXT_NETWORK_ESM_CAUSE_END               = 0x00140D71,
    /* PDN module network 5GSM error cause begin */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_BEGIN            = 0x00141A00,
    /* default value, there is no spec */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_NO_CAUSE         = 0x00141A01,
    /* OPERATOR_DETERMINED_BARRING */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_OPERATOR_DETERMINED_BARRING = 0x00141A08,
    /* INSUFFICIENT_RESOURCES */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INSUFFICIENT_RESOURCES = 0x00141A1A,
    /* MISSING_OR_UNKNOWN_DNN */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MISSING_OR_UNKNOWN_DNN = 0x00141A1B,
    /* UNKNOWN_PDU_SESSION_TYPE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_UNKNOWN_PDU_SESSION_TYPE = 0x00141A1C,
    /* USER_AUTH_FAILED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_USER_AUTH_FAILED = 0x00141A1D,
    /* REQUEST_REJECTED_BY_SGW_OR_PDNGW */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REQUEST_REJECTED_BY_SGW_OR_PDNGW = 0x00141A1E,
    /* REQUEST_REJECTED_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REQUEST_REJECTED_UNSPECIFIED = 0x00141A1F,
    /* SERVICE_OPT_NOT_SUPPORTED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SERVICE_OPT_NOT_SUPPORTED = 0x00141A20,
    /* REQ_SERVICE_NOT_SUBSCRIBED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REQ_SERVICE_NOT_SUBSCRIBED = 0x00141A21,
    /* SERVICE_OPT_TEMP_OUT_OF_ORDER */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SERVICE_OPT_TEMP_OUT_OF_ORDER = 0x00141A22,
    /* PTI_ALREADY_USED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PTI_ALREADY_USED = 0x00141A23,
    /* REGULAR_DEACTIVATION */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REGULAR_DEACTIVATION = 0x00141A24,
    /* EPS_QOS_NOT_ACCEPTED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_EPS_QOS_NOT_ACCEPTED = 0x00141A25,
    /* NETWORK_FAILURE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_NETWORK_FAILURE  = 0x00141A26,
    /* REACTIVATION_REQUESTED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REACTIVATION_REQUESTED = 0x00141A27,
    /* SEMANTIC_ERROR_IN_TFT */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SEMANTIC_ERROR_IN_TFT = 0x00141A29,
    /* SYNTACTIC_ERROR_IN_TFT */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SYNTACTIC_ERROR_IN_TFT = 0x00141A2A,
    /* INVALID_PDU_SESSION_IDENTITY */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INVALID_PDU_SESSION_IDENTITY = 0x00141A2B,
    /* SEMANTIC_ERROR_IN_PACKET_FILTERS */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SEMANTIC_ERROR_IN_PACKET_FILTERS = 0x00141A2C,
    /* SYNTACTIC_ERROR_IN_PACKET_FILTERS */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SYNTACTIC_ERROR_IN_PACKET_FILTERS = 0x00141A2D,
    /* OUT_OF_LADN_SERVICE_AREA */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_OUT_OF_LADN_SERVICE_AREA = 0x00141A2E,
    /* PTI_MISMATCH */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PTI_MISMATCH     = 0x00141A2F,
    /* LAST_PDN_DISC_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_LAST_PDN_DISC_NOT_ALLOWED = 0x00141A31,
    /* PDU_SESSION_TYPE_IPV4_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PDU_SESSION_TYPE_IPV4_ONLY_ALLOWED = 0x00141A32,
    /* PDU_SESSION_TYPE_IPV4_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PDU_SESSION_TYPE_IPV6_ONLY_ALLOWED = 0x00141A33,
    /* SINGLE_ADDRESS_ONLY_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SINGLE_ADDRESS_ONLY_ALLOWED = 0x00141A34,
    /* PDU_SESSION_NOT_EXIST */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PDU_SESSION_NOT_EXIST = 0x00141A36,
    /* MULTIPLE_PDN_APN_NOT_ALLOWED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MULTIPLE_PDN_APN_NOT_ALLOWED = 0x00141A37,
    /* COLLISION_WITH_NW_INIT_REQUEST */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_COLLISION_WITH_NW_INIT_REQUEST = 0x00141A38,
    /* UNSUPPORTED_QCI_VALUE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_UNSUPPORTED_QCI_VALUE = 0x00141A3B,
    /* MAXIMUM_NUM_OF_EPS_BEARERS_REACHED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MAXIMUM_NUM_OF_EPS_BEARERS_REACHED = 0x00141A41,
    /* REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION = 0x00141A42,
    /* INSUFFICIENT_RESOURCES_FOR_SPECIFIC_SLICE_AND_DNN */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INSUFFICIENT_RESOURCES_FOR_SPECIFIC_SLICE_AND_DNN = 0x00141A43,
    /* NOT_SUPPORTED_SSC_MODE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_NOT_SUPPORTED_SSC_MODE = 0x00141A44,
    /* NOT_SUPPORTED_SSC_MODE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INSUFFICIENT_RESOURCES_FOR_SPECIFIC_SLICE = 0x00141A45,
    /* MISSING_OR_UNKNOWN_DNN_IN_A_SLICE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MISSING_OR_UNKNOWN_DNN_IN_A_SLICE = 0x00141A46,
    /* INVALID_PTI_VALUE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INVALID_PTI_VALUE = 0x00141A51,
    /* MAX_DATA_RATE_PER_UE_FOR_UPLANE_INTEGRITY_PROTECTION_IS_TOO_LOW */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MAX_DATA_RATE_PER_UE_FOR_UPLANE_INTEGRITY_PROTECTION_IS_TOO_LOW = 0x00141A52,
    /* SEMANTIC_ERROR_IN_QOS_OPERATION */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SEMANTIC_ERROR_IN_QOS_OPERATION = 0x00141A53,
    /* SYNTACTIC_ERROR_IN_QOS_OPERATION */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SYNTACTIC_ERROR_IN_QOS_OPERATION = 0x00141A54,
    /* INVALID_MAPPED_EPS_BEARER_IDENTITY */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INVALID_MAPPED_EPS_BEARER_IDENTITY = 0x00141A55,
    /* SEMANTICLLY_INCORRECT_MSG */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_SEMANTICLLY_INCORRECT_MSG = 0x00141A5F,
    /* INVALID_MANDATORY_IE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_INVALID_MANDATORY_IE = 0x00141A60,
    /* MSG_TYPE_NON_EXISTENT_OR_NOT_IMPLEMENT */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MSG_TYPE_NON_EXISTENT_OR_NOT_IMPLEMENT = 0x00141A61,
    /* MSG_TYPE_NOT_COMPATIBLE_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MSG_TYPE_NOT_COMPATIBLE_STATE = 0x00141A62,
    /* IE_NON_EXISTENT_NOT_IMPLEMENTED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_IE_NON_EXISTENT_NOT_IMPLEMENTED = 0x00141A63,
    /* CONDITIONAL_IE_ERROR */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_CONDITIONAL_IE_ERROR = 0x00141A64,
    /* MSG_NOT_COMPATIBLE_STATE */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_MSG_NOT_COMPATIBLE_STATE = 0x00141A65,
    /* PROTOCOL_ERROR_UNSPECIFIED */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_PROTOCOL_ERROR_UNSPECIFIED = 0x00141A6F,
    /* PDN module network 5GSM error cause end */
    MIPC_RESULT_PDN_EXT_NETWORK_5GSM_CAUSE_END              = 0x00141AFF,
    /* PDN module network error end */
    MIPC_RESULT_PDN_EXT_NETWORK_ERROR_END                   = 0x0014FFFF,
    /* PDN mipc messages error begin */
    MIPC_RESULT_PDN_EXT_LOCAL_MIPC_ERROR_BEGIN              = 0x00150000,
    /* There is no enough information in MIPC message */
    MIPC_RESULT_PDN_EXT_LOCAL_MIPC_ERROR_NO_ENOUGH_INFO     = 0x00150001,
    /* PDN mipc messages error end */
    MIPC_RESULT_PDN_EXT_LOCAL_MIPC_ERROR_END                = 0x001500FF,
    /* PDN module parameters error begin */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_BEGIN              = 0x00150100,
    /* parameters for PDN is invalid */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_INVALID_PARA       = 0x00150101,
    /* APN is not found to activate */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_NOT_FIND_APN_TO_ACT = 0x00150102,
    /* APN is already activated or no apn info to abort */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_NO_APN_INFO_TO_ABORT = 0x00150103,
    /* APN is disbaled by host */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_APN_PROFILE_IS_DISABLED = 0x00150104,
    /* APN call info is not found */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_NOT_FIND_CALL_INFO = 0x00150105,
    /* PDN module parameters error end */
    MIPC_RESULT_PDN_EXT_LOCAL_PARA_ERROR_END                = 0x001501FF,
    /* PDN module extension result end */
    MIPC_RESULT_PDN_EXT_END                                 = 0x0017FFFF,
    /* RF module extension result begin */
    MIPC_RESULT_RF_EXT_BEGIN                                = 0x00180000,
    /* RF module extension result end */
    MIPC_RESULT_RF_EXT_END                                  = 0x001BFFFF,
    /* SIM module extension result begin */
    MIPC_RESULT_SIM_EXT_BEGIN                               = 0x001C0000,
    /* MT is waiting  PUK1 code */
    MIPC_RESULT_SIM_EXT_PUK1_REQUIRED                       = 0x001C0001,
    /* MT is waiting  PIN2 code */
    MIPC_RESULT_SIM_EXT_PIN2_REQUIRED                       = 0x001C0002,
    /* MT is waiting  PUK2 code */
    MIPC_RESULT_SIM_EXT_PUK2_REQUIRED                       = 0x001C0003,
    /* SIM failure  */
    MIPC_RESULT_SIM_EXT_SIM_FAILURE                         = 0x001C0004,
    /* Incoorect password returned from UICC  */
    MIPC_RESULT_SIM_EXT_INCORRECT_PASS_WORD                 = 0x001C0005,
    /* Network personalization PIN required.Related 3GPP SPEC:22.022.  */
    MIPC_RESULT_SIM_EXT_NW_PERSON_PIN_REQUIRED              = 0x001C0006,
    /* Network personalization PUK required.  */
    MIPC_RESULT_SIM_EXT_NW_PERSON_PUK_REQUIRED              = 0x001C0007,
    /* Network subset personalization PIN required. Related 3GPP SPEC:22.022.  */
    MIPC_RESULT_SIM_EXT_NW_SUB_PERSON_PIN_REQUIRED          = 0x001C0008,
    /* Network subset personalization PUK required.  */
    MIPC_RESULT_SIM_EXT_NW_SUB_PERSON_PUK_REQUIRED          = 0x001C0009,
    /* Service Provider personalization PIN required. Related 3GPP SPEC:22.022. */
    MIPC_RESULT_SIM_EXT_SP_PERSON_PIN_REQUIRED              = 0x001C000A,
    /* Service Provider personalization PUK required. */
    MIPC_RESULT_SIM_EXT_SP_PERSON_PUK_REQUIRED              = 0x001C000B,
    /* Corporate personalization PIN required.Related 3GPP SPEC:22.022. */
    MIPC_RESULT_SIM_EXT_CORP_PERSON_PIN_REQUIRED            = 0x001C000C,
    /* Corporate personalization PUK required. */
    MIPC_RESULT_SIM_EXT_CORP_PERSON_PUK_REQUIRED            = 0x001C000D,
    /* IMSI personalization PIN required.Related 3GPP SPEC:22.022. */
    MIPC_RESULT_SIM_EXT_IMSI_PERSON_PIN_REQUIRED            = 0x001C000E,
    /* IMSI personalization PUK required. */
    MIPC_RESULT_SIM_EXT_IMSI_PERSON_PUK_REQUIRED            = 0x001C000F,
    /* Link network and service provider personalization pin required. */
    MIPC_RESULT_SIM_EXT_LINK_NS_SP_PERSON_PIN_REQUIRED      = 0x001C0010,
    /* Link network and service provider personalization puk required. */
    MIPC_RESULT_SIM_EXT_LINK_NS_SP_PERSON_PUK_REQUIRED      = 0x001C0011,
    /* Link SIM and corporate personalization pin required. */
    MIPC_RESULT_SIM_EXT_LINK_SIM_C_PERSON_PIN_REQUIRED      = 0x001C0012,
    /* Link SIM and corporate personalization puk required. */
    MIPC_RESULT_SIM_EXT_LINK_SIM_C_PERSON_PUK_REQUIRED      = 0x001C0013,
    /* BT SAP related error. */
    MIPC_RESULT_SIM_EXT_BT_SAP_UNDEFINED                    = 0x001C0014,
    /* BT SAP not accessible. */
    MIPC_RESULT_SIM_EXT_BT_SAP_NOT_ACCESSIBLE               = 0x001C0015,
    /* BT SAP error card removed. */
    MIPC_RESULT_SIM_EXT_BT_SAP_CARD_REMOVED                 = 0x001C0016,
    /* BT SAP error card already powered off. */
    MIPC_RESULT_SIM_EXT_BT_SAP_CARD_ALREADY_POWERED_OFF     = 0x001C0017,
    /* BT SAP error card already powered on. */
    MIPC_RESULT_SIM_EXT_BT_SAP_CARD_ALREADY_POWERED_ON      = 0x001C0018,
    /* SIM module extension result end */
    MIPC_RESULT_SIM_EXT_END                                 = 0x001FFFFF,
    /* SMS module extension result begin */
    MIPC_RESULT_SMS_EXT_BEGIN                               = 0x00200000,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_WRONG_MSG_ID_RANGE_FORMAT   = 0x00200001,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_WRONG_MSG_ID_SINGLE_FORMAT  = 0x00200002,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_WRONG_DCS_RANGE_FORMAT      = 0x00200003,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_WRONG_DCS_SINGLE_FORMAT     = 0x00200004,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_TOO_MORE_RANGES_OR_SINGLES  = 0x00200005,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_MSG_ID_LOGIC_ERROR          = 0x00200006,
    /*  */
    MIPC_RESULT_SMS_EXT_CBM_CFG_DCS_LOGIC_ERROR             = 0x00200007,
    /* Something wrong with storage parameter, like unsync/uninit... */
    MIPC_RESULT_SMS_EXT_NEED_SET_PREFER_STORAGE_AGAIN       = 0x00200008,
    /* Something wrong with c2k operation */
    MIPC_RESULT_SMS_EXT_C2K_ERROR                           = 0x00200009,
    /* bellow should be old AT error, could use offset to judge AT error cause */
    MIPC_RESULT_SMS_EXT_AT_ERROR_BEGIN                      = 0x00210000,
    /* at error cause 226 would transfer this */
    MIPC_RESULT_SMS_EXT_CM_SMS_CONNECTION_BROKEN            = 0x002100E2,
    /* at error cause 2601 would transfer this */
    MIPC_RESULT_SMS_EXT_MTK_FDN_CHECK_FAILURE               = 0x00210A29,
    /* at error cause 6145 would transfer this */
    MIPC_RESULT_SMS_EXT_MTK_REQ_RETRY                       = 0x00211801,
    /* upper should be old AT error, could use offset to judge AT error cause */
    MIPC_RESULT_SMS_EXT_AT_ERROR_END                        = 0x0021FFFF,
    /* SMS module extension result end */
    MIPC_RESULT_SMS_EXT_END                                 = 0x0023FFFF,
    /* SS module extension result begin */
    MIPC_RESULT_SS_EXT_BEGIN                                = 0x00240000,
    /* cat module extension result end */
    MIPC_RESULT_SS_EXT_END                                  = 0x0027FFFF,
    /* SWITCH module extension result begin */
    MIPC_RESULT_SWITCH_EXT_BEGIN                            = 0x00280000,
    /* SWITCH module extension result end */
    MIPC_RESULT_SWITCH_EXT_END                              = 0x002BFFFF,
    /* SYS module extension result begin */
    MIPC_RESULT_SYS_EXT_BEGIN                               = 0x002C0000,
    /* SYS module extension result end */
    MIPC_RESULT_SYS_EXT_END                                 = 0x002FFFFF,
    /*  */
    MIPC_RESULT_AUTH_REQUIRED                               = 0xFFFFFFFE,
    /*  */
    MIPC_RESULT_TIMEOUT                                     = 0xFFFFFFFF,
};
typedef enum mipc_result_const_enum mipc_result_const_enum;



#define MIPC_MAX_AT_URC_LEN                                (128) /* Maximum AT URC, should be 4*X */
#define MIPC_MAX_AT_CMD_LEN                                (128) /* Maximum AT command length, should be 4*X */
#define MIPC_MAX_AT_CMD_RSP_LEN                            (1024) /* Maximum AT command response length, should be 4*X */
#define MIPC_MAX_APN_LEN                                   (100) /* Maximum APN Name length, should be 4*X */
#define MIPC_MAX_APN_BEARER_LEN                            (10) /* Maximum APN bearer length */
#define MIPC_MAX_CID_LIST_LEN                              (200) /* cid is 0~199 */
#define MIPC_MAX_USERID_LEN                                (64) /* Maximum User Name length, should be 4*X */
#define MIPC_MAX_PASSWORD_LEN                              (64) /* Maximum Password length, should be 4*X */
#define MIPC_MAX_EIWLAN_CMD_LEN                            (8) /* Maximum IWLAN PRIORITY command length, should be 4*X */
#define MIPC_MAX_EIWLAN_TYPE_LEN                           (16) /* Maximum IWLAN PRIORITY type length, should be 4*X */
#define MIPC_MAX_EIWLAN_DESCRIPTION_LEN                    (32) /* Maximum IWLAN PRIORITY description length, should be 4*X */
#define MIPC_FIX_CALL_BARRING_PASSWORD_LEN                 (4) /* Maximum Call barring Password length, should be 4*X */
#define MIPC_MAX_OPER_LEN                                  (16) /* Maximum operator name length */
#define MIPC_MAX_USSD_LEN                                  (160) /* Maximum USSD length */
#define MIPC_MAX_PAC_IND_LEN                               (512) /* Maximum pac ind length */
#define MIPC_MAX_TERMINAL_RESPONSE_LEN                     (261) /* Maximum terminal response length */
#define MIPC_MAX_AID_LEN                                   (256) /* Maximum aid length in refresh */
#define MIPC_MAX_ENVELOP_LEN                               (261) /* Maximum envelop length */
#define MIPC_MAX_CLIENT_NAME_LEN                           (160) /* Maximum client name length */
#define MIPC_SIM_FIX_ICCID_LEN                             (20) /* Maximum ICCID length */
#define MIPC_MAX_IMSI_LEN                                  (20) /* Maximum IMSI length */
#define MIPC_MAX_ATR_LEN                                   (80) /* Maximum ATR string length */
#define MIPC_MAX_DEVICEID_LEN                              (16) /*  */
#define MIPC_MAX_MANUFACTURER_LEN                          (32) /*  */
#define MIPC_MAX_FIRMWARE_INFO_LEN                         (64) /*  */
#define MIPC_MAX_HARDWAREWARE_INFO_LEN                     (30) /*  */
#define MIPC_FIX_ESN_LEN                                   (8) /* Fixed length for ESN */
#define MIPC_FIX_IMEISV_LEN                                (2) /* Fixed length for IMEISV */
#define MIPC_FIX_MEID_LEN                                  (14) /* Fixed length for MEID */
#define MIPC_FIX_HARDWARE_ID_LEN                           (16) /* Fixed length for harware id */
#define MIPC_MAX_DUMP_LIDS_LEN                             (1024) /* max length for mcf dump lids */
#define MIPC_MAX_MCF_VALUE_LEN                             (512) /* max length for mcf value */
#define MIPC_MAX_MCF_CFG_LEN                               (1024) /* max length for mcf config */
#define MIPC_MAX_NETWORK_NAME_LEN                          (60) /*  */
#define MIPC_MAX_ROAMING_TEXT_LEN                          (64) /*  */
#define MIPC_FIX_GSM_AUTH_RAND_LEN                         (16) /* Fixed length for RAND */
#define MIPC_FIX_GSM_AUTH_RSP_KC_LEN                       (8) /* Fixed length for KC */
#define MIPC_FIX_GSM_AUTH_RSP_SRES_LEN                     (4) /* Fixed length for SRES */
#define MIPC_MAX_EXT_AUTH_CMD_DATA_LEN                     (256) /* Maximum command data length of extention authenticate command */
#define MIPC_MAX_EXT_AUTH_RSP_DATA_LEN                     (256) /* Maximum command response length of extention authenticate command */
#define MIPC_MAX_TERMINAL_CAPABILITY_DATA_LEN              (256) /* Maximum data length of terminal capability */
#define MIPC_MAX_SIM_APP_LABEL_LEN                         (32) /* Maximum data length of application label */
#define MIPC_MAX_SIM_AID_BYTE_LEN                          (20) /* Maximum data length of application id */
#define MIPC_MAX_SIM_AID_STR_LEN                           (40) /* Maximum string length of application id */
#define MIPC_MAX_SMS_PDU_LEN                               (256) /* Maximum length of SMS PDU(include the sca) */
#define MIPC_MAX_CBM_PDU_LEN                               (1246) /* Maximum length of CBM PDU((82+1)*15+1) */
#define MIPC_MAX_SMS_SCA_LEN                               (32) /* Maximum length of SMS SCA(include the NULL-ending) */
#define MIPC_FIX_SMS_ETWS_SECUR_INFO_LEN                   (50) /* fixed length of ETWS security info */
#define MIPC_MAX_SMS_CBM_MSGID_RANGE_NUM                   (30) /*  */
#define MIPC_MAX_SMS_CBM_MSGID_SINGLE_NUM                  (60) /*  */
#define MIPC_MAX_SMS_CBM_DCS_RANGE_NUM                     (30) /*  */
#define MIPC_MAX_SMS_CBM_DCS_SINGLE_NUM                    (60) /*  */
#define MIPC_MAX_SS_DIAL_NUMBER_LEN                        (182) /* Maximum dail number in ss service */
#define MIPC_MAX_SS_DIAL_NUMBER_FOR_ALIGN_LEN              (183) /* Maximum dail number in ss service for align */
#define MIPC_MAX_DIAL_ADDRESS_LEN                          (180) /* Maximum dail address length */
#define MIPC_MAX_CALL_NUMBER_LEN                           (128) /* Maximum call number length */
#define MIPC_MAX_CALL_ECC_NUMBER_LEN                       (10) /* Maximum ecc call number length */
#define MIPC_MAX_CALL_CONFERENCE_PARTICIPANT_NUM           (40) /* Maximum conference call paticipant number */
#define MIPC_MAX_CALL_NAME_LEN                             (80) /* Maximum call name length */
#define MIPC_MAX_CALL_SS_SUBADDR_LEN                       (64) /*  */
#define MIPC_MAX_SIM_PATH_BYTE_LEN                         (12) /* Maximum byte length of sim path for byte_array type */
#define MIPC_MAX_SIM_PATH_STR_LEN                          (24) /* Maximum string length of sim path */
#define MIPC_MAX_SIM_APDU_BYTE_LEN                         (261) /* Maximum length of APDU byte */
#define MIPC_MAX_SIM_APDU_STRING_LEN                       (522) /* Maximum length of APDU string */
#define MIPC_MAX_SIM_LONG_BIN_DATA_LEN                     (65535) /* Maximum length of command or response data for LONG APDU operation */
#define MIPC_MAX_SIM_PIN_CODE_LEN                          (16) /* Maximum pin code length for sim card */
#define MIPC_MAX_SIM_PUK_CODE_LEN                          (16) /* Maximum puk code length for sim card */
#define MIPC_MAX_SIM_CMD_DATA_STR_LEN                      (510) /* Maximum command data string length of APDU */
#define MIPC_MAX_SIM_RSP_DATA_STR_LEN                      (510) /* Maximum response data string length of APDU */
#define MIPC_MAX_SIM_CMD_DATA_BYTE_LEN                     (255) /* Maximum command data byte length of APDU */
#define MIPC_MAX_SIM_CMD_EXTENDED_DATA_BYTE_LEN            (65535) /* Maximum command data byte length of extended APDU */
#define MIPC_MAX_SIM_RSP_DATA_BYTE_LEN                     (255) /* Maximum response data  byte length of APDU */
#define MIPC_MAX_SIM_NUM                                   (2) /*  */
#define MIPC_MAX_SIM_EID_LEN                               (32) /* Maximum eid string length of euicc */
#define MIPC_MAX_SIM_FACILITY_LEN                          (2) /* maximum string length of SIM facility string */
#define MIPC_MAX_CALL_FINISH_REASON_LEN                    (128) /*  */
#define MIPC_MAX_DTMF_DIGIT_LEN                            (2) /*  */
#define MIPC_MAX_CALL_ECC_LIST_RECORD_NUM                  (32) /* Maximum record of ecc list record  */
#define MIPC_MAX_SIP_REASON_TEXT_LEN                       (120) /*  */
#define MIPC_IMS_MAX_URI_LEN                               (256) /*  */
#define MIPC_IMS_MAX_ERROR_MESSAGE_LEN                     (256) /*  */
#define MIPC_MAX_IMS_EVENT_PACKAGE_DATA_LEN                (64000) /*  */
#define MIPC_MAX_CALL_NUM                                  (7) /* Maximum call count */
#define MIPC_MAX_SBP_STR_LEN                               (256) /* Maximum length of sbp string */
#define MIPC_MAX_PLMN_ID_LEN                               (7) /* Maximum length of plmn id(mcc + mnc) */
#define MIPC_MAX_ALPHAID_LEN                               (128) /* Maximum length of alphaid */
#define MIPC_MAX_SUB_ADDRESS_LEN                           (128) /* Maximum length of subaddress */
#define MIPC_MAX_CHANGE_BARRING_PWD_LEN                    (9) /* Maximum length of password in change barring request */
#define MIPC_MAX_SET_LOCATION_LEN                          (128) /* Maximum length of string in set location info */
#define MIPC_MAX_SS_ECMCCSS_RAW_LEN                        (256) /* Maximum length of ss ecmccss raw string */
#define MIPC_MAX_SS_USSD_LANG_LEN                          (32) /* Maximum length of ss ussd lang */


#pragma pack (push)
#pragma pack (1)

typedef struct mipc_v4_full_addr_struct4 {
    uint32_t                                           mtu; /* 0 means not present */
    uint8_t                                            addr[4]; /* N/A */
    uint8_t                                            mask[4]; /* N/A */
} mipc_v4_full_addr_struct4 ;

typedef struct mipc_v6_full_addr_struct4 {
    uint32_t                                           mtu; /* 0 means not present */
    uint8_t                                            addr[16]; /* N/A */
    uint32_t                                           prefix; /* N/A */
} mipc_v6_full_addr_struct4 ;

typedef struct mipc_addr_struct4 {
    uint32_t                                           addr_len; /* N/A */
    uint8_t                                            addr[16]; /* N/A */
} mipc_addr_struct4 ;

typedef struct mipc_full_addr_struct4 {
    uint32_t                                           addr_len; /* N/A */
    uint8_t                                            addr[16]; /* N/A */
    uint32_t                                           mtu; /* 0 means not present */
    uint8_t                                            mask[4]; /* N/A */
    uint32_t                                           prefix; /* N/A */
} mipc_full_addr_struct4 ;

typedef struct mipc_apn_ia_struct4 {
    char                                               apn[MIPC_MAX_APN_LEN]; /* apn name */
    uint32_t                                           apn_idx; /* N/A */
    char                                               userid[MIPC_MAX_USERID_LEN]; /* user id */
    char                                               password[MIPC_MAX_PASSWORD_LEN]; /* password */
    uint32_t                                           bearer_bitmask; /* N/A */
    uint8_t                                            pdp_type; /* pdp type (v4, v6, v4v6 at home) */
    uint8_t                                            roaming_type; /* roamingtype (v4, v6, v4v6 at roaming) */
    uint8_t                                            auth_type; /* auth potocol */
    uint8_t                                            compression; /* compression */
} mipc_apn_ia_struct4 ;

typedef struct mipc_apn_profile_struct4 {
    uint32_t                                           id; /* apn profile id */
    uint8_t                                            plmn_id[MIPC_MAX_PLMN_ID_LEN]; /* provider id in sim card */
    uint8_t                                            padding; /* padding */
    char                                               apn[MIPC_MAX_APN_LEN]; /* apn name */
    uint32_t                                           apn_idx; /* N/A */
    char                                               userid[MIPC_MAX_USERID_LEN]; /* user id */
    char                                               password[MIPC_MAX_PASSWORD_LEN]; /* password */
    uint32_t                                           bearer_bitmask; /* N/A */
    uint32_t                                           apn_type; /* apn type */
    uint8_t                                            pdp_type; /* pdp type (v4, v6, v4v6 at home) */
    uint8_t                                            roaming_type; /* roamingtype (v4, v6, v4v6 at roaming) */
    uint8_t                                            auth_type; /* auth potocol */
    uint8_t                                            compression; /* compression */
    uint8_t                                            reserve1; /* reserve for implementing field */
    uint8_t                                            reserve2; /* reserve for implementing field */
    uint8_t                                            reserve3; /* reserve for implementing field */
    uint8_t                                            enabled; /* apn is enabled or not, MAX is not set */
} mipc_apn_profile_struct4 ;

typedef struct mipc_md_apn_profile_struct4 {
    uint32_t                                           id; /* apn profile id */
    uint8_t                                            plmn_id[MIPC_MAX_PLMN_ID_LEN]; /* provider id in sim card */
    uint8_t                                            act_state; /* APN activated state */
    char                                               apn[MIPC_MAX_APN_LEN]; /* apn name */
    uint32_t                                           apn_idx; /* N/A */
    char                                               userid[MIPC_MAX_USERID_LEN]; /* user id */
    char                                               password[MIPC_MAX_PASSWORD_LEN]; /* password */
    uint32_t                                           bearer_bitmask; /* N/A */
    uint32_t                                           apn_type; /* apn type */
    uint8_t                                            pdp_type; /* pdp type (v4, v6, v4v6 at home) */
    uint8_t                                            roaming_type; /* roamingtype (v4, v6, v4v6 at roaming) */
    uint8_t                                            auth_type; /* auth potocol */
    uint8_t                                            reserve; /* reserve */
} mipc_md_apn_profile_struct4 ;

typedef struct mipc_vzw_apn_profile_struct4 {
    char                                               apn[MIPC_MAX_APN_LEN]; /* apn name */
    char                                               apnb[MIPC_MAX_APN_BEARER_LEN]; /* apn bearer */
    uint8_t                                            pdp_type; /* pdp type (v4, v6, v4v6 at home) */
    uint8_t                                            id; /* ID */
    uint8_t                                            apnclass; /* APN class */
    uint8_t                                            enabled; /* apn is enabled or not, MAX is not set */
    uint8_t                                            max_conn; /* max connection count */
    uint8_t                                            max_conn_t; /* max connection  */
    uint32_t                                           wait_time; /* wait time by seconds */
    uint8_t                                            act_state; /* APN activated state */
    uint8_t                                            reserve1; /* reserve */
    uint8_t                                            reserve2; /* reserve */
    uint8_t                                            reserve3; /* reserve */
} mipc_vzw_apn_profile_struct4 ;

typedef struct mipc_data_nitz_info_struct4 {
    uint32_t                                           year; /* the year as an integer. */
    uint32_t                                           month; /* N/A */
    uint32_t                                           day; /* N/A */
    uint32_t                                           hour; /* N/A */
    uint32_t                                           minute; /* N/A */
    uint32_t                                           second; /* N/A */
} mipc_data_nitz_info_struct4 ;

typedef struct mipc_data_v4_addr_struct4 {
    uint8_t                                            addr[4]; /* N/A */
} mipc_data_v4_addr_struct4 ;

typedef struct mipc_data_v6_addr_struct4 {
    uint8_t                                            addr[16]; /* N/A */
} mipc_data_v6_addr_struct4 ;

typedef struct mipc_data_pco_ie_struct4 {
    char                                               ie[5]; /* N/A */
    uint8_t                                            padding[3]; /* N/A */
    char                                               content[80]; /* N/A */
} mipc_data_pco_ie_struct4 ;

typedef struct mipc_data_packet_filter_struct4 {
    uint8_t                                            len; /* N/A */
    uint8_t                                            padding[3]; /* N/A */
    uint8_t                                            pattern[192]; /* N/A */
    uint8_t                                            mask[192]; /* N/A */
} mipc_data_packet_filter_struct4 ;

typedef struct mipc_data_qos_info_struct4 {
    uint16_t                                           cid; /* ID to indicate PDN connection */
    uint16_t                                           QCI; /* follow 3GPP definition, QoS Class Identifier */
    uint32_t                                           DL_GBR; /* DL_GBR of data connection */
    uint32_t                                           UL_GBR; /* UL_GBR of data connection */
    uint32_t                                           DL_MBR; /* DL_MBR of data connection */
    uint32_t                                           UL_MBR; /* UL_MBR of data connection */
    uint32_t                                           DL_AMBR; /* DL_AMBR of data connection */
    uint32_t                                           UL_AMBR; /* UL_AMBR of data connection */
} mipc_data_qos_info_struct4 ;

typedef struct mipc_data_5gqos_info_struct4 {
    uint16_t                                           cid; /* ID to indicate PDN connection */
    uint16_t                                           VQI; /* Vocie Quality Indication */
    uint64_t                                           DL_GFBR; /* DL_GFBR of data connection */
    uint64_t                                           UL_GFBR; /* UL_GFBR of data connection */
    uint64_t                                           DL_MFBR; /* DL_MFBR of data connection */
    uint64_t                                           UL_MFBR; /* UL_MFBR of data connection */
    uint64_t                                           DL_SAMBR; /* DL_SAMBR of data connection */
    uint64_t                                           UL_SAMBR; /* UL_SAMBR of data connection */
    uint32_t                                           Averaging_window; /* Averaging window for GBR statistics */
} mipc_data_5gqos_info_struct4 ;

typedef struct mipc_data_start_keepalive_request_struct4 {
    uint32_t                                           type; /* Type of keepalive packet, refer to DATA_KEEPALIVE_TYPE */
    uint32_t                                           sourcePort; /* Source port if applicable or 0x7FFFFFFF; the maximum value is 65535 */
    uint32_t                                           destinationPort; /* Destination port if applicable or 0x7FFFFFFF; the maximum value is 65535 */
    uint32_t                                           maxKeepaliveIntervalMillis; /* Maximum milliseconds between two packets */
    uint32_t                                           cid; /* Context ID, uniquely identifies this call */
    char                                               sourceAddress[68]; /* Source address in network-byte order */
    char                                               destinationAddress[68]; /* Destination address in network-byte order */
} mipc_data_start_keepalive_request_struct4 ;

typedef struct mipc_s_nssai_struct_struct4 {
    uint8_t                                            sst_present; /* N/A */
    uint8_t                                            sst; /* N/A */
    uint8_t                                            sd_present; /* N/A */
    uint8_t                                            padding; /* N/A */
    uint32_t                                           sd; /* N/A */
    uint8_t                                            mapped_sst_present; /* N/A */
    uint8_t                                            mapped_sst; /* N/A */
    uint8_t                                            mapped_sd_present; /* N/A */
    uint8_t                                            padding2; /* N/A */
    uint32_t                                           mapped_sd; /* N/A */
} mipc_s_nssai_struct_struct4 ;

typedef struct mipc_ursp_ue_local_conf_struct_struct4 {
    uint8_t                                            ssc_mode; /* N/A */
    uint8_t                                            dnn_len; /* N/A */
    uint8_t                                            padding; /* N/A */
    uint8_t                                            s_nssai_present; /* N/A */
    mipc_s_nssai_struct_struct4                        s_nssai; /* N/A */
    char                                               dnn[MIPC_MAX_APN_LEN]; /* dnn name, MAX length 100 */
    uint8_t                                            pdu_session_type; /* N/A */
    uint8_t                                            pref_access_type; /* N/A */
    uint8_t                                            padding3[2]; /* N/A */
} mipc_ursp_ue_local_conf_struct_struct4 ;

typedef struct mipc_nw_provider_struct4 {
    uint32_t                                           index; /* Network index in the SIM Preferred network list. */
    char                                               plmn_id[MIPC_MAX_PLMN_ID_LEN]; /* PLMN id, format: ASCII (Number: 0-9) */
    uint8_t                                            padding[1]; /* N/A */
    char                                               network_name[60]; /* Network Name, format: ASCII */
    char                                               network_short_name[60]; /* Network short Name, format: ASCII */
    uint32_t                                           act; /* Bit 0: GSM_AcTn; 0, not selected; 1 selected;
            Bit 1: GSM_Compact_AcTn; 0, not selected; 1 selected;
            Bit 2: UTRAN_AcTn; 0, not selected; 1 selected;
            Bit 3: E-UTRAN_AcTn; 0, not selected; 1 selected;
            0 GSM
            1 GSM Compact
            2 UTRAN
            3 GSM w/EGPRS (see NOTE 1)
            4 UTRAN w/HSDPA (see NOTE 2)
            5 UTRAN w/HSUPA (see NOTE 2)
            6 UTRAN w/HSDPA and HSUPA (see NOTE 2)
            7 E-UTRAN
            8 EC-GSM-IoT (A/Gb mode) (see NOTE 3)
            9 E-UTRAN (NB-S1 mode) (see NOTE 4)
            10 E-UTRA connected to a 5GCN (see NOTE 5)
            11 NR connected to a 5GCN (see NOTE 5)
            12 NG-RAN
            13 E-UTRA-NR dual connectivity
 */
    uint32_t                                           act_supported; /* bitmap for which access technology were selected, 1 byte bitmap. */
    uint8_t                                            state; /* 0x0:unknown, 0x1:home, 0x2:forbidden, 0x4:preferred, 0x8:visible, 0x10: registered */
    uint8_t                                            rssi; /* RSSI: range 0-31 and 99 for invalid */
    uint8_t                                            error_rate; /* ErrorRate: range 0-7 and 99 for invalid */
    uint8_t                                            padding2[1]; /* N/A */
} mipc_nw_provider_struct4 ;

typedef struct mipc_nw_nitz_info_struct4 {
    uint32_t                                           year; /* the year as an integer. */
    uint32_t                                           month; /* N/A */
    uint32_t                                           day; /* N/A */
    uint32_t                                           hour; /* N/A */
    uint32_t                                           minute; /* N/A */
    uint32_t                                           second; /* N/A */
    int32_t                                            time_zone_offset_minutes; /* this value includes any adjustment for the current state of daylight saving time. */
    int32_t                                            daylight_saving_offset_minutes; /* this value indicates whether time zone includes daylight savings adjustment, for example, 0 means no adjustment for Daylight saving time.. */
} mipc_nw_nitz_info_struct4 ;

typedef struct mipc_nw_reg_state_struct4 {
    uint8_t                                            ps_state; /* Indicate packet service register state.
            0 detached
            1 attached, home network
            2 not registered, but MT is currently trying to attach or searching an operator to register to
            3 registration denied
            4 detached
            5 attached, roaming  network
 */
    uint8_t                                            cs_state; /* Indicate circuit service register state. */
    char                                               plmn[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint8_t                                            padding[1]; /* N/A */
    char                                               cs_plmn[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint8_t                                            padding2[1]; /* N/A */
    uint32_t                                           lac; /* N/A */
    uint32_t                                           cs_lac; /* N/A */
    uint32_t                                           ci; /* N/A */
    uint32_t                                           cs_ci; /* N/A */
    uint8_t                                            is_roaming; /* N/A */
    uint8_t                                            cs_is_roaming; /* N/A */
    uint8_t                                            padding3[2]; /* N/A */
} mipc_nw_reg_state_struct4 ;

typedef struct mipc_nw_blacklist_struct4 {
    char                                               plmn[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint8_t                                            blacklist_type; /* N/A */
} mipc_nw_blacklist_struct4 ;

typedef struct mipc_nw_location_info_struct4 {
    uint32_t                                           location_area_code; /* GSM/UMTS area code of the current location. */
    uint32_t                                           tracking_area_code; /* LTE tracking area code of the current location. */
    uint32_t                                           cell_id; /* ID of the cellular tower. */
} mipc_nw_location_info_struct4 ;

typedef struct mipc_nw_gsm_cell_struct4 {
    uint8_t                                            state; /* 1: serving; 0: neighboring */
    char                                               provider_id[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint32_t                                           lac; /* Location area code. */
    uint32_t                                           cid; /* Cell Identity. */
    uint32_t                                           ta; /* timing advance. */
    uint32_t                                           arfcn; /* The Absolute Radio Frequency Channel Number of the cell. Use 0xFFFFFFFF when this information is not available. */
    uint32_t                                           base_station_id; /* The Base Station id for the cell. */
    uint32_t                                           rx_level; /* The received signal strength of the cell. */
    uint32_t                                           bitErrorRate; /* Transport Channel BER as defined in TS 25.225 5.2.5 Valid values are (0-7, 99) as defined in TS 27.007 8.5. */
    uint32_t                                           registered; /* The registered state of the cell. */
    char                                               long_name[MIPC_MAX_NETWORK_NAME_LEN]; /* long provider name. */
    char                                               short_name[MIPC_MAX_NETWORK_NAME_LEN]; /* short provider name. */
} mipc_nw_gsm_cell_struct4 ;

typedef struct mipc_nw_umts_cell_struct4 {
    uint8_t                                            state; /* 1: serving; 0: neighboring */
    char                                               provider_id[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint32_t                                           lac; /* Location area code. */
    uint32_t                                           cid; /* Cell Identity. */
    uint32_t                                           uarfcn; /* The UTRA Absolute Radio Frequency Channel Number of the cell. Use 0xFFFFFFFF when this information is not available. */
    uint32_t                                           psc; /* The Primary Scrambling Code of the cell. */
    int32_t                                            rscp; /* The received signal code power of the cell. */
    int32_t                                            ecno; /* The signal to noise ratio of the cell. */
    uint32_t                                           registered; /* The registered state of the cell. */
    char                                               long_name[MIPC_MAX_NETWORK_NAME_LEN]; /* long provider name. */
    char                                               short_name[MIPC_MAX_NETWORK_NAME_LEN]; /* short provider name. */
} mipc_nw_umts_cell_struct4 ;

typedef struct mipc_nw_lte_cell_struct4 {
    uint8_t                                            state; /* 1: serving; 0: neighboring */
    char                                               provider_id[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint32_t                                           cid; /* Cell Identity. */
    uint32_t                                           earfcn; /* The Radio Frequency Channel Number of the cell. Use 0xFFFFFFFF when this information is not available. */
    uint32_t                                           physical_cell_id; /* The Physical Cell ID. Use 0xFFFFFFFF when this information is not available. */
    uint32_t                                           tac; /* The Tracking Area Code. */
    int32_t                                            rsrp; /* The Average Reference signal Received Power. */
    int32_t                                            rsrq; /* Average Reference signal Received Quality. */
    uint32_t                                           ta; /* timing advance. */
    int32_t                                            rsrp_in_qdbm; /* The Average Reference signal Received Power in qdbm. */
    int32_t                                            rsrq_in_qdbm; /* Average Reference signal Received Quality in qdbm. */
    int32_t                                            rssnr; /* The current reference signal signal-to-noise ratio in 0.1 dB units.Range: -200 to +300 (-200 = -20.0 dB, +300 = 30dB).INT_MAX : 0x7FFFFFFF denotes invalid value. */
    uint32_t                                           cqi; /* The current Channel Quality Indicator.Range: 0 to 15,INT_MAX : 0x7FFFFFFF denotes invalid value. */
    uint32_t                                           dl_freq_band; /* downlink freq band used by the cell. */
    uint32_t                                           registered; /* The registered state of the cell. */
    char                                               long_name[MIPC_MAX_NETWORK_NAME_LEN]; /* long provider name. */
    char                                               short_name[MIPC_MAX_NETWORK_NAME_LEN]; /* short provider name. */
} mipc_nw_lte_cell_struct4 ;

typedef struct mipc_nw_nr_cell_struct4 {
    uint8_t                                            state; /* 1: serving; 0: neighboring */
    char                                               provider_id[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    uint64_t                                           cid; /* Cell Identity. */
    uint32_t                                           physical_cell_id; /* The Physical Cell ID. */
    uint32_t                                           nr_arfcn; /* Absolute RF channel number of the serving cell. */
    uint32_t                                           tac; /* The Tracking Area Code. */
    int32_t                                            rsrp; /* The Average Reference signal Received Power. */
    int32_t                                            rsrq; /* Average Reference signal Received Quality. */
    int32_t                                            sinr; /* SS signal-to-noise and interference ratio. */
    uint32_t                                           ta; /* timing advance. */
    uint32_t                                           csirsrp; /* CSI reference signal received power. */
    uint32_t                                           csirsrq; /* CSI reference signal received quality. */
    uint32_t                                           csisinr; /* CSI signal-to-noise and interference ratio. */
    uint32_t                                           dl_freq_band; /* downlink freq band used by the cell. */
    uint32_t                                           registered; /* The registered state of the cell. */
    char                                               long_name[MIPC_MAX_NETWORK_NAME_LEN]; /* long provider name. */
    char                                               short_name[MIPC_MAX_NETWORK_NAME_LEN]; /* short provider name. */
} mipc_nw_nr_cell_struct4 ;

typedef struct mipc_nw_cdma_cell_struct4 {
    int32_t                                            TBD; /* N/A */
} mipc_nw_cdma_cell_struct4 ;

typedef struct mipc_nw_tdscdma_cell_struct4 {
    int32_t                                            TBD; /* N/A */
} mipc_nw_tdscdma_cell_struct4 ;

typedef struct mipc_nw_reg_change_info_struct4 {
    uint8_t                                            stat; /* Network register status. */
    uint32_t                                           lac_tac; /* Location area code. */
    uint64_t                                           cell_id; /* Cell id, 32 bit for non-5G and 36 bit for 5G. */
    uint16_t                                           eact; /* Radio access technology. */
    uint8_t                                            rac; /* Routing area code. */
    uint8_t                                            nw_existence; /* Indicate if nw exist, only valid when eact belongs to C2K. */
    uint8_t                                            roam_indicator; /* Roam indicator, only valid when eact belongs to C2K. */
    uint8_t                                            cause_type; /* Indicates the type of reject_cause. */
    uint16_t                                           reject_cause; /* The cause of the failed registration. */
    uint8_t                                            dcnr_restricted; /* Indicate if dcnr is restricted. */
    uint8_t                                            endc_sib_status; /* Indicates endc sib status. */
    uint8_t                                            endc_available; /* Indicate if endc is available. */
} mipc_nw_reg_change_info_struct4 ;

typedef struct mipc_nw_cs_reg_info_struct4 {
    uint8_t                                            stat; /* Network register status. */
    uint16_t                                           rat; /* The radio technology, please refer to eAct of EREG. */
    uint8_t                                            css; /* Network register status, 0: Concurrent service not support; 1: Concurrent service support. */
    uint8_t                                            roaming_ind; /* If register on CDMA or EVDO. */
    int8_t                                             is_in_prl; /* indicates whether the current system is in the PRL if registered on a CDMA or EVDO system or -1 if not. 0=not in the PRL, 1=in the PRL. */
    int16_t                                            def_roaming_ind; /* default Roaming Indicator from the PRL, if registered on a CDMA or EVDO system or -1 if not. Valid values are 0-255. */
    uint16_t                                           reason_for_denial; /* Registeration denied reason. See 3GPP TS 24.008. */
} mipc_nw_cs_reg_info_struct4 ;

typedef struct mipc_nw_ps_reg_info_struct4 {
    uint8_t                                            stat; /* Network register status. */
    uint16_t                                           rat; /* The radio technology, please refer to eAct of EREG. */
    uint16_t                                           reason_for_denial; /* Registeration denied reason. See 3GPP TS 24.008. */
    uint16_t                                           max_data_calls; /* The maximum number of simultaneous data calls. This maybe removed in future because it always be 0 in ril */
    int32_t                                            is_vops_supported; /* Indicates if camped network support VoLTE services. */
    int32_t                                            is_emc_bearer_supported; /* Indicates if camped network support VoLTE emergency bearers. */
    uint8_t                                            is_endc_available; /* Indicates if E-UTRA-NR Dual Connectivity(EN-DC) is supported by the primary serving cell. */
    uint8_t                                            is_dcnr_restricted; /* Indicates if dual connectivity with NR is restricted. */
    uint8_t                                            is_nr_available; /* Indicates if the nr available. */
    uint8_t                                            roaming_ind; /* If register on CDMA or EVDO. */
    int8_t                                             is_in_prl; /* indicates whether the current system is in the PRL if registered on a CDMA or EVDO system or -1 if not. 0=not in the PRL, 1=in the PRL. */
    int16_t                                            def_roaming_ind; /* default Roaming Indicator from the PRL, if registered on a CDMA or EVDO system or -1 if not. Valid values are 0-255. */
    uint64_t                                           cell_id; /* Cell id. */
} mipc_nw_ps_reg_info_struct4 ;

typedef struct mipc_nw_channel_lock_info_struct4 {
    uint8_t                                            opt; /* Lock Operation for this info. */
    uint8_t                                            act; /* 0:GSM; 2:UTRAN; 7:LTE; 11:NR */
    uint32_t                                           band_info[4]; /* Bitmap for band info: GSM and UMTS use band_info[0]; LTE uses band_info[0..1]; NR uses band_info[0..3] */
    uint8_t                                            channel_num; /* The real length for arfcn_list. */
    uint32_t                                           arfcn_list[32]; /* The list that expected to lock. */
    uint32_t                                           cell_id; /* The cell want to lock. Once set the id, the channel_num will be considered as 1. */
    uint8_t                                            lock_mode; /* Lock channel mode. */
} mipc_nw_channel_lock_info_struct4 ;

typedef struct mipc_nw_gsm_signal_strength_struct4 {
    int32_t                                            signal_strength; /* Valid values are (0-31, 99) as defined in TS27.007 8.5. */
    int32_t                                            bit_error_rate; /* Valid values are (0-7, 99) as defined in TS27.007 8.5. */
    int32_t                                            timing_advance; /* Timing Advance in bit periods. 1 bit period = 48/13 us. */
} mipc_nw_gsm_signal_strength_struct4 ;

typedef struct mipc_nw_umts_signal_strength_struct4 {
    int32_t                                            signal_strength; /* Valid values are (0-31, 99) as defined in TS27.007 8.5. */
    int32_t                                            bit_error_rate; /* Valid values are (0-7, 99) as defined in TS27.007 8.5. */
    int32_t                                            rscp; /* CPICH RSCP as defined in TS 25.215 5.1.1, valid value are (0-96, 255). */
    int32_t                                            ecno; /* Ec/No value as defined in TS 25.215 5.1.5. Valid values are (0-49, 255). */
} mipc_nw_umts_signal_strength_struct4 ;

typedef struct mipc_nw_lte_signal_strength_struct4 {
    int32_t                                            signal_strength; /* Valid values are (0-31, 99) as defined in TS27.007 8.5. */
    int32_t                                            rsrp; /* The current Reference Signal Receive Power in dBm multipled by -1. Range: 44-140 dBm. */
    int32_t                                            rsrq; /* The current Reference Signal Receive Quality in dB multiplied by -1. (20 - 3 dB). */
    int32_t                                            rssnr; /* The current reference signal signal-to-noise ratio in 0.1 dB units. Range: -200 to + 300 */
    int32_t                                            cqi; /* The current Channel Quality Indicator, range(0-15). */
    int32_t                                            timing_advance; /* Timing advance in micro seconds for a one way trip from cell to device. Range(0 - 0x7ffffffe) */
} mipc_nw_lte_signal_strength_struct4 ;

typedef struct mipc_nw_nr_signal_strength_struct4 {
    int32_t                                            signal_strength; /* Valid values are (0-31, 99) as defined in TS27.007 8.5. */
    int32_t                                            ss_rsrp; /* SS reference signal received power, multipled by -1, Range[44, 140]. */
    int32_t                                            ss_rsrq; /* SS reference signal received quality, multipled by -1, Range[3, 20]. */
    int32_t                                            ss_sinr; /* SS signal-to-noise and interference ratio. Range[-23, 40]. */
    int32_t                                            csi_rsrp; /* CSI reference signal received power, multipled by -1. Range[44, 140] */
    int32_t                                            csi_rsrq; /* CSI reference signal received quality, multipled by -1. Range[3, 20] */
    int32_t                                            csi_sinr; /* CSI signal-to-noise and interference ratio. Range[-23, 40] */
} mipc_nw_nr_signal_strength_struct4 ;

typedef struct mipc_nw_cscon_status_struct4 {
    uint8_t                                            mode; /* Indicates the signalling connection status. */
    uint8_t                                            state; /* Indicates the RRC state information if the MT is in connected mode while in UTRAN. */
    uint8_t                                            access; /* Indicates the access technology. */
    uint8_t                                            core_network; /* Indicates the core network. */
} mipc_nw_cscon_status_struct4 ;

typedef struct mipc_nw_pol_info_struct4 {
    uint32_t                                           start_index; /* Indicates the start index for preferred network list. */
    uint32_t                                           end_index; /* Indicates the end index for preferred network list. */
    uint8_t                                            format_first; /* Indicates the start format code for network name. */
    uint8_t                                            format_last; /* Indicates the stop format code for network name. */
} mipc_nw_pol_info_struct4 ;

typedef struct mipc_nw_ps_cs_reg_roaming_info_struct4 {
    uint8_t                                            m_voice_reg_state; /* CS state:0 1 2 3 */
    uint8_t                                            m_data_reg_state; /* PS state:0 1 2 3 */
    uint8_t                                            m_voice_roaming_type; /* CS roaming type:0 1 2 3 */
    uint8_t                                            m_data_roaming_type; /* PS roaming type:0 1 2 3 */
    uint8_t                                            m_ril_voice_reg_state; /* CS registration state for GSM,UMTS and CDMA 0~15 */
    uint8_t                                            m_ril_data_reg_state; /* PS registration state for GSM,UMTS and CDMA 0~15 */
} mipc_nw_ps_cs_reg_roaming_info_struct4 ;

typedef struct mipc_nw_cellmeasurement_info_struct4 {
    uint8_t                                            rat; /* cell rat info: 7: LTE; 13 : NG-RAN */
    uint32_t                                           arfcn; /* the arfcn info for this cell. */
    uint32_t                                           pci; /* the physical cell id for this cell. */
    uint32_t                                           rsrp; /* the signal info in qdbm for this cell */
    uint32_t                                           rsrq; /* the signal info in qdbm for this cell. */
    uint32_t                                           snr; /* the signal info for this cell in qdb. */
    uint64_t                                           cid; /* the cell id for this cell. */
} mipc_nw_cellmeasurement_info_struct4 ;

typedef struct mipc_nw_cell_band_bandwidth_struct4 {
    uint16_t                                           cell_band; /* cell band: 1~1024 */
    uint32_t                                           cell_bandwidth; /* cell bandwidth: 0~400000,kHz */
} mipc_nw_cell_band_bandwidth_struct4 ;

typedef struct mipc_nw_lte_nr_ca_info_struct4 {
    uint32_t                                           cell_index; /* ServCell index. */
    uint8_t                                            cell_state; /* 1:SCELL_STATUS_NOACTIVE; 2:SCELL_STATUS_ACTIVE */
    uint8_t                                            cc_cw0_cqi; /* cc_cw0_cqi:0~15 */
    uint8_t                                            cc_cw1_cqi; /* cc_cw1_cqi:0~15 */
    uint8_t                                            cell_bandwidth; /* cell bandwidth: for lte 0:1.4MHz 1:3MHz 2:5MHz 3:10MHz 4:15MHz 5:20MHz; for nr 0:5MHz 1:10MHz 2:15MHz 3:20MHz 4:25MHz 5:30MHz 6:40MHz 7:50MHz 8:60MHz 9:80MHz 10:90MHz 11:100MHz 12:200MHz 13:400MHz */
    uint16_t                                           cell_band; /* cell band: 1~1024 */
    uint16_t                                           cc_pci; /* cc_pci:0~1024 */
    uint32_t                                           cc_arfcn; /* channel info: EARFCN for LTE and NR-ARFCN for NR5G */
    char                                               cell_bandwidth_str[8]; /* cell bandwidth str unit: MHz */
} mipc_nw_lte_nr_ca_info_struct4 ;

typedef struct mipc_cell_plmn_struct4 {
    char                                               plmn_id[MIPC_MAX_PLMN_ID_LEN]; /* N/A */
    char                                               plmn_name[32]; /* N/A */
} mipc_cell_plmn_struct4 ;

typedef struct mipc_nw_raw_signal_info_struct4 {
    int32_t                                            sig1; /* 0 ~ 63: this field is the same as <rscp> in +CESQ when camp on GSM service;
 0 ~ 96: this field is the same as <rscp> in +CESQ when camp on UMTS service;
 0 ~ 34: this field the same as rsrq in +CESQ when camp on LTE network.
 255 means invalid value */
    int32_t                                            sig2; /* 0 ~ 7: ber when camp on GSM; 0~ 49: ecno when camp on UMTS; 0 ~ 97: rsrp when camp on LTE. */
    int32_t                                            rssi_in_qdbm; /* Negative integer. Received signal strength raw data in quarter dbm. 1 meams inivalid. */
    int32_t                                            rscp_in_qdbm; /* Negative integer. RSCP in quarter dbm, only avaliable when camp on UMTS network. 1 means invalid. */
    int32_t                                            ecn0_in_qdbm; /* Negative integer. EcN0 in quarter dbm. Only avaliable when camp on UMTS network, 1 means invalid. */
    int32_t                                            rsrq_in_qdbm; /* Negative integer.
 GSM/UMTS/LTE/C2K: RSRQ in quarter dB. Only avaliable when camp on LTE network, 1 means invalid;
 NR: SS-RSRQ in qdb. 0x7FFF means invalid. */
    int32_t                                            rsrp_in_qdbm; /* Negative integer.
 GSM/UMTS/LTE/C2K: RSRP in quarter dbm. Only avaliable when camp on LTE network, 1 means invalid;
 NR: SS-RSRP in qdbm. 0x7FFF means invalid. */
    int32_t                                            eact; /*  */
    int32_t                                            sig3; /* GSM/UMTS/LTE/C2K: RSSNR in quarter dB. RSSNR is signal-to-noise ration for reference signal. It is available only when camping on a LTE network, 0x7FFF means invalid.
 NR: SS-SINR in qdb, 0x7FFF means invalid. */
    int32_t                                            serv_band; /* Serving LTE band. */
    int32_t                                            second_rsrq_in_qdbm; /* CSI-RSRQ in qdb. Only avaliable when camp on NR network, 0x7FFF means invalid. Now invalid value is reported by default. */
    int32_t                                            second_rsrp_in_qdbm; /* CSI-RSRP in qdbm. Only avaliable when camp on NR network, 0x7FFF means invalid. Now invalid value is reported by default. */
    int32_t                                            second_sig3; /* CSI-SINR in qdb. Only avaliable when camp on NR network, 0x7FFF means invalid. Now invalid value is reported by default. */
    uint8_t                                            signal_type; /* N/A */
} mipc_nw_raw_signal_info_struct4 ;

typedef struct mipc_nw_extend_provider_struct4 {
    uint32_t                                           index; /* Network index in the SIM Preferred network list. */
    uint32_t                                           stat; /* 0: unknown, 1: available, 2: current, 3: forbidden */
    char                                               oper_long_name[60]; /* oper long name, format: ASCII */
    char                                               oper_short_name[60]; /* oper short name, format: ASCII */
    char                                               oper_numeric_name[MIPC_MAX_PLMN_ID_LEN]; /* oper numeric name, format: ASCII */
    uint8_t                                            padding[1]; /* N/A */
    char                                               lac[20]; /* location info, format: ASCII */
    uint32_t                                           act; /* please refer to NW_ACT_TYPE */
    uint32_t                                           csq_rssi; /* coded value. */
    uint32_t                                           register_state; /* register state */
    uint32_t                                           timestamp_type; /* timestamp type */
    int32_t                                            timestamp; /* timestamp */
    uint32_t                                           connection_stat; /* connection state */
    char                                               cell_id[20]; /* cell id */
    uint32_t                                           freq; /* freq */
    int32_t                                            bsic_psc_cpid_pci; /* BSIC/PSC/CPID/PCI */
    int32_t                                            sig2; /* sig2 */
    int32_t                                            sig3; /* sig3 */
    int32_t                                            sig4; /* sig4 */
    int32_t                                            sig5; /* sig5 */
    uint32_t                                           bit_error_rat; /* bit error rat */
    uint32_t                                           timing_advance; /* timing advance */
    uint32_t                                           cqi; /* CQI */
} mipc_nw_extend_provider_struct4 ;

typedef struct mipc_nw_tuw_info_struct4 {
    uint8_t                                            tuw_id; /* 1: TUW1, 2: TUW2, 3: TUW3 */
    uint32_t                                           tuw_length; /* TUW1: 0~30 seconds, default setting of 3 seconds.  TUW2: 0~120 seconds, default setting of 60 seconds.  TUW3: 0~30 seconds, default setting of 2 seconds. */
} mipc_nw_tuw_info_struct4 ;

typedef struct mipc_sim_msisdn_struct4 {
    uint8_t                                            msisdn[24]; /* N/A */
} mipc_sim_msisdn_struct4 ;

typedef struct mipc_sim_pin_desc_struct4 {
    uint8_t                                            pin_mode; /* pin mode */
    uint8_t                                            pin_format; /* pin format */
    uint8_t                                            pin_len_min; /* minimum pin length */
    uint8_t                                            pin_len_max; /* maximum pin length */
} mipc_sim_pin_desc_struct4 ;

typedef struct mipc_sim_app_info_struct4 {
    uint8_t                                            app_type; /* The type of the UICC application. */
    uint8_t                                            app_id_len; /* The length of the UICC application id. */
    uint8_t                                            sim_app_id[MIPC_MAX_SIM_AID_BYTE_LEN]; /* The UICC application id. */
    uint8_t                                            name_len; /* The  length of application name. */
    uint8_t                                            name[32]; /* Application name. */
    uint8_t                                            num_of_pins; /* num of pins,only support PIN1, not support UPIN,max num is 8. */
    uint8_t                                            pin_ref[8]; /* pin ref, not support different application keys for different applications,maxnum is 8. */
} mipc_sim_app_info_struct4 ;

typedef struct mipc_sim_slots_info_struct4 {
    char                                               card_state[20]; /* AT+CPIN? response */
    uint8_t                                            slots_state; /* slots state of physical slots: 0 means inactive, 1 means active */
    uint8_t                                            logical_idx; /* logical slots index of physical slot */
    uint8_t                                            padding[2]; /* N/A */
    char                                               atr[MIPC_MAX_ATR_LEN]; /* the atr of the card  */
    char                                               eid[MIPC_MAX_SIM_EID_LEN]; /* the eid of the card  */
    char                                               iccid[MIPC_SIM_FIX_ICCID_LEN]; /* sim iccid of the iccid */
} mipc_sim_slots_info_struct4 ;

typedef struct mipc_app_status_desc_struct4 {
    uint8_t                                            app_type; /* application type */
    uint8_t                                            app_state; /* application state */
    uint8_t                                            pin_status; /* same to cpin state */
    uint8_t                                            sub_status; /* application sub status */
    uint8_t                                            pin1_replaced; /* pin1 applied to all applications */
    uint8_t                                            pin1_state; /* pin1 state */
    uint8_t                                            pin2_state; /* pin2 state */
    uint8_t                                            padding; /* N/A */
    char                                               aid[41]; /* aid (MAX_SIM_AID_STR_LEN+1) */
    uint8_t                                            padding2[3]; /* N/A */
    char                                               app_label[33]; /* application label (MAX_SIM_APP_LABEL_LEN+1) */
    uint8_t                                            padding3[3]; /* N/A */
} mipc_app_status_desc_struct4 ;

typedef struct mipc_sms_pdu_struct4 {
    uint16_t                                           message_index; /* message index */
    uint8_t                                            pdu_len; /* the length of TPDU(without sca) */
    uint8_t                                            status; /* message status */
    uint8_t                                            sms_class; /* message class */
    uint8_t                                            padding[3]; /* N/A */
    uint8_t                                            pdu[256]; /* pdu contains sca and tpdu */
} mipc_sms_pdu_struct4 ;

typedef struct mipc_ss_call_forward_struct4 {
    uint8_t                                            call_forward_status; /* call forward status, active or not active */
    char                                               dial_number[MIPC_MAX_SS_DIAL_NUMBER_FOR_ALIGN_LEN]; /* dial number */
    uint16_t                                           service_class; /* service class */
    uint16_t                                           type_of_address; /* type of address, normal or international */
    uint8_t                                            padding[3]; /* padding for align */
    uint8_t                                            timer; /* timer, 1-30 */
} mipc_ss_call_forward_struct4 ;

typedef struct mipc_sys_mapping_struct4 {
    uint32_t                                           ps_id; /* N/A */
} mipc_sys_mapping_struct4 ;

typedef struct mipc_sys_lte_band_struct4 {
    uint32_t                                           lte_band_class[8]; /* LTE band: bitmask, lte_band_class[0]'s bit0~bit31 indicating band1~band32, lte_band_class[1]'s bit0~bit31 band33~band64, and so on. */
} mipc_sys_lte_band_struct4 ;

typedef struct mipc_sys_nr_band_struct4 {
    uint32_t                                           nr_band_class[32]; /* Bands for NR: bitmask, nr_band_class[0]'s bit0~bit31 indicating band1~band32, nr_band_class[1]'s bit0~bit31 band33~band64 and so on */
} mipc_sys_nr_band_struct4 ;

typedef struct mipc_sys_thermal_sensor_config_struct4 {
    uint32_t                                           enable; /*  */
    uint32_t                                           sensor_id; /*  */
    uint32_t                                           alarm_id; /*  */
    int32_t                                            threshold; /*  */
    uint32_t                                           hysteresis; /*  */
    uint32_t                                           interval; /*  */
    uint32_t                                           alarm_type; /*  */
} mipc_sys_thermal_sensor_config_struct4 ;

typedef struct mipc_sys_thermal_sensor_info_struct4 {
    uint32_t                                           sensor_id; /* sensor id */
    int32_t                                            temperature; /* current temperature */
} mipc_sys_thermal_sensor_info_struct4 ;

typedef struct mipc_call_detail_info_struct4 {
    uint8_t                                            number_present; /*  */
    uint8_t                                            padding[3]; /*  */
    char                                               number[MIPC_MAX_CALL_NUMBER_LEN]; /* call number */
    uint8_t                                            name_present; /*  */
    uint8_t                                            padding2[3]; /*  */
    char                                               name[MIPC_MAX_CALL_NAME_LEN]; /* call name */
} mipc_call_detail_info_struct4 ;

typedef struct mipc_call_video_cap_struct4 {
    uint8_t                                            local_video_cap_present; /*  */
    uint8_t                                            local_video_cap; /*  */
    uint8_t                                            remote_video_cap_present; /*  */
    uint8_t                                            remote_video_cap; /*  */
} mipc_call_video_cap_struct4 ;

typedef struct mipc_ecc_info_struct4 {
    uint8_t                                            is_fake_ecc; /*  */
    uint8_t                                            padding[3]; /*  */
    uint16_t                                           category; /* A bitmap indicating the Emergency Service Category Value according to 3GPP TS 24.008 */
    uint16_t                                           type; /*  */
    char                                               number[MIPC_MAX_CALL_ECC_NUMBER_LEN]; /*  */
    uint8_t                                            padding2[2]; /*  */
} mipc_ecc_info_struct4 ;

typedef struct mipc_nw_srxlev_info_struct4 {
    uint16_t                                           srxlev_in_qdb; /* srxlev in qdb value */
    uint16_t                                           squal_in_qdb; /* squal in qdb value */
} mipc_nw_srxlev_info_struct4 ;

typedef struct mipc_internal_set_filter_req_struct4 {
    uint8_t                                            nccmni_net_if; /* N/A */
    uint8_t                                            reserve1; /* N/A */
    uint16_t                                           nccmni_seq; /* N/A */
    uint32_t                                           valid_field; /* mandatory, a bitmap, refer to IPC_FILTER_BY_XXX */
    uint8_t                                            ip_type; /* IPC_IP_TYPE_IPV4 or IPC_IP_TYPE_IPV6 */
    uint8_t                                            ctrl_protocol; /* IPC_HDR_PROT_XXX */
    uint16_t                                           src_port; /* N/A */
    uint16_t                                           dst_port; /* N/A */
    uint16_t                                           tcp_flags; /* IPC_HDR_TCP_FLAG_XXX */
    uint32_t                                           spi; /* N/A */
    uint8_t                                            src_v4_addr[4]; /* Source IPv4 address to filter. */
    uint8_t                                            dst_v4_addr[4]; /* Destination IPv4 address to filter. */
    uint8_t                                            src_v6_addr[16]; /* Source IPv6 address to filter. */
    uint8_t                                            dst_v6_addr[16]; /* Destination IPv6 address to filter. */
    uint8_t                                            icmpv4_type; /* Type field of ICMPv4 header to filter. */
    uint8_t                                            icmpv6_type; /* Type field of ICMPv6 header to filter. */
    uint16_t                                           reserve; /* N/A */
    uint32_t                                           features; /* N/A */
} mipc_internal_set_filter_req_struct4 ;

typedef struct mipc_internal_set_filter_cnf_struct4 {
    uint8_t                                            nccmni_net_if; /* N/A */
    uint8_t                                            reserve1; /* N/A */
    uint16_t                                           nccmni_seq; /* N/A */
    int32_t                                            filter_id; /* >=0: filter id, <0: set failed. */
} mipc_internal_set_filter_cnf_struct4 ;

typedef struct mipc_internal_reset_filter_req_struct4 {
    uint8_t                                            nccmni_net_if; /* N/A */
    uint8_t                                            reserve1; /* N/A */
    uint16_t                                           nccmni_seq; /* N/A */
    int32_t                                            is_deregister_all_filter; /* 0: deregister the filter id only, 1: deregister all filter */
    int32_t                                            filter_id; /* filter id to deregister */
} mipc_internal_reset_filter_req_struct4 ;

typedef struct mipc_internal_reset_filter_cnf_struct4 {
    uint8_t                                            nccmni_net_if; /* N/A */
    uint8_t                                            reserve1; /* N/A */
    uint16_t                                           nccmni_seq; /* N/A */
    int32_t                                            is_success; /* 1: success */
} mipc_internal_reset_filter_cnf_struct4 ;

typedef struct mipc_sys_modem_struct8 {
    uint64_t                                           modem_id; /* modem_id:64bit,constant across reboots or device removal and insertion */
    uint32_t                                           executor_number; /* executor number */
    uint32_t                                           sim_number; /* sim number */
    uint32_t                                           concurrency; /* dual standby:1, dual active:2  */
    uint8_t                                            padding[4]; /* N/A */
} mipc_sys_modem_struct8 ;

typedef struct mipc_sys_adpclk_freq_info_struct8 {
    uint64_t                                           center_frequency; /*  */
    uint32_t                                           frequency_spread; /*  */
    uint32_t                                           noise_power; /*  */
    uint32_t                                           relative_signal_strength; /*  */
    uint32_t                                           connect_status; /*  */
} mipc_sys_adpclk_freq_info_struct8 ;

#pragma pack (pop)


#endif /* __MIPC_MSG_TLV_CONST_H__ */
