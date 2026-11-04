---@diagnostic disable: undefined-global
-- Common observer/supervisor. It owns no native physics-model scheduler.
local M={}
local Bridge=require('modules.common_bridge')
local View=require('modules.observer_view')
local Metrics=require('modules.performance_metrics')
local ACROOT=ac.getFolder(ac.FolderID.Root):gsub('\\','/')
local ROOT=ACROOT..'/extension/plugins/ACNextGenNative'
local state={status=nil,error='',configError='',age=math.huge,lastHeartbeat=nil,enabled=false,userStopped=false,
    sequence=0,hostID=nil,timer=0,leaseTimer=0,launchTimer=0,retryTimer=0,
    launching=false,sessionActive=false,shuttingDown=false,physicalEnabled=false,damagePolicy='original',inputContract='original',tyreResponseContract='legacy',tyreSignalContract='original'}
local metricsPath=ROOT..'/runtime/performance-'..os.time()..'-'..math.random(100000,999999)..'.jsonl'
state.damperInputContract='original'
state.carcassInputContract='original'
state.lsdTorqueInputContract='original'
state.drivetrainGearContract='original'
state.flexTemperatureContract='original'
state.inertiaTemperatureContract='original'
state.energyTemperatureContract='original'
state.chassisTemperatureContract='original'
state.bodyTemperatureContract='original'
state.damperTemperatureContract='original'
state.brakeTemperatureContract='original'
state.suspensionTravelContract='original'
state.damperCoefficientContract='original'
state.springBaseContract='original'
state.hopInputContract='original'
state.windupInputContract='original'
state.vehicleConfigContract='original'
state.lsdConfigurationContract='original'
local rejectionPath=ROOT..'/runtime/enhancement-rejections-'..os.time()..'-'..math.random(100000,999999)..'.jsonl'
local metrics=Metrics.new(function(row)
    local f,err=io.open(metricsPath,'ab');assert(f,err)
    local ok,message=pcall(function() local wrote,why=f:write(JSON.stringify(row),'\n');assert(wrote,why) end)
    f:close();assert(ok,message)
end)
local function metricSnapshot()
    local s=state.status or {};local b=s.bridge or {};local sim=ac.getSim()
    local trackOK,track=pcall(function() return ac.getTrackID() end)
    local carOK,car=pcall(function() return ac.getCar(0) end)
    return {timestamp=os.time(),host_id=state.hostID,car_id=ac.getCarID(0),
        host_status_age_seconds=state.age<math.huge and state.age or nil,host_status_fresh=state.age<=1,
        track_id=trackOK and track or nil,
        sdk_fps=sim.fps,cpu_occupancy=sim.cpuOccupancy,physics_late=sim.physicsLate,
        model_frame=s.model_frame,model_compute_us=s.last_compute_us,performance=s.performance,
        model_age_seconds=b.model_age,applied_frames=b.applied_frames,api_calls=b.api_calls,
        worker_status=b.worker_status,fault_code=b.fault_code,physical_requested=b.physical_requested,
        native_status=s.status,enhancement=s.enhancement,owned_actuation=(s.data or {}).owned_actuation,
        tyre_inputs=(s.data or {}).tyre_inputs,worker_epoch=b.sensor_epoch,worker_generation=b.generation,
        tyre_observation=Bridge.pollTyreObservation(),
        tyre_bound=Bridge.pollTyreBound and Bridge.pollTyreBound() or nil,
        tyre_observation_sender_counts=(s.data or {}).tyre_observation_sender_counts,
        input_audit=Metrics.inputAudit(carOK and car or nil,sim),
        native_reference=Metrics.nativeReference(),
        input_routes=(s.data or {}).input_routes,
        lsd_input_binding=(s.data or {}).lsd_input_binding,
        lsd_configuration_binding=(s.data or {}).lsd_configuration_binding,
        lsd_configuration_contract=s.lsd_configuration_contract,
        lsd_torque_input_contract=s.lsd_torque_input_contract,
        vehicle_config_contract=s.vehicle_config_contract,
        tyre_history_status=state.tyreHistory and state.tyreHistory.status or nil,
        tyre_history_error=state.tyreHistoryError or (state.tyreHistory and state.tyreHistory.error),
        tyre_history_worker=state.tyreHistory and ac.load('ngp4_tyre_history_worker_status') or nil,
        tyre_history_worker_error=state.tyreHistory and ac.load('ngp4_tyre_history_worker_error') or nil,
        damper_local_channel=(s.data or {}).damper_local_channel,
        spring_local_channel=(s.data or {}).spring_local_channel,
        drive_local_channel=(s.data or {}).drive_local_channel,
        wheel_local_channel=(s.data or {}).wheel_local_channel,
        enhancement_apply_mask=Bridge.getState().enhancementApplyMask}
end
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function read(path)
    local f=io.open(path,'rb');if not f then return nil end
    local value=f:read('*a');f:close();return value
end
local function activeSession()
    local ok,sim=pcall(ac.getSim)
    return ok and sim and sim.isOnlineRace==false and sim.isSessionFinished~=true
end
local function liveHost()
    return state.status and state.status.status~='HOST_EXITED' and state.age<=1.
end
local function actualRun() return state.enabled and state.sessionActive and liveHost()==true and not state.shuttingDown end
local function publish()
    Bridge.setEnabled(actualRun())
    if not state.hostID then return false end
    local request={protocol=2,host_id=state.hostID,sequence=state.sequence,issued_at=os.time(),
        enabled=actualRun(),shutdown=state.shuttingDown,car_id=ac.getCarID(0),
        bridge_generation=Bridge.getState().generation,physical_enabled=state.physicalEnabled and actualRun() and not Bridge.getState().calibrationCaptureOnly}
    if state.tyreResponseContract~='legacy' then
        request.tyre_response_contract=state.tyreResponseContract
        request.physical_enabled=request.physical_enabled and state.status~=nil and state.status.tyre_response_contract==state.tyreResponseContract
    end
    request.tyre_signal_contract=state.tyreSignalContract
    request.damper_input_contract=state.damperInputContract
    request.carcass_input_contract=state.carcassInputContract
    request.lsd_torque_input_contract=state.lsdTorqueInputContract
    request.drivetrain_gear_contract=state.drivetrainGearContract
    request.chassis_temperature_contract=state.chassisTemperatureContract
    request.energy_temperature_contract=state.energyTemperatureContract
    request.inertia_temperature_contract=state.inertiaTemperatureContract
    request.flex_temperature_contract=state.flexTemperatureContract
    request.body_temperature_contract=state.bodyTemperatureContract
    request.damper_temperature_contract=state.damperTemperatureContract
    request.brake_temperature_contract=state.brakeTemperatureContract
    request.suspension_travel_contract=state.suspensionTravelContract
    request.damper_coefficient_contract=state.damperCoefficientContract
    request.spring_base_contract=state.springBaseContract
    request.hop_input_contract=state.hopInputContract
    request.windup_input_contract=state.windupInputContract
    request.vehicle_config_contract=state.vehicleConfigContract
    request.lsd_configuration_contract=state.lsdConfigurationContract
    if state.inertiaTemperatureContract~='original' or state.flexTemperatureContract~='original' or state.energyTemperatureContract~='original' or state.chassisTemperatureContract~='original' or state.bodyTemperatureContract~='original' or state.damperTemperatureContract~='original' or state.damperCoefficientContract~='original' or state.springBaseContract~='original' or state.suspensionTravelContract~='original' or state.brakeTemperatureContract~='original' or state.drivetrainGearContract~='original' or state.hopInputContract~='original' or state.windupInputContract~='original' or state.lsdConfigurationContract~='original' or state.lsdTorqueInputContract~='original' or state.vehicleConfigContract~='original' then
        request.physical_enabled=false
    elseif state.status and ((state.status.lsd_torque_input_contract~=nil and state.status.lsd_torque_input_contract~='original') or
        (state.status.damper_coefficient_contract~=nil and state.status.damper_coefficient_contract~='original') or
        (state.status.spring_base_contract~=nil and state.status.spring_base_contract~='original') or
        (state.status.suspension_travel_contract~=nil and state.status.suspension_travel_contract~='original') or
        (state.status.flex_temperature_contract~=nil and state.status.flex_temperature_contract~='original') or
        (state.status.inertia_temperature_contract~=nil and state.status.inertia_temperature_contract~='original') or
        (state.status.energy_temperature_contract~=nil and state.status.energy_temperature_contract~='original') or
        (state.status.chassis_temperature_contract~=nil and state.status.chassis_temperature_contract~='original') or
        (state.status.body_temperature_contract~=nil and state.status.body_temperature_contract~='original') or
        (state.status.damper_temperature_contract~=nil and state.status.damper_temperature_contract~='original') or
        (state.status.brake_temperature_contract~=nil and state.status.brake_temperature_contract~='original') or
        (state.status.drivetrain_gear_contract~=nil and state.status.drivetrain_gear_contract~='original') or
        (state.status.hop_input_contract~=nil and state.status.hop_input_contract~='original') or
        (state.status.windup_input_contract~=nil and state.status.windup_input_contract~='original') or
        (state.status.vehicle_config_contract~=nil and state.status.vehicle_config_contract~='original') or
        (state.status.lsd_configuration_contract~=nil and state.status.lsd_configuration_contract~='original')) then
        request.physical_enabled=false
    end
    if state.carcassInputContract~='original' then
        request.physical_enabled=request.physical_enabled and state.status~=nil and state.status.carcass_input_contract==state.carcassInputContract
    elseif state.status and state.status.carcass_input_contract~=nil and state.status.carcass_input_contract~='original' then
        request.physical_enabled=false
    end
    if state.damperInputContract~='original' then
        request.physical_enabled=request.physical_enabled and state.status~=nil and state.status.damper_input_contract==state.damperInputContract
    elseif state.status and state.status.damper_input_contract~=nil and state.status.damper_input_contract~='original' then
        request.physical_enabled=false
    end
    if state.tyreSignalContract~='original' then
        request.physical_enabled=request.physical_enabled and state.status~=nil and state.status.tyre_signal_contract==state.tyreSignalContract
    elseif state.status and state.status.tyre_signal_contract~=nil and state.status.tyre_signal_contract~='original' then
        request.physical_enabled=false
    end
    local f,err=io.open(ROOT..'/runtime/control.json','wb')
    if not f then state.error='Control file: '..tostring(err);return false end
    f:write(JSON.stringify(request),'\nNGP_CONTROL_END\n');f:close();return true
end
local function send()
    local ok,result=pcall(publish)
    if not ok then state.error=tostring(result);return false end
    return result
end
local function prepare() View.prepare(state,Bridge.getState()) end
local function launch()
    if state.launching or liveHost() or not state.sessionActive or state.retryTimer>0 then return end
    state.launching=true;state.retryTimer=2
    local arguments={'--session-managed','--ac-root',ACROOT,'--runtime',ROOT..'/runtime',
        '--damage-policy',state.damagePolicy,'--input-contract',state.inputContract}
    if state.tyreResponseContract~='legacy' then
        arguments[#arguments+1]='--tyre-response-contract';arguments[#arguments+1]=state.tyreResponseContract
    end
    if state.wheelMaterialCapture then arguments[#arguments+1]='--wheel-material-capture' end
    if state.tyreObservationCapture then arguments[#arguments+1]='--tyre-observation-capture' end
    if state.tyreSignalContract~='original' then
        arguments[#arguments+1]='--tyre-signal-contract';arguments[#arguments+1]=state.tyreSignalContract
    end
    if state.damperInputContract~='original' then
        arguments[#arguments+1]='--damper-input-contract';arguments[#arguments+1]=state.damperInputContract
    end
    if state.carcassInputContract~='original' then
        arguments[#arguments+1]='--carcass-input-contract';arguments[#arguments+1]=state.carcassInputContract
    end
    if state.lsdTorqueInputContract~='original' then
        arguments[#arguments+1]='--lsd-torque-input-contract';arguments[#arguments+1]=state.lsdTorqueInputContract
    end
    if state.damperCoefficientContract~='original' then
        arguments[#arguments+1]='--damper-coefficient-contract';arguments[#arguments+1]=state.damperCoefficientContract
    end
    if state.springBaseContract~='original' then
        arguments[#arguments+1]='--spring-base-contract';arguments[#arguments+1]=state.springBaseContract
    end
    if state.suspensionTravelContract~='original' then
        arguments[#arguments+1]='--suspension-travel-contract';arguments[#arguments+1]=state.suspensionTravelContract
    end
    if state.chassisTemperatureContract~='original' then
        arguments[#arguments+1]='--chassis-temperature-contract';arguments[#arguments+1]=state.chassisTemperatureContract
    end
    if state.energyTemperatureContract~='original' then
        arguments[#arguments+1]='--energy-temperature-contract';arguments[#arguments+1]=state.energyTemperatureContract
    end
    if state.inertiaTemperatureContract~='original' then
        arguments[#arguments+1]='--inertia-temperature-contract';arguments[#arguments+1]=state.inertiaTemperatureContract
    end
    if state.flexTemperatureContract~='original' then
        arguments[#arguments+1]='--flex-temperature-contract';arguments[#arguments+1]=state.flexTemperatureContract
    end
    if state.bodyTemperatureContract~='original' then
        arguments[#arguments+1]='--body-temperature-contract';arguments[#arguments+1]=state.bodyTemperatureContract
    end
    if state.damperTemperatureContract~='original' then
        arguments[#arguments+1]='--damper-temperature-contract';arguments[#arguments+1]=state.damperTemperatureContract
    end
    if state.brakeTemperatureContract~='original' then
        arguments[#arguments+1]='--brake-temperature-contract';arguments[#arguments+1]=state.brakeTemperatureContract
    end
    if state.drivetrainGearContract~='original' then
        arguments[#arguments+1]='--drivetrain-gear-contract';arguments[#arguments+1]=state.drivetrainGearContract
    end
    if state.hopInputContract~='original' then
        arguments[#arguments+1]='--hop-input-contract';arguments[#arguments+1]=state.hopInputContract
    end
    if state.windupInputContract~='original' then
        arguments[#arguments+1]='--windup-input-contract';arguments[#arguments+1]=state.windupInputContract
    end
    if state.vehicleConfigContract~='original' then
        arguments[#arguments+1]='--vehicle-config-contract';arguments[#arguments+1]=state.vehicleConfigContract
    end
    if state.lsdConfigurationContract~='original' then
        arguments[#arguments+1]='--lsd-configuration-contract';arguments[#arguments+1]=state.lsdConfigurationContract
    end
    local ok,err=pcall(os.runConsoleProcess,{
        filename=ROOT..'/bin/ACNextGenHost.exe',arguments=arguments,
        workingDirectory=ROOT..'/bin',timeout=0,terminateWithScript=true,assignJob=true,separateStderr=true
    },function(error,result)
        state.launching=false;state.retryTimer=1
        if state.sessionActive and (error or (result and result.exitCode~=0 and result.exitCode~=3)) then
            state.error='Native host: '..tostring(error or (result and result.stderr) or 'launch failed')
        end
    end)
    if not ok then state.launching=false;state.error='Native launch: '..tostring(err) end
end
local function beginSession()
    state.sessionActive=true;state.shuttingDown=false;state.enabled=not state.userStopped
    state.sequence=state.sequence+1;state.launchTimer=0;Bridge.newSession();send();prepare()
end
function M.shutdown()
    if state.tyreHistory then pcall(state.tyreHistory.stop,state.tyreHistory) end
    if state.airborneJig then state.airborneJig:shutdown();state.airborneJig=nil end
    if state.restoreOnly then state.restoreOnly:shutdown();state.restoreOnly=nil end
    if state.snapshotSave then state.snapshotSave:shutdown();state.snapshotSave=nil end
    state.enabled=false;state.sessionActive=false;state.shuttingDown=true
    state.sequence=state.sequence+1;Bridge.shutdown();local result=send();prepare();return result
end
function M.init()
    local ok,cfg=pcall(function()
        local raw=read(ROOT..'/config.json');if not raw then return nil end
        assert(#raw<16384,'Configuration is too large');return JSON.parse(raw)
    end)
    if ok and type(cfg)=='table' and cfg.schema==1 and
        (cfg.physics_mode=='bounded' or cfg.physics_mode=='observe') and cfg.effect=='additional_yaw_damping' then
        state.physicalEnabled=cfg.physics_mode=='bounded'
        if cfg.model_damage_policy==nil or cfg.model_damage_policy=='original' then state.damagePolicy='original'
        elseif cfg.model_damage_policy=='event_only' then state.damagePolicy='event_only'
        elseif cfg.model_damage_policy=='event_root_v1' then state.damagePolicy='event_root_v1'
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_damage_policy' end
        if cfg.model_input_contract==nil or cfg.model_input_contract=='original' then state.inputContract='original'
        elseif cfg.model_input_contract=='csp_g_v1' then state.inputContract='csp_g_v1'
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_input_contract' end
    else state.configError='Observe mode: missing or invalid config.json' end
    local enhancement=ok and type(cfg)=='table' and cfg.enhancement or nil
    state.lsdTorqueInputContract='original';state.vehicleConfigContract='original';state.lsdConfigurationContract='original'
    state.damperCoefficientContract='original'
    if ok and type(cfg)=='table' and cfg.model_damper_coefficient_contract~=nil then
        if cfg.model_damper_coefficient_contract=='original' or cfg.model_damper_coefficient_contract=='car_config_declared_blend_v1' then
            state.damperCoefficientContract=cfg.model_damper_coefficient_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_damper_coefficient_contract' end
    end
    state.springBaseContract='original'
    if ok and type(cfg)=='table' and cfg.model_spring_base_contract~=nil then
        if cfg.model_spring_base_contract=='original' or cfg.model_spring_base_contract=='car_config_base_rate_v1' then
            state.springBaseContract=cfg.model_spring_base_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_spring_base_contract' end
    end
    state.suspensionTravelContract='original'
    if ok and type(cfg)=='table' and cfg.model_suspension_travel_contract~=nil then
        if cfg.model_suspension_travel_contract=='original' or cfg.model_suspension_travel_contract=='per_update_travel_v1' then
            state.suspensionTravelContract=cfg.model_suspension_travel_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_suspension_travel_contract' end
    end
    state.chassisTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_chassis_temperature_contract~=nil then
        if cfg.model_chassis_temperature_contract=='original' or cfg.model_chassis_temperature_contract=='current_wheel_brake_temperature_max_v1' then
            state.chassisTemperatureContract=cfg.model_chassis_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_chassis_temperature_contract' end
    end
    state.energyTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_energy_temperature_contract~=nil then
        if cfg.model_energy_temperature_contract=='original' or cfg.model_energy_temperature_contract=='current_wheel_brake_temperature_max_v1' then
            state.energyTemperatureContract=cfg.model_energy_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_energy_temperature_contract' end
    end
    state.inertiaTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_inertia_temperature_contract~=nil then
        if cfg.model_inertia_temperature_contract=='original' or cfg.model_inertia_temperature_contract=='current_wheel_brake_temperature_max_v1' then
            state.inertiaTemperatureContract=cfg.model_inertia_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_inertia_temperature_contract' end
    end
    state.flexTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_flex_temperature_contract~=nil then
        if cfg.model_flex_temperature_contract=='original' or cfg.model_flex_temperature_contract=='current_wheel_brake_temperature_max_v1' then
            state.flexTemperatureContract=cfg.model_flex_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_flex_temperature_contract' end
    end
    state.bodyTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_body_temperature_contract~=nil then
        if cfg.model_body_temperature_contract=='original' or cfg.model_body_temperature_contract=='current_wheel_brake_temperature_max_v1' then
            state.bodyTemperatureContract=cfg.model_body_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_body_temperature_contract' end
    end
    state.damperTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_damper_temperature_contract~=nil then
        if cfg.model_damper_temperature_contract=='original' or cfg.model_damper_temperature_contract=='current_wheel_brake_temperature_v1' then
            state.damperTemperatureContract=cfg.model_damper_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_damper_temperature_contract' end
    end
    state.brakeTemperatureContract='original'
    if ok and type(cfg)=='table' and cfg.model_brake_temperature_contract~=nil then
        if cfg.model_brake_temperature_contract=='original' or cfg.model_brake_temperature_contract=='current_wheel_brake_temperature_v1' then
            state.brakeTemperatureContract=cfg.model_brake_temperature_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_brake_temperature_contract' end
    end
    state.drivetrainGearContract='original'
    if ok and type(cfg)=='table' and cfg.model_drivetrain_gear_contract~=nil then
        if cfg.model_drivetrain_gear_contract=='original' or cfg.model_drivetrain_gear_contract=='validated_gears_v1' then
            state.drivetrainGearContract=cfg.model_drivetrain_gear_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_drivetrain_gear_contract' end
    end
    state.hopInputContract='original'
    if ok and type(cfg)=='table' and cfg.model_hop_input_contract~=nil then
        if cfg.model_hop_input_contract=='original' or cfg.model_hop_input_contract=='single_drivetrain_nm_v1' then
            state.hopInputContract=cfg.model_hop_input_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_hop_input_contract' end
    end
    state.windupInputContract='original'
    if ok and type(cfg)=='table' and cfg.model_windup_input_contract~=nil then
        if cfg.model_windup_input_contract=='original' or cfg.model_windup_input_contract=='drivetrain_normalized_v1' then
            state.windupInputContract=cfg.model_windup_input_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_windup_input_contract' end
    end
    if ok and type(cfg)=='table' then
        if cfg.model_lsd_torque_input_contract~=nil then
            if cfg.model_lsd_torque_input_contract=='original' or cfg.model_lsd_torque_input_contract=='drivetrain_nm_v1' then
                state.lsdTorqueInputContract=cfg.model_lsd_torque_input_contract
            else state.physicalEnabled=false;state.configError='Observe mode: invalid model_lsd_torque_input_contract' end
        end
        if cfg.model_vehicle_config_contract~=nil then
            if cfg.model_vehicle_config_contract=='original' or cfg.model_vehicle_config_contract=='unpacked_ini_observe_v1' then
                state.vehicleConfigContract=cfg.model_vehicle_config_contract
            else state.physicalEnabled=false;state.configError='Observe mode: invalid model_vehicle_config_contract' end
        end
        if cfg.model_lsd_configuration_contract~=nil and cfg.model_lsd_configuration_contract~='original' then
            if cfg.model_lsd_configuration_contract~='car_config_rear_v1' then
                state.physicalEnabled=false;state.configError='Observe mode: invalid model_lsd_configuration_contract'
            elseif state.lsdTorqueInputContract~='drivetrain_nm_v1' or state.vehicleConfigContract~='unpacked_ini_observe_v1' then
                state.physicalEnabled=false;state.configError='Observe mode: LSD configuration requires Nm and vehicle observation contracts'
            else state.lsdConfigurationContract='car_config_rear_v1' end
        end
    end
    if state.damperCoefficientContract~='original' and state.vehicleConfigContract~='unpacked_ini_observe_v1' then
        state.physicalEnabled=false;state.configError='Observe mode: damper coefficients require vehicle observation contract'
    end
    if state.springBaseContract~='original' and state.vehicleConfigContract~='unpacked_ini_observe_v1' then
        state.physicalEnabled=false;state.configError='Observe mode: spring base requires vehicle observation contract'
    end
    if state.drivetrainGearContract~='original' and state.vehicleConfigContract~='unpacked_ini_observe_v1' then
        state.physicalEnabled=false;state.configError='Observe mode: validated gears require vehicle observation contract'
    end
    if state.inertiaTemperatureContract~='original' or state.flexTemperatureContract~='original' or state.energyTemperatureContract~='original' or state.chassisTemperatureContract~='original' or state.bodyTemperatureContract~='original' or state.damperTemperatureContract~='original' or state.damperCoefficientContract~='original' or state.springBaseContract~='original' or state.suspensionTravelContract~='original' or state.brakeTemperatureContract~='original' or state.drivetrainGearContract~='original' or state.hopInputContract~='original' or state.windupInputContract~='original' or state.lsdConfigurationContract~='original' or state.lsdTorqueInputContract~='original' or state.vehicleConfigContract~='original' then state.physicalEnabled=false end
    state.carcassInputContract='original'
    if ok and type(cfg)=='table' and cfg.model_carcass_input_contract~=nil then
        if cfg.model_carcass_input_contract=='original' or cfg.model_carcass_input_contract=='current_wheel_slip_v1' then
            state.carcassInputContract=cfg.model_carcass_input_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_carcass_input_contract' end
    end
    state.damperInputContract='original'
    if ok and type(cfg)=='table' and cfg.model_damper_input_contract~=nil then
        if cfg.model_damper_input_contract=='original' or cfg.model_damper_input_contract=='current_suspension_travel_v1' then
            state.damperInputContract=cfg.model_damper_input_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_damper_input_contract' end
    end
    state.tyreSignalContract='original'
    if ok and type(cfg)=='table' and cfg.model_tyre_signal_contract~=nil then
        if cfg.model_tyre_signal_contract=='original' or cfg.model_tyre_signal_contract=='owner_state_v1' then state.tyreSignalContract=cfg.model_tyre_signal_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid model_tyre_signal_contract' end
    end
    state.tyreResponseContract='legacy'
    if ok and type(cfg)=='table' and cfg.tyre_response_contract~=nil then
        if cfg.tyre_response_contract=='legacy' or cfg.tyre_response_contract=='owned_lateral_limit_v1' then
            state.tyreResponseContract=cfg.tyre_response_contract
        else state.physicalEnabled=false;state.configError='Observe mode: invalid tyre_response_contract' end
    end
    if ok and type(cfg)=='table' and cfg.airborne_zero_capture==true then
        local copy={};if type(enhancement)=='table'then for k,v in pairs(enhancement)do copy[k]=v end end
        copy.airborne_capture_only=true;enhancement=copy
    end
    Bridge.init(ROOT,state.physicalEnabled,enhancement)
    if type(enhancement)=='table' and enhancement.tyre_interval_history==true then
        local loaded,value=pcall(function()
            local function part(name)return assert(loadfile(ROOT..'/'..name..'.lua'))()end
            local parts={History=part('tyre_interval_history'),Channel=part('tyre_history_channel'),Session=part('tyre_history_session')}
            return part('tyre_history_observer').new(ROOT,parts,JSON.stringify,JSON.parse,ac.load,ac.store,ac.memoryBarrier,
                os.preciseClock,part('tyre_history_files').new(ROOT))
        end)
        if loaded then state.tyreHistory=value;ac.log('[ACNextGen History] initialized')
        else state.tyreHistoryError=tostring(value);ac.log('[ACNextGen History] initialization failed: '..tostring(value)) end
    end
    state.wheelMaterialCapture=ok and type(cfg)=='table' and type(cfg.enhancement)=='table' and cfg.enhancement.wheel_interval_capture==true
    state.tyreObservationCapture=ok and type(cfg)=='table' and type(cfg.enhancement)=='table' and cfg.enhancement.capture==true and cfg.enhancement.tyre_observation_capture==true
    -- Explicit experiment opt-in, separate from normal physics operation.
    if ok and type(cfg)=='table' and cfg.snapshot_save_only_capture==true then
        local loaded,runner=pcall(function()
            assert(cfg.airborne_zero_capture~=true,'Snapshot and airborne capture are exclusive')
            assert(Bridge.getState().calibrationCaptureOnly==true,'Snapshot capture requires calibration-only configuration')
            local function experiment(name)
                return assert(loadfile(ROOT..'/experiments/'..name..'.lua'))()
            end
            local preview
            if cfg.snapshot_transform_preview_only==true then
                local transformer=experiment('translated_snapshot_preview')
                local helpers=require('shared/sim/cars')
                preview=function(bytes,job)
                    local candidate,detail=transformer.preview(bytes,helpers)
                    ac.log('[ACNextGen SnapshotPreview '..job.id..'] '..JSON.stringify({
                        success=candidate~=nil,diagnostic=detail,original_size=#bytes,
                        candidate_size=candidate and #candidate,actuation_allowed=false}))
                    -- Candidate bytes are discarded, never loaded or archived.
                end
            end
            return experiment('freewheel_observer_binding').new(ROOT,
                experiment('freewheel_save_supervisor'),experiment('freewheel_snapshot_capture'),preview)
        end)
        if loaded then state.snapshotSave=runner;ac.log('[ACNextGen Snapshot] save-only supervisor initialized')
        else state.snapshotSaveError=tostring(runner);ac.log('[ACNextGen Snapshot] initialization rejected: '..state.snapshotSaveError) end
    end
    if ok and type(cfg)=='table' and cfg.restore_only_capture==true then
        local loaded,runner=pcall(function()
            assert(cfg.airborne_zero_capture~=true,'Restore and airborne capture are exclusive')
            assert(Bridge.getState().calibrationCaptureOnly==true,'Restore-only requires calibration-only configuration')
            assert(cfg.snapshot_save_only_capture~=true,'Save-only and restore-only must not run together')
            local function experiment(name)return assert(loadfile(ROOT..'/experiments/'..name..'.lua'))()end
            local parts={session=experiment('restore_session'),driver=experiment('restore_driver'),
                fixture=experiment('freewheel_fixture'),capture=experiment('freewheel_snapshot_capture'),
                archive=experiment('restore_archive'),pose=experiment('native_pose'),gate=experiment('freewheel_observer_binding')}
            assert(cfg.restore_datum_capture==nil or type(cfg.restore_datum_capture)=='boolean','Invalid restore datum mode')
            parts.requireDatum=cfg.restore_datum_capture==true
            if parts.requireDatum then parts.datumCodec=experiment('freewheel_datum_transport').new(experiment('freewheel_transport'))end
            return experiment('restore_observer_binding').new(ROOT,cfg.restore_only_job_id,parts)
        end)
        if loaded then state.restoreOnly=runner
        else state.restoreOnlyError=tostring(runner);ac.log('[ACNextGen Restore] initialization rejected: '..state.restoreOnlyError)end
    end
    if ok and type(cfg)=='table' and cfg.airborne_zero_capture==true then
        local loaded,runner=pcall(function()
            assert(state.physicalEnabled and Bridge.getState().calibrationCaptureOnly==true,'Airborne jig requires bounded output isolation')
            assert(cfg.snapshot_save_only_capture~=true and cfg.restore_only_capture~=true,'Airborne jig requires exclusive capture')
            local function experiment(name)return assert(loadfile(ROOT..'/experiments/'..name..'.lua'))()end
            local parts={session=experiment('airborne_session'),driver=experiment('airborne_driver'),restoreDriver=experiment('restore_driver'),
                fixture=experiment('freewheel_fixture'),capture=experiment('freewheel_snapshot_capture'),archive=experiment('restore_archive'),
                pose=experiment('native_pose'),gate=experiment('freewheel_observer_binding'),channel=experiment('freewheel_channel')}
            parts.codec=experiment('freewheel_datum_transport').new(experiment('freewheel_transport'))
            local source={}
            for _,pair in ipairs({{'FreewheelGeometry','freewheel_geometry'},{'FreewheelObserver','freewheel_worker_observer'},
                {'FreewheelTransport','freewheel_transport'},{'FreewheelDatumTransport','freewheel_datum_transport'},{'FreewheelChannel','freewheel_channel'}})do
                source[#source+1]='local '..pair[1]..'=(function()\n'..assert(read(ROOT..'/experiments/'..pair[2]..'.lua'))..'\nend)()\n'
            end
            source[#source+1]=assert(read(ROOT..'/experiments/airborne_observation_worker.lua'));parts.workerSource=table.concat(source)
            return experiment('airborne_observer_binding').new(ROOT,cfg.airborne_zero_job_id,parts)
        end)
        if loaded then state.airborneJig=runner
        else state.airborneError=tostring(runner);ac.log('[ACNextGen Airborne] initialization rejected: '..state.airborneError)end
    end
    ac.onSessionStart(function() if activeSession() then beginSession() end end)
    ac.onRelease(function() M.shutdown() end)
    ac.log('[ACNextGen Native 4.3] Common Worker supervisor loaded; owned enhancement channels sample pending calibration')
    prepare()
end
function M.update(dt)
    if not finite(dt) or dt<=0 then return end
    local ok,sim=pcall(ac.getSim)
    local mode='inactive'
    if ok and sim and sim.isOnlineRace==false and sim.isSessionFinished~=true
        and sim.isPaused~=true and sim.isReplayActive~=true and sim.isReplayOnlyMode~=true then
        if not state.enabled then mode='models_off'
        elseif actualRun() and state.status.status=='RUNNING_NATIVE_MODELS' then
            mode=state.physicalEnabled and 'models_on_bounded' or 'models_on_observe'
        end
    end
    local rendered,renderDt=pcall(function() return ui.deltaTime() end)
    if rendered then
        local recorded,message=pcall(metrics.add,renderDt,mode,metricSnapshot)
        state.performanceError=recorded and metrics.error or tostring(message)
        state.renderMetrics=metrics.last;state.performanceLog=metricsPath
    end
    state.age=state.age+dt;state.timer=state.timer+dt;state.leaseTimer=state.leaseTimer+dt
    state.launchTimer=state.launchTimer+dt;state.retryTimer=math.max(0,state.retryTimer-dt)
    local active=activeSession()
    if active and not state.sessionActive then beginSession()
    elseif not active and state.sessionActive then M.shutdown() end
    local changed=false
    if state.timer>=.2 then
        state.timer=0;changed=true
        local ok,result=pcall(function()
            local raw=read(ROOT..'/runtime/status.json');if not raw then return nil end
            assert(#raw<=128000,'Status file too large')
            local obj=JSON.parse(raw)
            assert(type(obj)=='table' and obj.protocol==2 and type(obj.host_id)=='string','Invalid native status')
            assert(finite(obj.heartbeat) and obj.heartbeat>=0 and obj.heartbeat%1==0,'Invalid native heartbeat')
            return obj
        end)
        if ok and result then
            if result.host_id~=state.hostID then
                state.sequence=math.max(state.sequence,result.command_sequence or 0)+1
                state.lastHeartbeat=result.heartbeat;state.age=math.huge;state.hostID=result.host_id
                Bridge.newHost(result.host_id)
            elseif result.heartbeat~=state.lastHeartbeat then state.age=0;state.lastHeartbeat=result.heartbeat end
            state.status=result
            if liveHost() then state.error='' end
            if result.status=='MODEL_ERROR' and liveHost() then state.enabled=false end
        elseif not ok then state.error=tostring(result) end
    end
    Bridge.update(dt,state.sessionActive,actualRun(),ac.getCarID(0))
    if state.tyreHistory then
        local worked,message=pcall(function()
            local b=Bridge.getState();local q=Bridge.pollTyreBound()
            local current=q and {host_id=state.hostID,epoch=b.epoch,generation=b.generation,car_hash=q.car_hash,
                clock=b.lastClock,enabled=actualRun() and b.enabled and b.age<=.2} or nil
            if state.tyreHistory.status=='idle' and current then
                local raw=read(ROOT..'/runtime/tyre-history-request.json')
                if raw and #raw<=2048 then
                    local job=JSON.parse(raw);local now=os.time()
                    if type(job)=='table' and job.host_id==state.hostID and finite(job.expires_at) and
                        job.expires_at>=now and job.expires_at<=now+5 then state.tyreHistory:start(job,current)end
                end
            end
            state.tyreHistory:update(current)
        end)
        if not worked then pcall(state.tyreHistory.stop,state.tyreHistory);state.tyreHistoryError=tostring(message)end
        local historyError=state.tyreHistoryError or state.tyreHistory.error
        if state.tyreHistory.status~=state.tyreHistoryLastStatus or historyError~=state.tyreHistoryLastError then
            state.tyreHistoryLastStatus=state.tyreHistory.status;state.tyreHistoryLastError=historyError
            ac.log('[ACNextGen History] status='..tostring(state.tyreHistory.status)..' error='..tostring(historyError))
        end
    end
    local rejection=Bridge.pollEnhancementRejection()
    if rejection then
        local ok,err=pcall(function()
            local f=assert(io.open(rejectionPath,'ab'))
            local wrote,why=f:write(JSON.stringify(rejection),'\n');f:close();assert(wrote,why)
        end)
        if not ok then ac.log('[ACNextGen] Rejection diagnostic write failed: '..tostring(err)) end
    end
    if state.snapshotSave then
        local worked,message=pcall(state.snapshotSave.update,state.snapshotSave,dt,state,Bridge.getState())
        if not worked then
            state.snapshotSave:shutdown();state.snapshotSave=nil;state.snapshotSaveError=tostring(message)
        end
    end
    if state.restoreOnly then
        local worked,message=pcall(state.restoreOnly.update,state.restoreOnly,dt,state,Bridge.getState())
        if not worked then state.restoreOnly:shutdown();state.restoreOnly=nil;state.restoreOnlyError=tostring(message)end
    end
    if state.airborneJig then
        local worked,message=pcall(state.airborneJig.update,state.airborneJig,dt,state,Bridge.getState())
        if not worked then state.airborneJig:shutdown();state.airborneJig=nil;state.airborneError=tostring(message)end
    end
    if state.sessionActive and state.launchTimer>=.4 then launch() end
    if state.leaseTimer>=.05 then state.leaseTimer=0;send() end
    if changed then prepare() end
end
function M.start()
    if not activeSession() then state.error='Offline session required';prepare();return false end
    state.userStopped=false
    state.sessionActive=true;state.shuttingDown=false;state.enabled=true;state.sequence=state.sequence+1
    Bridge.resume();launch();send();prepare();return true
end
function M.stop()
    if state.tyreHistory then pcall(state.tyreHistory.stop,state.tyreHistory) end
    state.userStopped=true
    if state.airborneJig then state.airborneJig:shutdown();state.airborneJig=nil end
    if state.restoreOnly then state.restoreOnly:shutdown();state.restoreOnly=nil end
    state.enabled=false;state.sequence=state.sequence+1;Bridge.setEnabled(false)
    local result=send();prepare();return result
end
function M.drawUI() View.draw(state,Bridge.getState(),M.stop,M.start) end
function M.getState() return state end
return M
