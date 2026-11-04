#pragma once
#include "brake_protocol.h"
#include <cmath>
namespace ngp {
inline bool brake_sensor_valid(const NgpbSensor& s,uint32_t epoch,uint32_t generation,uint32_t car,double clock_age){
    if(s.abi!=NGPB_ABI||!s.epoch||s.epoch!=epoch||s.generation!=generation||s.car_hash!=car||
       !s.sequence||s.valid_mask!=15||s.units_qualified||s.abs_in_action>1||
       !std::isfinite(clock_age)||clock_age<-.02||clock_age>.02||!std::isfinite(s.clock)||
       !std::isfinite(s.dt)||s.dt<=0||s.dt>.02||!std::isfinite(s.brake_input)||s.brake_input<0||s.brake_input>1||
       !std::isfinite(s.handbrake_input)||s.handbrake_input<0||s.handbrake_input>1)return false;
    for(unsigned i=0;i<4;++i)if(!std::isfinite(s.brake_torque_raw[i])||std::abs(s.brake_torque_raw[i])>20000||
        !std::isfinite(s.handbrake_torque_raw[i])||std::abs(s.handbrake_torque_raw[i])>20000||
        !std::isfinite(s.angular_speed_raw[i])||std::abs(s.angular_speed_raw[i])>2000)return false;
    return true;
}
}
