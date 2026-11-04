-- Additional windup only. Model hints grant neither units nor energy.
local DriveLocalWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,max) return finite(v) and v>=1 and v<=max and v%1==0 end
local function clone(v) if type(v)~='table' then return v end;local out={};for k,x in pairs(v) do out[k]=clone(x) end;return out end
function DriveLocalWorker.new(options,hash)
    local p=clone(assert(options.drive_profile));assert(p.execution_mode=='worker_local_additional_windup_v1')
    assert(p.car_hash==hash and finite(p.dt) and p.dt>0 and p.dt<=.003 and integer(p.evidence_id,9007199254740991))
    assert(p.additional_windup_contract_verified==true and p.same_callback_sample_verified==true and integer(p.patch_code,2147483646))
    assert(finite(p.max_torque_nm) and p.max_torque_nm>0 and p.max_torque_nm<=12)
    for i=1,2 do assert(finite(p.windup_nm_per_normalized[i]) and p.windup_nm_per_normalized[i]~=0 and math.abs(p.windup_nm_per_normalized[i])<=1000)
        assert(finite(p.acceleration_bound_rad_s2[i]) and p.acceleration_bound_rad_s2[i]>=0 and finite(p.omega_error_rad_s[i]) and p.omega_error_rad_s[i]>=0) end
    local capacity=p.storage_capacity_j or 0
    assert(finite(capacity) and capacity>=0 and capacity<=1)
    assert(capacity==0 or p.recovery_contract_verified==true)
    local lsdGain=p.lsd_nm_per_hint or 0
    assert(finite(lsdGain) and lsdGain>=0 and lsdGain<=12)
    assert(lsdGain==0 or (p.additional_lsd_contract_verified==true and p.paired_application_order_verified==true and p.legacy_diff_disabled_verified==true))
    local actorOptions={epoch=options.epoch,car_id=options.car_id,drive_profile=p}
    local actor=DriveForceWorker.new(actorOptions,hash)
    local s={generation=0,sequence=0,lastModelSequence=0,model=nil,pending=nil,fault=false,sent=0,acked=0,reason='',held_j=0,balance_j=0}
    local function fail(reason) actor:stop();s.fault=true;s.reason=reason;s.model=nil;s.pending=nil end
    function s:stop() if self.pending then fail('stopped_with_pending') else actor:stop();self.model=nil end end
    function s:invalidateModel() self.model=nil end
    function s:step(dt,clock,flags,generation,hint)
        if not integer(generation,2147483646) then self:stop();return self end
        if generation<self.generation then fail('generation_regressed');return self end
        if generation~=self.generation then
            self:stop();self.generation=generation;self.pending=nil;self.model=nil;self.lastModelSequence=0;self.held_j=0;self.balance_j=0;self.fault=false;self.lastClock=nil
            actor=DriveForceWorker.new(actorOptions,hash)
        end
        if self.fault then return self end
        if flags~=15 or not finite(clock) or clock<0 or not finite(dt) or dt<=0 or math.abs(dt-p.dt)>1e-7 then self:stop();return self end
        if self.lastClock and clock<=self.lastClock then fail('clock_not_increasing');return self end;self.lastClock=clock
        local patchOK,patch=pcall(function() return tonumber(ac.getPatchVersionCode()) end)
        if not patchOK or patch~=p.patch_code then self:stop();return self end
        local receipt=actor:step(nil,clock,dt,flags,generation)
        if self.pending then
            local c=self.pending
            if receipt.fault or receipt.sequence~=c.sequence or receipt.completed_mask~=3 or receipt.calls~=c.calls or not receipt.samples_valid then fail('invalid_receipt');return self end
            local duration=receipt.clock_after-receipt.clock_before
            if not finite(duration) or duration<=0 or math.abs(duration-p.dt)>1e-7 then fail('invalid_interval');return self end
            local debit,absorbed=0,0
            for i=0,1 do
                local torque,a,b=receipt.applied_nm[i],receipt.omega_before[i],receipt.omega_after[i]
                local bound,error=p.acceleration_bound_rad_s2[i+1],p.omega_error_rad_s[i+1]
                if torque~=c.delta_nm[i] or not finite(a) or not finite(b) or math.abs(a-c.omega[i])>2*error or math.abs(b-a)>bound*duration+2*error then fail('invalid_work_samples');return self end
                local drive=c.drive_nm[i]
                local upper=drive*a+math.abs(drive)*(bound*duration+error)
                debit=debit+math.max(0,upper)*duration
                -- A transmission loss cannot refill the winding bank. Credit
                -- only work guaranteed absorbed by BOTH the applied total
                -- and its attributed windup component; no cancellation credit.
                local windup=c.windup_nm[i]
                local windupUpper=windup*a+math.abs(windup)*(bound*duration+error)
                absorbed=absorbed+math.min(math.max(0,-upper),math.max(0,-windupUpper))*duration
            end
            local pairError=(p.acceleration_bound_rad_s2[1]+p.acceleration_bound_rad_s2[2])*duration+p.omega_error_rad_s[1]+p.omega_error_rad_s[2]
            local pairPower=c.pair_left*(receipt.omega_before[0]-receipt.omega_before[1])+math.abs(c.pair_left)*pairError
            if not finite(pairPower) or pairPower>0 then fail('pair_work_not_passive');return self end
            if not finite(debit) or not finite(absorbed) or debit>self.held_j then fail('work_exceeds_reservation');return self end
            -- Only a completed measured interval earns recovered energy. The
            -- normalized model energy never supplies initial or future credit.
            self.balance_j=math.min(capacity,self.balance_j+self.held_j-debit+absorbed)
            self.pending=nil;self.held_j=0;self.acked=self.acked+1
        elseif actor.latched then fail('actor_latched');return self end
        if hint and integer(hint.sequence,1073741822) and hint.sequence>self.lastModelSequence and
            hint.epoch==options.epoch and hint.generation==generation and hint.car_hash==hash and hint.patch_code==p.patch_code and hint.evidence_id==p.evidence_id and
            finite(hint.source_clock) and hint.source_clock>=0 and hint.source_clock<=clock and clock-hint.source_clock<=.1 and
            finite(hint.demand) and math.abs(hint.demand)<=1 and finite(hint.soft) and math.abs(hint.soft)<=1 and finite(hint.transmission) and math.abs(hint.transmission)<=2 and
            finite(hint.windup) and math.abs(hint.windup)<=2 and math.abs(hint.transmission+hint.windup-(hint.soft-hint.demand))<=1e-12 and (lsdGain==0 or (finite(hint.lsd_capacity) and hint.lsd_capacity>=0 and hint.lsd_capacity<=1)) then
            self.model=clone(hint);self.lastModelSequence=hint.sequence
        end
        local m=self.model;if not m or clock<m.source_clock or clock-m.source_clock>.1 then self.reason='model_unavailable';return self end
        local torque,omega,windup,drive={},{},{},{};local reserve=0;local duration=p.dt+1e-7;local calls=0
        for i=0,1 do
            drive[i]=(m.transmission+m.windup)*p.windup_nm_per_normalized[i+1]
            torque[i]=drive[i]
            windup[i]=m.windup*p.windup_nm_per_normalized[i+1]
            local ok,value=pcall(physics.getWheelAngularSpeed,0,i+2)
            if not ok or not finite(value) or math.abs(value)>2000 or math.abs(torque[i])>p.max_torque_nm then self.reason='candidate_unavailable';return self end
            omega[i]=value
            -- Include uncertainty between the preflight and Actor sample.
            local error=p.acceleration_bound_rad_s2[i+1]*duration+3*p.omega_error_rad_s[i+1]
            reserve=reserve+math.max(0,torque[i]*value+math.abs(torque[i])*error)*duration
            end
        local pair=0
        if lsdGain>0 then
            local difference=omega[0]-omega[1]
            pair=-math.max(-1,math.min(1,difference))*m.lsd_capacity*lsdGain
            local uncertainty=(p.acceleration_bound_rad_s2[1]+p.acceleration_bound_rad_s2[2])*duration+3*(p.omega_error_rad_s[1]+p.omega_error_rad_s[2])
            local power=pair*difference+math.abs(pair)*uncertainty
            if not finite(power) or power>0 then self.reason='pair_work_not_passive';return self end
            torque[0]=drive[0]+pair;torque[1]=drive[1]-pair
        end
        for i=0,1 do
            if not finite(torque[i]) or math.abs(torque[i])>p.max_torque_nm then self.reason='combined_torque_limit';return self end
            if torque[i]~=0 then calls=calls+1 end
        end
        -- No advance credit: recovery is optional and starts empty. This
        -- candidate may return only energy accepted from earlier receipts.
        if not finite(reserve) or reserve>self.balance_j then self.reason='positive_work_source_unavailable';return self end
        if self.sequence>=1073741822 then fail('sequence_exhausted');return self end
        self.sequence=self.sequence+1
        local c={sequence=self.sequence,epoch=options.epoch,generation=generation,car_hash=hash,evidence_id=p.evidence_id,source_clock=clock,delta_nm=torque,drive_nm=drive,pair_left=pair,paired_coupling=lsdGain>0,windup_nm=windup,omega=omega,calls=calls}
        self.pending=c;self.balance_j=self.balance_j-reserve;self.held_j=reserve;self.sent=self.sent+1
        local applied=actor:step(c,clock,dt,flags,generation)
        if not applied.pending or applied.fault then fail('application_failed');return self end
        self.reason='waiting_local_receipt';return self
    end
    return s
end
