---@diagnostic disable: undefined-global
-- One application per command. Disabled until an independent force/velocity
-- profile and reference lease are qualified. Work here is an estimate, not a
-- qualified measurement and never a damping-energy credit.
local SpringForce={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function vector(v) return v and finite(v.x) and finite(v.y) and finite(v.z) end
local function selected(mask,i) return math.floor(mask/2^i)%2==1 end
function SpringForce.new(options,carHash)
    local s={generation=0,lastSequence=0,latched=false,referenceLease=0}
    function s:setReference(lease,generation)
        if not finite(lease) or lease<1 or lease%1~=0 or lease>9007199254740991 or
            not finite(generation) or generation<1 or generation%1~=0 then return false end
        if generation~=s.generation then s.generation=generation;s.lastSequence=0;s.latched=false end
        if s.referenceLease~=lease then s.referenceLease=lease;s.lastSequence=0 end
        return true
    end
    function s:disable() s.referenceLease=0;s.lastSequence=0 end
    function s:apply(c,sample,dt,clock,flags,generation)
        if generation~=s.generation then s.generation=generation;s.lastSequence=0;s.latched=false;s.referenceLease=0 end
        local receipt={epoch=options.epoch,generation=generation,car_hash=carHash,sequence=c and c.sequence or 0,
            completed_mask=0,api_calls=0,fault=0,clock=clock,reference_lease=s.referenceLease,
            estimated_work_j=0,work_qualified=false}
        local function reject(code) receipt.fault=code;return receipt end
        if options.spring_force_units_verified~=true or options.spring_velocity_verified~=true then return reject(1) end
        if s.latched then return reject(2) end
        if flags~=15 or not finite(dt) or dt<=0 or dt>.02 or not finite(clock) then self:disable();return reject(3) end
        local sim=ac.getSim()
        if not sim or sim.isOnlineRace~=false or sim.isPaused~=false or sim.isReplayActive==true or
           sim.isSessionFinished==true or sim.isReplayOnlyMode==true then return reject(3) end
        local ok,allowed=pcall(physics.allowed)
        if not ok or allowed~=true or ac.getCarID(0)~=options.car_id then return reject(3) end
        if not c or c.epoch~=options.epoch or c.generation~=generation or c.car_hash~=carHash or
           c.reference_lease~=s.referenceLease or s.referenceLease==0 then return reject(4) end
        if not finite(c.sequence) or c.sequence%1~=0 or c.sequence<1 or c.sequence>=1073741823 or c.sequence<=s.lastSequence then return reject(5) end
        -- Consume before validation/application: no retries of a partial pair.
        s.lastSequence=c.sequence
        if not finite(c.source_clock) or not finite(c.ttl) or c.ttl<=0 or c.ttl>.012 or
           c.source_clock>clock or clock-c.source_clock>c.ttl then return reject(6) end
        if not finite(c.mask) or c.mask%1~=0 or c.mask<1 or c.mask>15 or
           not finite(c.return_energy_j) or c.return_energy_j<0 or c.return_energy_j>1 then return reject(7) end
        if not sample or sample.epoch~=options.epoch or sample.generation~=generation or sample.car_hash~=carHash or
           not finite(sample.clock) or sample.clock>clock or clock-sample.clock>dt+.000001 then return reject(8) end
        local bodyOK,body=pcall(physics.getBodyTransform,0,-1,false)
        if not bodyOK then return reject(9) end
        if not vector(body.up) or not vector(body.position) or not vector(c.up) then return reject(9) end
        local n=body.up.x^2+body.up.y^2+body.up.z^2
        local cn=c.up.x^2+c.up.y^2+c.up.z^2
        if n<.99 or n>1.01 or cn<.99 or cn>1.01 or
           (body.up.x*c.up.x+body.up.y*c.up.y+body.up.z*c.up.z)/math.sqrt(n*cn)<.999 then return reject(9) end
        local positions,forces={},{};local work,returnWork=0,0
        for i=0,3 do
            if selected(c.mask,i) then
                local force=c.body_force_n and c.body_force_n[i]
                local wheelOK,wheel=pcall(physics.getBodyTransform,0,i,false)
                if not wheelOK or not wheel then return reject(10) end
                local pos=wheel.position
                local expected=c.positions and c.positions[i]
                local velocity=sample.wheel_velocity and sample.wheel_velocity[i]
                local measured=sample.body_velocity and sample.body_velocity[i]
                if not finite(force) or math.abs(force)>12 or not vector(pos) or not vector(expected) or
                   not vector(velocity) or not vector(measured) or not sample.velocity_mask or
                   not selected(sample.velocity_mask,i) then return reject(10) end
                local displacement,bodyDistance,speed2,relative=0,0,0,0
                for _,axis in ipairs({'x','y','z'}) do
                    displacement=displacement+(pos[axis]-expected[axis])^2
                    bodyDistance=bodyDistance+(pos[axis]-body.position[axis])^2
                    speed2=speed2+measured[axis]^2
                    relative=relative+(velocity[axis]-measured[axis])*body.up[axis]/math.sqrt(n)
                end
                if bodyDistance<.01 or bodyDistance>36 or speed2>40000 or math.abs(relative)>.25 or
                   displacement>(.02+math.sqrt(speed2)*(clock-c.source_clock))^2 then return reject(10) end
                positions[i]=vec3(pos.x,pos.y,pos.z)
                forces[i]=vec3(body.up.x*force/math.sqrt(n),body.up.y*force/math.sqrt(n),body.up.z*force/math.sqrt(n))
                local pairWork=-force*relative*dt
                work=work+pairWork;returnWork=returnWork+math.max(0,pairWork)
            end
        end
        if not finite(work) or not finite(returnWork) or returnWork>c.return_energy_j+1e-12 then return reject(11) end
        local applied,message=pcall(function()
            for i=0,3 do
                if selected(c.mask,i) then
                    local f=forces[i]
                    physics.addForce(0,positions[i],false,f,false);receipt.api_calls=receipt.api_calls+1
                    physics.addForce(0,positions[i],false,vec3(-f.x,-f.y,-f.z),false,i);receipt.api_calls=receipt.api_calls+1
                    receipt.completed_mask=receipt.completed_mask+2^i
                end
            end
        end)
        if not applied then s.latched=true;receipt.fault=12;receipt.detail=tostring(message) end
        receipt.estimated_work_j=work;return receipt
    end
    return s
end
