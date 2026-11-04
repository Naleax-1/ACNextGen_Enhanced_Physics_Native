---@diagnostic disable: undefined-global
-- Read-only candidate metadata. Does not assign a torque sign or SI approval.
local M={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
-- Explicit diagnostic call only: never used to choose a control velocity.
-- SDK frame equality does not certify the native physics update phase.
function M.readWheelReference()
    local r={schema=1,source='physics_worker_wheel_reference',valid_mask=0,wheels={},
        physics_phase_verified=false,units_qualified=false,actuation_allowed=false}
    local function field(o,k) local ok,v=pcall(function() return o[k] end);if ok then return v end end
    local function stamp(v,integer)
        if type(v)~='number' and type(v)~='cdata' then return nil end
        local n=tonumber(v)
        if finite(n) and n>=0 and n<=9007199254740991 and (not integer or n%1==0) then return n end
    end
    local ok,err=pcall(function()
        local before=stamp(ac.getSim().frame,true)
        local id=ac.getCarID(0);local car=ac.getCar(0);local cp=ac.getCarPhysics(0)
        local timeBefore=stamp(field(car,'timestamp'),false)
        local physicsAvailable=field(car,'physicsAvailable')==true and field(cp,'isAvailable')==true
        local rows={};local mask=0
        for i=0,3 do
            local w=field(field(car,'wheels'),i);local pw=field(field(cp,'wheels'),i)
            local row={index=i,available={}}
            local apiOK,omega=pcall(physics.getWheelAngularSpeed,0,i)
            local values={api_angular_speed_raw=apiOK and omega or nil,
                displayed_angular_speed_raw=field(w,'angularSpeed'),shaft_velocity_raw=field(pw,'shaftVelocity'),
                angular_inertia_raw=field(pw,'angularInertia'),shaft_inertia_raw=field(pw,'shaftInertia')}
            for key,value in pairs(values) do if finite(value) then row[key]=value end end
            for _,key in ipairs({'api_angular_speed_raw','displayed_angular_speed_raw','shaft_velocity_raw',
                'angular_inertia_raw','shaft_inertia_raw'}) do row.available[key]=row[key]~=nil end
            if row.available.api_angular_speed_raw and row.available.displayed_angular_speed_raw and
                row.available.shaft_velocity_raw then mask=mask+2^i end
            rows[i+1]=row
        end
        local timeAfter=stamp(field(car,'timestamp'),false)
        local idAfter=ac.getCarID(0);local after=stamp(ac.getSim().frame,true)
        r.sdk_frame_before=before;r.sdk_frame_after=after;r.car_id=id
        r.car_record_time_before_ms_raw=timeBefore;r.car_record_time_after_ms_raw=timeAfter
        r.same_sdk_frame=before~=nil and before==after
        r.same_car_id=type(id)=='string' and id~='' and id==idAfter
        r.same_car_record_time=timeBefore~=nil and timeBefore==timeAfter
        if physicsAvailable and r.same_sdk_frame and r.same_car_id and r.same_car_record_time then
            r.wheels=rows;r.valid_mask=mask
        end
    end)
    if not ok then r.fault=tostring(err) end
    r.status=r.valid_mask==15 and 'available_unqualified' or 'unavailable_or_partial'
    return r
end
local REFERENCE_FORMAT=[[
uint32_t abi,epoch,sequence,generation,car_hash,valid_mask,reserved[2];
double clock,sdk_frame_before,sdk_frame_after,car_time_before,car_time_after;
double api_omega[4],display_omega[4],shaft_velocity[4];
]]
function M.newReference(options,carHash)
    local make=assert(ac.StructItem.build or ac.StructItem.combine)
    local state={sequence=0,packet=make(REFERENCE_FORMAT)}
    state.output=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.WheelReference',
        'uint32_t commit,checksum;struct {'..REFERENCE_FORMAT..'} packet;',false)
    function state:step(clock,generation,flags)
        if self.sequence>=1073741822 then self.output.commit=0;return end
        self.sequence=self.sequence+1
        local p=self.packet;p.abi=1;p.epoch=options.epoch;p.sequence=self.sequence
        p.generation=generation;p.car_hash=carHash;p.clock=finite(clock) and clock or 0
        p.valid_mask=0;p.reserved[0]=0;p.reserved[1]=0
        p.sdk_frame_before=0;p.sdk_frame_after=0;p.car_time_before=0;p.car_time_after=0
        for i=0,3 do p.api_omega[i]=0;p.display_omega[i]=0;p.shaft_velocity[i]=0 end
        local r=flags==15 and M.readWheelReference() or nil
        if r and r.valid_mask==15 then
            p.valid_mask=15;p.sdk_frame_before=r.sdk_frame_before;p.sdk_frame_after=r.sdk_frame_after
            p.car_time_before=r.car_record_time_before_ms_raw;p.car_time_after=r.car_record_time_after_ms_raw
            for i=0,3 do local w=r.wheels[i+1]
                p.api_omega[i]=w.api_angular_speed_raw;p.display_omega[i]=w.displayed_angular_speed_raw
                p.shaft_velocity[i]=w.shaft_velocity_raw end
        end
        local bytes=ac.structBytes(p);local a,b=1,0
        for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
        self.output.commit=self.sequence*2-1
        if ac.memoryBarrier then ac.memoryBarrier() end
        ac.fillStructWithBytes(self.output.packet,bytes);self.output.checksum=b*65536+a
        if ac.memoryBarrier then ac.memoryBarrier() end
        self.output.commit=self.sequence*2
    end
    function state:disable() self:step(0,0,0) end
    return state
end
function M.read()
    local result={valid_mask=0,units_qualified=false,baseline_isolated=false,wheels={}}
    local ok,value=pcall(function()
        if ac.getSim then local sim=ac.getSim();result.sdk_frame_before=sim and tonumber(sim.frame) end
        local car=ac.getCar(0)
        local cp=ac.getCarPhysics(0)
        if not car or car.physicsAvailable~=true or not cp or cp.isAvailable~=true or not cp.wheels then return end
        if type(car.absInAction)~='boolean' or not finite(car.brake) or not finite(car.handbrake) then return end
        result.abs_in_action=car.absInAction;result.brake_input=car.brake;result.handbrake_input=car.handbrake
        for i=0,3 do
            local w=cp.wheels[i]
            local omega=physics.getWheelAngularSpeed(0,i)
            if not w or not finite(w.brakeTorque) or not finite(w.handbrakeTorque) or not finite(omega) then return end
            result.wheels[i]={brake_torque_raw=w.brakeTorque,handbrake_torque_raw=w.handbrakeTorque,angular_speed_raw=omega}
        end
        result.valid_mask=15
        if ac.getSim then local sim=ac.getSim();result.sdk_frame_after=sim and tonumber(sim.frame) end
        if finite(result.sdk_frame_before) and finite(result.sdk_frame_after) and
            result.sdk_frame_before~=result.sdk_frame_after then result.valid_mask=0 end
    end)
    if not ok then result.valid_mask=0;result.fault=tostring(value) end
    return result
end
local FORMAT=[[
uint32_t abi,epoch,sequence,generation,car_hash,valid_mask,abs_in_action,units_qualified;
double dt,clock,brake_input,handbrake_input;
double brake_torque_raw[4],handbrake_torque_raw[4],angular_speed_raw[4];
]]
function M.new(options,carHash)
    local make=assert(ac.StructItem.build or ac.StructItem.combine)
    local state={sequence=0,packet=make(FORMAT)}
    local timingFormat='uint32_t abi,epoch,sequence,generation,car_hash,flags,reserved[2];double clock,sdk_frame_before,sdk_frame_after;'
    state.timing=make(timingFormat)
    state.timingOutput=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BrakeTiming',
        'uint32_t commit,checksum;struct {'..timingFormat..'} packet;',false)
    state.output=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BrakeSensor',
        'uint32_t commit,checksum;struct {'..FORMAT..'} packet;',false)
    local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
    function state:step(dt,clock,flags,generation)
        if self.sequence>=1073741822 then self.output.commit=0;self.timingOutput.commit=0;return end
        self.sequence=self.sequence+1
        local p=self.packet;p.abi=1;p.epoch=options.epoch;p.sequence=self.sequence;p.generation=generation
        p.car_hash=carHash;p.valid_mask=0;p.units_qualified=0;p.abs_in_action=2
        p.dt=finite(dt) and dt or 0;p.clock=finite(clock) and clock or 0;p.brake_input=0;p.handbrake_input=0
        for i=0,3 do p.brake_torque_raw[i]=0;p.handbrake_torque_raw[i]=0;p.angular_speed_raw[i]=0 end
        local r=flags==15 and M.read() or nil
        if r and r.valid_mask==15 then
            p.valid_mask=15;p.abs_in_action=r.abs_in_action and 1 or 0
            p.brake_input=r.brake_input;p.handbrake_input=r.handbrake_input
            for i=0,3 do
                p.brake_torque_raw[i]=r.wheels[i].brake_torque_raw
                p.handbrake_torque_raw[i]=r.wheels[i].handbrake_torque_raw
                p.angular_speed_raw[i]=r.wheels[i].angular_speed_raw
            end
        end
        local bytes=ac.structBytes(p);local a,b=1,0
        for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
        self.output.commit=self.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,bytes)
        self.output.checksum=b*65536+a;barrier();self.output.commit=self.sequence*2
        local t=self.timing;t.abi=1;t.epoch=options.epoch;t.sequence=self.sequence;t.generation=generation;t.car_hash=carHash
        t.clock=p.clock;t.flags=0;t.reserved[0]=0;t.reserved[1]=0;t.sdk_frame_before=0;t.sdk_frame_after=0
        local before,after=r and r.sdk_frame_before,r and r.sdk_frame_after
        if r and finite(before) and finite(after) and before>=0 and after>=before and
            before%1==0 and after%1==0 and after<=9007199254740991 then
            t.sdk_frame_before=before;t.sdk_frame_after=after;t.flags=1
        end
        local timingBytes=ac.structBytes(t);a,b=1,0
        for i=1,#timingBytes do a=(a+string.byte(timingBytes,i))%65521;b=(b+a)%65521 end
        self.timingOutput.commit=self.sequence*2-1;barrier();ac.fillStructWithBytes(self.timingOutput.packet,timingBytes)
        self.timingOutput.checksum=b*65536+a;barrier();self.timingOutput.commit=self.sequence*2
    end
    function state:disable() self:step(.003,0,0,0) end
    return state
end
local BrakeSensor=M
