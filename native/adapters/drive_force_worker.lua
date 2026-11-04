-- Source-only RWD actuator. Registered calibration is independent of commands.
local DriveForceWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function DriveForceWorker.new(options,carHash)
    local p={};for k,v in pairs(options.drive_profile or {}) do p[k]=v end
    if type(p.acceleration_bound_rad_s2)=='table' then p.acceleration_bound_rad_s2={p.acceleration_bound_rad_s2[1],p.acceleration_bound_rad_s2[2]} end
    if type(p.omega_error_rad_s)=='table' then p.omega_error_rad_s={p.omega_error_rad_s[1],p.omega_error_rad_s[2]} end
    local qualified=p.car_hash==carHash and p.units_verified==true and p.rwd_verified==true and
        p.exclusive_owner==true and p.controls_contract_verified==true and p.action_interval_verified==true and
        p.constant_torque_verified==true and finite(p.command_scale_raw_per_nm) and
        math.abs(p.command_scale_raw_per_nm)>0 and math.abs(p.command_scale_raw_per_nm)<=1000 and
        finite(p.dt) and p.dt>0 and p.dt<=.003 and finite(p.evidence_id) and p.evidence_id>=1 and
        p.evidence_id%1==0 and p.evidence_id<=9007199254740991
    local s={pending=nil,generation=0,lastSequence=0,latched=false}
    local function safe()
        local sim=ac.getSim();local car=ac.getCar(0)
        return sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and
            sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true and ac.getCarID(0)==options.car_id and
            physics.allowed()==true and car and car.physicsAvailable==true and car.absInAction==false and
            finite(car.handbrake) and car.handbrake<=.001
    end
    function s:stop() if self.pending then self.latched=true end;self.pending=nil end
    function s:step(c,clock,dt,flags,generation)
        local r={sequence=0,completed_mask=0,fault=true,samples_valid=false,work_measurement_verified=false,calls=0}
        if not finite(generation) or generation%1~=0 or generation<1 or generation>=2147483647 or generation<self.generation then return r end
        if generation~=self.generation then self:stop();self.generation=generation;self.lastSequence=0;self.latched=false end
        local ok,allowed=pcall(safe)
        if not qualified or self.latched or flags~=15 or not ok or not allowed or not finite(clock) or
            not finite(dt) or math.abs(dt-p.dt)>1e-7 then self:stop();return r end
        if self.pending then
            local previous=self.pending;self.pending=nil
            r=previous;r.clock_after=clock;r.omega_after={}
            local sampled,message=pcall(function()
                assert(math.abs(clock-r.clock_before-p.dt)<=1e-7,'Nonconsecutive interval')
                for i=0,1 do local v=physics.getWheelAngularSpeed(0,i+2);assert(finite(v) and math.abs(v)<=2000);r.omega_after[i]=v end
            end)
            if not sampled then self.latched=true;r.detail=tostring(message);r.fault=true;return r end
            r.samples_valid=true;r.fault=false;return r -- no second command in this interval
        end
        if not c then return r end
        if c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=carHash or c.evidence_id~=p.evidence_id or
            not finite(c.sequence) or c.sequence<1 or c.sequence%1~=0 or c.sequence>9007199254740991 or c.sequence<=self.lastSequence or
            not finite(c.source_clock) or clock<c.source_clock or clock-c.source_clock>.003001 then return r end
        self.lastSequence=c.sequence
        r={sequence=c.sequence,epoch=options.epoch,generation=generation,car_hash=carHash,clock_before=clock,
            completed_mask=0,calls=0,fault=true,samples_valid=false,work_measurement_verified=false,applied_nm={},omega_before={}}
        local targets={};local order={0,1}
        local prepared,message=pcall(function()
            for i=0,1 do
                local t=c.delta_nm[i];local omega=physics.getWheelAngularSpeed(0,i+2)
                assert(finite(t) and math.abs(t)<=40000 and finite(omega) and math.abs(omega)<=2000)
                r.applied_nm[i]=t;r.omega_before[i]=omega;targets[i]=t*p.command_scale_raw_per_nm
                assert(finite(targets[i]))
            end
        end)
        if not prepared then r.detail=tostring(message);return r end
        if c.paired_coupling==true then
            local ordered,detail=pcall(function()
                assert(p.paired_application_order_verified==true,'Unqualified pair ordering')
                local upper={}
                for i=0,1 do
                    local a,e=p.acceleration_bound_rad_s2[i+1],p.omega_error_rad_s[i+1]
                    assert(finite(a) and a>=0 and finite(e) and e>=0,'Unqualified pair bounds')
                    upper[i]=r.applied_nm[i]*r.omega_before[i]+math.abs(r.applied_nm[i])*(a*(p.dt+1e-7)+e)
                    assert(finite(upper[i]),'Nonfinite pair power')
                end
                if upper[1]<upper[0] then order={1,0} end
            end)
            if not ordered then r.detail=tostring(detail);return r end
        end
        for index=1,2 do
            local i=order[index]
            if targets[i]~=0 then
                local applied,error=pcall(physics.addWheelTorque,0,i+2,targets[i])
                if not applied then self.latched=true;r.detail=tostring(error);return r end
                r.calls=r.calls+1
            end
            r.completed_mask=r.completed_mask+2^i
        end
        self.pending=r
        return {sequence=0,pending=true,fault=false,work_measurement_verified=false}
    end
    return s
end
