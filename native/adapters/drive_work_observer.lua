-- Raw consecutive physics observations. These are not isolated actuator work.
local DriveWorkObserver={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function DriveWorkObserver.new(options,carHash)
    local s={previous=nil}
    function s:reset() self.previous=nil end
    function s:sample(clock,dt,flags,generation)
        local empty={valid=false,work_measurement_verified=false}
        if flags~=15 or not finite(clock) or not finite(dt) or dt<=0 or dt>.02 or
            not finite(generation) or generation<1 or generation%1~=0 then self:reset();return empty end
        local ok,current=pcall(function()
            local sim=ac.getSim()
            assert(sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and
                sim.isSessionFinished~=true and ac.getCarID(0)==options.car_id)
            if physics.allowed~=nil then assert(physics.allowed()==true)
            else assert(ac.load and ac.load('ngp4_permission')==1 and ac.load('ngp4_epoch')==options.epoch and ac.load('ngp4_generation')==generation) end
            local result={clock=clock,dt=dt,generation=generation,epoch=options.epoch,car_hash=carHash,omega={}}
            for i=0,3 do
                local v=physics.getWheelAngularSpeed(0,i)
                assert(finite(v) and math.abs(v)<=2000)
                result.omega[i]=v
            end
            return result
        end)
        if not ok then self:reset();return empty end
        local before=self.previous;self.previous=current
        if not before or before.generation~=generation or before.clock>=clock or
            math.abs(clock-before.clock-dt)>1e-7 then return empty end
        return {valid=true,epoch=options.epoch,generation=generation,car_hash=carHash,
            clock_before=before.clock,clock_after=clock,dt=dt,
            omega_before=before.omega,omega_after=current.omega,
            work_measurement_verified=false}
    end
    return s
end
