#pragma once
#include "damper_point_path.hpp"
namespace ngp {
// Must cover the duration tolerance accepted by the paired-force Actor.
constexpr double damper_interval_tolerance_s=1e-7;
struct DamperWorkProfile {
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    double dt=0;
    std::array<double,4> body_acceleration_bound_ms2{},wheel_acceleration_bound_ms2{};
    std::array<double,4> body_velocity_error_ms{},wheel_velocity_error_ms{};
    bool bounds_verified=false,force_interval_verified=false,constant_world_force_verified=false;
};
struct DamperWorkBound {
    double work_upper_j=0;
    bool valid=false,nonpositive_work_verified=false;
};
// Bounds must cover the complete sensor->delivery->application interval.
// The force is held in WORLD coordinates; rotating the axis during the interval
// is a different contract. Endpoint negativity alone does not prove passivity.
inline DamperWorkBound damper_work_bound(const DamperPointOutput& force,const DamperPointSample& sample,
    const DamperResidualProfile& residual,const DamperWorkProfile& p,double delivery_lease){
    DamperWorkBound out;
    if(!force.valid||force.mask==0||(force.mask&~15u)||!sample.epoch||!sample.generation||!sample.sequence||sample.sequence>=1073741823||
       !sample.coordinates_verified||!sample.sampled_together_verified||!sample.body_velocity_verified||!sample.wheel_velocity_verified||
       !p.car_hash||!p.patch_code||!p.bounds_verified||!p.force_interval_verified||!p.constant_world_force_verified||
       p.car_hash!=sample.car_hash||p.patch_code!=sample.patch_code||p.evidence_id!=residual.evidence_id||
       residual.car_hash!=p.car_hash||residual.patch_code!=p.patch_code||!p.evidence_id||p.evidence_id>9007199254740991ULL||
       !std::isfinite(p.dt)||p.dt<=0||p.dt>.003||!std::isfinite(delivery_lease)||delivery_lease<0||delivery_lease>.003001)return out;
    double power=0,uncertainty=0;
    for(unsigned i=0;i<4;++i)if(force.mask&(1u<<i)){
        const double ab=p.body_acceleration_bound_ms2[i],aw=p.wheel_acceleration_bound_ms2[i],eb=p.body_velocity_error_ms[i],ew=p.wheel_velocity_error_ms[i];
        if(!std::isfinite(ab)||!std::isfinite(aw)||!std::isfinite(eb)||!std::isfinite(ew)||ab<0||aw<0||eb<0||ew<0)return {};
        double norm_squared=0;
        for(unsigned a=0;a<3;++a){
            double f=force.body_force_n[i][a],reaction=force.wheel_force_n[i][a],vb=sample.body_velocity_ms[i][a],vw=sample.wheel_velocity_ms[i][a];
            if(!std::isfinite(f)||!std::isfinite(reaction)||reaction!=-f||!std::isfinite(vb)||!std::isfinite(vw)||
               !std::isfinite(sample.body_position_m[i][a])||!std::isfinite(sample.wheel_position_m[i][a])||
               force.body_position_m[i][a]!=sample.body_position_m[i][a]||force.wheel_position_m[i][a]!=sample.wheel_position_m[i][a])return {};
            norm_squared+=f*f;power+=f*(vb-vw);
        }
        double norm=std::sqrt(norm_squared),error=(ab+aw)*(delivery_lease+p.dt+damper_interval_tolerance_s)+eb+ew;
        if(!std::isfinite(norm)||norm>20.000001||!std::isfinite(error))return {};
        uncertainty+=norm*error;
    }
    if(!std::isfinite(power)||!std::isfinite(uncertainty))return {};
    // Maximize the rate upper bound over both accepted duration endpoints.
    const double rate_upper=power+uncertainty;
    out.work_upper_j=rate_upper*p.dt+std::abs(rate_upper)*damper_interval_tolerance_s;
    if(!std::isfinite(out.work_upper_j))return {};
    out.valid=true;out.nonpositive_work_verified=out.work_upper_j<=0;return out;
}
}
