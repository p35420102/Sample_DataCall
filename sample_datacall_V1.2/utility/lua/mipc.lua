require("mipc_msg")
require("mipc_struct")
require("mipc_common")

local mtkmipc = Proto("MTK_MIPC","MIPC message")

mtkmipc.fields = { 
}
for _,v in ipairs(mipc_common_fields) do 
    table.insert(mtkmipc.fields, v)
end
for _,v in ipairs(mipc_msg_field) do 
    table.insert(mtkmipc.fields, v)
end
for _,v in ipairs(mipc_struct_field) do 
    table.insert(mtkmipc.fields, v)
end

local bytestostring = function (b, len)
    s = ""
    for i = 0, len-1 do
        s = s .. string.char(b:range(i,1):le_uint())
    end
    return s
end

local get_msg_id = function(tree, tvb, pinfo, id_offset, msg_offset)
    msg_type = tvb:range(id_offset+1, 1):le_uint() % 16
    pinfo.cols.info:set(mipc_msg_id_str[msg_offset])
    tree:add_le(hdr_msg_id, tvb:range(id_offset,2))
end

TLVHandler = function(tvb, root, offset_start, msg_offset, msg_len)
    mipc_msg_api[msg_offset](tvb, root, offset_start, msg_offset, msg_len)
end

-- the dissector function callback
function mtkmipc.dissector(tvb,pinfo,root)
    pinfo.cols.protocol:set("MIPC")
    
    local msg_direction = tvb:range(24,4):le_uint() -- 0:host->device; 1:device->host; 2:debug/error msg(host->host); others:invalid
    local client_name = bytestostring(tvb:range(8,16), 16)
    if  msg_direction == 0 then
        pinfo.cols.src:set(client_name)
        pinfo.cols.dst:set("Modem")
    elseif msg_direction == 1 then
        pinfo.cols.src:set("Modem")
        pinfo.cols.dst:set(client_name)
    elseif msg_direction == 2 then
        pinfo.cols.src:set("Host")
        pinfo.cols.dst:set("Host")
    else
        pinfo.cols.src:set("Invalid")
        pinfo.cols.dst:set("Invalid")
    end
    
    
    local tree = root:add(mtkmipc, tvb:range(0,pktlen))
    
    tree:add_le(hdr_message_index, tvb:range(0,4))
    tree:add_le(hdr_message_port, tvb:range(4,4))
    tree:add_le(hdr_message_magic_id, tvb:range(28,4))
    local error = ByteArray.new("00021307")
    local error_tvb = ByteArray.tvb(error, "Error")
    local debug = ByteArray.new("01021307")
    local debug_tvb = ByteArray.tvb(debug, "Debug")
    local msg = ByteArray.new("84195424")
    local msg_tvb = ByteArray.tvb(msg, "Msg")
    if tvb:range(28,4) == error_tvb:range(0,4) then
        local msg_len = tvb:len() - 32
        local error_string = bytestostring(tvb:range(32,msg_len), msg_len)
        error_string = "ErrMsg:" .. error_string 
        tree:add(hdr_error_msg, tvb:range(32,msg_len), error_string)
        pinfo.cols.info:set(error_string)
    elseif tvb:range(28,4) == debug_tvb:range(0,4) then
        local msg_len = tvb:len() - 32
        local debug_string = bytestostring(tvb:range(32,msg_len), msg_len)
        debug_string = "DbgMsg:" .. debug_string
        tree:add(hdr_debug_msg, tvb:range(32,msg_len), debug_string)
        pinfo.cols.info:set(debug_string)
    elseif tvb:range(28,4) == msg_tvb:range(0,4) then
        local msg_offset = tvb:range(38,2):le_uint()
        local msg_len = tvb:range(42,2):le_uint()
        tree:add_le(hdr_message_sim_ps_id, tvb:range(36,1))
        tree:add_le(hdr_message_flag, tvb:range(37,1))
        local id_offset = 38
        get_msg_id (tree, tvb, pinfo, id_offset, msg_offset)
        tree:add_le(hdr_message_tx_id, tvb:range(40,2))
        tree:add_le(hdr_message_msg_len, tvb:range(42,2))
        local offset_start = 44
        if msg_len > 0 then
            TLVHandler(tvb, tree, offset_start, msg_offset, msg_len)
        end
    else
        tree:add("Unknown magic")
    end
    
end
-- register our new dummy protocol for post-dissection
register_postdissector(mtkmipc)