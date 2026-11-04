#pragma once
#include "drive_local_protocol.h"
#include <cmath>
namespace ngp {
// A rejected/missing notification cannot establish that the independent
// Worker stopped. Even an admitted inhibition report is not motion proof.
inline const char* drive_local_observation_state(bool selected,bool fresh,uint32_t flags,uint32_t fault){
    if(!selected)return "not_selected";
    if(!fresh)return "unobserved";
    return flags==31&&!fault?"worker_reports_enabled":"worker_reports_inhibited";
}
// Monitoring admission only; a status packet never grants actuation energy.
inline bool drive_local_status_work_valid(const NgpDriveLocalStatus& q,double capacity){
    return q.abi==NGP_DRIVE_LOCAL_ABI&&std::isfinite(capacity)&&capacity>=0&&capacity<=1&&
        std::isfinite(q.balance_j)&&q.balance_j>=0&&q.balance_j<=capacity&&
        std::isfinite(q.held_j)&&q.held_j>=0&&q.held_j<=capacity&&
        q.balance_j+q.held_j<=capacity+1e-12;
}
}
