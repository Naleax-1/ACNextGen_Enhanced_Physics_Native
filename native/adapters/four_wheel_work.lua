-- Worker-local counterpart of four_wheel_work.hpp. No API writes or model math.
-- Plans and observations use zero-based wheel arrays; profile arrays are one-based.
local FourWheelWork={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function clone(v) if type(v)~='table' then return v end;local r={};for k,x in pairs(v) do r[k]=clone(x) end;return r end
local function integer(v,max) return finite(v) and v>=1 and v<=max and v%1==0 end
local tiny=4.9406564584124654e-324
-- Outward slack also covers the Lua evaluation of the C++ nextafter bound.
-- A positive subnormal must never become a zero reservation.
local function up(v) return v>0 and v*(1+1e-12)+tiny or 0 end
local function down(v) return v>0 and math.max(0,v*(1-1e-12)-tiny) or 0 end
function FourWheelWork.new(profile,hash)
    local p=clone(profile)
    assert(type(p)=='table' and p.car_hash==hash and integer(p.evidence_id,9007199254740991))
    assert(finite(p.dt) and p.dt>0 and p.dt<=.003)
    assert(finite(p.max_rear_additional_nm) and p.max_rear_additional_nm>0 and p.max_rear_additional_nm<=12)
    for _,key in ipairs({'units_verified','baseline_isolated','native_baseline_interval_verified','bounds_verified','torque_error_verified',
        'paired_application_order_verified','phase_verified','single_four_wheel_owner_verified','action_interval_verified','constant_torque_verified','sample_units_verified'}) do assert(p[key]==true,key) end
    assert(p.recovery_contract_verified~=true or p.windup_scale_verified==true)
    for _,key in ipairs({'acceleration_bound_rad_s2','omega_error_rad_s','total_torque_error_nm'}) do
        assert(type(p[key])=='table',key)
        for i=1,4 do local x=p[key][i];assert(finite(x) and x>=0 and (key~='total_torque_error_nm' or x<=20000),key) end
    end
    local function bound(c,omega,duration,preflight)
        if type(c)~='table' or type(omega)~='table' or c.car_hash~=hash or c.evidence_id~=p.evidence_id or not finite(duration) or duration<=0 or math.abs(duration-p.dt)>1e-7 then return nil,'context_or_interval' end
        for _,key in ipairs({'baseline_nm','ratio','omega','drive_nm','pair_nm','delta_nm'}) do if type(c[key])~='table' then return nil,'missing_components' end end
        if p.recovery_contract_verified and (c.windup_qualified~=true or type(c.windup_nm)~='table') then return nil,'windup_unqualified' end
        for i=0,1 do
            local d,t=c.drive_nm[i],c.pair_nm[i]
            if not finite(d) or math.abs(d)>12 or not finite(t) or math.abs(t)>12 or math.abs(d+t)>p.max_rear_additional_nm then return nil,'rear_limit' end
            if p.recovery_contract_verified and (not finite(c.windup_nm[i]) or math.abs(c.windup_nm[i])>12) then return nil,'windup_limit' end
        end
        if c.pair_nm[0]~=-c.pair_nm[1] then return nil,'pair_not_closed' end
        local uncertainty,errors,known={},{},{};local front,drive,rearErrorAbsorption=0,0,0
        for i=0,3 do
            local b,r,w=c.baseline_nm[i],c.ratio[i],omega[i]
            if not finite(b) or math.abs(b)>20000 or not finite(r) or r<0 or r>1 or not finite(w) or math.abs(w)>2000 or not finite(c.omega[i]) or math.abs(c.omega[i])<1 or math.abs(c.omega[i])>2000 then return nil,'wheel_input' end
            local additional=i>=2 and c.drive_nm[i-2]+c.pair_nm[i-2] or 0
            local delta=b*r-b+additional
            if not finite(delta) or math.abs(delta)>20000 or c.delta_nm[i]~=delta then return nil,'noncanonical_correction' end
            local u=p.acceleration_bound_rad_s2[i+1]*duration+(preflight and 3 or 1)*p.omega_error_rad_s[i+1]
            if not finite(u) or b*w+math.abs(b)*u>0 then return nil,'baseline_interval' end
            uncertainty[i]=u
            local exactFront=i<2 and (r==0 or delta==0)
            local exactIdle=delta==0 and r==1 and (i<2 or (c.drive_nm[i-2]==0 and c.pair_nm[i-2]==0))
            local rounding=0
            if not exactFront and not exactIdle then
                local magnitude=math.abs(b)+math.abs(b*r)+math.abs(delta)+(i>=2 and math.abs(c.drive_nm[i-2])+math.abs(c.pair_nm[i-2]) or 0)
                rounding=64*2.220446049250313e-16*magnitude+64*tiny
            end
            errors[i]=(p.total_torque_error_nm[i+1]+rounding)*(math.abs(w)+u)
            local combined=b*r+additional
            known[i]=combined*w+math.abs(combined)*u
            if i<2 then front=front+math.max(0,known[i]+errors[i])
            else
                local d=c.drive_nm[i-2];local du=d*w+math.abs(d)*u
                local native=b*r*w+math.abs(b*r)*u
                drive=drive+math.max(0,du)
                rearErrorAbsorption=rearErrorAbsorption+math.max(0,-du)+math.max(0,-native)
            end
        end
        local pair=c.pair_nm[0]*(omega[2]-omega[3])+math.abs(c.pair_nm[0])*(uncertainty[2]+uncertainty[3])
        if not finite(pair) or pair>0 then return nil,'pair_not_passive' end
        -- Only cover concurrent numerical/actuator error. Never reduce the
        -- positive drive budget or refill storage using native brake work.
        local completed=drive+math.max(0,pair+errors[2]+errors[3]-rearErrorAbsorption)
        local first=math.max(0,math.min(known[2],known[3])+math.max(errors[2],errors[3]))
        local power=front+(preflight and math.max(completed,first) or completed)
        if not finite(power) or power<0 then return nil,'invalid_power' end
        local positive=power>0 and up(power*duration) or 0
        if power>0 and positive==0 then positive=tiny end
        local absorbed=0
        if not preflight and p.recovery_contract_verified then
            for i=2,3 do
                local d,w=c.drive_nm[i-2],c.windup_nm[i-2]
                local du=d*omega[i]+math.abs(d)*uncertainty[i]+errors[i]
                local wu=w*omega[i]+math.abs(w)*uncertainty[i]+errors[i]
                absorbed=absorbed+math.min(math.max(0,-du),math.max(0,-wu))
            end
            absorbed=down(absorbed*duration)
        end
        if not finite(positive) or not finite(absorbed) then return nil,'nonfinite_work' end
        return {positive_work_upper_j=positive,absorbed_work_lower_j=absorbed}
    end
    local s={}
    function s:reserve(c) return bound(c,type(c)=='table' and c.omega or nil,p.dt+1e-7,true) end
    function s:receipt(c,r)
        if not r or r.sequence~=c.sequence or r.epoch~=c.epoch or r.generation~=c.generation or r.car_hash~=hash or r.evidence_id~=p.evidence_id then return nil,'receipt_context' end
        local calls=0;for i=0,3 do if c.delta_nm[i]~=0 then calls=calls+1 end end
        if r.fault or r.samples_valid~=true or r.completed_mask~=15 or r.calls~=calls or r.attempts~=calls or not finite(r.clock_before) or not finite(r.clock_after) or
            r.clock_before<c.source_clock or r.clock_before-c.source_clock>.003001 then return nil,'incomplete_receipt' end
        local duration=r.clock_after-r.clock_before
        for _,key in ipairs({'applied_nm','baseline_nm','ratio','omega_before','omega_after'}) do if type(r[key])~='table' then return nil,'missing_samples' end end
        for i=0,3 do
            local a,b=r.omega_before[i],r.omega_after[i]
            if r.applied_nm[i]~=c.delta_nm[i] or r.baseline_nm[i]~=c.baseline_nm[i] or r.ratio[i]~=c.ratio[i] or not finite(a) or not finite(b) or
                math.abs(a-c.omega[i])>2*p.omega_error_rad_s[i+1] or math.abs(b-a)>p.acceleration_bound_rad_s2[i+1]*duration+2*p.omega_error_rad_s[i+1] then return nil,'altered_samples' end
        end
        return bound(c,r.omega_before,duration,false)
    end
    return s
end
