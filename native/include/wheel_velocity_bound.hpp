#pragma once
#include "wheel_material_transport.hpp"
#include "damper_work.hpp"
namespace ngp {
struct WheelVelocityBoundProfile {
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    std::array<double,4> history_acceleration_bound_ms2{},position_before_error_m{},position_after_error_m{};
    bool history_bound_verified=false,endpoint_error_verified=false,time_interval_verified=false,coordinates_verified=false;
};
struct BoundedWheelVelocity {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,sequence=0;
    uint64_t evidence_id=0;double clock_after=0;
    std::array<DamperVec,4> estimate_ms{},position_after_m{};std::array<double,4> error_ms{};
    bool valid=false,direct_instantaneous_measurement=false;
};
// For ||dv/dt|| <= A on [t-h,t], the secant's endpoint error is
// <= A*h/2 + (position_error_before + position_error_after)/h.
// A must cover this HISTORY window, not only future delivery/application.
inline BoundedWheelVelocity wheel_velocity_bound(const NgpWheelIntervalFrame& frame,uint32_t before,uint32_t after,
    const WheelVelocityBoundProfile& profile,uint32_t epoch,uint32_t generation,uint32_t car,uint32_t patch,double age){
    BoundedWheelVelocity out;const auto& p=frame.packet;
    if(!wheel_snapshot(frame,before,after)||!epoch||!generation||!car||!patch||p.epoch!=epoch||p.generation!=generation||p.car_hash!=car||p.patch_code!=patch||
       profile.car_hash!=car||profile.patch_code!=patch||!profile.evidence_id||profile.evidence_id>9007199254740991ULL||
       !profile.history_bound_verified||!profile.endpoint_error_verified||!profile.time_interval_verified||!profile.coordinates_verified||
       !std::isfinite(age)||age<0||age>.003001||!std::isfinite(p.dt)||p.dt<=0||p.dt>.02||
       !std::isfinite(p.clock_before)||!std::isfinite(p.clock_after)||p.clock_before<0||p.clock_after<=p.clock_before||
       std::abs(p.clock_after-p.clock_before-p.dt)>1e-7)return out;
    const double h=p.clock_after-p.clock_before;
    for(unsigned i=0;i<4;++i){
        double a=profile.history_acceleration_bound_ms2[i],e0=profile.position_before_error_m[i],e1=profile.position_after_error_m[i];
        if(!std::isfinite(a)||a<0||!std::isfinite(e0)||e0<0||!std::isfinite(e1)||e1<0)return {};
        double norm2=0;
        for(unsigned j=0;j<3;++j){double x0=p.positions_before[i][j],x1=p.positions_after[i][j];
            if(!std::isfinite(x0)||!std::isfinite(x1)||std::abs(x0)>1e7||std::abs(x1)>1e7)return {};
            double v=(x1-x0)/h;if(!std::isfinite(v))return {};out.estimate_ms[i][j]=v;out.position_after_m[i][j]=x1;norm2+=v*v;
        }
        if(!std::isfinite(norm2)||norm2>300*300)return {};
        out.error_ms[i]=a*h*.5+(e0+e1)/h;if(!std::isfinite(out.error_ms[i]))return {};
    }
    out.epoch=epoch;out.generation=generation;out.car_hash=car;out.patch_code=patch;out.sequence=p.sequence;out.evidence_id=profile.evidence_id;out.clock_after=p.clock_after;out.valid=true;return out;
}
// The existing "verified" flag means a qualified error-bounded value here,
// never an exact/direct measurement. Failed attachment leaves both unchanged.
inline bool attach_bounded_wheel_velocity(DamperPointSample& sample,DamperWorkProfile& work,const BoundedWheelVelocity& velocity,double sample_clock){
    if(!velocity.valid||sample.wheel_velocity_verified||!sample.sampled_together_verified||!sample.coordinates_verified||
       sample.epoch!=velocity.epoch||sample.generation!=velocity.generation||sample.sequence!=velocity.sequence||
       sample.car_hash!=velocity.car_hash||sample.patch_code!=velocity.patch_code||
       work.car_hash!=velocity.car_hash||work.patch_code!=velocity.patch_code||work.evidence_id!=velocity.evidence_id||
       sample_clock!=velocity.clock_after||!work.bounds_verified)return false;
    auto updated=work;
    for(unsigned i=0;i<4;++i){
        for(unsigned a=0;a<3;++a)if(sample.wheel_position_m[i][a]!=velocity.position_after_m[i][a]||!std::isfinite(velocity.estimate_ms[i][a]))return false;
        double e=work.wheel_velocity_error_ms[i];if(!std::isfinite(e)||e<0||!std::isfinite(velocity.error_ms[i])||velocity.error_ms[i]<0)return false;
        updated.wheel_velocity_error_ms[i]=e+velocity.error_ms[i];if(!std::isfinite(updated.wheel_velocity_error_ms[i]))return false;
    }
    sample.wheel_velocity_ms=velocity.estimate_ms;sample.wheel_velocity_verified=true;work=updated;return true;
}
}
