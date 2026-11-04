-- Inactive until a separately qualified profile and command transport exist.
local DamperForceWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,max) return finite(v) and v>=1 and v<=max and v%1==0 end
local function copy(v) assert(v);local r={};for j=1,3 do assert(finite(v[j]));r[j]=v[j] end;return r end
local function world(t,p)
    assert(t and t.position);local axes={t.side,t.up,t.look};local origin={t.position.x,t.position.y,t.position.z}
    local values={}
    for a=1,3 do local v=axes[a];assert(v);values[a]={v.x,v.y,v.z};for j=1,3 do assert(finite(values[a][j])) end end
    for a=1,3 do for b=a,3 do local d=0;for j=1,3 do d=d+values[a][j]*values[b][j] end;assert(math.abs(d-(a==b and 1 or 0))<1e-4) end end
    local result={}
    for j=1,3 do local x=origin[j];assert(finite(x));for a=1,3 do x=x+p[a]*values[a][j] end;assert(finite(x) and math.abs(x)<=1e7);result[j]=x end
    return result
end
function DamperForceWorker.new(options,carHash)
    local p={};for k,v in pairs(options.damper_profile or {}) do p[k]=v end
    local qualified=p.car_hash==carHash and integer(p.patch_code,2147483646) and integer(p.evidence_id,9007199254740991) and
        finite(p.dt) and p.dt>0 and p.dt<=.003001 and finite(p.max_force_n) and p.max_force_n>0 and p.max_force_n<=20
    for _,k in ipairs({'units_verified','wheel_reaction_verified','coordinates_verified','material_points_verified',
        'exclusive_owner','action_interval_verified','constant_world_force_verified'}) do qualified=qualified and p[k]==true end
    -- No runtime guessing: a new API representation needs its own measured contract.
    local mode=p.api_argument_mode
    if mode~=nil then qualified=qualified and p.api_argument_verified==true and (mode=='force' or mode=='force_times_dt') end
    local s={pending=nil,generation=0,lastSequence=0,latched=false}
    local function safe(generation)
        local sim=ac.getSim();assert(sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and
            sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true and ac.getCarID(0)==options.car_id and tonumber(ac.getPatchVersionCode())==p.patch_code)
        if physics.allowed~=nil then assert(physics.allowed()==true)
        else assert(ac.load and ac.load('ngp4_permission')==1 and ac.load('ngp4_epoch')==options.epoch and ac.load('ngp4_generation')==generation) end
    end
    local function sample(r,suffix)
        local body=physics.getBodyTransform(0,-1,false)
        r['body_'..suffix]={};r['wheel_'..suffix]={}
        for i=0,3 do if r.mask%(2^(i+1))>=2^i then
            r['body_'..suffix][i]=world(body,r.body_local_point[i])
            r['wheel_'..suffix][i]=world(physics.getBodyTransform(0,i,false),r.wheel_local_point[i])
        end end
    end
    function s:stop() if self.pending then self.latched=true end;self.pending=nil end
    function s:step(c,clock,dt,flags,generation)
        local empty={sequence=0,fault=true,work_verified=false}
        if not integer(generation,2147483646) then self:stop();return empty end
        if generation~=self.generation then self:stop();self.generation=generation;self.lastSequence=0;self.latched=false end
        local ok=pcall(safe,generation)
        if not qualified or self.latched or flags~=15 or not ok or not finite(clock) or clock<0 or not finite(dt) or dt<=0 or math.abs(dt-p.dt)>1e-7 then self:stop();return empty end
        if self.pending then
            local r=self.pending;self.pending=nil;r.clock_after=clock
            local sampled,error=pcall(function() assert(math.abs(clock-r.clock_before-p.dt)<1e-7);sample(r,'after') end)
            if not sampled then self.latched=true;r.detail=tostring(error);return r end
            r.samples_valid=true;r.fault=false;return r
        end
        if not c or c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=carHash or c.patch_code~=p.patch_code or c.evidence_id~=p.evidence_id or
            not integer(c.sequence,1073741822) or c.sequence<=self.lastSequence or not finite(c.source_clock) or c.source_clock<0 or clock<c.source_clock or clock-c.source_clock>.003001 then return empty end
        self.lastSequence=c.sequence
        local r={sequence=c.sequence,evidence_id=p.evidence_id,epoch=options.epoch,generation=generation,car_hash=carHash,patch_code=p.patch_code,
            mask=c.mask,clock_before=clock,body_local_point={},wheel_local_point={},body_force_n={},wheel_force_n={},api_calls=0,completed_mask=0,fault=true,samples_valid=false,work_verified=false}
        local prepared,error=pcall(function()
            assert(integer(c.mask,15) and finite(c.dt) and math.abs(c.dt-p.dt)<1e-7 and finite(c.work_bound_j) and c.work_bound_j>=0 and c.work_bound_j<=1)
            for i=0,3 do
                r.body_local_point[i]=copy(c.body_local_point[i]);r.wheel_local_point[i]=copy(c.wheel_local_point[i]);r.body_force_n[i]=copy(c.world_force_n[i]);r.wheel_force_n[i]={}
                local n=0;for j=1,3 do
                    local b,w,f=r.body_local_point[i][j],r.wheel_local_point[i][j],r.body_force_n[i][j]
                    assert(math.abs(b)<=3 and math.abs(w)<=3);n=n+f*f;r.wheel_force_n[i][j]=-f
                    if c.mask%(2^(i+1))<2^i then assert(b==0 and w==0 and f==0) end
                end;assert(finite(n) and n<=p.max_force_n^2)
            end
            sample(r,'before')
            for i=0,3 do if c.mask%(2^(i+1))>=2^i then
                local moment=0
                for a=1,3 do local b=a%3+1;local d=(a+1)%3+1
                    local v=(r.body_before[i][b]-r.wheel_before[i][b])*r.body_force_n[i][d]-(r.body_before[i][d]-r.wheel_before[i][d])*r.body_force_n[i][b];moment=moment+v*v
                end;assert(finite(moment) and moment<=1e-12)
            end end
        end)
        if not prepared then r.detail=tostring(error);return r end
        for i=0,3 do if c.mask%(2^(i+1))>=2^i then
            local f=r.body_force_n[i]
            if f[1]~=0 or f[2]~=0 or f[3]~=0 then
                for _,item in ipairs({{r.body_local_point[i],f,-1},{r.wheel_local_point[i],r.wheel_force_n[i],i}}) do
                    local pos,force,index=item[1],item[2],item[3]
                    local scale=mode=='force_times_dt' and dt or 1
                    local applied,message=pcall(physics.addForce,0,vec3(pos[1],pos[2],pos[3]),true,vec3(force[1]*scale,force[2]*scale,force[3]*scale),false,index)
                    if not applied then self.latched=true;r.detail=tostring(message);return r end
                    r.api_calls=r.api_calls+1
                end
            end
            r.completed_mask=r.completed_mask+2^i
        end end
        self.pending=r;return {sequence=0,pending=true,fault=false,work_verified=false}
    end
    return s
end
