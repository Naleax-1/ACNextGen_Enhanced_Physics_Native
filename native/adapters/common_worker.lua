---@diagnostic disable: undefined-global
-- Common CSP Physics Worker. No car data scripts and no model calculations.
-- One writer per MMF. Receivers never modify read-only mappings.
local SENSOR_BODY=[[
uint32_t abi,epoch,sequence,generation,car_hash,flags,ack_sequence,applied_frames;
uint32_t api_status,api_stage,fault_code,api_calls,reserved[4];
double dt,clock;
double side[3],front_velocity[3],rear_velocity[3],linear_velocity[3];
double wheel_omega[4];
double wheel[4][8];
]]
local COMMAND_BODY=[[
uint32_t abi,epoch,sequence,generation,car_hash,effect_id,max_hold_frames,flags;
double ttl_seconds,source_clock,model_age_seconds,yaw_rate,spin_risk,authority;
double power_w,yaw_moment_nm,damping_nm_s;
double positions[2][3],forces[2][3];
]]
local options=assert(__input,'Missing worker options')
assert(not options.suspension_raw_capture or options.physical_enabled==false,'Suspension raw diagnostics require actuation disabled')
local torqueOwners=(options.drive_profile~=nil and 1 or 0)+(options.brake_profile~=nil and 1 or 0)+(options.wheel_torque_profile~=nil and 1 or 0)
assert(torqueOwners<=1,'Conflicting wheel torque owners')
local epoch=assert(options.epoch,'Missing worker epoch')
local carID=assert(options.car_id,'Missing car ID')
local names=options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4'
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function checksum(bytes)
    local a,b=1,0
    for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
    return b*65536+a
end
local carHash=checksum(carID)
local enhancement=options.enhancement_capture==true and Enhancement and Enhancement.new(options,carHash) or nil
local springCandidate=SpringCandidate and SpringCandidate.new(options,carHash) or nil
local brakeSensor=options.enhancement_capture==true and BrakeSensor and BrakeSensor.new(options,carHash) or nil
local wheelReference=options.wheel_reference_capture==true and assert(BrakeSensor,'Missing reference reader').newReference(options,carHash) or nil
local wheelReferenceTimer=0
local wheelReferenceFlags=nil
local wheelSelected=options.wheel_torque_profile~=nil
local brakeLocalSelected=options.brake_profile and options.brake_profile.execution_mode=='worker_local_brake_residual_v1'
local brakeForce=not brakeLocalSelected and not wheelSelected and options.enhancement_capture==true and BrakeForceWire and BrakeForceWire.new(options,carHash) or nil
local brakeLocal=brakeLocalSelected and not wheelSelected and options.enhancement_capture==true and assert(BrakeLocalWire,'Missing brake local wire').new(options,carHash) or nil
local driveWork=options.enhancement_capture==true and DriveWorkObserver and DriveWorkObserver.new(options,carHash) or nil
local driveWorkTimer=0
local bodySensor=options.enhancement_capture==true and BodySensor and BodySensor.new(options,carHash) or nil
local bodyLocalSelected=options.body_profile and options.body_profile.execution_mode=='worker_local_body_v1'
local bodyForce=not bodyLocalSelected and options.enhancement_capture==true and BodyForceWire and BodyForceWire.new(options,carHash) or nil
local bodyLocal=bodyLocalSelected and options.enhancement_capture==true and assert(BodyLocalWire,'Missing body local wire').new(options,carHash) or nil
local localDamperSelected=options.damper_profile and options.damper_profile.execution_mode=='worker_local_v1'
local damperForce=not localDamperSelected and options.enhancement_capture==true and options.damper_profile and DamperForceWire and DamperForceWire.new(options,carHash) or nil
local damperLocal=localDamperSelected and options.enhancement_capture==true and assert(DamperLocalWire,'Missing local damper wire').new(options,carHash) or nil
local springLocal=options.enhancement_capture==true and options.spring_profile and assert(SpringLocalWire,'Missing local spring wire').new(options,carHash) or nil
local driveLocal=options.enhancement_capture==true and options.drive_profile and assert(DriveLocalWire,'Missing local drive wire').new(options,carHash) or nil
local wheelLocal=options.enhancement_capture==true and wheelSelected and assert(WheelTorqueLocalWire,'Missing local wheel wire').new(options,carHash) or nil
local wheelInterval=options.wheel_interval_capture==true and WheelIntervalWire and WheelIntervalWire.new(options,carHash) or nil
local suspensionRaw=options.suspension_raw_capture==true and assert(SuspensionRawWire,'Missing suspension raw wire').new(options,carHash) or nil
local function load(key) return ac.load('ngp4_'..key) end
local function store(key,v) ac.store('ngp4_'..key,v) end
local function barrier() local k=type(ac.memoryBarrier);if k=='function' or k=='cdata' then ac.memoryBarrier() end end
local factory=assert(ac.StructItem.build or ac.StructItem.combine,'Struct factory unavailable')
local sensor=factory(SENSOR_BODY)
local candidate=factory(COMMAND_BODY)
local output=ac.writeMemoryMappedFile(names..'.Sensor','uint32_t commit,checksum;struct {'..SENSOR_BODY..'} packet;',false)
local input=nil
local zero=vec3(0,0,0)
local front=vec3(0,0,1)
local rear=vec3(0,0,-1)
local forces={vec3(0,0,0),vec3(0,0,0)}
local positions={vec3(0,0,0),vec3(0,0,0)}
local elapsed,timer,sequence=0,0,0
local lastBeat,parentAge=nil,math.huge
local lastSequence,generation,commandAge,held=0,0,math.huge,0
local active=nil
local ack,applied,apiCalls,stage,fault,status=0,0,0,0,0,1
local faultLatched=false
local zeroValidated=false
local function inhibit(code)
    active=nil;held=0;commandAge=math.huge;status=2;fault=code
end
local function report()
    -- Read-only, single-value evidence for save-only supervision. It never
    -- grants actuator permission and preserves inhibit(20) unchanged.
    if load('calibration_only')==1 then
        store('worker_capture_state',string.format('WSC1|%d|%d|%d|%d|%d|%d|%d|%.17g',
            epoch,generation,sequence,(sensor.flags or 0)%16,options.physical_enabled and 1 or 0,status,fault,elapsed))
    end
    store('worker_epoch',epoch);store('worker_status',status);store('worker_fault',fault)
    store('worker_stage',stage);store('worker_ack',ack);store('worker_applied_frames',applied)
    store('worker_api_calls',apiCalls);store('worker_clock',elapsed)
end
local function terminate(code)
    inhibit(code);status=8;if enhancement then enhancement:disable() end
    if springCandidate then springCandidate:disable() end
    if brakeSensor then brakeSensor:disable() end
    if wheelReference then wheelReference:disable() end
    if bodySensor then bodySensor:disable() end
    if bodyForce then bodyForce:stop() end
    if bodyLocal then bodyLocal:stop() end
    if damperForce then damperForce:stop() end
    if damperLocal then damperLocal:stop() end
    if springLocal then springLocal:stop() end
    if driveLocal then driveLocal:stop() end
    if brakeLocal then brakeLocal:stop() end
    if wheelLocal then wheelLocal:stop() end
    if wheelInterval then wheelInterval:disable() end
    if suspensionRaw then suspensionRaw:disable() end
    if driveWork then driveWork:reset();store('drive_work_valid',0);store('drive_work_verified',0) end
    report();worker.terminate()
end
local function vector(dst,src)
    assert(src and finite(src.x) and finite(src.y) and finite(src.z),'Invalid physical vector')
    dst[0]=src.x;dst[1]=src.y;dst[2]=src.z
end
local function receive()
    if not input then
        local ok,value=pcall(ac.readMemoryMappedFile,names..'.Command',
            'uint32_t commit,checksum;struct {'..COMMAND_BODY..'} packet;',false)
        if ok then input=value else return end
    end
    local token=tonumber(input.commit)
    if not finite(token) or token<=0 or token%2~=0 or token<=lastSequence*2 then return end
    barrier();local bytes=ac.structBytes(input.packet);barrier()
    if #bytes~=200 or token~=tonumber(input.commit) or checksum(bytes)~=tonumber(input.checksum) then return end
    ac.fillStructWithBytes(candidate,bytes)
    local c=candidate
    -- A rejected new command immediately cancels the previous one.
    if c.abi~=4 or c.sequence*2~=token or c.epoch~=epoch or c.generation~=generation or c.car_hash~=carHash then inhibit(10);return end
    lastSequence=token/2
    if c.flags==0 then inhibit(0);ack=lastSequence;return end
    if c.flags~=1 or c.effect_id~=1 or c.max_hold_frames<1 or c.max_hold_frames>8 then inhibit(11);return end
    if not finite(c.ttl_seconds) or c.ttl_seconds<=0 or c.ttl_seconds>.020001 or
       not finite(c.source_clock) or c.source_clock>elapsed+.003 or elapsed-c.source_clock>c.ttl_seconds or
       not finite(c.model_age_seconds) or c.model_age_seconds<0 or c.model_age_seconds>.2 then inhibit(12);return end
    for _,name in ipairs({'yaw_rate','spin_risk','authority','power_w','yaw_moment_nm','damping_nm_s'}) do
        if not finite(tonumber(c[name])) then inhibit(13);return end
    end
    if c.spin_risk<0 or c.spin_risk>1 or c.authority<0 or c.authority>1 or
       c.power_w>1e-9 or math.abs(c.yaw_moment_nm)>40.00001 or c.damping_nm_s<0 or c.damping_nm_s>40.00001 then inhibit(14);return end
    for i=0,1 do
        local norm=0
        for j=0,2 do
            local p,f=tonumber(c.positions[i][j]),tonumber(c.forces[i][j])
            if not finite(p) or not finite(f) or math.abs(p)>(j==2 and 1.000001 or 1e-9) then inhibit(15);return end
            norm=norm+f*f
        end
        if norm>400.001 or math.abs(c.positions[i][2]-(i==0 and 1 or -1))>1e-9 then inhibit(16);return end
        positions[i+1].x=c.positions[i][0];positions[i+1].y=c.positions[i][1];positions[i+1].z=c.positions[i][2]
        forces[i+1].x=c.forces[i][0];forces[i+1].y=c.forces[i][1];forces[i+1].z=c.forces[i][2]
    end
    for j=0,2 do if math.abs(c.forces[0][j]+c.forces[1][j])>1e-9 then inhibit(17);return end end
    active={ttl=tonumber(c.ttl_seconds),clock=tonumber(c.source_clock)}
    commandAge=elapsed-active.clock;held=tonumber(c.max_hold_frames);ack=lastSequence;status=3;fault=0
end
local function capture(dt,flags)
    local transform=physics.getBodyTransform(0,-1,false)
    sensor.abi=4;sensor.epoch=epoch;sensor.sequence=sequence;sensor.generation=generation
    sensor.car_hash=carHash;sensor.flags=flags;sensor.dt=dt;sensor.clock=elapsed
    sensor.ack_sequence=ack;sensor.applied_frames=applied;sensor.api_status=status
    sensor.api_stage=stage;sensor.fault_code=fault;sensor.api_calls=apiCalls
    sensor.reserved[0]=zeroValidated and 1 or 0
    sensor.reserved[1]=springCandidate and springCandidate.validMask or 0
    vector(sensor.side,transform.side)
    vector(sensor.front_velocity,physics.getPointVelocity(0,front,true))
    vector(sensor.rear_velocity,physics.getPointVelocity(0,rear,true))
    vector(sensor.linear_velocity,physics.getPointVelocity(0,zero,true))
    local car=ac.getCar(0)
    for i=0,3 do
        local omega=physics.getWheelAngularSpeed(0,i)
        assert(finite(omega),'Invalid wheel velocity');sensor.wheel_omega[i]=omega
        for j=0,7 do sensor.wheel[i][j]=0 end
        local w=car and car.wheels and car.wheels[i]
        if w then
            local values={w.slipAngle,w.slipRatio,w.load,w.suspensionTravel,w.camber,w.fx,w.fy,w.mz}
            local valid=true
            for j=1,8 do if not finite(values[j]) then valid=false end end
            if valid then
                for j=1,8 do sensor.wheel[i][j-1]=values[j] end
                sensor.wheel[i][0]=sensor.wheel[i][0]*math.pi/180
                sensor.wheel[i][4]=sensor.wheel[i][4]*math.pi/180
                sensor.flags=sensor.flags+2^(16+i)
            end
        end
    end
    -- Optional Native pose evidence for stationary restore qualification.
    -- Reuses this capture's transform/velocity. No additional physics API call.
    if not options.physical_enabled and load('calibration_only')==1 then
        local observed,raw=pcall(function()
            assert(flags==15,'pose_input_inhibited')
            local fields={'WNP1',tostring(epoch),tostring(generation),tostring(sequence),string.format('%.17g',elapsed)}
            for _,v in ipairs({transform.position,transform.up,transform.look}) do
                for _,key in ipairs({'x','y','z'}) do local n=tonumber(v[key]);assert(finite(n));fields[#fields+1]=string.format('%.17g',n) end
            end
            for j=0,2 do local n=tonumber(sensor.linear_velocity[j]);assert(finite(n));fields[#fields+1]=string.format('%.17g',n) end
            assert(#fields==17,'pose_incomplete');return table.concat(fields,'|')
        end)
        pcall(store,'worker_native_pose',observed and raw or '')
    end
    local bytes=ac.structBytes(sensor);assert(#bytes==464,'Sensor ABI mismatch')
    local sum=checksum(bytes)
    output.commit=sequence*2-1;barrier()
    ac.fillStructWithBytes(output.packet,bytes);output.checksum=sum
    barrier();output.commit=sequence*2;report()
end
function script.update(dt)
    if not finite(dt) or dt<=0 or dt>.02 then terminate(1);return end
    elapsed=elapsed+dt;timer=timer+dt;commandAge=commandAge+dt
    local beat=load('parent_heartbeat')
    if beat~=nil and beat~=lastBeat then lastBeat=beat;parentAge=0 else parentAge=parentAge+dt end
    if load('epoch')~=epoch or parentAge>.2 then terminate(2);return end
    local gen=tonumber(load('generation'))
    if not finite(gen) or gen<1 or gen>=2147483647 or gen%1~=0 then terminate(3);return end
    if gen~=generation then generation=gen;lastSequence=0;faultLatched=false;inhibit(4) end
    local sim=ac.getSim()
    local offline=sim and sim.isOnlineRace==false and sim.isSessionFinished~=true
        and sim.isPaused~=true and sim.isReplayActive~=true and sim.isReplayOnlyMode~=true
    local sameCar=ac.getCarID(0)==carID
    local parentPermission=load('permission')==1
    local permitted=false
    local permissionDetail='not_callable'
    if type(physics.allowed)=='function' or type(physics.allowed)=='cdata' then
        local ok,value=pcall(physics.allowed);permitted=parentPermission and ok and value==true
        permissionDetail=(ok and 'returned:' or 'error:')..type(value)..':'..tostring(value)
    end
    -- Read-only compatibility evidence; never substitutes or grants permission.
    local permissionState=tostring(parentPermission)..'|'..permissionDetail..'|'..tostring(permitted)
    if permissionState~=script._ngpPermissionDiagnostic then
        script._ngpPermissionDiagnostic=permissionState
        pcall(function() ac.log('[ACNextGen] Worker permission parent='..tostring(parentPermission)..
            ' allowed='..permissionDetail..' effective='..tostring(permitted)) end)
    end
    local enabled=load('enabled')==1
    local flags=1+(offline and 2 or 0)+(permitted and 4 or 0)+(enabled and sameCar and 8 or 0)
    if enhancement then enhancement:step(dt,elapsed,flags,generation) end
    if springCandidate then springCandidate:step(elapsed,flags,generation) end
    if brakeSensor then brakeSensor:step(dt,elapsed,flags,generation) end
    if wheelReference then
        wheelReferenceTimer=wheelReferenceTimer+dt
        if wheelReferenceTimer>=1 or wheelReferenceFlags~=flags then
            wheelReferenceTimer=0;wheelReferenceFlags=flags;wheelReference:step(elapsed,generation,flags)
        end
    end
    if bodySensor then bodySensor:step(dt,elapsed,flags,generation) end
    if wheelInterval then wheelInterval:step(dt,elapsed,flags,generation) end
    if suspensionRaw then suspensionRaw:step(dt,elapsed,flags,generation) end
    -- Observe/calibration-capture mode must inhibit body writes even if an
    -- independently supplied profile and a matching command are present.
    local bodyFlags=flags
    if not options.physical_enabled and bodyFlags>=8 then bodyFlags=bodyFlags-8 end
    if bodyForce then bodyForce:step(dt,elapsed,bodyFlags,generation) end
    if bodyLocal then bodyLocal:step(dt,elapsed,bodyFlags,generation) end
    if damperForce then damperForce:step(dt,elapsed,bodyFlags,generation) end
    if damperLocal then damperLocal:step(dt,elapsed,bodyFlags,generation) end
    if springLocal then springLocal:step(dt,elapsed,bodyFlags,generation) end
    if driveLocal then driveLocal:step(dt,elapsed,bodyFlags,generation) end
    if wheelLocal then wheelLocal:step(dt,elapsed,bodyFlags,generation) end
    if brakeForce then brakeForce:step(dt,elapsed,bodyFlags,generation) end
    if brakeLocal then brakeLocal:step(dt,elapsed,bodyFlags,generation) end
    if driveWork then
        local observation=driveWork:sample(elapsed,dt,flags,generation)
        driveWorkTimer=driveWorkTimer+dt
        if not observation.valid or driveWorkTimer>=.1 then
            driveWorkTimer=0
            store('drive_work_valid',observation.valid and 1 or 0)
            store('drive_work_verified',0)
            if observation.valid then
                store('drive_work_clock',observation.clock_after)
                store('drive_work_generation',generation)
                for i=0,3 do store('drive_work_omega_before_'..i,observation.omega_before[i]);store('drive_work_omega_after_'..i,observation.omega_after[i]) end
            end
        end
    end
    if flags==15 and not faultLatched then receive() end
    if faultLatched then active=nil;held=0;commandAge=math.huge;status=5;fault=24
    elseif flags~=15 or not options.physical_enabled then inhibit(20)
    else
        if active and (commandAge>active.ttl or held<=0) then inhibit(22) end
        if active then
            -- Verify passivity against current physics velocities, not stale input.
            stage=2
            local ok,message=pcall(function()
                local a=physics.getPointVelocity(0,front,true)
                local b=physics.getPointVelocity(0,rear,true)
                local f=forces[1]
                local side=physics.getBodyTransform(0,-1,false).side
                local norm=f.x*f.x+f.y*f.y+f.z*f.z
                local sideNorm=side.x*side.x+side.y*side.y+side.z*side.z
                local projection=f.x*side.x+f.y*side.y+f.z*side.z
                assert(finite(sideNorm) and sideNorm>.64 and sideNorm<1.44,'Invalid current frame')
                if norm>1e-12 and projection*projection<norm*sideNorm*.9924038765 then inhibit(25);return end
                local power=(a.x-b.x)*f.x+(a.y-b.y)*f.y+(a.z-b.z)*f.z
                assert(finite(power),'Invalid power')
                local yaw=((a.x-b.x)*side.x+(a.y-b.y)*side.y+(a.z-b.z)*side.z)/(2*math.sqrt(sideNorm))
                if norm>1e-12 and (power>=-1e-10 or 2*math.sqrt(norm)>40*math.abs(yaw)+1e-8) then inhibit(23);return end
                if norm>1e-12 then
                    stage=3;physics.addForce(0,positions[1],true,forces[1],false);apiCalls=apiCalls+1
                    stage=4;physics.addForce(0,positions[2],true,forces[2],false);apiCalls=apiCalls+1
                    applied=applied+1;status=4
                elseif not zeroValidated then
                    -- One real zero-force API validation, from a valid zero DLL command.
                    -- Counts as API acceptance, never as a nonzero applied frame.
                    stage=3;physics.addForce(0,positions[1],true,forces[1],false);apiCalls=apiCalls+1
                    stage=4;physics.addForce(0,positions[2],true,forces[2],false);apiCalls=apiCalls+1
                    zeroValidated=true
                    ac.log('[ACNextGen] Force API accepted zero DLL command seq='..ack..' epoch='..epoch..' generation='..generation)
                end
                held=held-1
            end)
            if not ok then
                faultLatched=true;inhibit(24);status=5
                ac.log('[ACNextGen] Force API fault at stage '..stage..': '..tostring(message))
            end
        end
    end
    if timer>=.005 then
        local captureDt=timer;timer=0;sequence=sequence+1
        if sequence>=1073741823 then terminate(5);return end
        local ok,message=pcall(capture,captureDt,flags)
        if not ok then ac.log('[ACNextGen] Worker capture fault: '..tostring(message));terminate(6) end
    end
end
