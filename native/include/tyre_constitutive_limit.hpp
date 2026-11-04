#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
namespace ngp {
// The owner's lateral/maxForce ratio is dimensionless, not a calibrated tyre
// force. It only limits the existing additional damping; it never adds the
// owner's total force or increases the legacy coefficient envelope.
inline bool limit_tyre_constitutive(uint32_t mask,double cap,const std::array<double,4>& lateral,double (&coefficients)[4],
                                    const std::array<double,4>& safety_gate={1.,1.,1.,1.}){
    if(mask&~15u)return false;
    if(!mask)return true;
    if(!std::isfinite(cap)||cap<=0)return false;
    std::array<double,4> proposal{};
    for(unsigned i=0;i<4;++i){
        proposal[i]=coefficients[i];if(!(mask&(1u<<i)))continue;
        if(!std::isfinite(lateral[i])||std::abs(lateral[i])>cap||
           !std::isfinite(coefficients[i])||coefficients[i]<0||coefficients[i]>8||
           !std::isfinite(safety_gate[i])||safety_gate[i]<0||safety_gate[i]>1)return false;
        // coefficients already contains the gate: min(base*g, cap*g) is
        // min(base,cap)*g, retaining it once whichever envelope is smaller.
        proposal[i]=std::min(coefficients[i],8.*(std::abs(lateral[i])/cap)*safety_gate[i]);
    }
    for(unsigned i=0;i<4;++i)coefficients[i]=proposal[i];
    return true;
}
}
