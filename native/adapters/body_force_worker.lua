local BodyForceWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function copy(v) assert(v and finite(v[1]) and finite(v[2]) and finite(v[3]));return {v[1],v[2],v[3]} end
local function dot(a,b) return a.x*b.x+a.y*b.y+a.z*b.z end
function BodyForceWorker.new(options,carHash,authorize)
    assert(authorize==nil or type(authorize)=='function','Invalid local body authorizer')
    local p={};for k,v in pairs(options.body_profile or {}) do p[k]=v end
    local qualified=p.car_hash==carHash and finite(p.patch_code) and p.patch_code>0 and p.patch_code%1==0 and p.units_verified==true and p.coordinates_verified==true and
        p.exclusive_owner==true and p.action_interval_verified==true and p.constant_local_force_verified==true and
        finite(p.dt) and p.dt>0 and p.dt<=.003 and finite(p.max_force_n) and p.max_force_n>0 and p.max_force_n<=20 and
        finite(p.evidence_id) and p.evidence_id>=1 and p.evidence_id%1==0 and p.evidence_id<=9007199254740991
    local s={pending=nil,generation=0,lastSequence=0,latched=false}
    local function safe(generation)
        local sim=ac.getSim()
        return sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and
            sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true and ac.getCarID(0)==options.car_id and
            ac.getPatchVersionCode and tonumber(ac.getPatchVersionCode())==p.patch_code and
            (physics.allowed~=nil and physics.allowed()==true or physics.allowed==nil and ac.load and
                ac.load('ngp4_permission')==1 and ac.load('ngp4_epoch')==options.epoch and ac.load('ngp4_generation')==generation)
    end
    local function sample(positions)
        local body=physics.getBodyTransform(0)
        local axes={body.side,body.up,body.look}
        for _,v in ipairs(axes) do assert(v and finite(v.x) and finite(v.y) and finite(v.z) and math.abs(dot(v,v)-1)<1e-4) end
        assert(math.abs(dot(axes[1],axes[2]))<1e-4 and math.abs(dot(axes[1],axes[3]))<1e-4 and math.abs(dot(axes[2],axes[3]))<1e-4)
        local result={}
        for i=0,3 do
            local pos=positions[i];local v=physics.getPointVelocity(0,vec3(pos[1],pos[2],pos[3]),true)
            assert(v and finite(v.x) and finite(v.y) and finite(v.z))
            result[i]={dot(v,axes[1]),dot(v,axes[2]),dot(v,axes[3])}
        end
        return result
    end
    function s:stop() if self.pending then self.latched=true end;self.pending=nil end
    function s:step(c,clock,dt,flags,generation)
        if generation~=self.generation then self:stop();self.generation=generation;self.lastSequence=0;self.latched=false end
        local empty={sequence=0,fault=true,work_verified=false}
        local ok,allowed=pcall(safe,generation)
        if not qualified or self.latched or flags~=15 or not ok or not allowed or not finite(clock) or not finite(dt) or
            math.abs(dt-p.dt)>1e-7 then self:stop();return empty end
        if self.pending then
            local r=self.pending;self.pending=nil;r.clock_after=clock
            local sampled,error=pcall(function()
                assert(math.abs(clock-r.clock_before-p.dt)<1e-7)
                r.velocity_after=sample(r.positions)
            end)
            if not sampled then self.latched=true;r.detail=tostring(error);r.fault=true;return r end
            r.samples_valid=true;r.fault=false;return r
        end
        if not c or c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=carHash or c.evidence_id~=p.evidence_id or
            not finite(c.sequence) or c.sequence<1 or c.sequence%1~=0 or c.sequence>9007199254740991 or c.sequence<=self.lastSequence or
            not finite(c.source_clock) or clock<c.source_clock or clock-c.source_clock>.003001 then return empty end
        self.lastSequence=c.sequence
        local r={sequence=c.sequence,evidence_id=p.evidence_id,epoch=options.epoch,generation=generation,car_hash=carHash,
            clock_before=clock,positions={},forces={},api_calls=0,completed_mask=0,fault=true,samples_valid=false,work_verified=false}
        local prepared,error=pcall(function()
            local net={0,0,0}
            for i=0,3 do
                r.positions[i]=copy(c.positions[i]);r.forces[i]=copy(c.forces[i]);local norm=0
                for j=1,3 do assert(math.abs(r.positions[i][j])<=3);norm=norm+r.forces[i][j]^2;net[j]=net[j]+r.forces[i][j] end
                assert(finite(norm) and norm<=p.max_force_n^2)
            end
            for j=1,3 do assert(math.abs(net[j])<=1e-9) end
            r.velocity_before=sample(r.positions)
        end)
        if not prepared then r.detail=tostring(error);return r end
        -- Local execution may reserve work from this exact preflight sample.
        -- No API call occurs if authorization fails or raises an error.
        if authorize then
            local accepted,permit=pcall(authorize,r)
            if not accepted or permit~=true then r.detail='Local body work reservation refused';return r end
        end
        for i=0,3 do
            local pos,f=r.positions[i],r.forces[i]
            if f[1]~=0 or f[2]~=0 or f[3]~=0 then
                local applied,message=pcall(physics.addForce,0,vec3(pos[1],pos[2],pos[3]),true,vec3(f[1],f[2],f[3]),true)
                if not applied then self.latched=true;r.detail=tostring(message);return r end
                r.api_calls=r.api_calls+1
            end
            r.completed_mask=r.completed_mask+2^i
        end
        self.pending=r;return {sequence=0,pending=true,fault=false,work_verified=false}
    end
    return s
end
