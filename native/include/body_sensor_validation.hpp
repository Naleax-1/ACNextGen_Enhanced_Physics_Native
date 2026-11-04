#pragma once
#include "body_sensor_protocol.h"
#include <cmath>
namespace ngp {
inline bool body_sensor_valid(const NgpBodySensor& p,uint32_t epoch,uint32_t generation,uint32_t car,double age){
    if(p.abi!=1||!p.sequence||p.sequence>=1073741823||!epoch||!generation||p.epoch!=epoch||p.generation!=generation||p.car_hash!=car||!car||
       p.flags!=15||!p.patch_code||p.reserved||!std::isfinite(age)||age<-.003001||age>.02||
       !std::isfinite(p.dt)||p.dt<=0||p.dt>.02||!std::isfinite(p.clock)||p.clock<0)return false;
    for(unsigned i=0;i<3;++i)for(unsigned j=0;j<3;++j){
        double dot=0;
        for(unsigned k=0;k<3;++k){if(!std::isfinite(p.axes[i][k])||!std::isfinite(p.axes[j][k]))return false;dot+=p.axes[i][k]*p.axes[j][k];}
        if(std::abs(dot-(i==j?1.:0.))>1e-4)return false;
    }
    const double expected[4][3]={{.5,0,0},{-.5,0,0},{0,0,1},{0,0,-1}};
    for(unsigned i=0;i<4;++i)for(unsigned j=0;j<3;++j)
        if(!std::isfinite(p.positions[i][j])||p.positions[i][j]!=expected[i][j]||
           !std::isfinite(p.velocity_local[i][j])||std::abs(p.velocity_local[i][j])>1000)return false;
    return true;
}
}
