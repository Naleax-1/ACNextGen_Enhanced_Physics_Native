#pragma once
#include "damper_model_adapter.hpp"
namespace ngp {
struct DamperResidualProfile {
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    std::array<double,4> neutral_scale{},gain_ns_m{};
    double max_force_n=0;
    bool additional_damping_contract_verified=false,neutral_verified=false,relative_velocity_verified=false;
    bool force_units_verified=false,wheel_reaction_verified=false,exclusive_owner=false;
};
struct DamperResidual {
    uint32_t mask=0;
    std::array<double,4> coefficient_ns_m{},body_force_n{},wheel_force_n{},power_w{};
    bool valid=false;
};
// Explicit ADDITIONAL damping above an independently chosen neutral scale.
// Neither the model's absolute force nor its filtered travel derivative is an
// actuator input. Native damping is retained; softening needs another contract.
inline DamperResidual damper_residual(const DamperModelCandidate& model,const DamperResidualProfile& profile,
    uint32_t car,uint32_t patch,double model_age,const std::array<double,4>& body_minus_wheel_velocity_ms){
    DamperResidual out;
    if(!model.valid_mask||(model.valid_mask&~15u)||!car||profile.car_hash!=car||!patch||profile.patch_code!=patch||
       !profile.evidence_id||profile.evidence_id>9007199254740991ULL||
       !profile.additional_damping_contract_verified||!profile.neutral_verified||!profile.relative_velocity_verified||
       !profile.force_units_verified||!profile.wheel_reaction_verified||!profile.exclusive_owner||
       !std::isfinite(model_age)||model_age<0||model_age>.1||!std::isfinite(profile.max_force_n)||
       profile.max_force_n<=0||profile.max_force_n>20)return out;
    for(unsigned i=0;i<4;++i)if(model.valid_mask&(1u<<i)){
        const double scale=model.coefficient_scale[i],neutral=profile.neutral_scale[i],gain=profile.gain_ns_m[i],v=body_minus_wheel_velocity_ms[i];
        if(!std::isfinite(scale)||scale<0||!std::isfinite(neutral)||neutral<0||!std::isfinite(gain)||gain<0||
           !std::isfinite(v))return {};
        double c=std::max(0.,scale-neutral)*gain,force=-c*v,power=force*v;
        if(!std::isfinite(c)||!std::isfinite(force)||!std::isfinite(power)||std::abs(force)>profile.max_force_n||power>0)return {};
        out.coefficient_ns_m[i]=c;out.body_force_n[i]=force;out.wheel_force_n[i]=-force;out.power_w[i]=power;
    }
    out.mask=model.valid_mask;out.valid=true;return out;
}
}
