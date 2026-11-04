#pragma once
#include "damper_displacement_work.hpp"
namespace ngp {
struct DamperForceIntent {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,sequence=0,mask=0;
    uint64_t evidence_id=0;double source_clock=0,dt=0;
    std::array<DamperVec,4> body_local_point{},wheel_local_point{},world_force_n{};
};
struct DamperAppliedObservation {
    uint32_t command_sequence=0,completed_mask=0,api_calls=0;
    uint64_t evidence_id=0;
    std::array<DamperVec,4> body_local_point{},wheel_local_point{},body_force_n{},wheel_force_n{};
    DamperDisplacementReceipt displacement;
    bool api_fault=false;
};
struct DamperReceiptProfile {
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    std::array<double,4> body_displacement_error_m{},wheel_displacement_error_m{};
    bool material_points_verified=false,coordinates_verified=false,bounds_verified=false;
    bool force_units_verified=false,constant_world_force_verified=false,force_interval_verified=false;
};
// No actuator permission or replay bookkeeping is granted by this pure matcher.
inline DamperMeasuredWork damper_applied_work(const DamperForceIntent& c,const DamperAppliedObservation& raw,const DamperReceiptProfile& p){
    auto r=raw.displacement;
    if(!c.sequence||c.sequence>=1073741823||!c.mask||(c.mask&~15u)||raw.command_sequence!=c.sequence||
       !c.evidence_id||c.evidence_id>9007199254740991ULL||raw.evidence_id!=c.evidence_id||
       p.evidence_id!=c.evidence_id||p.car_hash!=c.car_hash||p.patch_code!=c.patch_code||
       raw.api_fault||raw.completed_mask!=c.mask||r.mask!=c.mask||
       !p.material_points_verified||!p.coordinates_verified||!p.bounds_verified||!p.force_units_verified||
       !p.constant_world_force_verified||!p.force_interval_verified||!std::isfinite(c.source_clock)||c.source_clock<0||
       !std::isfinite(c.dt)||c.dt<=0||c.dt>.003001||!std::isfinite(r.clock_before)||!std::isfinite(r.clock_after)||
       r.clock_before<c.source_clock||r.clock_before-c.source_clock>.003001||
       std::abs(r.clock_after-r.clock_before-c.dt)>1e-7)return {};
    DamperPointOutput force;force.valid=true;force.mask=c.mask;unsigned calls=0;
    for(unsigned i=0;i<4;++i)if(c.mask&(1u<<i)){
        bool nonzero=false;
        for(unsigned a=0;a<3;++a){
            if(!std::isfinite(c.world_force_n[i][a])||!std::isfinite(c.body_local_point[i][a])||!std::isfinite(c.wheel_local_point[i][a])||
               std::abs(c.body_local_point[i][a])>3||std::abs(c.wheel_local_point[i][a])>3||
               raw.body_local_point[i][a]!=c.body_local_point[i][a]||raw.wheel_local_point[i][a]!=c.wheel_local_point[i][a]||
               raw.body_force_n[i][a]!=c.world_force_n[i][a]||raw.wheel_force_n[i][a]!=-c.world_force_n[i][a])return {};
            force.body_force_n[i][a]=c.world_force_n[i][a];force.wheel_force_n[i][a]=-c.world_force_n[i][a];
            force.body_position_m[i][a]=r.body_before[i][a];force.wheel_position_m[i][a]=r.wheel_before[i][a];
            nonzero|=c.world_force_n[i][a]!=0;
        }
        // The actual delivery positions, rather than stale command world
        // positions, must form a force pair without an unintended couple.
        double moment2=0;
        for(unsigned a=0;a<3;++a){unsigned b=(a+1)%3,d=(a+2)%3;
            double m=(r.body_before[i][b]-r.wheel_before[i][b])*c.world_force_n[i][d]-(r.body_before[i][d]-r.wheel_before[i][d])*c.world_force_n[i][b];moment2+=m*m;
        }
        if(!std::isfinite(moment2)||moment2>1e-12)return {};
        calls+=nonzero?2:0;
    }
    if(raw.api_calls!=calls)return {};
    // Qualification comes from the independently bound profile, never flags
    // supplied in the diagnostic packet. API observation proves completeness.
    r.evidence_id=p.evidence_id;r.body_displacement_error_m=p.body_displacement_error_m;r.wheel_displacement_error_m=p.wheel_displacement_error_m;
    r.material_points_verified=r.coordinates_verified=r.displacement_bounds_verified=true;
    r.constant_world_force_verified=r.force_interval_verified=r.full_application_verified=true;
    return damper_displacement_work(force,r,c.epoch,c.generation,c.car_hash,c.patch_code,c.evidence_id);
}
}
