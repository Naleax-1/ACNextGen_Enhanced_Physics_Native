#pragma once
#include <array>
#include <cmath>
namespace ngp {
using BodyVec=std::array<double,3>;
struct BodyMomentInput {
    // Explicit additional residuals, never normalized chassis model states.
    double roll_moment_nm=0,pitch_moment_nm=0,yaw_moment_nm=0;
    double half_width_m=0,half_length_m=0,max_force_n=0;
    std::array<BodyVec,4> point_velocity_local_ms{};
    bool residual_contract_verified=false,body_force_units_verified=false,coordinates_verified=false;
};
struct BodyMomentOutput {
    std::array<BodyVec,4> position_local_m{},force_local_n{};
    double power_w=0;
    bool valid=false;
};
// Four body force points: right/left roll pair, front/rear pitch pair.
// Local x=lateral, y=up, z=longitudinal. Resultant is (pitch,yaw,roll).
inline BodyMomentOutput body_moment_forces(const BodyMomentInput& in){
    BodyMomentOutput out;
    if(!in.residual_contract_verified||!in.body_force_units_verified||!in.coordinates_verified)return out;
    for(double v:{in.roll_moment_nm,in.pitch_moment_nm,in.yaw_moment_nm,in.half_width_m,in.half_length_m,in.max_force_n})
        if(!std::isfinite(v))return out;
    if(in.half_width_m<.1||in.half_width_m>2||in.half_length_m<.1||in.half_length_m>3||in.max_force_n<=0||in.max_force_n>80)return out;
    double roll=in.roll_moment_nm/(2*in.half_width_m),pitch=-in.pitch_moment_nm/(2*in.half_length_m);
    double yaw=in.yaw_moment_nm/(2*in.half_length_m);
    // Pitch and yaw share the front/rear points. Bound vector magnitude,
    // not individual components, to preserve the Worker force limit.
    if(std::abs(roll)>in.max_force_n||std::hypot(pitch,yaw)>in.max_force_n)return out;
    out.position_local_m={BodyVec{in.half_width_m,0,0},BodyVec{-in.half_width_m,0,0},BodyVec{0,0,in.half_length_m},BodyVec{0,0,-in.half_length_m}};
    out.force_local_n={BodyVec{0,roll,0},BodyVec{0,-roll,0},BodyVec{yaw,pitch,0},BodyVec{-yaw,-pitch,0}};
    for(unsigned i=0;i<4;++i)for(unsigned axis=0;axis<3;++axis){
        if(!std::isfinite(in.point_velocity_local_ms[i][axis]))return BodyMomentOutput{};
        out.power_w+=in.point_velocity_local_ms[i][axis]*out.force_local_n[i][axis];
    }
    if(!std::isfinite(out.power_w))return BodyMomentOutput{};
    // Energy permission for active/elastic moments belongs to the execution
    // ledger. Returning a power value is not permission to issue the forces.
    out.valid=true;return out;
}
}
