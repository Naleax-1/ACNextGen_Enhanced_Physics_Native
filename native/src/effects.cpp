#include "ngp2_api.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// An explicitly additional stability-assist moment, not a replacement tyre force.
// Owner: yaw_moment_budget. Slow model risk/authority modulate a passive damper.
// The fast input is measured at the same two points where the pair is applied.
// F_front=-F_rear, sum(F)=0, and instantaneous pair power is <=0.
uint32_t ngp4_compute_effect(const Ngp4Sensor* s,double risk,double authority,
    double model_age,uint32_t generation,uint32_t enabled,Ngp4Command* out){
    if(!out)return 1;std::memset(out,0,sizeof *out);out->abi=NGP4_ABI;
    out->ttl_seconds=.020;out->max_hold_frames=8;
    if(!s)return 2;
    out->epoch=s->epoch;out->generation=generation;out->car_hash=s->car_hash;
    out->source_clock=s->clock;out->model_age_seconds=model_age;
    if(s->abi!=NGP4_ABI||!s->epoch||!s->sequence||!s->car_hash||s->generation!=generation)return 3;
    if(!enabled||(s->flags&15)!=15)return 4;
    if(!std::isfinite(s->dt)||s->dt<=0||s->dt>.03||!std::isfinite(s->clock))return 5;
    if(!std::isfinite(model_age)||model_age<0||model_age>.2)return 6;
    if(!std::isfinite(risk)||!std::isfinite(authority)||risk<0||risk>1||authority<0||authority>1)return 7;
    double norm=0.,dv[3],speed2=0.;
    for(unsigned i=0;i<3;++i){
        if(!std::isfinite(s->side[i])||!std::isfinite(s->front_velocity[i])||
           !std::isfinite(s->rear_velocity[i])||!std::isfinite(s->linear_velocity[i]))return 8;
        norm+=s->side[i]*s->side[i];speed2+=s->linear_velocity[i]*s->linear_velocity[i];
        dv[i]=s->front_velocity[i]-s->rear_velocity[i];
    }
    if(norm<.64||norm>1.44||speed2>40000.)return 9;
    norm=std::sqrt(norm);double side[3],yaw=0.;
    for(unsigned i=0;i<3;++i){side[i]=s->side[i]/norm;yaw+=dv[i]*side[i]/2.;}
    if(std::abs(yaw)>20.)return 10;
    // Smooth low-speed gate; no artificial steering pull while parked.
    double gate=std::clamp((std::sqrt(speed2)-1.4)/4.,0.,1.);
    double coefficient=40.*(.05+.95*risk)*authority*gate;
    double moment=std::clamp(-coefficient*yaw,-40.,40.);
    // Worker requires resolvable negative pair power for a nonzero force.
    // Attenuate numerically negligible damping to an exact zero command rather
    // than publishing a tiny pair that the unchanged passivity guard rejects.
    if(moment*yaw>=-1e-10)moment=0.;
    double force=moment/2.;
    out->positions[0][2]=1.;out->positions[1][2]=-1.;
    for(unsigned i=0;i<3;++i){out->forces[0][i]=side[i]*force;out->forces[1][i]=-out->forces[0][i];}
    out->effect_id=NGP4_EFFECT_YAW_DAMPING;out->flags=NGP4_CMD_ACTIVE;
    out->spin_risk=risk;out->authority=authority;out->yaw_rate=yaw;
    out->power_w=moment*yaw;out->yaw_moment_nm=moment;out->damping_nm_s=coefficient;
    if(out->power_w>1e-9){out->flags=0;return 11;}return 0;
}
