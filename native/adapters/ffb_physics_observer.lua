-- Optional read-only FFB-context sampler. No activation or FFB changes here.
local M={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function vector(v,limit)
    assert(v);local result={v.x,v.y,v.z}
    for i=1,3 do assert(finite(result[i]) and math.abs(result[i])<=limit) end;return result
end
local function basis(p)
    local axes={vector(p.side,1.01),vector(p.up,1.01),vector(p.look,1.01)}
    for a=1,3 do for b=a,3 do
        local d=0;for j=1,3 do d=d+axes[a][j]*axes[b][j] end
        assert(math.abs(d-(a==b and 1 or 0))<1e-4)
    end end;return axes
end
function M.new(carID)
    assert(type(carID)=='string' and #carID>0)
    local s={sequence=0,clock=0,last=nil}
    function s:sample(dt)
        self.last=nil
        local ok,result=pcall(function()
            assert(finite(dt) and dt>0 and dt<=.02 and self.sequence<1073741822)
            local state=ac.getSim and ac.getSim() or sim
            assert(state and state.isOnlineRace==false and state.isPaused==false and state.isReplayActive~=true and state.isReplayOnlyMode~=true and state.isSessionFinished~=true)
            assert(ac.getCarID(0)==carID)
            local p=ac.getCarPhysicsRate();assert(p and p.wheels)
            local r={source='ffb_physics_rate_api_v1',clock_contract='accumulated_valid_callback_dt',car_id=carID,dt=dt,
                position=vector(p.position,1e7),axes=basis(p),local_velocity_raw=vector(p.localVelocity,300),
                local_angular_velocity_raw=vector(p.localAngularVelocity,1000),wheels={},
                coordinates_verified=false,instantaneous_velocity_verified=false,force_units_verified=false}
            for i=0,3 do
                local w=assert(p.wheels[i]);local row={position=vector(w.position,1e7),axes=basis(w),velocity_raw=vector(w.velocity,300)}
                for _,k in ipairs({'damperSpeed','suspensionTravel','angularSpeed','load','fx','fy','mz','slipAngle','slipRatio'}) do
                    assert(finite(w[k]));row[k]=w[k]
                end
                r.wheels[i]=row
            end
            self.sequence=self.sequence+1;self.clock=self.clock+dt
            r.sequence=self.sequence;r.clock=self.clock;return r
        end)
        if ok then self.last=result;return result end
        return nil
    end
    return s
end
-- Preserve the selected processor's two output values exactly, even if either
-- sampling or publishing fails. This function does not install itself.
function M.wrap(previous,observer,publish)
    return function(ffb,damper,steer,speed,dt)
        local a,b=ffb,damper
        if previous then a,b=previous(ffb,damper,steer,speed,dt) end
        local ok,sample=pcall(observer.sample,observer,dt)
        if ok and publish then pcall(publish,sample) end
        return a,b
    end
end
return M
