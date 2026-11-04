---@diagnostic disable: undefined-global
-- Prepended to common_worker.lua by the supervisor. The original ABI4 route
-- remains independent. This component contains no native model formulas.
local Enhancement={}
local EB_SENSOR=[[
uint32_t abi,epoch,sequence,generation,car_hash,flags,traction_type,api_mask;
uint32_t ack,applied_suspension,applied_tyre,applied_diff,api_calls,api_stage,fault,reserved;
double dt,clock,supplement_age;
double side[3],up[3],body_origin[3];
double positions[4][3],body_velocity[4][3],wheel_velocity[4][3];
double wheel_omega[4],load[4];
]]
local EB_COMMAND=[[
uint32_t abi,epoch,sequence,generation,car_hash,channels,max_hold_frames,flags;
double source_clock,ttl_seconds,model_age,power[3],total_power;
double suspension_force[4][3],tyre_force[4][3],wheel_torque[4],positions[4][3];
]]
local function ef(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function callable(v) local t=type(v);return t=='function' or t=='cdata' end
local function ec(bytes)
    local a,b=1,0
    for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
    return b*65536+a
end
local function ev(v) return v and ef(v.x) and ef(v.y) and ef(v.z) end
-- Float32 world transforms can quantize a parked hub by ~30 um at y=409 m.
-- Budget only the coordinate-rounding contribution, not the total velocity
-- error. This cannot qualify wheel units or permit suspension application.
local function coordinateStep(v)
    if math.abs(v)<2^-126 then return 2^-149 end
    local _,exponent=math.frexp(math.abs(v));return 2^(exponent-24)
end
local function writeVector(dst,v) assert(ev(v),'Invalid enhancement vector');dst[0]=v.x;dst[1]=v.y;dst[2]=v.z end
local function eb() if callable(ac.memoryBarrier) then ac.memoryBarrier() end end
function Enhancement.new(options,hash)
    local make=assert(ac.StructItem.build or ac.StructItem.combine)
    local s={sample=make(EB_SENSOR),candidate=make(EB_COMMAND),previous={},generation=0,
        sequence=0,ack=0,calls=0,applied={0,0,0},stage=0,fault=0,latched=false,
        lastFrame=nil,renderAge=math.huge,timer=0,active=nil,lastSequence=0,held=0}
    local name=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.Enhancement'
    s.output=ac.writeMemoryMappedFile(name..'Sensor','uint32_t commit,checksum;struct {'..EB_SENSOR..'} packet;',false)
    local observationRead=options.tyre_observation_capture==true and TyreObservationReader.new() or nil
    local observationInput=nil
    local observationStatusSequence,observationStatusClock=0,-1
    local observationReason=0
    local observationReasons={context=1,commit=2,snapshot=3,identity=4,freshness=5,coefficients=6,history=7}
    local function publishObservation(value,clock,generation)
        if not observationRead then return end
        if observationStatusSequence>=1073741822 then return end
        observationStatusSequence=observationStatusSequence+1
        local prefix='ngp4_tyre_observation_'
        pcall(function()
            ac.store(prefix..'commit',observationStatusSequence*2-1);eb()
            local fields={epoch=options.epoch,generation=generation,car_hash=hash,clock=clock,
                available=value and 1 or 0,reason=observationReason,source_sequence=value and value.sequence or 0,
                sensor_sequence=value and value.sensor_sequence or 0,model_frame=value and value.model_frame or 0,
                sensor_clock=value and value.sensor_clock or 0,model_clock=value and value.model_clock or 0,
                mask=value and value.mask or 0}
            for i=0,3 do fields['coefficient'..i]=value and value.coefficient[i] or 0 end
            for key,v in pairs(fields) do ac.store(prefix..key,v) end
            eb();ac.store(prefix..'commit',observationStatusSequence*2)
        end)
        observationStatusClock=clock
    end
    local observationLayout=[[uint32_t commit,checksum;struct {
uint32_t magic,epoch,generation,car_hash,sequence,sensor_sequence,model_frame,mask;
double sensor_clock,model_clock,coefficient[4];} packet;]]
    local function observeTyre(clock,generation,flags)
        if not observationRead then return end
        local ok=pcall(function()
            if not observationInput then observationInput=ac.readMemoryMappedFile(
                (options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.TyreObservation',observationLayout,false) end
            local value,reason
            if flags==15 then value,reason=observationRead(observationInput,{epoch=options.epoch,generation=generation,
                car_hash=hash,sensor_sequence=s.sequence,clock=clock}) else reason='flags' end
            observationReason=value and 0 or (observationReasons[reason] or 8)
            -- This diagnostic never influences applyMask, commands or physics.
            s.tyreObservation=value
        end)
        if not ok then s.tyreObservation=nil;observationInput=nil;observationReason=9 end
        if observationStatusClock<0 or clock<observationStatusClock or clock-observationStatusClock>=.1 then
            publishObservation(s.tyreObservation,clock,generation)
        end
    end
    -- apply=false is the release calibration gate. Capture/compute still run.
    local apply=options.physical_enabled==true and options.enhancement_apply==true
    local applyMask=options.enhancement_apply_mask
    if applyMask==nil then applyMask=apply and 7 or 0 end
    assert(ef(applyMask) and applyMask%1==0 and applyMask>=0 and applyMask<=7,'Invalid channel mask')
    if not apply then applyMask=0 end
    -- A configured dedicated damper owns this effect throughout its session.
    -- Missing/stale dedicated inputs must not reactivate the legacy output.
    if options.damper_profile~=nil and applyMask%2==1 then applyMask=applyMask-1 end
    -- Reserve the tyre body-force channel for a selected local owner even if
    -- that owner is missing or invalid.
    if options.tyre_local_profile~=nil and math.floor(applyMask/2)%2==1 then applyMask=applyMask-2 end
    -- The supervisor must explicitly supply the dedicated adapter source and
    -- profile. Its absence leaves the reserved legacy channel inhibited.
    local localTyre=nil
    if options.tyre_local_profile~=nil and type(TyreBoundWire)=='table' then
        localTyre=TyreBoundWire.new(options,hash)
    end
    -- The dedicated rear-pair owner reserves the rear torque channel. Never let
    -- missing/stale dedicated inputs reactivate a second torque writer.
    if (options.drive_profile~=nil or options.wheel_torque_profile~=nil) and math.floor(applyMask/4)%2==1 then applyMask=applyMask-4 end
    local function clear(code) s.active=nil;s.held=0;s.fault=code end
    function s:disable() clear(0);s.previous={};s.tyreObservation=nil;observationReason=10
        if localTyre then localTyre:disable() end
        if observationRead then publishObservation(nil,tonumber(s.sample.clock) or 0,s.generation) end
    end
    local function capture(dt,clock,flags,generation)
        local p=s.sample;local body=physics.getBodyTransform(0,-1,false)
        p.abi=1;p.epoch=options.epoch;p.sequence=s.sequence;p.generation=generation;p.car_hash=hash
        p.flags=flags;p.dt=dt;p.clock=clock
        p.ack=s.ack;p.applied_suspension=s.applied[1];p.applied_tyre=s.applied[2];p.applied_diff=s.applied[3]
        p.api_calls=s.calls;p.api_stage=s.stage;p.fault=s.fault;p.reserved=apply and 1 or 0
        p.api_mask=(callable(physics.addForce) and 3 or 0)+(callable(physics.addWheelTorque) and 4 or 0)
        writeVector(p.side,body.side);writeVector(p.up,body.up);writeVector(p.body_origin,body.position)
        local sim=ac.getSim();local rawFrame=sim and sim.frame
        -- CSP returns uint64 frame counters as LuaJIT cdata (e.g. 52981ULL).
        -- Numeric struct scalars otherwise passed ef(), so test this boundary.
        local frame=tonumber(rawFrame)
        if options.enhancement_capture and (s.metadataTrace or 0)<4 and (not s.nextMetadataTrace or clock>=s.nextMetadataTrace) then
            s.metadataTrace=(s.metadataTrace or 0)+1;s.nextMetadataTrace=clock+.3
            local metadataCar=ac.getCar(0)
            ac.log('[ACNextGen] Enhancement metadata clock='..clock..' frame='..tostring(rawFrame)..' frameType='..type(rawFrame)..
                ' traction='..tostring(metadataCar and metadataCar.tractionType)..' available='..tostring(metadataCar and metadataCar.physicsAvailable))
        end
        if ef(frame) and frame~=s.lastFrame then s.lastFrame=frame;s.renderAge=0 else s.renderAge=s.renderAge+dt end
        p.supplement_age=math.min(s.renderAge,1000)
        local car=ac.getCar(0);p.traction_type=4294967295
        if car and car.physicsAvailable==true and s.renderAge<=.03 and car.tractionType==0 then p.traction_type=0 end
        for i=0,3 do
            local pos=physics.getBodyTransform(0,i,false).position
            writeVector(p.positions[i],pos)
            writeVector(p.body_velocity[i],physics.getPointVelocity(0,pos,false))
            local previous=s.previous[i];local valid=previous~=nil
            local upNorm=body.up.x^2+body.up.y^2+body.up.z^2
            local coordinateVelocityError=0
            for j,axis in ipairs({'x','y','z'}) do
                local v=previous and (pos[axis]-previous[axis])/dt or 0
                if not ef(v) or math.abs(v)>300 then valid=false;v=0 end
                p.wheel_velocity[i][j-1]=v
                if previous then
                    coordinateVelocityError=coordinateVelocityError+
                        .5*(coordinateStep(pos[axis])+coordinateStep(previous[axis]))*math.abs(body.up[axis])/dt
                end
            end
            -- 0.001 m/s corresponds to <=0.12 N at the candidate's maximum
            -- 120 N*s/m coefficient (1% of its 12 N cap). Only the projected
            -- coordinate-rounding estimate is bounded here; real calibration
            -- and current body-point velocity remain separate requirements.
            if upNorm<.81 or upNorm>1.21 or coordinateVelocityError/math.sqrt(upNorm)>.001 then valid=false end
            s.previous[i]={x=pos.x,y=pos.y,z=pos.z}
            if valid then p.flags=p.flags+2^(16+i) end
            local omega=physics.getWheelAngularSpeed(0,i);assert(ef(omega),'Invalid enhancement wheel omega')
            p.wheel_omega[i]=omega;p.load[i]=0
            local w=car and car.wheels and car.wheels[i]
            if car and car.physicsAvailable==true and w and ef(w.load) and w.load>=0 and w.load<=100000 then
                p.load[i]=w.load;p.flags=p.flags+2^(20+i)
            end
        end
    end
    local function receive(clock,generation)
        if not s.input then
            local ok,value=pcall(ac.readMemoryMappedFile,name..'Command','uint32_t commit,checksum;struct {'..EB_COMMAND..'} packet;',false)
            if not ok then return end;s.input=value
        end
        local token=tonumber(s.input.commit)
        if not ef(token) or token<=0 or token%2~=0 or token<=s.lastSequence*2 then return end
        eb();local bytes=ac.structBytes(s.input.packet);eb()
        if #bytes~=408 or token~=tonumber(s.input.commit) or ec(bytes)~=tonumber(s.input.checksum) then return end
        ac.fillStructWithBytes(s.candidate,bytes);local c=s.candidate
        -- A newly committed invalid command cancels any previous command.
        clear(0)
        if c.abi~=1 or c.sequence*2~=token or c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=hash then clear(101);return end
        s.lastSequence=token/2
        if c.flags==0 then s.ack=s.lastSequence;return end
        if c.flags~=1 or c.channels<1 or c.channels>7 or c.max_hold_frames<1 or c.max_hold_frames>4 then clear(102);return end
        if not ef(c.source_clock) or not ef(c.ttl_seconds) or c.ttl_seconds<=0 or c.ttl_seconds>.012001 or
            c.source_clock>clock+.003 or clock-c.source_clock>c.ttl_seconds or
            not ef(c.model_age) or c.model_age<0 or c.model_age>.2 then clear(103);return end
        local power=0
        for j=0,2 do if not ef(c.power[j]) or c.power[j]>1e-9 then clear(104);return end;power=power+c.power[j] end
        if not ef(c.total_power) or math.abs(c.total_power-power)>1e-8 then clear(104);return end
        for i=0,3 do
            local ns,nt,displacement,speedSquared=0,0,0,0
            for j=0,2 do
                local p,a,b=tonumber(c.positions[i][j]),tonumber(c.suspension_force[i][j]),tonumber(c.tyre_force[i][j])
                if not ef(p) or not ef(a) or not ef(b) then clear(105);return end
                ns=ns+a*a;nt=nt+b*b
                displacement=displacement+(p-s.sample.positions[i][j])^2
                speedSquared=speedSquared+s.sample.body_velocity[i][j]^2
            end
            -- Commands reference sampled hubs; actual application uses the
            -- current hub. Account for normal travel during the bounded age.
            local limit=.1+math.sqrt(speedSquared)*math.max(0,clock-c.source_clock)
            if displacement>limit*limit then clear(106);return end
            if ns>144.0001 or nt>64.0001 or not ef(c.wheel_torque[i]) or math.abs(c.wheel_torque[i])>1.000001 then clear(107);return end
        end
        if math.abs(c.wheel_torque[0])+math.abs(c.wheel_torque[1])>1e-12 or
            math.abs(c.wheel_torque[2]+c.wheel_torque[3])>1e-12 then clear(108);return end
        -- Arrays remain in candidate until next valid receive; this owns them.
        s.active={clock=tonumber(c.source_clock),ttl=tonumber(c.ttl_seconds),channels=tonumber(c.channels)}
        s.held=tonumber(c.max_hold_frames);s.ack=s.lastSequence
    end
    local function has(mask,bit) return math.floor(mask/bit)%2==1 end
    -- Optional diagnostic snapshot of the actual failed branch, written with
    -- a commit marker so readers reject partial observations. No force writes.
    local rejectSequence=0
    local function recordRejection(wheel,channel,reason,relative,lateral,projection,norm,axisNorm)
        if options.enhancement_rejection_diagnostic~=true then return end
        pcall(function()
            assert(type(ac.memoryBarrier)=='function' or type(ac.memoryBarrier)=='cdata')
            if rejectSequence>=1073741822 then return end
            rejectSequence=rejectSequence+1;local prefix='ngp4_enhance_reject_'
            ac.store(prefix..'commit',rejectSequence*2-1)
            local p=s.sample
            for key,value in pairs({epoch=p.epoch,generation=p.generation,car_hash=p.car_hash,
                sample_sequence=p.sequence,command_sequence=s.ack,clock=p.clock,wheel=wheel,channel=channel,
                reason=reason,flags=p.flags,load=p.load[wheel],supplement_age=p.supplement_age,
                relative=relative,lateral=lateral,projection=projection,norm=norm,axis_norm=axisNorm}) do
                ac.store(prefix..key,value)
            end
            ac.memoryBarrier()
            ac.store(prefix..'commit',rejectSequence*2)
            -- Limit log volume while retaining exact branch values in the CSP
            -- log for capture from outside the Lua process.
            if rejectSequence<=64 then
                ac.log(string.format('[ACNextGen REJECT109] event=%d epoch=%d gen=%d car=%.0f sample=%d command=%d clock=%.9f wheel=%d channel=%d reason=%d flags=%d load=%.9g age=%.9g relative=%.9g lateral=%.9g projection=%.9g norm=%.9g axis=%.9g',
                    rejectSequence,p.epoch,p.generation,p.car_hash,p.sequence,s.ack,p.clock,wheel,channel,reason,p.flags,p.load[wheel],p.supplement_age,relative,lateral,projection,norm,axisNorm))
            end
        end)
    end
    local function applyNow(dt)
        if not apply or not s.active then return end
        local c,p=s.candidate,s.sample;local channels=0
        for _,bit in ipairs({1,2,4}) do if has(s.active.channels,bit) and has(applyMask,bit) then channels=channels+bit end end
        if channels==0 then return end
        -- Validate every component before making the first physics mutation.
        local centreDistance=0
        for j=0,2 do
            local centre=0;for i=0,3 do centre=centre+p.positions[i][j]/4 end
            centreDistance=centreDistance+(centre-p.body_origin[j])^2
        end
        local function distance(a,b)
            local d=0;for j=0,2 do d=d+(p.positions[a][j]-p.positions[b][j])^2 end
            return math.sqrt(d)
        end
        local front,rear,left,right=distance(0,1),distance(2,3),distance(0,2),distance(1,3)
        if centreDistance>36 or front<.3 or front>4 or rear<.3 or rear>4 or left<.5 or left>8 or right<.5 or right>8 then
            clear(111);return
        end
        for i=0,3 do
            local a,b,relative,lateral,an,bn,ap,bp=0,0,0,0,0,0,0,0
            for j=0,2 do
                local sf,tf=c.suspension_force[i][j],c.tyre_force[i][j]
                relative=relative+(p.wheel_velocity[i][j]-p.body_velocity[i][j])*sf
                lateral=lateral+p.body_velocity[i][j]*tf
                an=an+sf*sf;bn=bn+tf*tf;ap=ap+sf*p.up[j];bp=bp+tf*p.side[j]
                a=a+p.up[j]*p.up[j];b=b+p.side[j]*p.side[j]
            end
            if has(channels,1) and an>1e-12 then
                local reason=(not has(p.flags,2^(16+i)) and 1 or 0)+(relative<=1e-10 and 2 or 0)+(ap*ap<an*a*.997 and 4 or 0)
                if reason~=0 then recordRejection(i,1,reason,relative,lateral,ap,an,a);clear(109);return end
            end
            if has(channels,2) and bn>1e-12 then
                local reason=(not has(p.flags,2^(20+i)) and 1 or 0)+(p.supplement_age>.03 and 2 or 0)+(p.load[i]<80 and 4 or 0)+
                    (lateral>=-1e-10 and 8 or 0)+(bp*bp<bn*b*.997 and 16 or 0)
                if reason~=0 then recordRejection(i,2,reason,relative,lateral,bp,bn,b);clear(109);return end
            end
        end
        local torque=c.wheel_torque[2]
        if has(channels,4) and math.abs(torque)>1e-12 and (p.traction_type~=0 or
            torque*(p.wheel_omega[2]-p.wheel_omega[3])>=-1e-10) then clear(110);return end
        for i=0,3 do
            local pos=vec3(p.positions[i][0],p.positions[i][1],p.positions[i][2])
            local sf=vec3(c.suspension_force[i][0],c.suspension_force[i][1],c.suspension_force[i][2])
            local tf=vec3(c.tyre_force[i][0],c.tyre_force[i][1],c.tyre_force[i][2])
            if has(channels,1) and sf.x*sf.x+sf.y*sf.y+sf.z*sf.z>1e-12 then
                assert(callable(physics.addForce),'Missing suspension API');s.stage=11
                -- Force arguments are N at physics rate, consistent with the
                -- existing yaw adapter and the real paired body-force probe.
                -- Wheel reaction still needs its own real validation.
                physics.addForce(0,pos,false,sf,false);s.calls=s.calls+1
                s.stage=12;physics.addForce(0,pos,false,vec3(-sf.x,-sf.y,-sf.z),false,i);s.calls=s.calls+1
                s.applied[1]=s.applied[1]+1
            end
            if has(channels,2) and tf.x*tf.x+tf.y*tf.y+tf.z*tf.z>1e-12 then
                assert(callable(physics.addForce),'Missing tyre API');s.stage=21
                physics.addForce(0,pos,false,tf,false);s.calls=s.calls+1
                s.applied[2]=s.applied[2]+1
            end
        end
        if has(channels,4) and math.abs(torque)>1e-12 then
            assert(callable(physics.addWheelTorque),'Missing LSD API');s.stage=31
            -- Native torque API scaling needs real calibration before apply=true.
            physics.addWheelTorque(0,ac.Wheel.RearLeft,torque);s.calls=s.calls+1
            s.stage=32;physics.addWheelTorque(0,ac.Wheel.RearRight,-torque);s.calls=s.calls+1
            s.applied[3]=s.applied[3]+1
        end
        s.held=s.held-1
    end
    function s:step(dt,clock,flags,generation)
        if generation~=s.generation then
            self:disable();s.generation=generation;s.lastSequence=0;s.latched=false;s.fault=0
        end
        local ok,message=pcall(function()
            s.stage=1;capture(dt,clock,flags,generation)
            observeTyre(clock,generation,flags)
            if flags~=15 then clear(120)
            elseif not s.latched then receive(clock,generation) end
            if s.active and (clock-s.active.clock>s.active.ttl or s.held<=0) then clear(122) end
            if localTyre then
                localTyre:step(s.sample,not s.latched and flags==15 and options.physical_enabled==true)
            end
            if not s.latched and flags==15 then applyNow(dt) end
        end)
        if not ok then
            s.latched=true;clear(124);s.sample.flags=0
            ac.log('[ACNextGen] Enhancement fault stage '..s.stage..': '..tostring(message))
        end
        if s.latched then s.sample.flags=0;s.sample.fault=124 end
        s.timer=s.timer+dt
        if s.timer>=.006 then
            s.timer=0;s.sequence=s.sequence+1;s.sample.sequence=s.sequence
            s.sample.ack=s.ack;s.sample.api_calls=s.calls;s.sample.api_stage=s.stage;s.sample.fault=s.fault
            s.sample.applied_suspension=s.applied[1];s.sample.applied_tyre=s.applied[2];s.sample.applied_diff=s.applied[3]
            if s.sequence>=1073741823 then self:disable();return end
            local encoded,bytes=pcall(ac.structBytes,s.sample)
            if encoded and #bytes==512 then
                s.output.commit=s.sequence*2-1;eb();ac.fillStructWithBytes(s.output.packet,bytes)
                s.output.checksum=ec(bytes);eb();s.output.commit=s.sequence*2
            end
        end
    end
    return s
end
