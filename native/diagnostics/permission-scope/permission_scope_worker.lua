-- Read-only scope reproduction. Never calls any actuator or loads Native DLLs.
local data=__input or {}
local sample=0
function script.update(dt)
    if ac.load(data.prefix..'_stop')==1 then worker.terminate();return end
    sample=sample+1
    local callable=type(physics.allowed)=='function' or type(physics.allowed)=='cdata'
    local ok,value=false,'not_callable'
    if callable then ok,value=pcall(physics.allowed) end
    local row=string.format('case=%s sample=%d allowed=%s:%s:%s',data.case_id,sample,tostring(ok),type(value),tostring(value))
    ac.store(data.prefix..'_'..data.case_id..'_'..sample,row)
    ac.log('[ACNextGen PermissionScope] '..row)
    if sample>=5 then worker.terminate() end
end
