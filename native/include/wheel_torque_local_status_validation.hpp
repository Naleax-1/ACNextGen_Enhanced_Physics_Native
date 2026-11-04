#pragma once
#include "wheel_torque_local_protocol.h"
#include <cmath>
namespace ngp {
// Monitoring admission only. This packet cannot fund or authorize an actuator.
inline bool wheel_local_status_work_valid(const NgpWheelLocalStatus& q,double capacity){
    return q.abi==NGP_WHEEL_LOCAL_STATUS_ABI&&std::isfinite(capacity)&&capacity>=0&&capacity<=1&&
        std::isfinite(q.balance_j)&&q.balance_j>=0&&q.balance_j<=capacity&&std::isfinite(q.held_j)&&q.held_j>=0&&q.held_j<=capacity&&q.balance_j+q.held_j<=capacity+1e-12;
}
}
