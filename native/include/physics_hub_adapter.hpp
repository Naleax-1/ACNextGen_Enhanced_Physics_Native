#pragma once
#include "model_runtime.hpp"
#include <cstdint>
namespace ngp {
// The Hub reconciles the completed model frame. Its aggregate is not another
// force to add. Owner outputs remain authoritative, Hub disagreement inhibits.
inline bool hub_damper_ready(Runtime& runtime,const V& owner,uint32_t mask){
    if(!mask||(mask&~15u))return false;
    try{
        auto it=runtime.modules.find("physics");if(it==runtime.modules.end())return false;
        auto hub=get(it->second,V("state")),links=get(hub,V("links"));
        auto yes=[](V v){return std::holds_alternative<bool>(v.data)&&std::get<bool>(v.data);};
        auto number=[](V v){if(!std::holds_alternative<double>(v.data)||!std::isfinite(num(v)))throw 0;return num(v);};
        if(text(get(hub,V("status")))!="RUNNING"||!yes(get(hub,V("wheelsValid")))||
           !yes(get(links,V("car")))||!yes(get(links,V("wheels")))||!yes(get(links,V("damper"))))return false;
        double count=number(get(hub,V("updateCount"))),owner_count=number(get(owner,V("updateCount")));
        if(count<1||count>9007199254740991.||std::floor(count)!=count||count!=owner_count)return false;
        for(unsigned i=0;i<4;++i)if(mask&(1u<<i)){
            V index{double(i)};
            double hub_force=number(get(get(hub,V("damperForce")),index)),owner_force=number(get(get(owner,V("force")),index));
            double hub_velocity=number(get(get(hub,V("damperVelocity")),index)),owner_velocity=number(get(get(owner,V("velocity")),index));
            if(std::abs(hub_force-owner_force)>1e-9||std::abs(hub_velocity-owner_velocity)>1e-9)return false;
        }
        return true;
    }catch(...){return false;}
}
}
