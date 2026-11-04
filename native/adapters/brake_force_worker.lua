---@diagnostic disable: undefined-global
-- Independently registered calibration is required. Commands cannot qualify it.
local BrakeForceWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function BrakeForceWorker.new(options,carHash)
    local s={lastSequence=0,generation=0,latched=false}
    local p={}
    for key,value in pairs(options.brake_profile or {}) do p[key]=value end
    local rearOwnerReserved=options.drive_profile~=nil or options.wheel_torque_profile~=nil
    local qualified=p.units_verified==true and p.baseline_isolated==true and p.exclusive_owner==true and
        p.abs_contract_verified==true and p.native_fade_double_counting_excluded==true and p.phase_verified==true and
        p.car_hash==carHash and finite(p.evidence_id) and p.evidence_id>=1 and p.evidence_id%1==0 and p.evidence_id<=9007199254740991 and
        (p.baseline_mode==1 or p.baseline_mode==2) and finite(p.baseline_scale_nm_per_raw) and
        p.baseline_scale_nm_per_raw>0 and p.baseline_scale_nm_per_raw<=1000 and finite(p.command_scale_raw_per_nm) and
        math.abs(p.command_scale_raw_per_nm)>0 and math.abs(p.command_scale_raw_per_nm)<=1000 and
        finite(p.dt) and p.dt>0 and p.dt<=.02
    function s:apply(c,clock,dt,flags,generation)
        local r={sequence=c and c.sequence or 0,generation=generation,completed_mask=0,calls=0,attempts=0,fault=0}
        local function reject(code) r.fault=code;return r end
        if not finite(generation) or generation%1~=0 or generation<1 or generation>=2147483647 or generation<self.generation then return reject(9) end
        if generation~=self.generation then self.generation=generation;self.lastSequence=0;self.latched=false;self.lastClock=nil end
        -- A four-wheel legacy command includes the reserved rear pair. It
        -- cannot run beside the dedicated owner; no partial front-only fallback.
        if rearOwnerReserved then return reject(10) end
        if not qualified then return reject(1) end
        if self.latched then return reject(2) end
        if flags~=15 or not finite(clock) or clock<0 or not finite(dt) or math.abs(dt-p.dt)>1e-7 then return reject(3) end
        local safe,allowed=pcall(function()
            local sim=ac.getSim()
            return sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and
                sim.isSessionFinished~=true and sim.isReplayOnlyMode~=true and ac.getCarID(0)==options.car_id and physics.allowed()==true
        end)
        if not safe or allowed~=true then return reject(3) end
        if not c or c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=carHash or c.evidence_id~=p.evidence_id then return reject(4) end
        if not finite(c.sequence) or c.sequence%1~=0 or c.sequence<1 or c.sequence>=1073741823 or c.sequence<=self.lastSequence then return reject(5) end
        self.lastSequence=c.sequence
        if not finite(c.source_clock) or c.source_clock<0 or c.source_clock>clock or clock-c.source_clock>.006 or c.mask~=15 then return reject(6) end
        if self.lastClock and clock<=self.lastClock then return reject(6) end
        local torques={}
        local ok,message=pcall(function()
            local car=ac.getCar(0);local cp=ac.getCarPhysics(0)
            assert(car and car.physicsAvailable==true and car.absInAction==false and finite(car.brake) and car.brake>.001 and
                finite(car.handbrake) and car.handbrake<=.001 and cp and cp.isAvailable==true and cp.wheels,'Brake conditions')
            for i=0,3 do
                local w=cp.wheels[i];local omega=physics.getWheelAngularSpeed(0,i)
                assert(w and finite(w.brakeTorque) and finite(w.handbrakeTorque) and math.abs(w.handbrakeTorque)<=1e-9 and
                    finite(omega) and math.abs(omega)>=1 and math.abs(omega)<=2000,'Wheel input')
                local baseline=w.brakeTorque*p.baseline_scale_nm_per_raw
                if p.baseline_mode==2 then assert(w.brakeTorque>=0);baseline=baseline*(omega>0 and -1 or 1) end
                local ratio=c.ratio[i];local target=c.delta_raw[i]
                assert(finite(baseline) and math.abs(baseline)<=20000 and baseline*omega<=0 and finite(ratio) and ratio>=0 and ratio<=1 and
                    finite(c.baseline_nm[i]) and math.abs(c.baseline_nm[i]-baseline)<=1e-6*math.max(1,math.abs(baseline)), 'Baseline changed')
                local expected=baseline*(ratio-1)*p.command_scale_raw_per_nm
                assert(finite(target) and math.abs(target)<=20000 and math.abs(target-expected)<=1e-6*math.max(1,math.abs(expected)), 'Wrong residual')
                assert(baseline*ratio*omega<=0,'Combined power')
                torques[i]=target
            end
        end)
        if not ok then r.detail=tostring(message);return reject(7) end
        self.lastClock=clock
        for i=0,3 do
            if torques[i]~=0 then
                r.attempts=r.attempts+1
                local applied,error=pcall(physics.addWheelTorque,0,i,torques[i])
                if not applied then self.latched=true;r.detail=tostring(error);return reject(8) end
                r.calls=r.calls+1
            end
            r.completed_mask=r.completed_mask+2^i
        end
        return r
    end
    return s
end
