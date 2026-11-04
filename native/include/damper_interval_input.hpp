#pragma once
#include "wheel_velocity_bound.hpp"
#include "damper_force_candidate.hpp"
namespace ngp {
struct DamperIntervalInputProfile {
    WheelVelocityBoundProfile wheel;
    bool body_point_velocity_contract_verified=false,rigid_geometry_verified=false;
};
struct DamperIntervalInput {
    DamperPointSample points;DamperGeometrySample geometry;DamperWorkProfile work;
    bool valid=false;
};
inline DamperIntervalInput damper_interval_input(const NgpWheelIntervalFrame& w,uint32_t wb,uint32_t wa,
    const NgpWheelGeometryFrame& g,uint32_t gb,uint32_t ga,const DamperIntervalInputProfile& profile,
    const DamperWorkProfile& work,uint32_t epoch,uint32_t generation,uint32_t car,uint32_t patch,double age){
    DamperIntervalInput out;const auto& q=w.packet;const auto& p=g.packet;
    if(!profile.body_point_velocity_contract_verified||!profile.rigid_geometry_verified||!wheel_snapshot(g,gb,ga)||
       p.epoch!=q.epoch||p.generation!=q.generation||p.car_hash!=q.car_hash||p.patch_code!=q.patch_code||p.sequence!=q.sequence||p.clock!=q.clock_after)return out;
    auto velocity=wheel_velocity_bound(w,wb,wa,profile.wheel,epoch,generation,car,patch,age);if(!velocity.valid)return out;
    auto& s=out.points;auto& geometry=out.geometry;
    s.epoch=geometry.epoch=epoch;s.generation=geometry.generation=generation;s.sequence=geometry.sequence=q.sequence;
    s.car_hash=geometry.car_hash=car;s.patch_code=geometry.patch_code=patch;geometry.clock=p.clock;
    for(unsigned a=0;a<3;++a){
        if(p.body_origin[a]!=q.origin_after[a]||p.body_axes[1][a]!=q.up_after[a])return {};
        geometry.body.origin[a]=p.body_origin[a];
        for(unsigned b=0;b<3;++b)geometry.body.axes[a][b]=p.body_axes[a][b];
    }
    double up_norm=0;for(double v:geometry.body.axes[1])up_norm+=v*v;
    if(!std::isfinite(up_norm)||std::abs(up_norm-1)>1e-6)return {};
    for(unsigned i=0;i<4;++i){
        for(unsigned a=0;a<3;++a){
            if(p.wheel_origin[i][a]!=q.positions_after[i][a]||!std::isfinite(q.body_velocity_after[i][a])||std::abs(q.body_velocity_after[i][a])>200)return {};
            geometry.wheels[i].origin[a]=p.wheel_origin[i][a];
            s.body_position_m[i][a]=s.wheel_position_m[i][a]=p.wheel_origin[i][a];
            s.body_velocity_ms[i][a]=q.body_velocity_after[i][a];s.axis_world[i][a]=p.body_axes[1][a]/std::sqrt(up_norm);
            for(unsigned b=0;b<3;++b)geometry.wheels[i].axes[a][b]=p.wheel_axes[i][a][b];
        }
        DamperVec local{};
        if(!damper_local_point(geometry.body,s.body_position_m[i],local)||!damper_local_point(geometry.wheels[i],s.wheel_position_m[i],local))return {};
    }
    s.coordinates_verified=s.sampled_together_verified=s.body_velocity_verified=true;geometry.sampled_together_verified=true;
    out.work=work;if(!attach_bounded_wheel_velocity(s,out.work,velocity,p.clock))return {};
    out.valid=true;return out;
}
}
