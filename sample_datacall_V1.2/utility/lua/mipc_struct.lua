require("mipc_enum")

local bytestostring = function (b, len)
    s = ""
    for i = 0, len-1 do
        s = s .. string.char(b:range(i,1):le_uint())
    end
    return s
end


mipc_unreference_struct_param = ProtoField.new("STRUCT", "mtkmipc.struct", ftypes.BYTES)
mipc_v4_full_addr_t_mtu = ProtoField.uint32   ("mtkmipc.struct.mtu", "mtu", base.DEC)
mipc_v4_full_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_v4_full_addr_t_mask = ProtoField.new("mask", "mtkmipc.struct.mask", ftypes.BYTES)
mipc_v6_full_addr_t_mtu = ProtoField.uint32   ("mtkmipc.struct.mtu", "mtu", base.DEC)
mipc_v6_full_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_v6_full_addr_t_prefix = ProtoField.uint32   ("mtkmipc.struct.prefix", "prefix", base.DEC)
mipc_addr_t_addr_len = ProtoField.uint32   ("mtkmipc.struct.addr_len", "addr_len", base.DEC)
mipc_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_full_addr_t_addr_len = ProtoField.uint32   ("mtkmipc.struct.addr_len", "addr_len", base.DEC)
mipc_full_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_full_addr_t_mtu = ProtoField.uint32   ("mtkmipc.struct.mtu", "mtu", base.DEC)
mipc_full_addr_t_mask = ProtoField.new("mask", "mtkmipc.struct.mask", ftypes.BYTES)
mipc_full_addr_t_prefix = ProtoField.uint32   ("mtkmipc.struct.prefix", "prefix", base.DEC)
mipc_apn_ia_t_apn = ProtoField.new("apn", "mtkmipc.struct.apn", ftypes.STRING)
mipc_apn_ia_t_apn_idx = ProtoField.uint32   ("mtkmipc.struct.apn_idx", "apn_idx", base.DEC)
mipc_apn_ia_t_userid = ProtoField.new("userid", "mtkmipc.struct.userid", ftypes.STRING)
mipc_apn_ia_t_password = ProtoField.new("password", "mtkmipc.struct.password", ftypes.STRING)
mipc_apn_ia_t_bearer_bitmask = ProtoField.uint32   ("mtkmipc.struct.bearer_bitmask", "bearer_bitmask", base.DEC)
mipc_apn_ia_t_pdp_type = ProtoField.uint8   ("mtkmipc.struct.pdp_type", "pdp_type", base.DEC, APN_PDP_TYPE)
mipc_apn_ia_t_roaming_type = ProtoField.uint8   ("mtkmipc.struct.roaming_type", "roaming_type", base.DEC, APN_PDP_TYPE)
mipc_apn_ia_t_auth_type = ProtoField.uint8   ("mtkmipc.struct.auth_type", "auth_type", base.DEC, APN_AUTH_TYPE)
mipc_apn_ia_t_compression = ProtoField.uint8   ("mtkmipc.struct.compression", "compression", base.DEC, APN_COMPRESSION)
mipc_apn_profile_t_id = ProtoField.uint32   ("mtkmipc.struct.id", "id", base.DEC)
mipc_apn_profile_t_plmn_id = ProtoField.new("plmn_id", "mtkmipc.struct.plmn_id", ftypes.BYTES)
mipc_apn_profile_t_padding = ProtoField.uint8   ("mtkmipc.struct.padding", "padding", base.DEC)
mipc_apn_profile_t_apn = ProtoField.new("apn", "mtkmipc.struct.apn", ftypes.STRING)
mipc_apn_profile_t_apn_idx = ProtoField.uint32   ("mtkmipc.struct.apn_idx", "apn_idx", base.DEC)
mipc_apn_profile_t_userid = ProtoField.new("userid", "mtkmipc.struct.userid", ftypes.STRING)
mipc_apn_profile_t_password = ProtoField.new("password", "mtkmipc.struct.password", ftypes.STRING)
mipc_apn_profile_t_bearer_bitmask = ProtoField.uint32   ("mtkmipc.struct.bearer_bitmask", "bearer_bitmask", base.DEC)
mipc_apn_profile_t_apn_type = ProtoField.uint32   ("mtkmipc.struct.apn_type", "apn_type", base.DEC, APN_TYPE)
mipc_apn_profile_t_pdp_type = ProtoField.uint8   ("mtkmipc.struct.pdp_type", "pdp_type", base.DEC, APN_PDP_TYPE)
mipc_apn_profile_t_roaming_type = ProtoField.uint8   ("mtkmipc.struct.roaming_type", "roaming_type", base.DEC, APN_PDP_TYPE)
mipc_apn_profile_t_auth_type = ProtoField.uint8   ("mtkmipc.struct.auth_type", "auth_type", base.DEC, APN_AUTH_TYPE)
mipc_apn_profile_t_compression = ProtoField.uint8   ("mtkmipc.struct.compression", "compression", base.DEC, APN_COMPRESSION)
mipc_apn_profile_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_apn_profile_t_reserve2 = ProtoField.uint8   ("mtkmipc.struct.reserve2", "reserve2", base.DEC)
mipc_apn_profile_t_reserve3 = ProtoField.uint8   ("mtkmipc.struct.reserve3", "reserve3", base.DEC)
mipc_apn_profile_t_enabled = ProtoField.uint8   ("mtkmipc.struct.enabled", "enabled", base.DEC, APN_ENABLED_TYPE)
mipc_md_apn_profile_t_id = ProtoField.uint32   ("mtkmipc.struct.id", "id", base.DEC)
mipc_md_apn_profile_t_plmn_id = ProtoField.new("plmn_id", "mtkmipc.struct.plmn_id", ftypes.BYTES)
mipc_md_apn_profile_t_act_state = ProtoField.uint8   ("mtkmipc.struct.act_state", "act_state", base.DEC)
mipc_md_apn_profile_t_apn = ProtoField.new("apn", "mtkmipc.struct.apn", ftypes.STRING)
mipc_md_apn_profile_t_apn_idx = ProtoField.uint32   ("mtkmipc.struct.apn_idx", "apn_idx", base.DEC)
mipc_md_apn_profile_t_userid = ProtoField.new("userid", "mtkmipc.struct.userid", ftypes.STRING)
mipc_md_apn_profile_t_password = ProtoField.new("password", "mtkmipc.struct.password", ftypes.STRING)
mipc_md_apn_profile_t_bearer_bitmask = ProtoField.uint32   ("mtkmipc.struct.bearer_bitmask", "bearer_bitmask", base.DEC)
mipc_md_apn_profile_t_apn_type = ProtoField.uint32   ("mtkmipc.struct.apn_type", "apn_type", base.DEC, APN_TYPE)
mipc_md_apn_profile_t_pdp_type = ProtoField.uint8   ("mtkmipc.struct.pdp_type", "pdp_type", base.DEC, APN_PDP_TYPE)
mipc_md_apn_profile_t_roaming_type = ProtoField.uint8   ("mtkmipc.struct.roaming_type", "roaming_type", base.DEC, APN_PDP_TYPE)
mipc_md_apn_profile_t_auth_type = ProtoField.uint8   ("mtkmipc.struct.auth_type", "auth_type", base.DEC, APN_AUTH_TYPE)
mipc_md_apn_profile_t_reserve = ProtoField.uint8   ("mtkmipc.struct.reserve", "reserve", base.DEC)
mipc_vzw_apn_profile_t_apn = ProtoField.new("apn", "mtkmipc.struct.apn", ftypes.STRING)
mipc_vzw_apn_profile_t_apnb = ProtoField.new("apnb", "mtkmipc.struct.apnb", ftypes.STRING)
mipc_vzw_apn_profile_t_pdp_type = ProtoField.uint8   ("mtkmipc.struct.pdp_type", "pdp_type", base.DEC, APN_PDP_TYPE)
mipc_vzw_apn_profile_t_id = ProtoField.uint8   ("mtkmipc.struct.id", "id", base.DEC)
mipc_vzw_apn_profile_t_apnclass = ProtoField.uint8   ("mtkmipc.struct.apnclass", "apnclass", base.DEC, APN_AUTH_TYPE)
mipc_vzw_apn_profile_t_enabled = ProtoField.uint8   ("mtkmipc.struct.enabled", "enabled", base.DEC, APN_ENABLED_TYPE)
mipc_vzw_apn_profile_t_max_conn = ProtoField.uint8   ("mtkmipc.struct.max_conn", "max_conn", base.DEC)
mipc_vzw_apn_profile_t_max_conn_t = ProtoField.uint8   ("mtkmipc.struct.max_conn_t", "max_conn_t", base.DEC)
mipc_vzw_apn_profile_t_wait_time = ProtoField.uint32   ("mtkmipc.struct.wait_time", "wait_time", base.DEC)
mipc_vzw_apn_profile_t_act_state = ProtoField.uint8   ("mtkmipc.struct.act_state", "act_state", base.DEC)
mipc_vzw_apn_profile_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_vzw_apn_profile_t_reserve2 = ProtoField.uint8   ("mtkmipc.struct.reserve2", "reserve2", base.DEC)
mipc_vzw_apn_profile_t_reserve3 = ProtoField.uint8   ("mtkmipc.struct.reserve3", "reserve3", base.DEC)
mipc_data_nitz_info_t_year = ProtoField.uint32   ("mtkmipc.struct.year", "year", base.DEC)
mipc_data_nitz_info_t_month = ProtoField.uint32   ("mtkmipc.struct.month", "month", base.DEC)
mipc_data_nitz_info_t_day = ProtoField.uint32   ("mtkmipc.struct.day", "day", base.DEC)
mipc_data_nitz_info_t_hour = ProtoField.uint32   ("mtkmipc.struct.hour", "hour", base.DEC)
mipc_data_nitz_info_t_minute = ProtoField.uint32   ("mtkmipc.struct.minute", "minute", base.DEC)
mipc_data_nitz_info_t_second = ProtoField.uint32   ("mtkmipc.struct.second", "second", base.DEC)
mipc_data_v4_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_data_v6_addr_t_addr = ProtoField.new("addr", "mtkmipc.struct.addr", ftypes.BYTES)
mipc_data_pco_ie_t_ie = ProtoField.new("ie", "mtkmipc.struct.ie", ftypes.STRING)
mipc_data_pco_ie_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_data_pco_ie_t_content = ProtoField.new("content", "mtkmipc.struct.content", ftypes.STRING)
mipc_data_packet_filter_t_len = ProtoField.uint8   ("mtkmipc.struct.len", "len", base.DEC)
mipc_data_packet_filter_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_data_packet_filter_t_pattern = ProtoField.new("pattern", "mtkmipc.struct.pattern", ftypes.BYTES)
mipc_data_packet_filter_t_mask = ProtoField.new("mask", "mtkmipc.struct.mask", ftypes.BYTES)
mipc_data_qos_info_t_cid = ProtoField.uint16   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_data_qos_info_t_qci = ProtoField.uint16   ("mtkmipc.struct.qci", "QCI", base.DEC)
mipc_data_qos_info_t_dl_gbr = ProtoField.uint32   ("mtkmipc.struct.dl_gbr", "DL_GBR", base.DEC)
mipc_data_qos_info_t_ul_gbr = ProtoField.uint32   ("mtkmipc.struct.ul_gbr", "UL_GBR", base.DEC)
mipc_data_qos_info_t_dl_mbr = ProtoField.uint32   ("mtkmipc.struct.dl_mbr", "DL_MBR", base.DEC)
mipc_data_qos_info_t_ul_mbr = ProtoField.uint32   ("mtkmipc.struct.ul_mbr", "UL_MBR", base.DEC)
mipc_data_qos_info_t_dl_ambr = ProtoField.uint32   ("mtkmipc.struct.dl_ambr", "DL_AMBR", base.DEC)
mipc_data_qos_info_t_ul_ambr = ProtoField.uint32   ("mtkmipc.struct.ul_ambr", "UL_AMBR", base.DEC)
mipc_data_5gqos_info_t_cid = ProtoField.uint16   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_data_5gqos_info_t_vqi = ProtoField.uint16   ("mtkmipc.struct.vqi", "VQI", base.DEC)
mipc_data_5gqos_info_t_dl_gfbr = ProtoField.uint64   ("mtkmipc.struct.dl_gfbr", "DL_GFBR", base.DEC)
mipc_data_5gqos_info_t_ul_gfbr = ProtoField.uint64   ("mtkmipc.struct.ul_gfbr", "UL_GFBR", base.DEC)
mipc_data_5gqos_info_t_dl_mfbr = ProtoField.uint64   ("mtkmipc.struct.dl_mfbr", "DL_MFBR", base.DEC)
mipc_data_5gqos_info_t_ul_mfbr = ProtoField.uint64   ("mtkmipc.struct.ul_mfbr", "UL_MFBR", base.DEC)
mipc_data_5gqos_info_t_dl_sambr = ProtoField.uint64   ("mtkmipc.struct.dl_sambr", "DL_SAMBR", base.DEC)
mipc_data_5gqos_info_t_ul_sambr = ProtoField.uint64   ("mtkmipc.struct.ul_sambr", "UL_SAMBR", base.DEC)
mipc_data_5gqos_info_t_averaging_window = ProtoField.uint32   ("mtkmipc.struct.averaging_window", "Averaging_window", base.DEC)
mipc_data_start_keepalive_request_t_type = ProtoField.uint32   ("mtkmipc.struct.type", "type", base.DEC, DATA_KEEPALIVE_TYPE)
mipc_data_start_keepalive_request_t_sourceport = ProtoField.uint32   ("mtkmipc.struct.sourceport", "sourcePort", base.DEC)
mipc_data_start_keepalive_request_t_destinationport = ProtoField.uint32   ("mtkmipc.struct.destinationport", "destinationPort", base.DEC)
mipc_data_start_keepalive_request_t_maxkeepaliveintervalmillis = ProtoField.uint32   ("mtkmipc.struct.maxkeepaliveintervalmillis", "maxKeepaliveIntervalMillis", base.DEC)
mipc_data_start_keepalive_request_t_cid = ProtoField.uint32   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_data_start_keepalive_request_t_sourceaddress = ProtoField.new("sourceAddress", "mtkmipc.struct.sourceaddress", ftypes.STRING)
mipc_data_start_keepalive_request_t_destinationaddress = ProtoField.new("destinationAddress", "mtkmipc.struct.destinationaddress", ftypes.STRING)
mipc_s_nssai_struct_t_sst_present = ProtoField.uint8   ("mtkmipc.struct.sst_present", "sst_present", base.DEC, BOOLEAN)
mipc_s_nssai_struct_t_sst = ProtoField.uint8   ("mtkmipc.struct.sst", "sst", base.DEC)
mipc_s_nssai_struct_t_sd_present = ProtoField.uint8   ("mtkmipc.struct.sd_present", "sd_present", base.DEC, BOOLEAN)
mipc_s_nssai_struct_t_padding = ProtoField.uint8   ("mtkmipc.struct.padding", "padding", base.DEC)
mipc_s_nssai_struct_t_sd = ProtoField.uint32   ("mtkmipc.struct.sd", "sd", base.DEC)
mipc_s_nssai_struct_t_mapped_sst_present = ProtoField.uint8   ("mtkmipc.struct.mapped_sst_present", "mapped_sst_present", base.DEC, BOOLEAN)
mipc_s_nssai_struct_t_mapped_sst = ProtoField.uint8   ("mtkmipc.struct.mapped_sst", "mapped_sst", base.DEC)
mipc_s_nssai_struct_t_mapped_sd_present = ProtoField.uint8   ("mtkmipc.struct.mapped_sd_present", "mapped_sd_present", base.DEC, BOOLEAN)
mipc_s_nssai_struct_t_padding2 = ProtoField.uint8   ("mtkmipc.struct.padding2", "padding2", base.DEC)
mipc_s_nssai_struct_t_mapped_sd = ProtoField.uint32   ("mtkmipc.struct.mapped_sd", "mapped_sd", base.DEC)
mipc_ursp_ue_local_conf_struct_t_ssc_mode = ProtoField.uint8   ("mtkmipc.struct.ssc_mode", "ssc_mode", base.DEC, SSC_MODE_ENUM)
mipc_ursp_ue_local_conf_struct_t_dnn_len = ProtoField.uint8   ("mtkmipc.struct.dnn_len", "dnn_len", base.DEC)
mipc_ursp_ue_local_conf_struct_t_padding = ProtoField.uint8   ("mtkmipc.struct.padding", "padding", base.DEC)
mipc_ursp_ue_local_conf_struct_t_s_nssai_present = ProtoField.uint8   ("mtkmipc.struct.s_nssai_present", "s_nssai_present", base.DEC, BOOLEAN)
mipc_ursp_ue_local_conf_struct_t_dnn = ProtoField.new("dnn", "mtkmipc.struct.dnn", ftypes.STRING)
mipc_ursp_ue_local_conf_struct_t_pdu_session_type = ProtoField.uint8   ("mtkmipc.struct.pdu_session_type", "pdu_session_type", base.DEC)
mipc_ursp_ue_local_conf_struct_t_pref_access_type = ProtoField.uint8   ("mtkmipc.struct.pref_access_type", "pref_access_type", base.DEC)
mipc_ursp_ue_local_conf_struct_t_padding3 = ProtoField.new("padding3", "mtkmipc.struct.padding3", ftypes.BYTES)
mipc_nw_provider_t_index = ProtoField.uint32   ("mtkmipc.struct.index", "index", base.DEC)
mipc_nw_provider_t_plmn_id = ProtoField.new("plmn_id", "mtkmipc.struct.plmn_id", ftypes.STRING)
mipc_nw_provider_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_nw_provider_t_network_name = ProtoField.new("network_name", "mtkmipc.struct.network_name", ftypes.STRING)
mipc_nw_provider_t_network_short_name = ProtoField.new("network_short_name", "mtkmipc.struct.network_short_name", ftypes.STRING)
mipc_nw_provider_t_act = ProtoField.uint32   ("mtkmipc.struct.act", "act", base.DEC)
mipc_nw_provider_t_act_supported = ProtoField.uint32   ("mtkmipc.struct.act_supported", "act_supported", base.DEC)
mipc_nw_provider_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC)
mipc_nw_provider_t_rssi = ProtoField.uint8   ("mtkmipc.struct.rssi", "rssi", base.DEC)
mipc_nw_provider_t_error_rate = ProtoField.uint8   ("mtkmipc.struct.error_rate", "error_rate", base.DEC)
mipc_nw_provider_t_padding2 = ProtoField.new("padding2", "mtkmipc.struct.padding2", ftypes.BYTES)
mipc_nw_nitz_info_t_year = ProtoField.uint32   ("mtkmipc.struct.year", "year", base.DEC)
mipc_nw_nitz_info_t_month = ProtoField.uint32   ("mtkmipc.struct.month", "month", base.DEC)
mipc_nw_nitz_info_t_day = ProtoField.uint32   ("mtkmipc.struct.day", "day", base.DEC)
mipc_nw_nitz_info_t_hour = ProtoField.uint32   ("mtkmipc.struct.hour", "hour", base.DEC)
mipc_nw_nitz_info_t_minute = ProtoField.uint32   ("mtkmipc.struct.minute", "minute", base.DEC)
mipc_nw_nitz_info_t_second = ProtoField.uint32   ("mtkmipc.struct.second", "second", base.DEC)
mipc_nw_nitz_info_t_time_zone_offset_minutes = ProtoField.int32   ("mtkmipc.struct.time_zone_offset_minutes", "time_zone_offset_minutes", base.DEC)
mipc_nw_nitz_info_t_daylight_saving_offset_minutes = ProtoField.int32   ("mtkmipc.struct.daylight_saving_offset_minutes", "daylight_saving_offset_minutes", base.DEC)
mipc_nw_reg_state_t_ps_state = ProtoField.uint8   ("mtkmipc.struct.ps_state", "ps_state", base.DEC)
mipc_nw_reg_state_t_cs_state = ProtoField.uint8   ("mtkmipc.struct.cs_state", "cs_state", base.DEC)
mipc_nw_reg_state_t_plmn = ProtoField.new("plmn", "mtkmipc.struct.plmn", ftypes.STRING)
mipc_nw_reg_state_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_nw_reg_state_t_cs_plmn = ProtoField.new("cs_plmn", "mtkmipc.struct.cs_plmn", ftypes.STRING)
mipc_nw_reg_state_t_padding2 = ProtoField.new("padding2", "mtkmipc.struct.padding2", ftypes.BYTES)
mipc_nw_reg_state_t_lac = ProtoField.uint32   ("mtkmipc.struct.lac", "lac", base.DEC)
mipc_nw_reg_state_t_cs_lac = ProtoField.uint32   ("mtkmipc.struct.cs_lac", "cs_lac", base.DEC)
mipc_nw_reg_state_t_ci = ProtoField.uint32   ("mtkmipc.struct.ci", "ci", base.DEC)
mipc_nw_reg_state_t_cs_ci = ProtoField.uint32   ("mtkmipc.struct.cs_ci", "cs_ci", base.DEC)
mipc_nw_reg_state_t_is_roaming = ProtoField.uint8   ("mtkmipc.struct.is_roaming", "is_roaming", base.DEC)
mipc_nw_reg_state_t_cs_is_roaming = ProtoField.uint8   ("mtkmipc.struct.cs_is_roaming", "cs_is_roaming", base.DEC)
mipc_nw_reg_state_t_padding3 = ProtoField.new("padding3", "mtkmipc.struct.padding3", ftypes.BYTES)
mipc_nw_blacklist_t_plmn = ProtoField.new("plmn", "mtkmipc.struct.plmn", ftypes.STRING)
mipc_nw_blacklist_t_blacklist_type = ProtoField.uint8   ("mtkmipc.struct.blacklist_type", "blacklist_type", base.DEC)
mipc_nw_location_info_t_location_area_code = ProtoField.uint32   ("mtkmipc.struct.location_area_code", "location_area_code", base.DEC)
mipc_nw_location_info_t_tracking_area_code = ProtoField.uint32   ("mtkmipc.struct.tracking_area_code", "tracking_area_code", base.DEC)
mipc_nw_location_info_t_cell_id = ProtoField.uint32   ("mtkmipc.struct.cell_id", "cell_id", base.DEC)
mipc_nw_gsm_cell_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC)
mipc_nw_gsm_cell_t_provider_id = ProtoField.new("provider_id", "mtkmipc.struct.provider_id", ftypes.STRING)
mipc_nw_gsm_cell_t_lac = ProtoField.uint32   ("mtkmipc.struct.lac", "lac", base.DEC)
mipc_nw_gsm_cell_t_cid = ProtoField.uint32   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_nw_gsm_cell_t_ta = ProtoField.uint32   ("mtkmipc.struct.ta", "ta", base.DEC)
mipc_nw_gsm_cell_t_arfcn = ProtoField.uint32   ("mtkmipc.struct.arfcn", "arfcn", base.DEC)
mipc_nw_gsm_cell_t_base_station_id = ProtoField.uint32   ("mtkmipc.struct.base_station_id", "base_station_id", base.DEC)
mipc_nw_gsm_cell_t_rx_level = ProtoField.uint32   ("mtkmipc.struct.rx_level", "rx_level", base.DEC)
mipc_nw_gsm_cell_t_biterrorrate = ProtoField.uint32   ("mtkmipc.struct.biterrorrate", "bitErrorRate", base.DEC)
mipc_nw_gsm_cell_t_registered = ProtoField.uint32   ("mtkmipc.struct.registered", "registered", base.DEC)
mipc_nw_gsm_cell_t_long_name = ProtoField.new("long_name", "mtkmipc.struct.long_name", ftypes.STRING)
mipc_nw_gsm_cell_t_short_name = ProtoField.new("short_name", "mtkmipc.struct.short_name", ftypes.STRING)
mipc_nw_umts_cell_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC)
mipc_nw_umts_cell_t_provider_id = ProtoField.new("provider_id", "mtkmipc.struct.provider_id", ftypes.STRING)
mipc_nw_umts_cell_t_lac = ProtoField.uint32   ("mtkmipc.struct.lac", "lac", base.DEC)
mipc_nw_umts_cell_t_cid = ProtoField.uint32   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_nw_umts_cell_t_uarfcn = ProtoField.uint32   ("mtkmipc.struct.uarfcn", "uarfcn", base.DEC)
mipc_nw_umts_cell_t_psc = ProtoField.uint32   ("mtkmipc.struct.psc", "psc", base.DEC)
mipc_nw_umts_cell_t_rscp = ProtoField.int32   ("mtkmipc.struct.rscp", "rscp", base.DEC)
mipc_nw_umts_cell_t_ecno = ProtoField.int32   ("mtkmipc.struct.ecno", "ecno", base.DEC)
mipc_nw_umts_cell_t_registered = ProtoField.uint32   ("mtkmipc.struct.registered", "registered", base.DEC)
mipc_nw_umts_cell_t_long_name = ProtoField.new("long_name", "mtkmipc.struct.long_name", ftypes.STRING)
mipc_nw_umts_cell_t_short_name = ProtoField.new("short_name", "mtkmipc.struct.short_name", ftypes.STRING)
mipc_nw_lte_cell_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC)
mipc_nw_lte_cell_t_provider_id = ProtoField.new("provider_id", "mtkmipc.struct.provider_id", ftypes.STRING)
mipc_nw_lte_cell_t_cid = ProtoField.uint32   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_nw_lte_cell_t_earfcn = ProtoField.uint32   ("mtkmipc.struct.earfcn", "earfcn", base.DEC)
mipc_nw_lte_cell_t_physical_cell_id = ProtoField.uint32   ("mtkmipc.struct.physical_cell_id", "physical_cell_id", base.DEC)
mipc_nw_lte_cell_t_tac = ProtoField.uint32   ("mtkmipc.struct.tac", "tac", base.DEC)
mipc_nw_lte_cell_t_rsrp = ProtoField.int32   ("mtkmipc.struct.rsrp", "rsrp", base.DEC)
mipc_nw_lte_cell_t_rsrq = ProtoField.int32   ("mtkmipc.struct.rsrq", "rsrq", base.DEC)
mipc_nw_lte_cell_t_ta = ProtoField.uint32   ("mtkmipc.struct.ta", "ta", base.DEC)
mipc_nw_lte_cell_t_rsrp_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rsrp_in_qdbm", "rsrp_in_qdbm", base.DEC)
mipc_nw_lte_cell_t_rsrq_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rsrq_in_qdbm", "rsrq_in_qdbm", base.DEC)
mipc_nw_lte_cell_t_rssnr = ProtoField.int32   ("mtkmipc.struct.rssnr", "rssnr", base.DEC)
mipc_nw_lte_cell_t_cqi = ProtoField.uint32   ("mtkmipc.struct.cqi", "cqi", base.DEC)
mipc_nw_lte_cell_t_dl_freq_band = ProtoField.uint32   ("mtkmipc.struct.dl_freq_band", "dl_freq_band", base.DEC)
mipc_nw_lte_cell_t_registered = ProtoField.uint32   ("mtkmipc.struct.registered", "registered", base.DEC)
mipc_nw_lte_cell_t_long_name = ProtoField.new("long_name", "mtkmipc.struct.long_name", ftypes.STRING)
mipc_nw_lte_cell_t_short_name = ProtoField.new("short_name", "mtkmipc.struct.short_name", ftypes.STRING)
mipc_nw_nr_cell_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC)
mipc_nw_nr_cell_t_provider_id = ProtoField.new("provider_id", "mtkmipc.struct.provider_id", ftypes.STRING)
mipc_nw_nr_cell_t_cid = ProtoField.uint64   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_nw_nr_cell_t_physical_cell_id = ProtoField.uint32   ("mtkmipc.struct.physical_cell_id", "physical_cell_id", base.DEC)
mipc_nw_nr_cell_t_nr_arfcn = ProtoField.uint32   ("mtkmipc.struct.nr_arfcn", "nr_arfcn", base.DEC)
mipc_nw_nr_cell_t_tac = ProtoField.uint32   ("mtkmipc.struct.tac", "tac", base.DEC)
mipc_nw_nr_cell_t_rsrp = ProtoField.int32   ("mtkmipc.struct.rsrp", "rsrp", base.DEC)
mipc_nw_nr_cell_t_rsrq = ProtoField.int32   ("mtkmipc.struct.rsrq", "rsrq", base.DEC)
mipc_nw_nr_cell_t_sinr = ProtoField.int32   ("mtkmipc.struct.sinr", "sinr", base.DEC)
mipc_nw_nr_cell_t_ta = ProtoField.uint32   ("mtkmipc.struct.ta", "ta", base.DEC)
mipc_nw_nr_cell_t_csirsrp = ProtoField.uint32   ("mtkmipc.struct.csirsrp", "csirsrp", base.DEC)
mipc_nw_nr_cell_t_csirsrq = ProtoField.uint32   ("mtkmipc.struct.csirsrq", "csirsrq", base.DEC)
mipc_nw_nr_cell_t_csisinr = ProtoField.uint32   ("mtkmipc.struct.csisinr", "csisinr", base.DEC)
mipc_nw_nr_cell_t_dl_freq_band = ProtoField.uint32   ("mtkmipc.struct.dl_freq_band", "dl_freq_band", base.DEC)
mipc_nw_nr_cell_t_registered = ProtoField.uint32   ("mtkmipc.struct.registered", "registered", base.DEC)
mipc_nw_nr_cell_t_long_name = ProtoField.new("long_name", "mtkmipc.struct.long_name", ftypes.STRING)
mipc_nw_nr_cell_t_short_name = ProtoField.new("short_name", "mtkmipc.struct.short_name", ftypes.STRING)
mipc_nw_cdma_cell_t_tbd = ProtoField.int32   ("mtkmipc.struct.tbd", "TBD", base.DEC)
mipc_nw_tdscdma_cell_t_tbd = ProtoField.int32   ("mtkmipc.struct.tbd", "TBD", base.DEC)
mipc_nw_reg_change_info_t_stat = ProtoField.uint8   ("mtkmipc.struct.stat", "stat", base.DEC)
mipc_nw_reg_change_info_t_lac_tac = ProtoField.uint32   ("mtkmipc.struct.lac_tac", "lac_tac", base.DEC)
mipc_nw_reg_change_info_t_cell_id = ProtoField.uint64   ("mtkmipc.struct.cell_id", "cell_id", base.DEC)
mipc_nw_reg_change_info_t_eact = ProtoField.uint16   ("mtkmipc.struct.eact", "eact", base.DEC)
mipc_nw_reg_change_info_t_rac = ProtoField.uint8   ("mtkmipc.struct.rac", "rac", base.DEC)
mipc_nw_reg_change_info_t_nw_existence = ProtoField.uint8   ("mtkmipc.struct.nw_existence", "nw_existence", base.DEC)
mipc_nw_reg_change_info_t_roam_indicator = ProtoField.uint8   ("mtkmipc.struct.roam_indicator", "roam_indicator", base.DEC)
mipc_nw_reg_change_info_t_cause_type = ProtoField.uint8   ("mtkmipc.struct.cause_type", "cause_type", base.DEC)
mipc_nw_reg_change_info_t_reject_cause = ProtoField.uint16   ("mtkmipc.struct.reject_cause", "reject_cause", base.DEC)
mipc_nw_reg_change_info_t_dcnr_restricted = ProtoField.uint8   ("mtkmipc.struct.dcnr_restricted", "dcnr_restricted", base.DEC)
mipc_nw_reg_change_info_t_endc_sib_status = ProtoField.uint8   ("mtkmipc.struct.endc_sib_status", "endc_sib_status", base.DEC)
mipc_nw_reg_change_info_t_endc_available = ProtoField.uint8   ("mtkmipc.struct.endc_available", "endc_available", base.DEC)
mipc_nw_cs_reg_info_t_stat = ProtoField.uint8   ("mtkmipc.struct.stat", "stat", base.DEC)
mipc_nw_cs_reg_info_t_rat = ProtoField.uint16   ("mtkmipc.struct.rat", "rat", base.DEC)
mipc_nw_cs_reg_info_t_css = ProtoField.uint8   ("mtkmipc.struct.css", "css", base.DEC)
mipc_nw_cs_reg_info_t_roaming_ind = ProtoField.uint8   ("mtkmipc.struct.roaming_ind", "roaming_ind", base.DEC)
mipc_nw_cs_reg_info_t_is_in_prl = ProtoField.int8   ("mtkmipc.struct.is_in_prl", "is_in_prl", base.DEC)
mipc_nw_cs_reg_info_t_def_roaming_ind = ProtoField.int16   ("mtkmipc.struct.def_roaming_ind", "def_roaming_ind", base.DEC)
mipc_nw_cs_reg_info_t_reason_for_denial = ProtoField.uint16   ("mtkmipc.struct.reason_for_denial", "reason_for_denial", base.DEC)
mipc_nw_ps_reg_info_t_stat = ProtoField.uint8   ("mtkmipc.struct.stat", "stat", base.DEC)
mipc_nw_ps_reg_info_t_rat = ProtoField.uint16   ("mtkmipc.struct.rat", "rat", base.DEC)
mipc_nw_ps_reg_info_t_reason_for_denial = ProtoField.uint16   ("mtkmipc.struct.reason_for_denial", "reason_for_denial", base.DEC)
mipc_nw_ps_reg_info_t_max_data_calls = ProtoField.uint16   ("mtkmipc.struct.max_data_calls", "max_data_calls", base.DEC)
mipc_nw_ps_reg_info_t_is_vops_supported = ProtoField.int32   ("mtkmipc.struct.is_vops_supported", "is_vops_supported", base.DEC)
mipc_nw_ps_reg_info_t_is_emc_bearer_supported = ProtoField.int32   ("mtkmipc.struct.is_emc_bearer_supported", "is_emc_bearer_supported", base.DEC)
mipc_nw_ps_reg_info_t_is_endc_available = ProtoField.uint8   ("mtkmipc.struct.is_endc_available", "is_endc_available", base.DEC)
mipc_nw_ps_reg_info_t_is_dcnr_restricted = ProtoField.uint8   ("mtkmipc.struct.is_dcnr_restricted", "is_dcnr_restricted", base.DEC)
mipc_nw_ps_reg_info_t_is_nr_available = ProtoField.uint8   ("mtkmipc.struct.is_nr_available", "is_nr_available", base.DEC)
mipc_nw_ps_reg_info_t_roaming_ind = ProtoField.uint8   ("mtkmipc.struct.roaming_ind", "roaming_ind", base.DEC)
mipc_nw_ps_reg_info_t_is_in_prl = ProtoField.int8   ("mtkmipc.struct.is_in_prl", "is_in_prl", base.DEC)
mipc_nw_ps_reg_info_t_def_roaming_ind = ProtoField.int16   ("mtkmipc.struct.def_roaming_ind", "def_roaming_ind", base.DEC)
mipc_nw_ps_reg_info_t_cell_id = ProtoField.uint64   ("mtkmipc.struct.cell_id", "cell_id", base.DEC)
mipc_nw_channel_lock_info_t_opt = ProtoField.uint8   ("mtkmipc.struct.opt", "opt", base.DEC, NW_CH_LOCK)
mipc_nw_channel_lock_info_t_act = ProtoField.uint8   ("mtkmipc.struct.act", "act", base.DEC)
mipc_nw_channel_lock_info_t_band_info = ProtoField.uint32   ("mtkmipc.struct.band_info", "band_info", base.DEC)
mipc_nw_channel_lock_info_t_channel_num = ProtoField.uint8   ("mtkmipc.struct.channel_num", "channel_num", base.DEC)
mipc_nw_channel_lock_info_t_arfcn_list = ProtoField.uint32   ("mtkmipc.struct.arfcn_list", "arfcn_list", base.DEC)
mipc_nw_channel_lock_info_t_cell_id = ProtoField.uint32   ("mtkmipc.struct.cell_id", "cell_id", base.DEC)
mipc_nw_channel_lock_info_t_lock_mode = ProtoField.uint8   ("mtkmipc.struct.lock_mode", "lock_mode", base.DEC, NW_CH_LOCK_MODE)
mipc_nw_gsm_signal_strength_t_signal_strength = ProtoField.int32   ("mtkmipc.struct.signal_strength", "signal_strength", base.DEC)
mipc_nw_gsm_signal_strength_t_bit_error_rate = ProtoField.int32   ("mtkmipc.struct.bit_error_rate", "bit_error_rate", base.DEC)
mipc_nw_gsm_signal_strength_t_timing_advance = ProtoField.int32   ("mtkmipc.struct.timing_advance", "timing_advance", base.DEC)
mipc_nw_umts_signal_strength_t_signal_strength = ProtoField.int32   ("mtkmipc.struct.signal_strength", "signal_strength", base.DEC)
mipc_nw_umts_signal_strength_t_bit_error_rate = ProtoField.int32   ("mtkmipc.struct.bit_error_rate", "bit_error_rate", base.DEC)
mipc_nw_umts_signal_strength_t_rscp = ProtoField.int32   ("mtkmipc.struct.rscp", "rscp", base.DEC)
mipc_nw_umts_signal_strength_t_ecno = ProtoField.int32   ("mtkmipc.struct.ecno", "ecno", base.DEC)
mipc_nw_lte_signal_strength_t_signal_strength = ProtoField.int32   ("mtkmipc.struct.signal_strength", "signal_strength", base.DEC)
mipc_nw_lte_signal_strength_t_rsrp = ProtoField.int32   ("mtkmipc.struct.rsrp", "rsrp", base.DEC)
mipc_nw_lte_signal_strength_t_rsrq = ProtoField.int32   ("mtkmipc.struct.rsrq", "rsrq", base.DEC)
mipc_nw_lte_signal_strength_t_rssnr = ProtoField.int32   ("mtkmipc.struct.rssnr", "rssnr", base.DEC)
mipc_nw_lte_signal_strength_t_cqi = ProtoField.int32   ("mtkmipc.struct.cqi", "cqi", base.DEC)
mipc_nw_lte_signal_strength_t_timing_advance = ProtoField.int32   ("mtkmipc.struct.timing_advance", "timing_advance", base.DEC)
mipc_nw_nr_signal_strength_t_signal_strength = ProtoField.int32   ("mtkmipc.struct.signal_strength", "signal_strength", base.DEC)
mipc_nw_nr_signal_strength_t_ss_rsrp = ProtoField.int32   ("mtkmipc.struct.ss_rsrp", "ss_rsrp", base.DEC)
mipc_nw_nr_signal_strength_t_ss_rsrq = ProtoField.int32   ("mtkmipc.struct.ss_rsrq", "ss_rsrq", base.DEC)
mipc_nw_nr_signal_strength_t_ss_sinr = ProtoField.int32   ("mtkmipc.struct.ss_sinr", "ss_sinr", base.DEC)
mipc_nw_nr_signal_strength_t_csi_rsrp = ProtoField.int32   ("mtkmipc.struct.csi_rsrp", "csi_rsrp", base.DEC)
mipc_nw_nr_signal_strength_t_csi_rsrq = ProtoField.int32   ("mtkmipc.struct.csi_rsrq", "csi_rsrq", base.DEC)
mipc_nw_nr_signal_strength_t_csi_sinr = ProtoField.int32   ("mtkmipc.struct.csi_sinr", "csi_sinr", base.DEC)
mipc_nw_cscon_status_t_mode = ProtoField.uint8   ("mtkmipc.struct.mode", "mode", base.DEC, NW_CSCON_MODE)
mipc_nw_cscon_status_t_state = ProtoField.uint8   ("mtkmipc.struct.state", "state", base.DEC, NW_CSCON_STATE)
mipc_nw_cscon_status_t_access = ProtoField.uint8   ("mtkmipc.struct.access", "access", base.DEC, NW_CSCON_ACCESS)
mipc_nw_cscon_status_t_core_network = ProtoField.uint8   ("mtkmipc.struct.core_network", "core_network", base.DEC, NW_CSCON_CORE_NETWORK)
mipc_nw_pol_info_t_start_index = ProtoField.uint32   ("mtkmipc.struct.start_index", "start_index", base.DEC)
mipc_nw_pol_info_t_end_index = ProtoField.uint32   ("mtkmipc.struct.end_index", "end_index", base.DEC)
mipc_nw_pol_info_t_format_first = ProtoField.uint8   ("mtkmipc.struct.format_first", "format_first", base.DEC)
mipc_nw_pol_info_t_format_last = ProtoField.uint8   ("mtkmipc.struct.format_last", "format_last", base.DEC)
mipc_nw_ps_cs_reg_roaming_info_t_m_voice_reg_state = ProtoField.uint8   ("mtkmipc.struct.m_voice_reg_state", "m_voice_reg_state", base.DEC, NW_PS_CS_REG_STATE)
mipc_nw_ps_cs_reg_roaming_info_t_m_data_reg_state = ProtoField.uint8   ("mtkmipc.struct.m_data_reg_state", "m_data_reg_state", base.DEC, NW_PS_CS_REG_STATE)
mipc_nw_ps_cs_reg_roaming_info_t_m_voice_roaming_type = ProtoField.uint8   ("mtkmipc.struct.m_voice_roaming_type", "m_voice_roaming_type", base.DEC, NW_PS_CS_ROAMING_TYPE)
mipc_nw_ps_cs_reg_roaming_info_t_m_data_roaming_type = ProtoField.uint8   ("mtkmipc.struct.m_data_roaming_type", "m_data_roaming_type", base.DEC, NW_PS_CS_ROAMING_TYPE)
mipc_nw_ps_cs_reg_roaming_info_t_m_ril_voice_reg_state = ProtoField.uint8   ("mtkmipc.struct.m_ril_voice_reg_state", "m_ril_voice_reg_state", base.DEC, NW_RIL_PS_CS_REG_STATE)
mipc_nw_ps_cs_reg_roaming_info_t_m_ril_data_reg_state = ProtoField.uint8   ("mtkmipc.struct.m_ril_data_reg_state", "m_ril_data_reg_state", base.DEC, NW_RIL_PS_CS_REG_STATE)
mipc_nw_cellmeasurement_info_t_rat = ProtoField.uint8   ("mtkmipc.struct.rat", "rat", base.DEC)
mipc_nw_cellmeasurement_info_t_arfcn = ProtoField.uint32   ("mtkmipc.struct.arfcn", "arfcn", base.DEC)
mipc_nw_cellmeasurement_info_t_pci = ProtoField.uint32   ("mtkmipc.struct.pci", "pci", base.DEC)
mipc_nw_cellmeasurement_info_t_rsrp = ProtoField.uint32   ("mtkmipc.struct.rsrp", "rsrp", base.DEC)
mipc_nw_cellmeasurement_info_t_rsrq = ProtoField.uint32   ("mtkmipc.struct.rsrq", "rsrq", base.DEC)
mipc_nw_cellmeasurement_info_t_snr = ProtoField.uint32   ("mtkmipc.struct.snr", "snr", base.DEC)
mipc_nw_cellmeasurement_info_t_cid = ProtoField.uint64   ("mtkmipc.struct.cid", "cid", base.DEC)
mipc_nw_cell_band_bandwidth_t_cell_band = ProtoField.uint16   ("mtkmipc.struct.cell_band", "cell_band", base.DEC)
mipc_nw_cell_band_bandwidth_t_cell_bandwidth = ProtoField.uint32   ("mtkmipc.struct.cell_bandwidth", "cell_bandwidth", base.DEC)
mipc_nw_lte_nr_ca_info_t_cell_index = ProtoField.uint32   ("mtkmipc.struct.cell_index", "cell_index", base.DEC)
mipc_nw_lte_nr_ca_info_t_cell_state = ProtoField.uint8   ("mtkmipc.struct.cell_state", "cell_state", base.DEC)
mipc_nw_lte_nr_ca_info_t_cc_cw0_cqi = ProtoField.uint8   ("mtkmipc.struct.cc_cw0_cqi", "cc_cw0_cqi", base.DEC)
mipc_nw_lte_nr_ca_info_t_cc_cw1_cqi = ProtoField.uint8   ("mtkmipc.struct.cc_cw1_cqi", "cc_cw1_cqi", base.DEC)
mipc_nw_lte_nr_ca_info_t_cell_bandwidth = ProtoField.uint8   ("mtkmipc.struct.cell_bandwidth", "cell_bandwidth", base.DEC)
mipc_nw_lte_nr_ca_info_t_cell_band = ProtoField.uint16   ("mtkmipc.struct.cell_band", "cell_band", base.DEC)
mipc_nw_lte_nr_ca_info_t_cc_pci = ProtoField.uint16   ("mtkmipc.struct.cc_pci", "cc_pci", base.DEC)
mipc_nw_lte_nr_ca_info_t_cc_arfcn = ProtoField.uint32   ("mtkmipc.struct.cc_arfcn", "cc_arfcn", base.DEC)
mipc_nw_lte_nr_ca_info_t_cell_bandwidth_str = ProtoField.new("cell_bandwidth_str", "mtkmipc.struct.cell_bandwidth_str", ftypes.STRING)
mipc_cell_plmn_t_plmn_id = ProtoField.new("plmn_id", "mtkmipc.struct.plmn_id", ftypes.STRING)
mipc_cell_plmn_t_plmn_name = ProtoField.new("plmn_name", "mtkmipc.struct.plmn_name", ftypes.STRING)
mipc_nw_raw_signal_info_t_sig1 = ProtoField.int32   ("mtkmipc.struct.sig1", "sig1", base.DEC)
mipc_nw_raw_signal_info_t_sig2 = ProtoField.int32   ("mtkmipc.struct.sig2", "sig2", base.DEC)
mipc_nw_raw_signal_info_t_rssi_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rssi_in_qdbm", "rssi_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_rscp_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rscp_in_qdbm", "rscp_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_ecn0_in_qdbm = ProtoField.int32   ("mtkmipc.struct.ecn0_in_qdbm", "ecn0_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_rsrq_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rsrq_in_qdbm", "rsrq_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_rsrp_in_qdbm = ProtoField.int32   ("mtkmipc.struct.rsrp_in_qdbm", "rsrp_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_eact = ProtoField.int32   ("mtkmipc.struct.eact", "eact", base.DEC)
mipc_nw_raw_signal_info_t_sig3 = ProtoField.int32   ("mtkmipc.struct.sig3", "sig3", base.DEC)
mipc_nw_raw_signal_info_t_serv_band = ProtoField.int32   ("mtkmipc.struct.serv_band", "serv_band", base.DEC)
mipc_nw_raw_signal_info_t_second_rsrq_in_qdbm = ProtoField.int32   ("mtkmipc.struct.second_rsrq_in_qdbm", "second_rsrq_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_second_rsrp_in_qdbm = ProtoField.int32   ("mtkmipc.struct.second_rsrp_in_qdbm", "second_rsrp_in_qdbm", base.DEC)
mipc_nw_raw_signal_info_t_second_sig3 = ProtoField.int32   ("mtkmipc.struct.second_sig3", "second_sig3", base.DEC)
mipc_nw_raw_signal_info_t_signal_type = ProtoField.uint8   ("mtkmipc.struct.signal_type", "signal_type", base.DEC, NW_SIGNAL_TYPE)
mipc_nw_extend_provider_t_index = ProtoField.uint32   ("mtkmipc.struct.index", "index", base.DEC)
mipc_nw_extend_provider_t_stat = ProtoField.uint32   ("mtkmipc.struct.stat", "stat", base.DEC, NW_PROVIDER_STATE)
mipc_nw_extend_provider_t_oper_long_name = ProtoField.new("oper_long_name", "mtkmipc.struct.oper_long_name", ftypes.STRING)
mipc_nw_extend_provider_t_oper_short_name = ProtoField.new("oper_short_name", "mtkmipc.struct.oper_short_name", ftypes.STRING)
mipc_nw_extend_provider_t_oper_numeric_name = ProtoField.new("oper_numeric_name", "mtkmipc.struct.oper_numeric_name", ftypes.STRING)
mipc_nw_extend_provider_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_nw_extend_provider_t_lac = ProtoField.new("lac", "mtkmipc.struct.lac", ftypes.STRING)
mipc_nw_extend_provider_t_act = ProtoField.uint32   ("mtkmipc.struct.act", "act", base.DEC)
mipc_nw_extend_provider_t_csq_rssi = ProtoField.uint32   ("mtkmipc.struct.csq_rssi", "csq_rssi", base.DEC)
mipc_nw_extend_provider_t_register_state = ProtoField.uint32   ("mtkmipc.struct.register_state", "register_state", base.DEC)
mipc_nw_extend_provider_t_timestamp_type = ProtoField.uint32   ("mtkmipc.struct.timestamp_type", "timestamp_type", base.DEC)
mipc_nw_extend_provider_t_timestamp = ProtoField.int32   ("mtkmipc.struct.timestamp", "timestamp", base.DEC)
mipc_nw_extend_provider_t_connection_stat = ProtoField.uint32   ("mtkmipc.struct.connection_stat", "connection_stat", base.DEC)
mipc_nw_extend_provider_t_cell_id = ProtoField.new("cell_id", "mtkmipc.struct.cell_id", ftypes.STRING)
mipc_nw_extend_provider_t_freq = ProtoField.uint32   ("mtkmipc.struct.freq", "freq", base.DEC)
mipc_nw_extend_provider_t_bsic_psc_cpid_pci = ProtoField.int32   ("mtkmipc.struct.bsic_psc_cpid_pci", "bsic_psc_cpid_pci", base.DEC)
mipc_nw_extend_provider_t_sig2 = ProtoField.int32   ("mtkmipc.struct.sig2", "sig2", base.DEC)
mipc_nw_extend_provider_t_sig3 = ProtoField.int32   ("mtkmipc.struct.sig3", "sig3", base.DEC)
mipc_nw_extend_provider_t_sig4 = ProtoField.int32   ("mtkmipc.struct.sig4", "sig4", base.DEC)
mipc_nw_extend_provider_t_sig5 = ProtoField.int32   ("mtkmipc.struct.sig5", "sig5", base.DEC)
mipc_nw_extend_provider_t_bit_error_rat = ProtoField.uint32   ("mtkmipc.struct.bit_error_rat", "bit_error_rat", base.DEC)
mipc_nw_extend_provider_t_timing_advance = ProtoField.uint32   ("mtkmipc.struct.timing_advance", "timing_advance", base.DEC)
mipc_nw_extend_provider_t_cqi = ProtoField.uint32   ("mtkmipc.struct.cqi", "cqi", base.DEC)
mipc_nw_tuw_info_t_tuw_id = ProtoField.uint8   ("mtkmipc.struct.tuw_id", "tuw_id", base.DEC, NW_TUW_ID)
mipc_nw_tuw_info_t_tuw_length = ProtoField.uint32   ("mtkmipc.struct.tuw_length", "tuw_length", base.DEC)
mipc_sim_msisdn_t_msisdn = ProtoField.new("msisdn", "mtkmipc.struct.msisdn", ftypes.BYTES)
mipc_sim_pin_desc_t_pin_mode = ProtoField.uint8   ("mtkmipc.struct.pin_mode", "pin_mode", base.DEC)
mipc_sim_pin_desc_t_pin_format = ProtoField.uint8   ("mtkmipc.struct.pin_format", "pin_format", base.DEC)
mipc_sim_pin_desc_t_pin_len_min = ProtoField.uint8   ("mtkmipc.struct.pin_len_min", "pin_len_min", base.DEC)
mipc_sim_pin_desc_t_pin_len_max = ProtoField.uint8   ("mtkmipc.struct.pin_len_max", "pin_len_max", base.DEC)
mipc_sim_app_info_t_app_type = ProtoField.uint8   ("mtkmipc.struct.app_type", "app_type", base.DEC)
mipc_sim_app_info_t_app_id_len = ProtoField.uint8   ("mtkmipc.struct.app_id_len", "app_id_len", base.DEC)
mipc_sim_app_info_t_sim_app_id = ProtoField.new("sim_app_id", "mtkmipc.struct.sim_app_id", ftypes.BYTES)
mipc_sim_app_info_t_name_len = ProtoField.uint8   ("mtkmipc.struct.name_len", "name_len", base.DEC)
mipc_sim_app_info_t_name = ProtoField.new("name", "mtkmipc.struct.name", ftypes.BYTES)
mipc_sim_app_info_t_num_of_pins = ProtoField.uint8   ("mtkmipc.struct.num_of_pins", "num_of_pins", base.DEC)
mipc_sim_app_info_t_pin_ref = ProtoField.new("pin_ref", "mtkmipc.struct.pin_ref", ftypes.BYTES)
mipc_sim_slots_info_t_card_state = ProtoField.new("card_state", "mtkmipc.struct.card_state", ftypes.STRING)
mipc_sim_slots_info_t_slots_state = ProtoField.uint8   ("mtkmipc.struct.slots_state", "slots_state", base.DEC)
mipc_sim_slots_info_t_logical_idx = ProtoField.uint8   ("mtkmipc.struct.logical_idx", "logical_idx", base.DEC)
mipc_sim_slots_info_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_sim_slots_info_t_atr = ProtoField.new("atr", "mtkmipc.struct.atr", ftypes.STRING)
mipc_sim_slots_info_t_eid = ProtoField.new("eid", "mtkmipc.struct.eid", ftypes.STRING)
mipc_sim_slots_info_t_iccid = ProtoField.new("iccid", "mtkmipc.struct.iccid", ftypes.STRING)
mipc_app_status_desc_t_app_type = ProtoField.uint8   ("mtkmipc.struct.app_type", "app_type", base.DEC, SIM_APP_TYPE)
mipc_app_status_desc_t_app_state = ProtoField.uint8   ("mtkmipc.struct.app_state", "app_state", base.DEC, SIM_APP_STATE)
mipc_app_status_desc_t_pin_status = ProtoField.uint8   ("mtkmipc.struct.pin_status", "pin_status", base.DEC, SIM_PIN_STATE)
mipc_app_status_desc_t_sub_status = ProtoField.uint8   ("mtkmipc.struct.sub_status", "sub_status", base.DEC, SIM_APP_SUB_STATUS)
mipc_app_status_desc_t_pin1_replaced = ProtoField.uint8   ("mtkmipc.struct.pin1_replaced", "pin1_replaced", base.DEC)
mipc_app_status_desc_t_pin1_state = ProtoField.uint8   ("mtkmipc.struct.pin1_state", "pin1_state", base.DEC, SIM_ENABLED)
mipc_app_status_desc_t_pin2_state = ProtoField.uint8   ("mtkmipc.struct.pin2_state", "pin2_state", base.DEC, SIM_ENABLED)
mipc_app_status_desc_t_padding = ProtoField.uint8   ("mtkmipc.struct.padding", "padding", base.DEC)
mipc_app_status_desc_t_aid = ProtoField.new("aid", "mtkmipc.struct.aid", ftypes.STRING)
mipc_app_status_desc_t_padding2 = ProtoField.new("padding2", "mtkmipc.struct.padding2", ftypes.BYTES)
mipc_app_status_desc_t_app_label = ProtoField.new("app_label", "mtkmipc.struct.app_label", ftypes.STRING)
mipc_app_status_desc_t_padding3 = ProtoField.new("padding3", "mtkmipc.struct.padding3", ftypes.BYTES)
mipc_sms_pdu_t_message_index = ProtoField.uint16   ("mtkmipc.struct.message_index", "message_index", base.DEC)
mipc_sms_pdu_t_pdu_len = ProtoField.uint8   ("mtkmipc.struct.pdu_len", "pdu_len", base.DEC)
mipc_sms_pdu_t_status = ProtoField.uint8   ("mtkmipc.struct.status", "status", base.DEC, SMS_STATUS)
mipc_sms_pdu_t_sms_class = ProtoField.uint8   ("mtkmipc.struct.sms_class", "sms_class", base.DEC, SMS_CLASS)
mipc_sms_pdu_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_sms_pdu_t_pdu = ProtoField.new("pdu", "mtkmipc.struct.pdu", ftypes.BYTES)
mipc_ss_call_forward_t_call_forward_status = ProtoField.uint8   ("mtkmipc.struct.call_forward_status", "call_forward_status", base.DEC, SS_ACTIVE_STATUS)
mipc_ss_call_forward_t_dial_number = ProtoField.new("dial_number", "mtkmipc.struct.dial_number", ftypes.STRING)
mipc_ss_call_forward_t_service_class = ProtoField.uint16   ("mtkmipc.struct.service_class", "service_class", base.DEC, SS_SERVICE_CLASS)
mipc_ss_call_forward_t_type_of_address = ProtoField.uint16   ("mtkmipc.struct.type_of_address", "type_of_address", base.DEC)
mipc_ss_call_forward_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_ss_call_forward_t_timer = ProtoField.uint8   ("mtkmipc.struct.timer", "timer", base.DEC)
mipc_sys_mapping_t_ps_id = ProtoField.uint32   ("mtkmipc.struct.ps_id", "ps_id", base.DEC)
mipc_sys_lte_band_t_lte_band_class = ProtoField.uint32   ("mtkmipc.struct.lte_band_class", "lte_band_class", base.DEC)
mipc_sys_nr_band_t_nr_band_class = ProtoField.uint32   ("mtkmipc.struct.nr_band_class", "nr_band_class", base.DEC)
mipc_sys_thermal_sensor_config_t_enable = ProtoField.uint32   ("mtkmipc.struct.enable", "enable", base.DEC)
mipc_sys_thermal_sensor_config_t_sensor_id = ProtoField.uint32   ("mtkmipc.struct.sensor_id", "sensor_id", base.DEC)
mipc_sys_thermal_sensor_config_t_alarm_id = ProtoField.uint32   ("mtkmipc.struct.alarm_id", "alarm_id", base.DEC)
mipc_sys_thermal_sensor_config_t_threshold = ProtoField.int32   ("mtkmipc.struct.threshold", "threshold", base.DEC)
mipc_sys_thermal_sensor_config_t_hysteresis = ProtoField.uint32   ("mtkmipc.struct.hysteresis", "hysteresis", base.DEC)
mipc_sys_thermal_sensor_config_t_interval = ProtoField.uint32   ("mtkmipc.struct.interval", "interval", base.DEC)
mipc_sys_thermal_sensor_config_t_alarm_type = ProtoField.uint32   ("mtkmipc.struct.alarm_type", "alarm_type", base.DEC)
mipc_sys_thermal_sensor_info_t_sensor_id = ProtoField.uint32   ("mtkmipc.struct.sensor_id", "sensor_id", base.DEC)
mipc_sys_thermal_sensor_info_t_temperature = ProtoField.int32   ("mtkmipc.struct.temperature", "temperature", base.DEC)
mipc_call_detail_info_t_number_present = ProtoField.uint8   ("mtkmipc.struct.number_present", "number_present", base.DEC, CALL_CLI_VALIDITY)
mipc_call_detail_info_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_call_detail_info_t_number = ProtoField.new("number", "mtkmipc.struct.number", ftypes.STRING)
mipc_call_detail_info_t_name_present = ProtoField.uint8   ("mtkmipc.struct.name_present", "name_present", base.DEC, CALL_CNI_VALIDITY)
mipc_call_detail_info_t_padding2 = ProtoField.new("padding2", "mtkmipc.struct.padding2", ftypes.BYTES)
mipc_call_detail_info_t_name = ProtoField.new("name", "mtkmipc.struct.name", ftypes.STRING)
mipc_call_video_cap_t_local_video_cap_present = ProtoField.uint8   ("mtkmipc.struct.local_video_cap_present", "local_video_cap_present", base.DEC, BOOLEAN)
mipc_call_video_cap_t_local_video_cap = ProtoField.uint8   ("mtkmipc.struct.local_video_cap", "local_video_cap", base.DEC)
mipc_call_video_cap_t_remote_video_cap_present = ProtoField.uint8   ("mtkmipc.struct.remote_video_cap_present", "remote_video_cap_present", base.DEC, BOOLEAN)
mipc_call_video_cap_t_remote_video_cap = ProtoField.uint8   ("mtkmipc.struct.remote_video_cap", "remote_video_cap", base.DEC)
mipc_ecc_info_t_is_fake_ecc = ProtoField.uint8   ("mtkmipc.struct.is_fake_ecc", "is_fake_ecc", base.DEC, BOOLEAN)
mipc_ecc_info_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_ecc_info_t_category = ProtoField.uint16   ("mtkmipc.struct.category", "category", base.DEC)
mipc_ecc_info_t_type = ProtoField.uint16   ("mtkmipc.struct.type", "type", base.DEC, ECC_INFO_TYPE)
mipc_ecc_info_t_number = ProtoField.new("number", "mtkmipc.struct.number", ftypes.STRING)
mipc_ecc_info_t_padding2 = ProtoField.new("padding2", "mtkmipc.struct.padding2", ftypes.BYTES)
mipc_nw_srxlev_info_t_srxlev_in_qdb = ProtoField.uint16   ("mtkmipc.struct.srxlev_in_qdb", "srxlev_in_qdb", base.DEC)
mipc_nw_srxlev_info_t_squal_in_qdb = ProtoField.uint16   ("mtkmipc.struct.squal_in_qdb", "squal_in_qdb", base.DEC)
mipc_internal_set_filter_req_t_nccmni_net_if = ProtoField.uint8   ("mtkmipc.struct.nccmni_net_if", "nccmni_net_if", base.DEC)
mipc_internal_set_filter_req_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_internal_set_filter_req_t_nccmni_seq = ProtoField.uint16   ("mtkmipc.struct.nccmni_seq", "nccmni_seq", base.DEC)
mipc_internal_set_filter_req_t_valid_field = ProtoField.uint32   ("mtkmipc.struct.valid_field", "valid_field", base.DEC)
mipc_internal_set_filter_req_t_ip_type = ProtoField.uint8   ("mtkmipc.struct.ip_type", "ip_type", base.DEC)
mipc_internal_set_filter_req_t_ctrl_protocol = ProtoField.uint8   ("mtkmipc.struct.ctrl_protocol", "ctrl_protocol", base.DEC)
mipc_internal_set_filter_req_t_src_port = ProtoField.uint16   ("mtkmipc.struct.src_port", "src_port", base.DEC)
mipc_internal_set_filter_req_t_dst_port = ProtoField.uint16   ("mtkmipc.struct.dst_port", "dst_port", base.DEC)
mipc_internal_set_filter_req_t_tcp_flags = ProtoField.uint16   ("mtkmipc.struct.tcp_flags", "tcp_flags", base.DEC)
mipc_internal_set_filter_req_t_spi = ProtoField.uint32   ("mtkmipc.struct.spi", "spi", base.DEC)
mipc_internal_set_filter_req_t_src_v4_addr = ProtoField.uint8   ("mtkmipc.struct.src_v4_addr", "src_v4_addr", base.DEC)
mipc_internal_set_filter_req_t_dst_v4_addr = ProtoField.uint8   ("mtkmipc.struct.dst_v4_addr", "dst_v4_addr", base.DEC)
mipc_internal_set_filter_req_t_src_v6_addr = ProtoField.uint8   ("mtkmipc.struct.src_v6_addr", "src_v6_addr", base.DEC)
mipc_internal_set_filter_req_t_dst_v6_addr = ProtoField.uint8   ("mtkmipc.struct.dst_v6_addr", "dst_v6_addr", base.DEC)
mipc_internal_set_filter_req_t_icmpv4_type = ProtoField.uint8   ("mtkmipc.struct.icmpv4_type", "icmpv4_type", base.DEC)
mipc_internal_set_filter_req_t_icmpv6_type = ProtoField.uint8   ("mtkmipc.struct.icmpv6_type", "icmpv6_type", base.DEC)
mipc_internal_set_filter_req_t_reserve = ProtoField.uint16   ("mtkmipc.struct.reserve", "reserve", base.DEC)
mipc_internal_set_filter_req_t_features = ProtoField.uint32   ("mtkmipc.struct.features", "features", base.DEC)
mipc_internal_set_filter_cnf_t_nccmni_net_if = ProtoField.uint8   ("mtkmipc.struct.nccmni_net_if", "nccmni_net_if", base.DEC)
mipc_internal_set_filter_cnf_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_internal_set_filter_cnf_t_nccmni_seq = ProtoField.uint16   ("mtkmipc.struct.nccmni_seq", "nccmni_seq", base.DEC)
mipc_internal_set_filter_cnf_t_filter_id = ProtoField.int32   ("mtkmipc.struct.filter_id", "filter_id", base.DEC)
mipc_internal_reset_filter_req_t_nccmni_net_if = ProtoField.uint8   ("mtkmipc.struct.nccmni_net_if", "nccmni_net_if", base.DEC)
mipc_internal_reset_filter_req_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_internal_reset_filter_req_t_nccmni_seq = ProtoField.uint16   ("mtkmipc.struct.nccmni_seq", "nccmni_seq", base.DEC)
mipc_internal_reset_filter_req_t_is_deregister_all_filter = ProtoField.int32   ("mtkmipc.struct.is_deregister_all_filter", "is_deregister_all_filter", base.DEC)
mipc_internal_reset_filter_req_t_filter_id = ProtoField.int32   ("mtkmipc.struct.filter_id", "filter_id", base.DEC)
mipc_internal_reset_filter_cnf_t_nccmni_net_if = ProtoField.uint8   ("mtkmipc.struct.nccmni_net_if", "nccmni_net_if", base.DEC)
mipc_internal_reset_filter_cnf_t_reserve1 = ProtoField.uint8   ("mtkmipc.struct.reserve1", "reserve1", base.DEC)
mipc_internal_reset_filter_cnf_t_nccmni_seq = ProtoField.uint16   ("mtkmipc.struct.nccmni_seq", "nccmni_seq", base.DEC)
mipc_internal_reset_filter_cnf_t_is_success = ProtoField.int32   ("mtkmipc.struct.is_success", "is_success", base.DEC)
mipc_sys_modem_t_modem_id = ProtoField.uint64   ("mtkmipc.struct.modem_id", "modem_id", base.DEC)
mipc_sys_modem_t_executor_number = ProtoField.uint32   ("mtkmipc.struct.executor_number", "executor_number", base.DEC)
mipc_sys_modem_t_sim_number = ProtoField.uint32   ("mtkmipc.struct.sim_number", "sim_number", base.DEC)
mipc_sys_modem_t_concurrency = ProtoField.uint32   ("mtkmipc.struct.concurrency", "concurrency", base.DEC)
mipc_sys_modem_t_padding = ProtoField.new("padding", "mtkmipc.struct.padding", ftypes.BYTES)
mipc_sys_adpclk_freq_info_t_center_frequency = ProtoField.uint64   ("mtkmipc.struct.center_frequency", "center_frequency", base.DEC)
mipc_sys_adpclk_freq_info_t_frequency_spread = ProtoField.uint32   ("mtkmipc.struct.frequency_spread", "frequency_spread", base.DEC)
mipc_sys_adpclk_freq_info_t_noise_power = ProtoField.uint32   ("mtkmipc.struct.noise_power", "noise_power", base.DEC)
mipc_sys_adpclk_freq_info_t_relative_signal_strength = ProtoField.uint32   ("mtkmipc.struct.relative_signal_strength", "relative_signal_strength", base.DEC)
mipc_sys_adpclk_freq_info_t_connect_status = ProtoField.uint32   ("mtkmipc.struct.connect_status", "connect_status", base.DEC)

mipc_struct_field = {
    mipc_unreference_struct_param,
    mipc_v4_full_addr_t_mtu,
    mipc_v4_full_addr_t_addr,
    mipc_v4_full_addr_t_mask,
    mipc_v6_full_addr_t_mtu,
    mipc_v6_full_addr_t_addr,
    mipc_v6_full_addr_t_prefix,
    mipc_addr_t_addr_len,
    mipc_addr_t_addr,
    mipc_full_addr_t_addr_len,
    mipc_full_addr_t_addr,
    mipc_full_addr_t_mtu,
    mipc_full_addr_t_mask,
    mipc_full_addr_t_prefix,
    mipc_apn_ia_t_apn,
    mipc_apn_ia_t_apn_idx,
    mipc_apn_ia_t_userid,
    mipc_apn_ia_t_password,
    mipc_apn_ia_t_bearer_bitmask,
    mipc_apn_ia_t_pdp_type,
    mipc_apn_ia_t_roaming_type,
    mipc_apn_ia_t_auth_type,
    mipc_apn_ia_t_compression,
    mipc_apn_profile_t_id,
    mipc_apn_profile_t_plmn_id,
    mipc_apn_profile_t_padding,
    mipc_apn_profile_t_apn,
    mipc_apn_profile_t_apn_idx,
    mipc_apn_profile_t_userid,
    mipc_apn_profile_t_password,
    mipc_apn_profile_t_bearer_bitmask,
    mipc_apn_profile_t_apn_type,
    mipc_apn_profile_t_pdp_type,
    mipc_apn_profile_t_roaming_type,
    mipc_apn_profile_t_auth_type,
    mipc_apn_profile_t_compression,
    mipc_apn_profile_t_reserve1,
    mipc_apn_profile_t_reserve2,
    mipc_apn_profile_t_reserve3,
    mipc_apn_profile_t_enabled,
    mipc_md_apn_profile_t_id,
    mipc_md_apn_profile_t_plmn_id,
    mipc_md_apn_profile_t_act_state,
    mipc_md_apn_profile_t_apn,
    mipc_md_apn_profile_t_apn_idx,
    mipc_md_apn_profile_t_userid,
    mipc_md_apn_profile_t_password,
    mipc_md_apn_profile_t_bearer_bitmask,
    mipc_md_apn_profile_t_apn_type,
    mipc_md_apn_profile_t_pdp_type,
    mipc_md_apn_profile_t_roaming_type,
    mipc_md_apn_profile_t_auth_type,
    mipc_md_apn_profile_t_reserve,
    mipc_vzw_apn_profile_t_apn,
    mipc_vzw_apn_profile_t_apnb,
    mipc_vzw_apn_profile_t_pdp_type,
    mipc_vzw_apn_profile_t_id,
    mipc_vzw_apn_profile_t_apnclass,
    mipc_vzw_apn_profile_t_enabled,
    mipc_vzw_apn_profile_t_max_conn,
    mipc_vzw_apn_profile_t_max_conn_t,
    mipc_vzw_apn_profile_t_wait_time,
    mipc_vzw_apn_profile_t_act_state,
    mipc_vzw_apn_profile_t_reserve1,
    mipc_vzw_apn_profile_t_reserve2,
    mipc_vzw_apn_profile_t_reserve3,
    mipc_data_nitz_info_t_year,
    mipc_data_nitz_info_t_month,
    mipc_data_nitz_info_t_day,
    mipc_data_nitz_info_t_hour,
    mipc_data_nitz_info_t_minute,
    mipc_data_nitz_info_t_second,
    mipc_data_v4_addr_t_addr,
    mipc_data_v6_addr_t_addr,
    mipc_data_pco_ie_t_ie,
    mipc_data_pco_ie_t_padding,
    mipc_data_pco_ie_t_content,
    mipc_data_packet_filter_t_len,
    mipc_data_packet_filter_t_padding,
    mipc_data_packet_filter_t_pattern,
    mipc_data_packet_filter_t_mask,
    mipc_data_qos_info_t_cid,
    mipc_data_qos_info_t_qci,
    mipc_data_qos_info_t_dl_gbr,
    mipc_data_qos_info_t_ul_gbr,
    mipc_data_qos_info_t_dl_mbr,
    mipc_data_qos_info_t_ul_mbr,
    mipc_data_qos_info_t_dl_ambr,
    mipc_data_qos_info_t_ul_ambr,
    mipc_data_5gqos_info_t_cid,
    mipc_data_5gqos_info_t_vqi,
    mipc_data_5gqos_info_t_dl_gfbr,
    mipc_data_5gqos_info_t_ul_gfbr,
    mipc_data_5gqos_info_t_dl_mfbr,
    mipc_data_5gqos_info_t_ul_mfbr,
    mipc_data_5gqos_info_t_dl_sambr,
    mipc_data_5gqos_info_t_ul_sambr,
    mipc_data_5gqos_info_t_averaging_window,
    mipc_data_start_keepalive_request_t_type,
    mipc_data_start_keepalive_request_t_sourceport,
    mipc_data_start_keepalive_request_t_destinationport,
    mipc_data_start_keepalive_request_t_maxkeepaliveintervalmillis,
    mipc_data_start_keepalive_request_t_cid,
    mipc_data_start_keepalive_request_t_sourceaddress,
    mipc_data_start_keepalive_request_t_destinationaddress,
    mipc_s_nssai_struct_t_sst_present,
    mipc_s_nssai_struct_t_sst,
    mipc_s_nssai_struct_t_sd_present,
    mipc_s_nssai_struct_t_padding,
    mipc_s_nssai_struct_t_sd,
    mipc_s_nssai_struct_t_mapped_sst_present,
    mipc_s_nssai_struct_t_mapped_sst,
    mipc_s_nssai_struct_t_mapped_sd_present,
    mipc_s_nssai_struct_t_padding2,
    mipc_s_nssai_struct_t_mapped_sd,
    mipc_ursp_ue_local_conf_struct_t_ssc_mode,
    mipc_ursp_ue_local_conf_struct_t_dnn_len,
    mipc_ursp_ue_local_conf_struct_t_padding,
    mipc_ursp_ue_local_conf_struct_t_s_nssai_present,
    mipc_ursp_ue_local_conf_struct_t_dnn,
    mipc_ursp_ue_local_conf_struct_t_pdu_session_type,
    mipc_ursp_ue_local_conf_struct_t_pref_access_type,
    mipc_ursp_ue_local_conf_struct_t_padding3,
    mipc_nw_provider_t_index,
    mipc_nw_provider_t_plmn_id,
    mipc_nw_provider_t_padding,
    mipc_nw_provider_t_network_name,
    mipc_nw_provider_t_network_short_name,
    mipc_nw_provider_t_act,
    mipc_nw_provider_t_act_supported,
    mipc_nw_provider_t_state,
    mipc_nw_provider_t_rssi,
    mipc_nw_provider_t_error_rate,
    mipc_nw_provider_t_padding2,
    mipc_nw_nitz_info_t_year,
    mipc_nw_nitz_info_t_month,
    mipc_nw_nitz_info_t_day,
    mipc_nw_nitz_info_t_hour,
    mipc_nw_nitz_info_t_minute,
    mipc_nw_nitz_info_t_second,
    mipc_nw_nitz_info_t_time_zone_offset_minutes,
    mipc_nw_nitz_info_t_daylight_saving_offset_minutes,
    mipc_nw_reg_state_t_ps_state,
    mipc_nw_reg_state_t_cs_state,
    mipc_nw_reg_state_t_plmn,
    mipc_nw_reg_state_t_padding,
    mipc_nw_reg_state_t_cs_plmn,
    mipc_nw_reg_state_t_padding2,
    mipc_nw_reg_state_t_lac,
    mipc_nw_reg_state_t_cs_lac,
    mipc_nw_reg_state_t_ci,
    mipc_nw_reg_state_t_cs_ci,
    mipc_nw_reg_state_t_is_roaming,
    mipc_nw_reg_state_t_cs_is_roaming,
    mipc_nw_reg_state_t_padding3,
    mipc_nw_blacklist_t_plmn,
    mipc_nw_blacklist_t_blacklist_type,
    mipc_nw_location_info_t_location_area_code,
    mipc_nw_location_info_t_tracking_area_code,
    mipc_nw_location_info_t_cell_id,
    mipc_nw_gsm_cell_t_state,
    mipc_nw_gsm_cell_t_provider_id,
    mipc_nw_gsm_cell_t_lac,
    mipc_nw_gsm_cell_t_cid,
    mipc_nw_gsm_cell_t_ta,
    mipc_nw_gsm_cell_t_arfcn,
    mipc_nw_gsm_cell_t_base_station_id,
    mipc_nw_gsm_cell_t_rx_level,
    mipc_nw_gsm_cell_t_biterrorrate,
    mipc_nw_gsm_cell_t_registered,
    mipc_nw_gsm_cell_t_long_name,
    mipc_nw_gsm_cell_t_short_name,
    mipc_nw_umts_cell_t_state,
    mipc_nw_umts_cell_t_provider_id,
    mipc_nw_umts_cell_t_lac,
    mipc_nw_umts_cell_t_cid,
    mipc_nw_umts_cell_t_uarfcn,
    mipc_nw_umts_cell_t_psc,
    mipc_nw_umts_cell_t_rscp,
    mipc_nw_umts_cell_t_ecno,
    mipc_nw_umts_cell_t_registered,
    mipc_nw_umts_cell_t_long_name,
    mipc_nw_umts_cell_t_short_name,
    mipc_nw_lte_cell_t_state,
    mipc_nw_lte_cell_t_provider_id,
    mipc_nw_lte_cell_t_cid,
    mipc_nw_lte_cell_t_earfcn,
    mipc_nw_lte_cell_t_physical_cell_id,
    mipc_nw_lte_cell_t_tac,
    mipc_nw_lte_cell_t_rsrp,
    mipc_nw_lte_cell_t_rsrq,
    mipc_nw_lte_cell_t_ta,
    mipc_nw_lte_cell_t_rsrp_in_qdbm,
    mipc_nw_lte_cell_t_rsrq_in_qdbm,
    mipc_nw_lte_cell_t_rssnr,
    mipc_nw_lte_cell_t_cqi,
    mipc_nw_lte_cell_t_dl_freq_band,
    mipc_nw_lte_cell_t_registered,
    mipc_nw_lte_cell_t_long_name,
    mipc_nw_lte_cell_t_short_name,
    mipc_nw_nr_cell_t_state,
    mipc_nw_nr_cell_t_provider_id,
    mipc_nw_nr_cell_t_cid,
    mipc_nw_nr_cell_t_physical_cell_id,
    mipc_nw_nr_cell_t_nr_arfcn,
    mipc_nw_nr_cell_t_tac,
    mipc_nw_nr_cell_t_rsrp,
    mipc_nw_nr_cell_t_rsrq,
    mipc_nw_nr_cell_t_sinr,
    mipc_nw_nr_cell_t_ta,
    mipc_nw_nr_cell_t_csirsrp,
    mipc_nw_nr_cell_t_csirsrq,
    mipc_nw_nr_cell_t_csisinr,
    mipc_nw_nr_cell_t_dl_freq_band,
    mipc_nw_nr_cell_t_registered,
    mipc_nw_nr_cell_t_long_name,
    mipc_nw_nr_cell_t_short_name,
    mipc_nw_cdma_cell_t_tbd,
    mipc_nw_tdscdma_cell_t_tbd,
    mipc_nw_reg_change_info_t_stat,
    mipc_nw_reg_change_info_t_lac_tac,
    mipc_nw_reg_change_info_t_cell_id,
    mipc_nw_reg_change_info_t_eact,
    mipc_nw_reg_change_info_t_rac,
    mipc_nw_reg_change_info_t_nw_existence,
    mipc_nw_reg_change_info_t_roam_indicator,
    mipc_nw_reg_change_info_t_cause_type,
    mipc_nw_reg_change_info_t_reject_cause,
    mipc_nw_reg_change_info_t_dcnr_restricted,
    mipc_nw_reg_change_info_t_endc_sib_status,
    mipc_nw_reg_change_info_t_endc_available,
    mipc_nw_cs_reg_info_t_stat,
    mipc_nw_cs_reg_info_t_rat,
    mipc_nw_cs_reg_info_t_css,
    mipc_nw_cs_reg_info_t_roaming_ind,
    mipc_nw_cs_reg_info_t_is_in_prl,
    mipc_nw_cs_reg_info_t_def_roaming_ind,
    mipc_nw_cs_reg_info_t_reason_for_denial,
    mipc_nw_ps_reg_info_t_stat,
    mipc_nw_ps_reg_info_t_rat,
    mipc_nw_ps_reg_info_t_reason_for_denial,
    mipc_nw_ps_reg_info_t_max_data_calls,
    mipc_nw_ps_reg_info_t_is_vops_supported,
    mipc_nw_ps_reg_info_t_is_emc_bearer_supported,
    mipc_nw_ps_reg_info_t_is_endc_available,
    mipc_nw_ps_reg_info_t_is_dcnr_restricted,
    mipc_nw_ps_reg_info_t_is_nr_available,
    mipc_nw_ps_reg_info_t_roaming_ind,
    mipc_nw_ps_reg_info_t_is_in_prl,
    mipc_nw_ps_reg_info_t_def_roaming_ind,
    mipc_nw_ps_reg_info_t_cell_id,
    mipc_nw_channel_lock_info_t_opt,
    mipc_nw_channel_lock_info_t_act,
    mipc_nw_channel_lock_info_t_band_info,
    mipc_nw_channel_lock_info_t_channel_num,
    mipc_nw_channel_lock_info_t_arfcn_list,
    mipc_nw_channel_lock_info_t_cell_id,
    mipc_nw_channel_lock_info_t_lock_mode,
    mipc_nw_gsm_signal_strength_t_signal_strength,
    mipc_nw_gsm_signal_strength_t_bit_error_rate,
    mipc_nw_gsm_signal_strength_t_timing_advance,
    mipc_nw_umts_signal_strength_t_signal_strength,
    mipc_nw_umts_signal_strength_t_bit_error_rate,
    mipc_nw_umts_signal_strength_t_rscp,
    mipc_nw_umts_signal_strength_t_ecno,
    mipc_nw_lte_signal_strength_t_signal_strength,
    mipc_nw_lte_signal_strength_t_rsrp,
    mipc_nw_lte_signal_strength_t_rsrq,
    mipc_nw_lte_signal_strength_t_rssnr,
    mipc_nw_lte_signal_strength_t_cqi,
    mipc_nw_lte_signal_strength_t_timing_advance,
    mipc_nw_nr_signal_strength_t_signal_strength,
    mipc_nw_nr_signal_strength_t_ss_rsrp,
    mipc_nw_nr_signal_strength_t_ss_rsrq,
    mipc_nw_nr_signal_strength_t_ss_sinr,
    mipc_nw_nr_signal_strength_t_csi_rsrp,
    mipc_nw_nr_signal_strength_t_csi_rsrq,
    mipc_nw_nr_signal_strength_t_csi_sinr,
    mipc_nw_cscon_status_t_mode,
    mipc_nw_cscon_status_t_state,
    mipc_nw_cscon_status_t_access,
    mipc_nw_cscon_status_t_core_network,
    mipc_nw_pol_info_t_start_index,
    mipc_nw_pol_info_t_end_index,
    mipc_nw_pol_info_t_format_first,
    mipc_nw_pol_info_t_format_last,
    mipc_nw_ps_cs_reg_roaming_info_t_m_voice_reg_state,
    mipc_nw_ps_cs_reg_roaming_info_t_m_data_reg_state,
    mipc_nw_ps_cs_reg_roaming_info_t_m_voice_roaming_type,
    mipc_nw_ps_cs_reg_roaming_info_t_m_data_roaming_type,
    mipc_nw_ps_cs_reg_roaming_info_t_m_ril_voice_reg_state,
    mipc_nw_ps_cs_reg_roaming_info_t_m_ril_data_reg_state,
    mipc_nw_cellmeasurement_info_t_rat,
    mipc_nw_cellmeasurement_info_t_arfcn,
    mipc_nw_cellmeasurement_info_t_pci,
    mipc_nw_cellmeasurement_info_t_rsrp,
    mipc_nw_cellmeasurement_info_t_rsrq,
    mipc_nw_cellmeasurement_info_t_snr,
    mipc_nw_cellmeasurement_info_t_cid,
    mipc_nw_cell_band_bandwidth_t_cell_band,
    mipc_nw_cell_band_bandwidth_t_cell_bandwidth,
    mipc_nw_lte_nr_ca_info_t_cell_index,
    mipc_nw_lte_nr_ca_info_t_cell_state,
    mipc_nw_lte_nr_ca_info_t_cc_cw0_cqi,
    mipc_nw_lte_nr_ca_info_t_cc_cw1_cqi,
    mipc_nw_lte_nr_ca_info_t_cell_bandwidth,
    mipc_nw_lte_nr_ca_info_t_cell_band,
    mipc_nw_lte_nr_ca_info_t_cc_pci,
    mipc_nw_lte_nr_ca_info_t_cc_arfcn,
    mipc_nw_lte_nr_ca_info_t_cell_bandwidth_str,
    mipc_cell_plmn_t_plmn_id,
    mipc_cell_plmn_t_plmn_name,
    mipc_nw_raw_signal_info_t_sig1,
    mipc_nw_raw_signal_info_t_sig2,
    mipc_nw_raw_signal_info_t_rssi_in_qdbm,
    mipc_nw_raw_signal_info_t_rscp_in_qdbm,
    mipc_nw_raw_signal_info_t_ecn0_in_qdbm,
    mipc_nw_raw_signal_info_t_rsrq_in_qdbm,
    mipc_nw_raw_signal_info_t_rsrp_in_qdbm,
    mipc_nw_raw_signal_info_t_eact,
    mipc_nw_raw_signal_info_t_sig3,
    mipc_nw_raw_signal_info_t_serv_band,
    mipc_nw_raw_signal_info_t_second_rsrq_in_qdbm,
    mipc_nw_raw_signal_info_t_second_rsrp_in_qdbm,
    mipc_nw_raw_signal_info_t_second_sig3,
    mipc_nw_raw_signal_info_t_signal_type,
    mipc_nw_extend_provider_t_index,
    mipc_nw_extend_provider_t_stat,
    mipc_nw_extend_provider_t_oper_long_name,
    mipc_nw_extend_provider_t_oper_short_name,
    mipc_nw_extend_provider_t_oper_numeric_name,
    mipc_nw_extend_provider_t_padding,
    mipc_nw_extend_provider_t_lac,
    mipc_nw_extend_provider_t_act,
    mipc_nw_extend_provider_t_csq_rssi,
    mipc_nw_extend_provider_t_register_state,
    mipc_nw_extend_provider_t_timestamp_type,
    mipc_nw_extend_provider_t_timestamp,
    mipc_nw_extend_provider_t_connection_stat,
    mipc_nw_extend_provider_t_cell_id,
    mipc_nw_extend_provider_t_freq,
    mipc_nw_extend_provider_t_bsic_psc_cpid_pci,
    mipc_nw_extend_provider_t_sig2,
    mipc_nw_extend_provider_t_sig3,
    mipc_nw_extend_provider_t_sig4,
    mipc_nw_extend_provider_t_sig5,
    mipc_nw_extend_provider_t_bit_error_rat,
    mipc_nw_extend_provider_t_timing_advance,
    mipc_nw_extend_provider_t_cqi,
    mipc_nw_tuw_info_t_tuw_id,
    mipc_nw_tuw_info_t_tuw_length,
    mipc_sim_msisdn_t_msisdn,
    mipc_sim_pin_desc_t_pin_mode,
    mipc_sim_pin_desc_t_pin_format,
    mipc_sim_pin_desc_t_pin_len_min,
    mipc_sim_pin_desc_t_pin_len_max,
    mipc_sim_app_info_t_app_type,
    mipc_sim_app_info_t_app_id_len,
    mipc_sim_app_info_t_sim_app_id,
    mipc_sim_app_info_t_name_len,
    mipc_sim_app_info_t_name,
    mipc_sim_app_info_t_num_of_pins,
    mipc_sim_app_info_t_pin_ref,
    mipc_sim_slots_info_t_card_state,
    mipc_sim_slots_info_t_slots_state,
    mipc_sim_slots_info_t_logical_idx,
    mipc_sim_slots_info_t_padding,
    mipc_sim_slots_info_t_atr,
    mipc_sim_slots_info_t_eid,
    mipc_sim_slots_info_t_iccid,
    mipc_app_status_desc_t_app_type,
    mipc_app_status_desc_t_app_state,
    mipc_app_status_desc_t_pin_status,
    mipc_app_status_desc_t_sub_status,
    mipc_app_status_desc_t_pin1_replaced,
    mipc_app_status_desc_t_pin1_state,
    mipc_app_status_desc_t_pin2_state,
    mipc_app_status_desc_t_padding,
    mipc_app_status_desc_t_aid,
    mipc_app_status_desc_t_padding2,
    mipc_app_status_desc_t_app_label,
    mipc_app_status_desc_t_padding3,
    mipc_sms_pdu_t_message_index,
    mipc_sms_pdu_t_pdu_len,
    mipc_sms_pdu_t_status,
    mipc_sms_pdu_t_sms_class,
    mipc_sms_pdu_t_padding,
    mipc_sms_pdu_t_pdu,
    mipc_ss_call_forward_t_call_forward_status,
    mipc_ss_call_forward_t_dial_number,
    mipc_ss_call_forward_t_service_class,
    mipc_ss_call_forward_t_type_of_address,
    mipc_ss_call_forward_t_padding,
    mipc_ss_call_forward_t_timer,
    mipc_sys_mapping_t_ps_id,
    mipc_sys_lte_band_t_lte_band_class,
    mipc_sys_nr_band_t_nr_band_class,
    mipc_sys_thermal_sensor_config_t_enable,
    mipc_sys_thermal_sensor_config_t_sensor_id,
    mipc_sys_thermal_sensor_config_t_alarm_id,
    mipc_sys_thermal_sensor_config_t_threshold,
    mipc_sys_thermal_sensor_config_t_hysteresis,
    mipc_sys_thermal_sensor_config_t_interval,
    mipc_sys_thermal_sensor_config_t_alarm_type,
    mipc_sys_thermal_sensor_info_t_sensor_id,
    mipc_sys_thermal_sensor_info_t_temperature,
    mipc_call_detail_info_t_number_present,
    mipc_call_detail_info_t_padding,
    mipc_call_detail_info_t_number,
    mipc_call_detail_info_t_name_present,
    mipc_call_detail_info_t_padding2,
    mipc_call_detail_info_t_name,
    mipc_call_video_cap_t_local_video_cap_present,
    mipc_call_video_cap_t_local_video_cap,
    mipc_call_video_cap_t_remote_video_cap_present,
    mipc_call_video_cap_t_remote_video_cap,
    mipc_ecc_info_t_is_fake_ecc,
    mipc_ecc_info_t_padding,
    mipc_ecc_info_t_category,
    mipc_ecc_info_t_type,
    mipc_ecc_info_t_number,
    mipc_ecc_info_t_padding2,
    mipc_nw_srxlev_info_t_srxlev_in_qdb,
    mipc_nw_srxlev_info_t_squal_in_qdb,
    mipc_internal_set_filter_req_t_nccmni_net_if,
    mipc_internal_set_filter_req_t_reserve1,
    mipc_internal_set_filter_req_t_nccmni_seq,
    mipc_internal_set_filter_req_t_valid_field,
    mipc_internal_set_filter_req_t_ip_type,
    mipc_internal_set_filter_req_t_ctrl_protocol,
    mipc_internal_set_filter_req_t_src_port,
    mipc_internal_set_filter_req_t_dst_port,
    mipc_internal_set_filter_req_t_tcp_flags,
    mipc_internal_set_filter_req_t_spi,
    mipc_internal_set_filter_req_t_src_v4_addr,
    mipc_internal_set_filter_req_t_dst_v4_addr,
    mipc_internal_set_filter_req_t_src_v6_addr,
    mipc_internal_set_filter_req_t_dst_v6_addr,
    mipc_internal_set_filter_req_t_icmpv4_type,
    mipc_internal_set_filter_req_t_icmpv6_type,
    mipc_internal_set_filter_req_t_reserve,
    mipc_internal_set_filter_req_t_features,
    mipc_internal_set_filter_cnf_t_nccmni_net_if,
    mipc_internal_set_filter_cnf_t_reserve1,
    mipc_internal_set_filter_cnf_t_nccmni_seq,
    mipc_internal_set_filter_cnf_t_filter_id,
    mipc_internal_reset_filter_req_t_nccmni_net_if,
    mipc_internal_reset_filter_req_t_reserve1,
    mipc_internal_reset_filter_req_t_nccmni_seq,
    mipc_internal_reset_filter_req_t_is_deregister_all_filter,
    mipc_internal_reset_filter_req_t_filter_id,
    mipc_internal_reset_filter_cnf_t_nccmni_net_if,
    mipc_internal_reset_filter_cnf_t_reserve1,
    mipc_internal_reset_filter_cnf_t_nccmni_seq,
    mipc_internal_reset_filter_cnf_t_is_success,
    mipc_sys_modem_t_modem_id,
    mipc_sys_modem_t_executor_number,
    mipc_sys_modem_t_sim_number,
    mipc_sys_modem_t_concurrency,
    mipc_sys_modem_t_padding,
    mipc_sys_adpclk_freq_info_t_center_frequency,
    mipc_sys_adpclk_freq_info_t_frequency_spread,
    mipc_sys_adpclk_freq_info_t_noise_power,
    mipc_sys_adpclk_freq_info_t_relative_signal_strength,
    mipc_sys_adpclk_freq_info_t_connect_status,
}

function unreference_struct(struct_tree, data)
    struct_tree:add_le(mipc_unreference_struct_param, data)
end

function mipc_v4_full_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_v4_full_addr_t_mtu, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_v4_full_addr_t_addr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_v4_full_addr_t_mask, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_v6_full_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_v6_full_addr_t_mtu, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_v6_full_addr_t_addr, struct_data:range(struct_offset,16))
    struct_offset = struct_offset + 16
    struct_tree:add_le(mipc_v6_full_addr_t_prefix, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_addr_t_addr_len, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_addr_t_addr, struct_data:range(struct_offset,16))
    struct_offset = struct_offset + 16
end

function mipc_full_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_full_addr_t_addr_len, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_full_addr_t_addr, struct_data:range(struct_offset,16))
    struct_offset = struct_offset + 16
    struct_tree:add_le(mipc_full_addr_t_mtu, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_full_addr_t_mask, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_full_addr_t_prefix, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_apn_ia_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 100
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_ia_t_apn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_apn_ia_t_apn_idx, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_ia_t_userid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_ia_t_password, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_apn_ia_t_bearer_bitmask, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_apn_ia_t_pdp_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_ia_t_roaming_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_ia_t_auth_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_ia_t_compression, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_apn_profile_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_apn_profile_t_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_apn_profile_t_plmn_id, struct_data:range(struct_offset,MAX_PLMN_ID_LEN))
    struct_offset = struct_offset + MAX_PLMN_ID_LEN
    struct_tree:add_le(mipc_apn_profile_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 100
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_profile_t_apn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_apn_profile_t_apn_idx, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_profile_t_userid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_apn_profile_t_password, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_apn_profile_t_bearer_bitmask, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_apn_profile_t_apn_type, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_apn_profile_t_pdp_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_roaming_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_auth_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_compression, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_reserve2, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_reserve3, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_apn_profile_t_enabled, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_md_apn_profile_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_md_apn_profile_t_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_md_apn_profile_t_plmn_id, struct_data:range(struct_offset,MAX_PLMN_ID_LEN))
    struct_offset = struct_offset + MAX_PLMN_ID_LEN
    struct_tree:add_le(mipc_md_apn_profile_t_act_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 100
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_md_apn_profile_t_apn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_md_apn_profile_t_apn_idx, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_md_apn_profile_t_userid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 64
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_md_apn_profile_t_password, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_md_apn_profile_t_bearer_bitmask, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_md_apn_profile_t_apn_type, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_md_apn_profile_t_pdp_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_md_apn_profile_t_roaming_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_md_apn_profile_t_auth_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_md_apn_profile_t_reserve, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_vzw_apn_profile_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 100
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_vzw_apn_profile_t_apn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 10
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_vzw_apn_profile_t_apnb, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_vzw_apn_profile_t_pdp_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_id, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_apnclass, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_enabled, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_max_conn, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_max_conn_t, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_wait_time, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_vzw_apn_profile_t_act_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_reserve2, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_vzw_apn_profile_t_reserve3, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_data_nitz_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_nitz_info_t_year, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_nitz_info_t_month, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_nitz_info_t_day, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_nitz_info_t_hour, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_nitz_info_t_minute, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_nitz_info_t_second, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_data_v4_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_v4_addr_t_addr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_data_v6_addr_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_v6_addr_t_addr, struct_data:range(struct_offset,16))
    struct_offset = struct_offset + 16
end

function mipc_data_pco_ie_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 5
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_data_pco_ie_t_ie, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_data_pco_ie_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    local mipc_string_length = 8
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_data_pco_ie_t_content, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_data_packet_filter_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_packet_filter_t_len, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_data_packet_filter_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    struct_tree:add_le(mipc_data_packet_filter_t_pattern, struct_data:range(struct_offset,192))
    struct_offset = struct_offset + 192
    struct_tree:add_le(mipc_data_packet_filter_t_mask, struct_data:range(struct_offset,192))
    struct_offset = struct_offset + 192
end

function mipc_data_qos_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_qos_info_t_cid, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_data_qos_info_t_QCI, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_data_qos_info_t_DL_GBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_qos_info_t_UL_GBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_qos_info_t_DL_MBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_qos_info_t_UL_MBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_qos_info_t_DL_AMBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_qos_info_t_UL_AMBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_data_5gqos_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_5gqos_info_t_cid, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_data_5gqos_info_t_VQI, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_data_5gqos_info_t_DL_GFBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_UL_GFBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_DL_MFBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_UL_MFBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_DL_SAMBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_UL_SAMBR, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_data_5gqos_info_t_Averaging_window, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_data_start_keepalive_request_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_data_start_keepalive_request_t_type, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_start_keepalive_request_t_sourcePort, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_start_keepalive_request_t_destinationPort, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_start_keepalive_request_t_maxKeepaliveIntervalMillis, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_data_start_keepalive_request_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_data_start_keepalive_request_t_sourceaddress, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_data_start_keepalive_request_t_destinationaddress, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_s_nssai_struct_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_s_nssai_struct_t_sst_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_sst, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_sd_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_sd, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_s_nssai_struct_t_mapped_sst_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_mapped_sst, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_mapped_sd_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_padding2, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_s_nssai_struct_t_mapped_sd, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_ursp_ue_local_conf_struct_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_ssc_mode, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_dnn_len, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_s_nssai_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 100
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_ursp_ue_local_conf_struct_t_dnn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_pdu_session_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_pref_access_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ursp_ue_local_conf_struct_t_padding3, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
end

function mipc_nw_provider_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_provider_t_index, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_provider_t_plmn_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_provider_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_provider_t_network_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_provider_t_network_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_provider_t_act, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_provider_t_act_supported, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_provider_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_provider_t_rssi, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_provider_t_error_rate, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_provider_t_padding2, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_nitz_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_nitz_info_t_year, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_month, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_day, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_hour, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_minute, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_second, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_time_zone_offset_minutes, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nitz_info_t_daylight_saving_offset_minutes, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_reg_state_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_reg_state_t_ps_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_state_t_cs_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_reg_state_t_plmn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_reg_state_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_reg_state_t_cs_plmn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_reg_state_t_padding2, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_state_t_lac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_reg_state_t_cs_lac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_reg_state_t_ci, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_reg_state_t_cs_ci, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_reg_state_t_is_roaming, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_state_t_cs_is_roaming, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_state_t_padding3, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
end

function mipc_nw_blacklist_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_blacklist_t_plmn, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_blacklist_t_blacklist_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_location_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_location_info_t_location_area_code, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_location_info_t_tracking_area_code, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_location_info_t_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_gsm_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_gsm_cell_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_gsm_cell_t_provider_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_gsm_cell_t_lac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_ta, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_arfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_base_station_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_rx_level, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_bitErrorRate, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_cell_t_registered, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_gsm_cell_t_long_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_gsm_cell_t_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_nw_umts_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_umts_cell_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_umts_cell_t_provider_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_umts_cell_t_lac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_uarfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_psc, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_rscp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_ecno, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_cell_t_registered, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_umts_cell_t_long_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_umts_cell_t_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_nw_lte_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_lte_cell_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_lte_cell_t_provider_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_lte_cell_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_earfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_physical_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_tac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_ta, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_rsrp_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_rsrq_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_rssnr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_cqi, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_dl_freq_band, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_cell_t_registered, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_lte_cell_t_long_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_lte_cell_t_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_nw_nr_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_nr_cell_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_nr_cell_t_provider_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_nr_cell_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_nw_nr_cell_t_physical_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_nr_arfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_tac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_sinr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_ta, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_csirsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_csirsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_csisinr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_dl_freq_band, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_cell_t_registered, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_nr_cell_t_long_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 60
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_nr_cell_t_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_nw_cdma_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_cdma_cell_t_TBD, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_tdscdma_cell_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_tdscdma_cell_t_TBD, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_reg_change_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_reg_change_info_t_stat, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_lac_tac, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_reg_change_info_t_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_nw_reg_change_info_t_eact, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_reg_change_info_t_rac, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_nw_existence, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_roam_indicator, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_cause_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_reject_cause, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_reg_change_info_t_dcnr_restricted, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_endc_sib_status, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_reg_change_info_t_endc_available, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_cs_reg_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_cs_reg_info_t_stat, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cs_reg_info_t_rat, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_cs_reg_info_t_css, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cs_reg_info_t_roaming_ind, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cs_reg_info_t_is_in_prl, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cs_reg_info_t_def_roaming_ind, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_cs_reg_info_t_reason_for_denial, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
end

function mipc_nw_ps_reg_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_ps_reg_info_t_stat, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_rat, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_ps_reg_info_t_reason_for_denial, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_ps_reg_info_t_max_data_calls, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_vops_supported, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_emc_bearer_supported, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_endc_available, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_dcnr_restricted, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_nr_available, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_roaming_ind, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_is_in_prl, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_reg_info_t_def_roaming_ind, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_ps_reg_info_t_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
end

function mipc_nw_channel_lock_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_channel_lock_info_t_opt, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_channel_lock_info_t_act, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local array = struct_tree:add("band_info")
    local array_size = 4
    for i=0, array_size-1 do
        local sub_tree = array:add("band_info ["..i.."]")
        sub_tree:add_le(mipc_nw_channel_lock_info_t_band_info, struct_data:range(struct_offset,4))
        struct_offset = struct_offset + 4
    end
    struct_tree:add_le(mipc_nw_channel_lock_info_t_channel_num, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local array = struct_tree:add("arfcn_list")
    local array_size = 32
    for i=0, array_size-1 do
        local sub_tree = array:add("arfcn_list ["..i.."]")
        sub_tree:add_le(mipc_nw_channel_lock_info_t_arfcn_list, struct_data:range(struct_offset,4))
        struct_offset = struct_offset + 4
    end
    struct_tree:add_le(mipc_nw_channel_lock_info_t_cell_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_channel_lock_info_t_lock_mode, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_gsm_signal_strength_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_gsm_signal_strength_t_signal_strength, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_signal_strength_t_bit_error_rate, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_gsm_signal_strength_t_timing_advance, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_umts_signal_strength_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_umts_signal_strength_t_signal_strength, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_signal_strength_t_bit_error_rate, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_signal_strength_t_rscp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_umts_signal_strength_t_ecno, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_lte_signal_strength_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_signal_strength, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_rssnr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_cqi, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_signal_strength_t_timing_advance, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_nr_signal_strength_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_signal_strength, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_ss_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_ss_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_ss_sinr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_csi_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_csi_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_nr_signal_strength_t_csi_sinr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_cscon_status_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_cscon_status_t_mode, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cscon_status_t_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cscon_status_t_access, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cscon_status_t_core_network, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_pol_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_pol_info_t_start_index, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_pol_info_t_end_index, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_pol_info_t_format_first, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_pol_info_t_format_last, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_ps_cs_reg_roaming_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_voice_reg_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_data_reg_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_voice_roaming_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_data_roaming_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_ril_voice_reg_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_ps_cs_reg_roaming_info_t_m_ril_data_reg_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_cellmeasurement_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_rat, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_arfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_pci, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_rsrp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_rsrq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_snr, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_cellmeasurement_info_t_cid, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
end

function mipc_nw_cell_band_bandwidth_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_cell_band_bandwidth_t_cell_band, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_cell_band_bandwidth_t_cell_bandwidth, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_lte_nr_ca_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cell_index, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cell_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cc_cw0_cqi, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cc_cw1_cqi, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cell_bandwidth, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cell_band, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cc_pci, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_lte_nr_ca_info_t_cc_arfcn, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 8
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_lte_nr_ca_info_t_cell_bandwidth_str, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_cell_plmn_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_cell_plmn_t_plmn_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 3
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_cell_plmn_t_plmn_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_nw_raw_signal_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_raw_signal_info_t_sig1, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_sig2, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_rssi_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_rscp_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_ecn0_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_rsrq_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_rsrp_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_eact, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_sig3, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_serv_band, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_second_rsrq_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_second_rsrp_in_qdbm, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_second_sig3, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_raw_signal_info_t_signal_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_nw_extend_provider_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_extend_provider_t_index, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_stat, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_extend_provider_t_oper_long_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 6
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_extend_provider_t_oper_short_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 7
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_extend_provider_t_oper_numeric_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_extend_provider_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 2
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_extend_provider_t_lac, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_extend_provider_t_act, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_csq_rssi, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_register_state, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_timestamp_type, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_timestamp, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_connection_stat, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local mipc_string_length = 2
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_nw_extend_provider_t_cell_id, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_nw_extend_provider_t_freq, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_bsic_psc_cpid_pci, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_sig2, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_sig3, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_sig4, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_sig5, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_bit_error_rat, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_timing_advance, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_nw_extend_provider_t_cqi, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_nw_tuw_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_tuw_info_t_tuw_id, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_nw_tuw_info_t_tuw_length, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_sim_msisdn_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sim_msisdn_t_msisdn, struct_data:range(struct_offset,24))
    struct_offset = struct_offset + 24
end

function mipc_sim_pin_desc_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sim_pin_desc_t_pin_mode, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_pin_desc_t_pin_format, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_pin_desc_t_pin_len_min, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_pin_desc_t_pin_len_max, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_sim_app_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sim_app_info_t_app_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_app_info_t_app_id_len, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_app_info_t_sim_app_id, struct_data:range(struct_offset,MAX_SIM_AID_BYTE_LEN))
    struct_offset = struct_offset + MAX_SIM_AID_BYTE_LEN
    struct_tree:add_le(mipc_sim_app_info_t_name_len, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_app_info_t_name, struct_data:range(struct_offset,32))
    struct_offset = struct_offset + 32
    struct_tree:add_le(mipc_sim_app_info_t_num_of_pins, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_app_info_t_pin_ref, struct_data:range(struct_offset,8))
    struct_offset = struct_offset + 8
end

function mipc_sim_slots_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    local mipc_string_length = 2
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_sim_slots_info_t_card_state, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_sim_slots_info_t_slots_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_slots_info_t_logical_idx, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sim_slots_info_t_padding, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    local mipc_string_length = 80
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_sim_slots_info_t_atr, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 32
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_sim_slots_info_t_eid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    local mipc_string_length = 20
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_sim_slots_info_t_iccid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_app_status_desc_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_app_status_desc_t_app_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_app_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_pin_status, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_sub_status, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_pin1_replaced, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_pin1_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_pin2_state, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_app_status_desc_t_padding, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 4
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_app_status_desc_t_aid, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_app_status_desc_t_padding2, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    local mipc_string_length = 3
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_app_status_desc_t_app_label, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_app_status_desc_t_padding3, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
end

function mipc_sms_pdu_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sms_pdu_t_message_index, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_sms_pdu_t_pdu_len, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sms_pdu_t_status, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sms_pdu_t_sms_class, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_sms_pdu_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    struct_tree:add_le(mipc_sms_pdu_t_pdu, struct_data:range(struct_offset,256))
    struct_offset = struct_offset + 256
end

function mipc_ss_call_forward_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_ss_call_forward_t_call_forward_status, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    local mipc_string_length = 183
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_ss_call_forward_t_dial_number, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_ss_call_forward_t_service_class, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_ss_call_forward_t_type_of_address, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_ss_call_forward_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    struct_tree:add_le(mipc_ss_call_forward_t_timer, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_sys_mapping_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sys_mapping_t_ps_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_sys_lte_band_struct(struct_tree, struct_data)
    local struct_offset = 0
    local array = struct_tree:add("lte_band_class")
    local array_size = 8
    for i=0, array_size-1 do
        local sub_tree = array:add("lte_band_class ["..i.."]")
        sub_tree:add_le(mipc_sys_lte_band_t_lte_band_class, struct_data:range(struct_offset,4))
        struct_offset = struct_offset + 4
    end
end

function mipc_sys_nr_band_struct(struct_tree, struct_data)
    local struct_offset = 0
    local array = struct_tree:add("nr_band_class")
    local array_size = 32
    for i=0, array_size-1 do
        local sub_tree = array:add("nr_band_class ["..i.."]")
        sub_tree:add_le(mipc_sys_nr_band_t_nr_band_class, struct_data:range(struct_offset,4))
        struct_offset = struct_offset + 4
    end
end

function mipc_sys_thermal_sensor_config_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_enable, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_sensor_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_alarm_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_threshold, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_hysteresis, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_interval, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_config_t_alarm_type, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_sys_thermal_sensor_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sys_thermal_sensor_info_t_sensor_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_thermal_sensor_info_t_temperature, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_call_detail_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_call_detail_info_t_number_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_call_detail_info_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    local mipc_string_length = 128
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_call_detail_info_t_number, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_call_detail_info_t_name_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_call_detail_info_t_padding2, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    local mipc_string_length = 80
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_call_detail_info_t_name, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
end

function mipc_call_video_cap_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_call_video_cap_t_local_video_cap_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_call_video_cap_t_local_video_cap, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_call_video_cap_t_remote_video_cap_present, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_call_video_cap_t_remote_video_cap, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
end

function mipc_ecc_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_ecc_info_t_is_fake_ecc, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_ecc_info_t_padding, struct_data:range(struct_offset,3))
    struct_offset = struct_offset + 3
    struct_tree:add_le(mipc_ecc_info_t_category, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_ecc_info_t_type, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    local mipc_string_length = 10
    local mipc_string = bytestostring(struct_data:range(struct_offset, mipc_string_length), mipc_string_length)
    struct_tree:add(mipc_ecc_info_t_number, struct_data:range(struct_offset, mipc_string_length), mipc_string) 
    struct_offset = struct_offset + mipc_string_length
    struct_tree:add_le(mipc_ecc_info_t_padding2, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
end

function mipc_nw_srxlev_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_nw_srxlev_info_t_srxlev_in_qdb, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_nw_srxlev_info_t_squal_in_qdb, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
end

function mipc_internal_set_filter_req_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_internal_set_filter_req_t_nccmni_net_if, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_nccmni_seq, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_req_t_valid_field, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_internal_set_filter_req_t_ip_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_ctrl_protocol, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_src_port, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_req_t_dst_port, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_req_t_tcp_flags, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_req_t_spi, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    local array = struct_tree:add("src_v4_addr")
    local array_size = 4
    for i=0, array_size-1 do
        local sub_tree = array:add("src_v4_addr ["..i.."]")
        sub_tree:add_le(mipc_internal_set_filter_req_t_src_v4_addr, struct_data:range(struct_offset,1))
        struct_offset = struct_offset + 1
    end
    local array = struct_tree:add("dst_v4_addr")
    local array_size = 4
    for i=0, array_size-1 do
        local sub_tree = array:add("dst_v4_addr ["..i.."]")
        sub_tree:add_le(mipc_internal_set_filter_req_t_dst_v4_addr, struct_data:range(struct_offset,1))
        struct_offset = struct_offset + 1
    end
    local array = struct_tree:add("src_v6_addr")
    local array_size = 16
    for i=0, array_size-1 do
        local sub_tree = array:add("src_v6_addr ["..i.."]")
        sub_tree:add_le(mipc_internal_set_filter_req_t_src_v6_addr, struct_data:range(struct_offset,1))
        struct_offset = struct_offset + 1
    end
    local array = struct_tree:add("dst_v6_addr")
    local array_size = 16
    for i=0, array_size-1 do
        local sub_tree = array:add("dst_v6_addr ["..i.."]")
        sub_tree:add_le(mipc_internal_set_filter_req_t_dst_v6_addr, struct_data:range(struct_offset,1))
        struct_offset = struct_offset + 1
    end
    struct_tree:add_le(mipc_internal_set_filter_req_t_icmpv4_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_icmpv6_type, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_req_t_reserve, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_req_t_features, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_internal_set_filter_cnf_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_internal_set_filter_cnf_t_nccmni_net_if, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_cnf_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_set_filter_cnf_t_nccmni_seq, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_set_filter_cnf_t_filter_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_internal_reset_filter_req_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_internal_reset_filter_req_t_nccmni_net_if, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_reset_filter_req_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_reset_filter_req_t_nccmni_seq, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_reset_filter_req_t_is_deregister_all_filter, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_internal_reset_filter_req_t_filter_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_internal_reset_filter_cnf_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_internal_reset_filter_cnf_t_nccmni_net_if, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_reset_filter_cnf_t_reserve1, struct_data:range(struct_offset,1))
    struct_offset = struct_offset + 1
    struct_tree:add_le(mipc_internal_reset_filter_cnf_t_nccmni_seq, struct_data:range(struct_offset,2))
    struct_offset = struct_offset + 2
    struct_tree:add_le(mipc_internal_reset_filter_cnf_t_is_success, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_sys_modem_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sys_modem_t_modem_id, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_sys_modem_t_executor_number, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_modem_t_sim_number, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_modem_t_concurrency, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_modem_t_padding, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

function mipc_sys_adpclk_freq_info_struct(struct_tree, struct_data)
    local struct_offset = 0
    struct_tree:add_le(mipc_sys_adpclk_freq_info_t_center_frequency, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 8
    struct_tree:add_le(mipc_sys_adpclk_freq_info_t_frequency_spread, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_adpclk_freq_info_t_noise_power, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_adpclk_freq_info_t_relative_signal_strength, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
    struct_tree:add_le(mipc_sys_adpclk_freq_info_t_connect_status, struct_data:range(struct_offset,4))
    struct_offset = struct_offset + 4
end

