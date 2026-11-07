-- Standalone read-only probe. Manual start; no changes to ACNextGen or content.
local root=ac.getFolder(ac.FolderID.Root)..'/apps/lua/ACNextGenPermissionProbe'
local state={running=false,phase=nil,elapsed=0,rows={},message='Ready: permission reads only'}
local function allowed()
    if type(physics.allowed)~='function' and type(physics.allowed)~='cdata' then return 'not_callable' end
    local ok,value=pcall(physics.allowed)
    return tostring(ok)..':'..type(value)..':'..tostring(value)
end
local function offline()
    local s=ac.getSim()
    return s and s.isOnlineRace==false and s.isSessionFinished~=true and s.isPaused~=true and s.isReplayActive~=true
end
local function stop(message)
    if state.prefix then ac.store(state.prefix..'_stop',1) end
    state.running=false;state.phase=nil;state.message=message or 'Stopped'
end
function script.startProbe()
    if state.running or not offline() then return false end
    state.prefix='acng_permission_scope_'..os.time()..'_'..math.random(100000,999999)
    state.running=true;state.phase='inline';state.elapsed=0;state.rows={}
    state.message='Parent allowed='..allowed()
    ac.store(state.prefix..'_stop',0)
    ac.log('[ACNextGen PermissionScope] '..state.message..' / patch='..tostring(ac.getPatchVersionCode()))
    return true
end
function script.stopProbe() stop('Stopped by user') end
local function collectRows()
    for _,case in ipairs({'inline','file'}) do for i=1,5 do
        local row=ac.load(state.prefix..'_'..case..'_'..i)
        if type(row)=='string' then state.rows[case..'_'..i]=row end
    end end
end
function script.update(dt)
    if not state.running then return end
    if not offline() then stop('Offline active session required');return end
    state.elapsed=state.elapsed+dt
    if state.elapsed>3 then stop('Observation timed out; no automatic retry');return end
    collectRows()
    if state.phase then
        local case=state.phase;state.phase=nil
        local source='permission_scope_worker'
        if case=='inline' then
            local file=io.open(root..'/permission_scope_worker.lua','rb')
            if not file then stop('Probe source missing');return end
            source=file:read('*a');file:close()
        end
        local prefix=state.prefix
        local ok,err=pcall(physics.startPhysicsWorker,source,{prefix=prefix,case_id=case},function(error)
            if not state.running or prefix~=state.prefix then return end
            collectRows()
            if error then state.rows[case..'_callback']='Callback: '..tostring(error);ac.log('[ACNextGen PermissionScope] '..state.rows[case..'_callback']) end
            if case=='inline' then state.phase='file' else stop('Completed; see rows and CSP log') end
        end)
        if not ok then stop('Launch failed: '..tostring(err)) end
    end
end
function script.windowMain()
    ui.text('Read-only permission scope comparison / no force or torque calls')
    ui.text(state.message)
    if ui.button('Record permission only') then script.startProbe() end
    ui.sameLine();if ui.button('Stop probe') then script.stopProbe() end
    for _,case in ipairs({'inline','file'}) do
        for i=1,5 do ui.text(state.rows[case..'_'..i] or (case..' sample '..i..': waiting')) end
        if state.rows[case..'_callback'] then ui.text(state.rows[case..'_callback']) end
    end
end
ac.onRelease(function() stop('Released') end)
