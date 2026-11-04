-- Physics-rate adapter only: native model equations remain in the C++ DLL.
-- No APIs or transport here. All returned permissions require qualified input.
local DamperLocalKernel={}
local function number(v) assert(type(v)=='number' and v==v and math.abs(v)<math.huge);return v end
local function integer(v,max) number(v);assert(v>=1 and v<=max and v%1==0);return v end
local function vector(v,limit)
    assert(type(v)=='table');local r={}
    for a=1,3 do r[a]=number(v[a]);assert(math.abs(r[a])<=limit) end;return r
end
local function dot(a,b) local d=0;for j=1,3 do d=d+a[j]*b[j] end;return number(d) end
local function basis(axes)
    assert(type(axes)=='table');local r={}
    for a=1,3 do r[a]=vector(axes[a],1.01) end
    for a=1,3 do for b=1,3 do assert(math.abs(dot(r[a],r[b])-(a==b and 1 or 0))<=1e-6) end end
    return r
end
local function localPoint(origin,axes,point)
    local delta={};for j=1,3 do delta[j]=point[j]-origin[j] end
    local out={};for a=1,3 do out[a]=dot(delta,axes[a]);assert(math.abs(out[a])<=3) end;return out
end
local function array(v,i,max) local x=number(v[i+1]);assert(x>=0 and (not max or x<=max));return x end
local function selected(mask,i) return mask%2^(i+1)>=2^i end
-- Shared kinematics for paired body/wheel forces. Constitutive laws stay
-- separate: neither the spring nor any other force becomes a damper coefficient.
function DamperLocalKernel.sample(p,pair,clock)
    local ok,result=pcall(function()
        number(clock);assert(clock>=0)
        assert(type(p)=='table' and type(pair)=='table')
        for _,k in ipairs({'units_verified','wheel_reaction_verified','coordinates_verified','material_points_verified','exclusive_owner','action_interval_verified','constant_world_force_verified'}) do assert(p[k]==true) end
        integer(p.car_hash,4294967295);integer(p.patch_code,2147483646);integer(p.evidence_id,9007199254740991)
        local dt=number(p.dt);assert(dt>0 and dt<=.003)
        local capacity=number(p.storage_capacity_j);assert(capacity>=0 and capacity<=1)
        local cap=number(p.max_force_n);assert(cap>0 and cap<=20)
        assert(p.input.source=='common_worker_interval_geometry_v1' and p.work.bounds_verified==true)
        integer(pair.epoch,4294967295);integer(pair.generation,2147483646)
        assert(pair.car_hash==p.car_hash)
        local b,c=pair.before,pair.after
        assert(c.generation==pair.generation and b.generation==pair.generation and c.clock==clock)
        local h=number(c.clock)-number(b.clock);assert(b.clock>=0 and h>0 and h<=.02 and math.abs(h-number(pair.dt))<=1e-7)
        local origin=vector(c.origin,1e7);local axes=basis(c.axes);local up=vector(c.up,1.01)
        for a=1,3 do assert(up[a]==axes[2][a]) end
        local upNorm=math.sqrt(dot(up,up));assert(math.abs(upNorm*upNorm-1)<=1e-6)
        for a=1,3 do up[a]=up[a]/upNorm end
        local input={epoch=pair.epoch,generation=pair.generation,car_hash=p.car_hash,patch_code=p.patch_code,evidence_id=p.evidence_id,clock=clock,dt=dt,up=up,points={}}
        for i=0,3 do
            local x0=vector(b.positions[i],1e7);local x1=vector(c.positions[i],1e7)
            local body=vector(c.body_velocity[i],200);local wheel={}
            for a=1,3 do wheel[a]=(x1[a]-x0[a])/h;assert(math.abs(number(wheel[a]))<=200) end
            assert(dot(wheel,wheel)<=300^2)
            local wa=basis(c.wheel_axes[i])
            local bp=localPoint(origin,axes,x1);local wp=localPoint(x1,wa,x1)
            local relative,delta={},{};for a=1,3 do relative[a]=body[a]-wheel[a];delta[a]=x1[a]-origin[a] end
            local velocityError=array(p.input.history_acceleration_bound_ms2,i)*h*.5+
                (array(p.input.position_before_error_m,i)+array(p.input.position_after_error_m,i))/h
            local bodyError=array(p.work.body_velocity_error_ms,i);local wheelError=array(p.work.wheel_velocity_error_ms,i)+velocityError
            local error=(array(p.work.body_acceleration_bound_ms2,i)+array(p.work.wheel_acceleration_bound_ms2,i))*(.003001+dt+1e-7)+bodyError+wheelError
            input.points[i]={body_local_point=bp,wheel_local_point=wp,relative=relative,height=dot(delta,up),
                body_speed=math.sqrt(dot(body,body))+bodyError,wheel_speed=math.sqrt(dot(wheel,wheel))+wheelError,error_ms=number(error)}
        end
        return input
    end)
    if ok then return result,nil end;return nil,tostring(result)
end
function DamperLocalKernel.command(p,input,sequence,mask,scalars)
    local ok,result=pcall(function()
        integer(sequence,1073741822);integer(mask,15)
        for _,k in ipairs({'units_verified','wheel_reaction_verified','coordinates_verified','material_points_verified','exclusive_owner','action_interval_verified','constant_world_force_verified'}) do assert(p[k]==true) end
        assert(input.car_hash==p.car_hash and input.patch_code==p.patch_code and input.evidence_id==p.evidence_id and input.dt==p.dt)
        assert(number(p.max_force_n)>0 and p.max_force_n<=20 and number(p.storage_capacity_j)>=0 and p.storage_capacity_j<=1)
        local c={epoch=input.epoch,generation=input.generation,car_hash=input.car_hash,patch_code=input.patch_code,evidence_id=input.evidence_id,
            sequence=sequence,mask=mask,source_clock=input.clock,dt=input.dt,body_local_point={},wheel_local_point={},world_force_n={}}
        local power,uncertainty=0,0
        for i=0,3 do
            c.body_local_point[i]={0,0,0};c.wheel_local_point[i]={0,0,0};c.world_force_n[i]={0,0,0}
            if selected(mask,i) then
                local point=input.points[i];local scalar=number(scalars[i]);assert(math.abs(scalar)<=p.max_force_n)
                local force={};for a=1,3 do force[a]=scalar*input.up[a] end
                power=power+dot(force,point.relative);uncertainty=uncertainty+math.sqrt(dot(force,force))*point.error_ms
                c.body_local_point[i]=point.body_local_point;c.wheel_local_point[i]=point.wheel_local_point;c.world_force_n[i]=force
            end
        end
        -- Include the Actor's accepted duration error for either power sign.
        local rate=number(power+uncertainty)
        local upper=number(rate*input.dt+math.abs(rate)*1e-7);c.work_bound_j=math.max(0,upper);assert(c.work_bound_j<=1)
        return {command=c,work_upper_j=upper}
    end)
    if ok then return result,nil end;return nil,tostring(result)
end
function DamperLocalKernel.candidate(p,m,pair,sequence,clock)
    local ok,result=pcall(function()
        assert(type(m)=='table');local input=assert(DamperLocalKernel.sample(p,pair,clock))
        assert(m.epoch==input.epoch and m.generation==input.generation and m.car_hash==p.car_hash and m.patch_code==p.patch_code and m.evidence_id==p.evidence_id)
        integer(m.sequence,1073741822);local mask=integer(m.valid_mask,15)
        local age=clock-number(m.source_clock);assert(age>=0 and age<=.1)
        local scalars={}
        for i=0,3 do if selected(mask,i) then
            local scale=number(m.coefficient_scale[i+1]);assert(scale>=0)
            local coefficient=math.max(0,scale-array(p.neutral_scale,i,10))*array(p.gain_ns_m,i,10000)
            scalars[i]=number(-coefficient*dot(input.points[i].relative,input.up))
        end end
        return assert(DamperLocalKernel.command(p,input,sequence,mask,scalars))
    end)
    if ok then return result,nil end;return nil,tostring(result)
end
function DamperLocalKernel.receipt(p,c,r)
    local ok,result=pcall(function()
        for _,k in ipairs({'units_verified','coordinates_verified','material_points_verified','action_interval_verified','constant_world_force_verified'}) do assert(p[k]==true) end
        assert(p.car_hash==c.car_hash and p.patch_code==c.patch_code and p.evidence_id==c.evidence_id)
        assert(r and r.fault==false and r.samples_valid==true and r.mask==c.mask and r.completed_mask==c.mask and r.sequence==c.sequence)
        for _,key in ipairs({'epoch','generation','car_hash','patch_code','evidence_id'}) do assert(r[key]==c[key]) end
        assert(r.clock_before>=c.source_clock and r.clock_before-c.source_clock<=.003001 and math.abs(r.clock_after-r.clock_before-c.dt)<=1e-7)
        local estimate,error,calls=0,0,0
        for i=0,3 do if selected(c.mask,i) then
            local force=vector(c.world_force_n[i],20);local nonzero=false
            local beforeBody=vector(r.body_before[i],1e7);local beforeWheel=vector(r.wheel_before[i],1e7)
            local afterBody=vector(r.body_after[i],1e7);local afterWheel=vector(r.wheel_after[i],1e7)
            for a=1,3 do
                assert(r.body_local_point[i][a]==c.body_local_point[i][a] and r.wheel_local_point[i][a]==c.wheel_local_point[i][a])
                assert(r.body_force_n[i][a]==force[a] and r.wheel_force_n[i][a]==-force[a])
                estimate=estimate+force[a]*((afterBody[a]-beforeBody[a])-(afterWheel[a]-beforeWheel[a]));nonzero=nonzero or force[a]~=0
            end
            local moment=0
            for a=1,3 do local b=a%3+1;local d=(a+1)%3+1
                local m=(beforeBody[b]-beforeWheel[b])*force[d]-(beforeBody[d]-beforeWheel[d])*force[b];moment=moment+m*m
            end;assert(number(moment)<=1e-12)
            local norm=math.sqrt(dot(force,force));assert(norm<=20.000001)
            error=error+norm*(array(p.body_displacement_error_m,i)+array(p.wheel_displacement_error_m,i))
            calls=calls+(nonzero and 2 or 0)
        end end
        assert(r.api_calls==calls)
        return {estimate_j=number(estimate),upper_j=number(estimate+error),lower_j=number(estimate-error)}
    end)
    if ok then return result,nil end;return nil,tostring(result)
end
