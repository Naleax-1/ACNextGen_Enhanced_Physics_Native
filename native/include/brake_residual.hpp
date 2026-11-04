#pragma once
#include <array>
#include <cmath>

namespace ngp {
// Fade is a reduction of an existing brake torque, not extra damping.
// Signed baseline excludes engine, drive, handbrake and other plugin torques.
struct BrakeResidualInput {
    std::array<double,4> native_brake_torque_nm{},angular_speed_rad_s{},friction_ratio{};
    unsigned valid_mask=0;
    bool baseline_isolated=false,torque_units_verified=false,exclusive_owner=false,abs_inactive=false;
};
struct BrakeResidualOutput {
    std::array<double,4> delta_nm{},combined_nm{};
    unsigned valid_mask=0;
};
inline BrakeResidualOutput brake_residual(const BrakeResidualInput& input) {
    BrakeResidualOutput out;
    if(!input.baseline_isolated||!input.torque_units_verified||!input.exclusive_owner||!input.abs_inactive||
       input.valid_mask!=15) return out;
    for(unsigned i=0;i<4;++i){
        const double native=input.native_brake_torque_nm[i],omega=input.angular_speed_rad_s[i],ratio=input.friction_ratio[i];
        if(!std::isfinite(native)||!std::isfinite(omega)||!std::isfinite(ratio)||ratio<0.||ratio>1.||
           std::abs(native)>20000.||std::abs(omega)>2000.||native*omega>0.) return BrakeResidualOutput{};
        // Full intended fade is represented. No arbitrary small cap silently
        // turns this into a different effect; calibration owns admissibility.
        out.combined_nm[i]=native*ratio;
        out.delta_nm[i]=out.combined_nm[i]-native;
    }
    out.valid_mask=15;return out;
}
}
