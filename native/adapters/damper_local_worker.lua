-- Optional local actuator. Not composed into the installed Worker yet.
-- Only the native model coefficient arrives from outside; every application
-- and its material-point receipt are handled by consecutive physics callbacks.
local DamperLocalWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,max) return finite(v) and v>=1 and v<=max and v%1==0 end
local function clone(v)
    if type(v)~='table' then return v end
    local r={};for k,x in pairs(v) do r[k]=clone(x) end;return r
end
function DamperLocalWorker.new(options,hash)
    local isolated=clone(options);local p=isolated.damper_profile or {}
    local observer=WheelIntervalObserver.new(isolated,hash)
    local actor=DamperForceWorker.new(isolated,hash)
    local s={generation=0,sequence=0,balance_j=0,held_j=0,pending=nil,model=nil,
        fault=false,reason='',sent=0,acked=0,last_clock=nil,last_model_sequence=0}
    function s:invalidateModel() self.model=nil end
    local function fail(reason)
        s.fault=true;s.reason=reason;actor:stop();observer:reset();s.pending=nil;s.model=nil
        -- Unresolved reservation is never released by a fault or Resume.
    end
    function s:stop()
        if self.pending then fail('stop_with_pending_command') else actor:stop();observer:reset();self.model=nil end
    end
    local function accept(model,clock,generation)
        if type(model)~='table' or not integer(model.sequence,1073741822) or
            model.epoch~=isolated.epoch or model.generation~=generation or model.car_hash~=hash or
            model.patch_code~=p.patch_code or model.evidence_id~=p.evidence_id or
            not finite(model.source_clock) or model.source_clock<0 or model.source_clock>clock or clock-model.source_clock>.1 or
            not integer(model.valid_mask,15) or type(model.coefficient_scale)~='table' then return end
        if model.sequence<=s.last_model_sequence then return end
        for i=1,4 do if not finite(model.coefficient_scale[i]) or model.coefficient_scale[i]<0 then return end end
        s.model=clone(model);s.last_model_sequence=model.sequence
    end
    function s:step(dt,clock,flags,generation,model)
        if not integer(generation,2147483646) then self:stop();return self end
        if generation<self.generation then fail('generation_regressed');return self end
        if generation~=self.generation then
            self:stop();self.generation=generation;self.balance_j=0;self.held_j=0;self.pending=nil;self.model=nil
            self.fault=false;self.reason='';self.last_clock=nil;self.last_model_sequence=0
            actor=DamperForceWorker.new(isolated,hash);observer:reset()
        end
        if self.fault then return self end
        if flags~=15 or not finite(clock) or clock<0 or not finite(dt) or not finite(p.dt) or math.abs(dt-p.dt)>1e-7 then self:stop();return self end
        if self.last_clock and clock<=self.last_clock then fail('clock_not_increasing');return self end
        self.last_clock=clock
        -- Settle the previous application even if the native hint has expired.
        -- No Host ACK participates in this accounting or its completion time.
        local receipt=actor:step(nil,clock,dt,flags,generation)
        if self.pending then
            local work=DamperLocalKernel.receipt(p,self.pending,receipt)
            if not work then fail('invalid_application_or_work');return self end
            local debit=math.max(0,work.upper_j)
            if debit>self.held_j then fail('work_exceeds_reservation');return self end
            self.balance_j=math.min(p.storage_capacity_j,math.max(0,self.balance_j-debit)+math.min(p.storage_capacity_j,math.max(0,-work.upper_j)))
            self.held_j=0;self.pending=nil;self.acked=self.acked+1
        elseif actor.latched then fail('actor_latched');return self end
        local pair=observer:sample(clock,dt,flags,generation)
        accept(model,clock,generation)
        if not pair or not self.model then return self end
        if self.sequence>=1073741822 then fail('sequence_exhausted');return self end
        local candidate=DamperLocalKernel.candidate(p,self.model,pair,self.sequence+1,clock)
        if not candidate then self.reason='qualified_candidate_unavailable';return self end
        local c=candidate.command;local reserve=c.work_bound_j
        if reserve>self.balance_j-self.held_j then self.reason='insufficient_work_reserve';return self end
        self.sequence=c.sequence;self.pending=c;self.held_j=reserve;self.sent=self.sent+1
        local result=actor:step(c,clock,dt,flags,generation)
        if not result.pending or result.fault then fail('application_failed');return self end
        self.reason='waiting_local_receipt';return self
    end
    return s
end
