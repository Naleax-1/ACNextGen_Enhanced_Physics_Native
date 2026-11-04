#include "ngp2_api.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// Three deliberately additional, passive effects. These are not replacement
// tyre, suspension or drivetrain solvers. Caps are initial calibration limits.
uint32_t ngpe_compute(const NgpeSensor* s,const NgpeHints* h,double age,
    uint32_t generation,uint32_t enabled,NgpeCommand* out){
    if(!out)return 1;std::memset(out,0,sizeof *out);out->abi=NGPE_ABI;
    out->ttl_seconds=.012;out->max_hold_frames=4;
    if(!s||!h)return 2;
    out->epoch=s->epoch;out->generation=generation;out->car_hash=s->car_hash;
    out->source_clock=s->clock;out->model_age=age;
    if(s->abi!=NGPE_ABI||h->abi!=NGPE_ABI||!s->epoch||!s->sequence||!s->car_hash||s->generation!=generation)return 3;
    if((s->flags&15)!=15||s->fault||!enabled||(enabled&~7u)||h->suspension_mask>15||h->tyre_mask>15||h->diff_valid>1)return 4;
    if(!std::isfinite(s->dt)||s->dt<=0||s->dt>.02||!std::isfinite(s->clock)||
       !std::isfinite(age)||age<0||age>.2)return 5;
    double side[3],up[3],ns=0,nu=0,dot=0;
    for(unsigned j=0;j<3;++j){
        if(!std::isfinite(s->side[j])||!std::isfinite(s->up[j]))return 6;
        ns+=s->side[j]*s->side[j];nu+=s->up[j]*s->up[j];dot+=s->side[j]*s->up[j];
    }
    if(ns<.81||ns>1.21||nu<.81||nu>1.21||std::abs(dot)>.05)return 7;
    for(unsigned j=0;j<3;++j){side[j]=s->side[j]/std::sqrt(ns);up[j]=s->up[j]/std::sqrt(nu);}
    // Never emit a partial packet after a malformed physical sample.
    for(unsigned i=0;i<4;++i){
        if(!std::isfinite(s->wheel_omega[i])||std::abs(s->wheel_omega[i])>4000||
           !std::isfinite(s->load[i])||s->load[i]<0||s->load[i]>100000)return 8;
        for(unsigned j=0;j<3;++j){
            if(!std::isfinite(s->positions[i][j])||std::abs(s->positions[i][j])>1e7||
               !std::isfinite(s->body_velocity[i][j])||std::abs(s->body_velocity[i][j])>300||
               !std::isfinite(s->wheel_velocity[i][j])||std::abs(s->wheel_velocity[i][j])>300)return 8;
        }
    }
    // Reject absent/wrong wheel transforms before world-space application.
    // Supported envelope is a conventional four-wheel car, not arbitrary rigs.
    double centre_distance=0.;
    for(unsigned j=0;j<3;++j){
        if(!std::isfinite(s->body_origin[j]))return 11;
        double centre=0.;for(unsigned i=0;i<4;++i)centre+=s->positions[i][j]/4.;
        centre_distance+=(centre-s->body_origin[j])*(centre-s->body_origin[j]);
    }
    auto separation=[&](unsigned a,unsigned b){double d=0.;for(unsigned j=0;j<3;++j){double x=s->positions[a][j]-s->positions[b][j];d+=x*x;}return std::sqrt(d);};
    double front=separation(0,1),rear=separation(2,3),left=separation(0,2),right=separation(1,3);
    if(centre_distance>36.||front<.3||front>4.||rear<.3||rear>4.||left<.5||left>8.||right<.5||right>8.)return 11;
    for(unsigned i=0;i<4;++i){
        for(unsigned j=0;j<3;++j)out->positions[i][j]=s->positions[i][j];
        const bool velocity_valid=(s->flags&(1u<<(16+i)))!=0;
        double relative=0,lateral=0;
        for(unsigned j=0;j<3;++j){
            relative+=(s->wheel_velocity[i][j]-s->body_velocity[i][j])*up[j];
            lateral+=s->body_velocity[i][j]*side[j];
        }
        if((enabled&NGPE_SUSPENSION)&&velocity_valid&&(h->suspension_mask&(1u<<i))){
            double coefficient=h->suspension_ns_m[i];
            if(!std::isfinite(coefficient)||coefficient<0||coefficient>120)return 9;
            double force=std::clamp(coefficient*relative,-12.,12.);
            for(unsigned j=0;j<3;++j)out->suspension_force[i][j]=force*up[j];
            out->power[0]-=force*relative;out->channels|=NGPE_SUSPENSION;
        }
        // Contact/load is a render supplement: require its explicit freshness.
        bool contact=(s->flags&(1u<<(20+i)))&&std::isfinite(s->supplement_age)&&
            s->supplement_age>=0&&s->supplement_age<=.03&&s->load[i]>=80;
        if((enabled&NGPE_TYRE)&&contact&&(h->tyre_mask&(1u<<i))){
            double coefficient=h->tyre_ns_m[i];
            if(!std::isfinite(coefficient)||coefficient<0||coefficient>8)return 9;
            double force=std::clamp(-coefficient*lateral,-8.,8.);
            for(unsigned j=0;j<3;++j)out->tyre_force[i][j]=force*side[j];
            out->power[1]+=force*lateral;out->channels|=NGPE_TYRE;
        }
    }
    // The original diff model observes the rear pair. FWD/AWD require their own
    // axle/centre contracts, so SDK traction_type=0 (RWD) is mandatory here.
    if((enabled&NGPE_DIFF)&&h->diff_valid&&s->traction_type==0){
        if(!std::isfinite(h->diff_capacity_nm)||h->diff_capacity_nm<0||h->diff_capacity_nm>1)return 9;
        double difference=s->wheel_omega[2]-s->wheel_omega[3];
        double left=-std::clamp(difference,-1.,1.)*h->diff_capacity_nm;
        out->wheel_torque[2]=left;out->wheel_torque[3]=-left;
        out->power[2]=left*difference;out->channels|=NGPE_DIFF;
    }
    out->total_power=out->power[0]+out->power[1]+out->power[2];
    if(!std::isfinite(out->total_power)||out->total_power>1e-9){std::memset(out,0,sizeof *out);out->abi=NGPE_ABI;return 10;}
    out->flags=out->channels?1:0;return 0;
}
