#pragma once
// Geometric observation only: signed SUSP heading projected into car side/look.
// Does not qualify SDK axes, toe removal, timing or a physical steering output.
#include <array>
#include <cmath>
namespace ngp {
using SteeringVec=std::array<double,3>;
struct SteeringHeadingObservation { bool valid=false; double radians=0; };
inline SteeringHeadingObservation steering_heading_observation(
 const SteeringVec& side,const SteeringVec& look,const SteeringVec& wheel){
 auto dot=[](const SteeringVec&a,const SteeringVec&b){return a[0]*b[0]+a[1]*b[1]+a[2]*b[2];};
 for(const auto* v:{&side,&look,&wheel})for(double n:*v)if(!std::isfinite(n))return {};
 // SDK side/look must already be unit orthogonal axes. Do not repair invalid frames.
 if(std::abs(dot(side,side)-1)>1e-5||std::abs(dot(look,look)-1)>1e-5||std::abs(dot(side,look))>1e-5)return {};
 const double norm=dot(wheel,wheel);
 if(std::abs(norm-1)>1e-5)return {};
 const double x=dot(wheel,side),z=dot(wheel,look);
 if(!std::isfinite(x)||!std::isfinite(z)||x*x+z*z<1e-8)return {};
 return {true,std::atan2(x,z)};
}
}
