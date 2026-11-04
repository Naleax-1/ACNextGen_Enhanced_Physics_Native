-- Additional elastic force, using shared paired-point kinematics/work algebra.
local SpringLocalKernel={}
local function number(v) assert(type(v)=='number' and v==v and math.abs(v)<math.huge);return v end
local function integer(v,max) number(v);assert(v>=1 and v<=max and v%1==0);return v end
local function errorAt(p,i) local v=number(p.current_height_error_m[i+1]);assert(v>=0 and v<=.001);return v end
local function context(p,input) return input and input.car_hash==p.car_hash and input.patch_code==p.patch_code and input.evidence_id==p.evidence_id end
function SpringLocalKernel.anchor(p)
    local s={reference=nil,nextLease=1,first=nil,last=nil,firstClock=nil,lastClock=nil,lastSequence=0}
    function s:invalidate() self.reference=nil;self.first=nil;self.last=nil;self.firstClock=nil;self.lastClock=nil;self.lastSequence=0 end
    function s:permits(lease,input,enabled)
        local r=self.reference
        if not r then return false end
        if not enabled or not context(p,input) or r.epoch~=input.epoch or r.generation~=input.generation or
            input.clock<self.lastClock or input.sequence<self.lastSequence or
            ((input.clock==self.lastClock)~=(input.sequence==self.lastSequence)) then self:invalidate();return false end
        if lease~=r.lease then return false end
        self.lastClock=input.clock;self.lastSequence=input.sequence;return true
    end
    function s:observe(input,c)
        if self.reference then
            if not c or not c.enabled or not c.offline or not c.unpaused then self:invalidate() end
            return self.reference
        end
        local ok,ready=pcall(function()
            assert(context(p,input));integer(input.sequence,1073741822)
            assert(p.additional_contract_verified==true and p.geometry_verified==true and p.height_error_verified==true)
            local policy=p.reference
            assert(policy.stationary_contract_verified==true and policy.ground_contact_contract_verified==true)
            local dwell,speed,drift=number(policy.dwell_s),number(policy.max_speed_ms),number(policy.max_height_drift_m)
            assert(dwell>=.05 and dwell<=2 and speed>=0 and speed<=.005 and drift>=0 and drift<=.001)
            for _,k in ipairs({'enabled','offline','unpaused','neutral','zero_throttle','steering_centered','handbrake_on','all_ground_contacts'}) do assert(c[k]==true) end
            if self.first then
                assert(input.epoch==self.first.epoch and input.generation==self.first.generation and input.sequence>self.lastSequence and
                    input.clock>self.lastClock and input.clock-self.lastClock<=.003001)
            end
            local heights={}
            for i=0,3 do
                local q=input.points[i];heights[i+1]=number(q.height);assert(math.abs(q.height)<=3)
                assert(number(q.body_speed)<=speed and number(q.wheel_speed)<=speed);local e=errorAt(p,i)
                if self.first then assert(math.abs(q.height-self.first.heights[i+1])+e+errorAt(p,i)<=drift) end
            end
            if not self.first then self.first={epoch=input.epoch,generation=input.generation,heights=heights};self.firstClock=input.clock end
            self.lastClock=input.clock;self.lastSequence=input.sequence
            if input.clock-self.firstClock+1e-9<dwell then return false end
            integer(self.nextLease,9007199254740991)
            self.reference={epoch=input.epoch,generation=input.generation,car_hash=p.car_hash,patch_code=p.patch_code,evidence_id=p.evidence_id,
                lease=self.nextLease,height_m=heights,error_m={},stationary_verified=true,height_error_verified=true}
            for i=1,4 do self.reference.error_m[i]=p.current_height_error_m[i] end
            self.nextLease=self.nextLease+1;return true
        end)
        if not ok then self:invalidate();return nil end
        return ready and self.reference or nil
    end
    return s
end
function SpringLocalKernel.candidate(p,m,input,r,sequence)
    local ok,result=pcall(function()
        assert(p.additional_contract_verified==true and p.geometry_verified==true and p.height_error_verified==true and p.receipt_bounds_verified==true)
        local gain=number(p.additional_gain_n_m);assert(gain>=0 and gain<=120 and p.max_force_n<=12)
        assert(context(p,input) and type(m)=='table' and r and r.stationary_verified==true and r.height_error_verified==true)
        integer(r.lease,9007199254740991);integer(m.sequence,1073741822);integer(m.valid_mask,15)
        for _,k in ipairs({'epoch','generation','car_hash','patch_code','evidence_id'}) do assert(m[k]==input[k] and r[k]==input[k]) end
        local age=input.clock-number(m.source_clock);assert(age>=0 and age<=.1)
        local scalars,bias={},{ }
        for i=0,3 do if m.valid_mask%2^(i+1)>=2^i then
            local ratio=number(m.excess_ratio[i+1]);assert(ratio>=0)
            local rest=number(r.height_m[i+1]);assert(math.abs(rest)<=3)
            local e0=number(r.error_m[i+1]);assert(e0>=0 and e0<=.001)
            local x=number(input.points[i].height-rest);assert(math.abs(x)<=1)
            local stiffness=math.min(120,gain*ratio);assert(stiffness==stiffness)
            scalars[i]=math.max(-p.max_force_n,math.min(p.max_force_n,stiffness*x));bias[i+1]=stiffness*(e0+errorAt(p,i))
        end end
        local candidate=assert(DamperLocalKernel.command(p,input,sequence,m.valid_mask,scalars))
        local certificateError=0
        for i=0,3 do if m.valid_mask%2^(i+1)>=2^i then
            local eb,ew=number(p.body_displacement_error_m[i+1]),number(p.wheel_displacement_error_m[i+1])
            assert(eb>=0 and eb<=.001 and ew>=0 and ew<=.001)
            local norm2=0;for a=1,3 do norm2=norm2+candidate.command.world_force_n[i][a]^2 end
            certificateError=certificateError+math.sqrt(norm2)*(eb+ew)
        end end
        candidate.physical_work_upper_j=candidate.work_upper_j;candidate.receipt_error_bound_j=certificateError
        candidate.work_upper_j=number(candidate.work_upper_j+2*certificateError)
        candidate.command.work_bound_j=math.max(0,candidate.work_upper_j);assert(candidate.command.work_bound_j<=1)
        candidate.reference_lease=r.lease;candidate.force_bias_bound_n=bias;return candidate
    end)
    if ok then return result,nil end;return nil,tostring(result)
end
