hdr_message_index = ProtoField.uint32   ("mtkmipc.msg_hdr.elg_index", "Index", base.DEC)
hdr_message_magic_id = ProtoField.uint32   ("mtkmipc.msg_hdr.magic_id", "MagicID", base.HEX)
hdr_message_sim_ps_id = ProtoField.uint8   ("mtkmipc.msg_hdr.msg_sim_ps_id", "SimPSID", base.DEC)
hdr_message_flag = ProtoField.uint8   ("mtkmipc.msg_hdr.msg_flag", "MSG_Flag", base.DEC)

hdr_message_tx_id = ProtoField.uint16   ("mtkmipc.msg_hdr.msg_txid", "MSG_TXID", base.DEC)
hdr_message_msg_len = ProtoField.uint16   ("mtkmipc.msg_hdr.msg_len", "MSG_Length", base.DEC)
hdr_error_msg = ProtoField.new ("ERROR MSG", "mtkmipc.msg_hdr.error", ftypes.STRING)
hdr_debug_msg = ProtoField.new ("DEBUG MSG", "mtkmipc.msg_hdr.debug", ftypes.STRING)

hdr_message_port = ProtoField.uint32   ("mtkmipc.msg_hdr.port", "Port", base.DEC)

mipc_common_fields = {
    hdr_message_index,
    hdr_message_magic_id,
    hdr_message_sim_ps_id,
    hdr_message_flag,
    hdr_message_tx_id,
    hdr_message_msg_len,
    hdr_error_msg,
    hdr_debug_msg,
    hdr_message_port
}
