#pragma once
#include "damper_residual.hpp"
namespace ngp {
using DamperVec=std::array<double,3>;
struct DamperPointSample {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,sequence=0;
    std::array<DamperVec,4> body_position_m{},wheel_position_m{},body_velocity_ms{},wheel_velocity_ms{},axis_world{};
    bool coordinates_verified=false,sampled_together_verified=false;
    bool body_velocity_verified=false,wheel_velocity_verified=false;
};
struct DamperPointOutput {
    std::array<DamperVec,4> body_position_m{},wheel_position_m{},body_force_n{},wheel_force_n{};
    std::array<double,4> power_w{};
    uint32_t mask=0;double total_power_w=0;
    bool valid=false,application_authorized=false;
};
inline DamperPointOutput damper_point_output(const DamperModelCandidate& model,const DamperResidualProfile& profile,
    const DamperPointSample& sample,uint32_t epoch,uint32_t generation,double sensor_age,double model_age){
    DamperPointOutput out;
    if(!epoch||!generation||sample.epoch!=epoch||sample.generation!=generation||!sample.sequence||sample.sequence>=1073741823||
       !sample.coordinates_verified||!sample.sampled_together_verified||!sample.body_velocity_verified||!sample.wheel_velocity_verified||
       !std::isfinite(sensor_age)||sensor_age<0||sensor_age>.003001)return out;
    std::array<double,4> relative{};
    for(unsigned i=0;i<4;++i)if(model.valid_mask&(1u<<i)){
        double norm=0;DamperVec distance{};
        for(unsigned a=0;a<3;++a){
            const double axis=sample.axis_world[i][a],body=sample.body_position_m[i][a],wheel=sample.wheel_position_m[i][a];
            const double vb=sample.body_velocity_ms[i][a],vw=sample.wheel_velocity_ms[i][a];
            if(!std::isfinite(axis)||!std::isfinite(body)||!std::isfinite(wheel)||std::abs(body)>1e7||std::abs(wheel)>1e7||
               !std::isfinite(vb)||!std::isfinite(vw)||std::abs(vb)>200||std::abs(vw)>200)return {};
            norm+=axis*axis;distance[a]=body-wheel;relative[i]+=(vb-vw)*axis;
        }
        if(!std::isfinite(norm)||std::abs(norm-1)>1e-6)return {};
        // Equal and opposite forces at arbitrary points can add an unintended
        // couple. Require the two points to lie on the declared action line.
        double separation=0,offset=0;
        for(unsigned a=0;a<3;++a){
            separation+=distance[a]*distance[a];
            double cross=distance[(a+1)%3]*sample.axis_world[i][(a+2)%3]-distance[(a+2)%3]*sample.axis_world[i][(a+1)%3];
            offset+=cross*cross;
        }
        if(!std::isfinite(separation)||separation>9||!std::isfinite(offset)||offset>1e-12)return {};
    }
    auto pair=damper_residual(model,profile,sample.car_hash,sample.patch_code,model_age,relative);
    if(!pair.valid)return out;
    for(unsigned i=0;i<4;++i)if(pair.mask&(1u<<i)){
        for(unsigned a=0;a<3;++a){
            out.body_position_m[i][a]=sample.body_position_m[i][a];out.wheel_position_m[i][a]=sample.wheel_position_m[i][a];
            out.body_force_n[i][a]=pair.body_force_n[i]*sample.axis_world[i][a];out.wheel_force_n[i][a]=-out.body_force_n[i][a];
            out.power_w[i]+=out.body_force_n[i][a]*sample.body_velocity_ms[i][a]+out.wheel_force_n[i][a]*sample.wheel_velocity_ms[i][a];
        }
        if(!std::isfinite(out.power_w[i])||out.power_w[i]>1e-10||std::abs(out.power_w[i]-pair.power_w[i])>1e-8)return {};
        out.total_power_w+=out.power_w[i];
    }
    if(!std::isfinite(out.total_power_w))return {};
    out.mask=pair.mask;out.valid=true;return out;
}
}
