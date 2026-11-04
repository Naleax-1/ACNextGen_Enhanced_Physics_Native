#pragma once
#include "model_runtime.hpp"
#include "physics_hub_adapter.hpp"
namespace ngp {
struct DamperModelCandidate {
    uint32_t valid_mask=0;
    std::array<double,4> force{},raw_force{},model_velocity{},coefficient_scale{};
    bool units_qualified=false;
};
inline DamperModelCandidate extract_damper_model(Runtime& runtime){
    DamperModelCandidate out;
    if(!runtime.errors.empty()||isnil(runtime.car))return out;
    try{
        auto model=runtime.modules.find("damper_model"),audit=runtime.modules.find("wheel_audit");
        if(model==runtime.modules.end()||audit==runtime.modules.end())return out;
        auto state=get(model->second,V("state")),params=get(model->second,V("params")),check=get(audit->second,V("state"));
        if(text(get(state,V("status")))!="RUNNING"||text(get(check,V("status")))!="RUNNING"||!truth(get(state,V("wheelsValid"))))return out;
        auto required=[](V v){if(!std::holds_alternative<double>(v.data)||!std::isfinite(num(v)))throw 0;return num(v);};
        double cap=required(get(params,V("maxForce"))),low=required(get(params,V("minCoeffScale")))*.8,high=required(get(params,V("maxCoeffScale")))*1.2;
        if(cap<=0||low<0||high<low)return out;
        for(unsigned i=0;i<4;++i){
            V index{double(i)};auto available=get(get(check,V("available")),index);
            if(!truth(get(get(check,V("wheelExists")),index))||!truth(get(available,V("suspensionTravel")))||
               !truth(get(get(state,V("initialized")),index)))continue;
            const char* keys[]={"force","rawForce","velocity","coeffScale"};
            double values[4];for(unsigned k=0;k<4;++k)values[k]=required(get(get(state,V(keys[k])),index));
            if(std::abs(values[0])>cap+1e-9||std::abs(values[1])>cap+1e-9||values[3]<low-1e-12||values[3]>high+1e-12)return {};
            out.force[i]=values[0];out.raw_force[i]=values[1];out.model_velocity[i]=values[2];out.coefficient_scale[i]=values[3];out.valid_mask|=1u<<i;
        }
        if(!hub_damper_ready(runtime,state,out.valid_mask))return {};
        return out;
    }catch(...){return {};}
}
}
