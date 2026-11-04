#pragma once
#include "damper_point_path.hpp"
namespace ngp {
// Retrospective receipt only. A command still needs a prospective work reserve.
// Endpoints must follow the SAME material points, not changing wheel-contact
// points or a fresh projection onto the body at each callback.
struct DamperDisplacementReceipt {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,sequence=0,mask=0;
    uint64_t evidence_id=0;
    double clock_before=0,clock_after=0;
    std::array<DamperVec,4> body_before{},body_after{},wheel_before{},wheel_after{};
    std::array<double,4> body_displacement_error_m{},wheel_displacement_error_m{};
    bool material_points_verified=false,coordinates_verified=false,displacement_bounds_verified=false;
    bool constant_world_force_verified=false,force_interval_verified=false,full_application_verified=false;
};
struct DamperMeasuredWork {
    double estimate_j=0,lower_j=0,upper_j=0;
    bool valid=false,application_authorized=false;
};
inline DamperMeasuredWork damper_displacement_work(const DamperPointOutput& force,
    const DamperDisplacementReceipt& r,uint32_t epoch,uint32_t generation,uint32_t car,uint32_t patch,uint64_t evidence){
    DamperMeasuredWork out;
    if(!force.valid||!force.mask||(force.mask&~15u)||r.mask!=force.mask||!epoch||!generation||!car||!patch||
       !evidence||evidence>9007199254740991ULL||r.epoch!=epoch||r.generation!=generation||r.car_hash!=car||
       r.patch_code!=patch||r.evidence_id!=evidence||!r.sequence||r.sequence>=1073741823||
       !r.material_points_verified||!r.coordinates_verified||!r.displacement_bounds_verified||
       !r.constant_world_force_verified||!r.force_interval_verified||!r.full_application_verified||
       !std::isfinite(r.clock_before)||!std::isfinite(r.clock_after)||r.clock_before<0||
       r.clock_after<=r.clock_before||r.clock_after-r.clock_before>.003001)return out;
    double error=0;
    for(unsigned i=0;i<4;++i)if(r.mask&(1u<<i)){
        double norm2=0;
        auto eb=r.body_displacement_error_m[i],ew=r.wheel_displacement_error_m[i];
        if(!std::isfinite(eb)||!std::isfinite(ew)||eb<0||ew<0)return {};
        for(unsigned a=0;a<3;++a){
            double f=force.body_force_n[i][a];
            if(!std::isfinite(f)||force.wheel_force_n[i][a]!=-f)return {};
            for(double x:{r.body_before[i][a],r.body_after[i][a],r.wheel_before[i][a],r.wheel_after[i][a]})
                if(!std::isfinite(x)||std::abs(x)>1e7)return {};
            if(force.body_position_m[i][a]!=r.body_before[i][a]||force.wheel_position_m[i][a]!=r.wheel_before[i][a])return {};
            out.estimate_j+=f*((r.body_after[i][a]-r.body_before[i][a])-(r.wheel_after[i][a]-r.wheel_before[i][a]));
            norm2+=f*f;
        }
        double norm=std::sqrt(norm2);if(!std::isfinite(norm)||norm>20.000001)return {};
        error+=norm*(eb+ew);
    }
    out.lower_j=out.estimate_j-error;out.upper_j=out.estimate_j+error;
    if(!std::isfinite(out.estimate_j)||!std::isfinite(out.lower_j)||!std::isfinite(out.upper_j))return {};
    out.valid=true;return out;
}
}
