#pragma once
#include "spring_model_adapter.hpp"
#include "damper_force_candidate.hpp"
namespace ngp {
// Dedicated additional spring owner. The actual work reservoir, not a model
// potential estimate, authorizes positive delivery work. No initial credit.
struct SpringPointProfile {
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    double additional_gain_n_m=0,max_force_n=0;
    std::array<double,4> current_height_error_m{};
    std::array<double,4> body_displacement_error_m{},wheel_displacement_error_m{};
    bool additional_contract_verified=false,force_units_verified=false,wheel_reaction_verified=false;
    bool geometry_verified=false,height_error_verified=false,exclusive_owner=false;
    bool receipt_bounds_verified=false;
};
struct SpringPointReference {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0;
    uint64_t evidence_id=0,lease=0;
    std::array<double,4> height_m{},error_m{};
    bool stationary_verified=false,height_error_verified=false;
};
struct SpringPointCandidate {
    DamperForceCandidate paired;
    uint64_t reference_lease=0;
    std::array<double,4> stiffness_n_m{},deformation_m{},force_bias_bound_n{};
    double physical_work_upper_j=0,receipt_error_bound_j=0;
    bool valid=false;
};
inline SpringPointCandidate spring_point_candidate(const SpringModelCandidate& model,const SpringPointProfile& p,
    const SpringPointReference& reference,const DamperPointSample& sample,const DamperGeometrySample& geometry,
    const DamperWorkProfile& work,double sensor_age,double model_age,double delivery_lease){
    SpringPointCandidate out;
    if(!model.valid_mask||(model.valid_mask&~15u)||!sample.epoch||!sample.generation||!sample.sequence||sample.sequence>=1073741823||
       !p.car_hash||!p.patch_code||!p.evidence_id||p.evidence_id>9007199254740991ULL||
       p.car_hash!=sample.car_hash||p.patch_code!=sample.patch_code||
       !p.additional_contract_verified||!p.force_units_verified||!p.wheel_reaction_verified||!p.geometry_verified||!p.height_error_verified||!p.exclusive_owner||!p.receipt_bounds_verified||
       !std::isfinite(p.additional_gain_n_m)||p.additional_gain_n_m<0||p.additional_gain_n_m>120||
       !std::isfinite(p.max_force_n)||p.max_force_n<=0||p.max_force_n>12||
       !reference.stationary_verified||!reference.height_error_verified||!reference.lease||reference.lease>9007199254740991ULL||
       reference.epoch!=sample.epoch||reference.generation!=sample.generation||reference.car_hash!=p.car_hash||reference.patch_code!=p.patch_code||reference.evidence_id!=p.evidence_id||
       !sample.coordinates_verified||!sample.sampled_together_verified||!sample.body_velocity_verified||!sample.wheel_velocity_verified||
       !geometry.sampled_together_verified||geometry.epoch!=sample.epoch||geometry.generation!=sample.generation||geometry.car_hash!=sample.car_hash||
       geometry.patch_code!=sample.patch_code||geometry.sequence!=sample.sequence||!std::isfinite(geometry.clock)||geometry.clock<0||
       !std::isfinite(sensor_age)||sensor_age<0||sensor_age>.003001||!std::isfinite(model_age)||model_age<0||model_age>.1||delivery_lease!=.003001)return out;
    DamperPointOutput force;force.valid=true;force.mask=model.valid_mask;
    DamperForceIntent intent;intent.epoch=sample.epoch;intent.generation=sample.generation;intent.car_hash=p.car_hash;
    intent.patch_code=p.patch_code;intent.evidence_id=p.evidence_id;intent.mask=model.valid_mask;intent.source_clock=geometry.clock;intent.dt=work.dt;
    for(unsigned i=0;i<4;++i)if(model.valid_mask&(1u<<i)){
        double norm=0,height=0;
        for(unsigned a=0;a<3;++a){
            const double axis=sample.axis_world[i][a],wheel=sample.wheel_position_m[i][a],body=sample.body_position_m[i][a];
            if(!std::isfinite(axis)||!std::isfinite(wheel)||!std::isfinite(body)||wheel!=body||std::abs(wheel)>1e7||
               !std::isfinite(sample.body_velocity_ms[i][a])||!std::isfinite(sample.wheel_velocity_ms[i][a])||
               std::abs(sample.body_velocity_ms[i][a])>200||std::abs(sample.wheel_velocity_ms[i][a])>200)return {};
            norm+=axis*axis;height+=(wheel-geometry.body.origin[a])*axis;
        }
        if(!std::isfinite(norm)||std::abs(norm-1)>1e-6||!std::isfinite(height)||std::abs(height)>3)return {};
        // The reference coordinate is body-up height, not world Y or travel.
        double up_norm=0;for(double v:geometry.body.axes[1])up_norm+=v*v;
        if(!std::isfinite(up_norm)||std::abs(up_norm-1)>1e-6)return {};
        for(unsigned a=0;a<3;++a)if(std::abs(sample.axis_world[i][a]-geometry.body.axes[1][a]/std::sqrt(up_norm))>1e-9)return {};
        const double rest=reference.height_m[i],e0=reference.error_m[i],e1=p.current_height_error_m[i],ratio=model.excess_ratio[i];
        if(!std::isfinite(rest)||std::abs(rest)>3||!std::isfinite(e0)||e0<0||e0>.001||!std::isfinite(e1)||e1<0||e1>.001||!std::isfinite(ratio)||ratio<0)return {};
        const double x=height-rest,k=std::min(120.,p.additional_gain_n_m*ratio);
        if(!std::isfinite(x)||std::abs(x)>1||!std::isfinite(k))return {};
        const double f=std::clamp(k*x,-p.max_force_n,p.max_force_n);
        const double eb=p.body_displacement_error_m[i],ew=p.wheel_displacement_error_m[i];
        if(!std::isfinite(eb)||eb<0||eb>.001||!std::isfinite(ew)||ew<0||ew>.001)return {};
        out.stiffness_n_m[i]=k;out.deformation_m[i]=x;out.force_bias_bound_n[i]=k*(e0+e1);
        force.body_position_m[i]=sample.body_position_m[i];force.wheel_position_m[i]=sample.wheel_position_m[i];
        for(unsigned a=0;a<3;++a){force.body_force_n[i][a]=f*sample.axis_world[i][a];force.wheel_force_n[i][a]=-force.body_force_n[i][a];}
        double force_norm2=0;for(double component:force.body_force_n[i])force_norm2+=component*component;
        out.receipt_error_bound_j+=std::sqrt(force_norm2)*(eb+ew);
        if(!damper_local_point(geometry.body,sample.body_position_m[i],intent.body_local_point[i])||
           !damper_local_point(geometry.wheels[i],sample.wheel_position_m[i],intent.wheel_local_point[i]))return {};
        intent.world_force_n[i]=force.body_force_n[i];
    }
    DamperResidualProfile identity;identity.car_hash=p.car_hash;identity.patch_code=p.patch_code;identity.evidence_id=p.evidence_id;
    auto bound=damper_work_bound(force,sample,identity,work,delivery_lease);if(!bound.valid)return {};
    // If actual W<=B and |measured-W|<=E, the certificate measured+E
    // can be as high as B+2E. Reserve this certificate, not merely B.
    out.physical_work_upper_j=bound.work_upper_j;bound.work_upper_j+=2*out.receipt_error_bound_j;
    if(!std::isfinite(bound.work_upper_j))return {};
    bound.nonpositive_work_verified=bound.work_upper_j<=0;
    out.paired.intent=intent;out.paired.bound=bound;out.paired.sensor_sequence=sample.sequence;out.paired.valid=true;
    out.reference_lease=reference.lease;out.valid=true;return out;
}
}
