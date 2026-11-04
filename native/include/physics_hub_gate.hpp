#pragma once
#include "model_runtime.hpp"
#include <cmath>

namespace ngp {
// The Hub owns aggregation readiness, not a second force calculation. This
// check never grants SI units or actuator calibration. WheelAudit continues
// to own per-channel availability checks in the downstream adapters.
inline bool physics_hub_ready(Runtime& runtime){
    if(!runtime.errors.empty()||isnil(runtime.car))return false;
    try{
        auto found=runtime.modules.find("physics");
        if(found==runtime.modules.end())return false;
        auto state=get(found->second,V("state"));
        auto yes=[](V value){auto p=std::get_if<bool>(&value.data);return p&&*p;};
        if(text(get(state,V("status")))!="RUNNING"||!yes(get(state,V("wheelsValid"))))return false;
        auto links=get(state,V("links"));
        if(!yes(get(links,V("car")))||!yes(get(links,V("wheels"))))return false;
        auto finite_number=[](V value){
            auto p=std::get_if<double>(&value.data);
            if(!p||!std::isfinite(*p))throw std::runtime_error("Invalid Hub number");
            return *p;
        };
        auto wheels=get(runtime.car,V("wheels")),omega=get(state,V("omega"));
        auto loads=get(state,V("integratedLoad"));
        for(unsigned i=0;i<4;++i){
            const V index{double(i)};
            const double input=finite_number(get(get(wheels,index),V("angularSpeed")));
            const double aggregate=finite_number(get(omega,index));
            // readCar copies this value directly; a held or stale Hub value
            // must not authorize the current candidate.
            if(input!=aggregate)return false;
            const double load=finite_number(get(loads,index));
            if(load<0||load>12000)return false; // Hub's declared clamp range.
        }
        return true;
    }catch(...){return false;}
}
}
