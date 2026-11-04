#pragma once
#include "body_local_protocol.h"
#include <cmath>
namespace ngp {
inline bool body_local_status_valid(const NgpBodyLocalStatus& q,uint32_t epoch,uint32_t generation,uint32_t car,uint32_t patch,uint64_t evidence,double clock,double capacity){
 return q.abi==1&&q.epoch==epoch&&epoch&&q.generation==generation&&generation&&q.car_hash==car&&car&&q.patch_code==patch&&patch&&
  q.evidence_id==evidence&&evidence&&q.sequence&&q.sequence<1073741823&&q.flags<=15&&q.fault<=1&&!q.reserved&&
  q.model_sequence<1073741823&&q.acked<=q.sent&&q.sent<2147483647&&
  std::isfinite(q.clock)&&q.clock>=0&&std::isfinite(clock)&&clock>=0&&q.clock<=clock+.003001&&clock-q.clock<=.02&&
  std::isfinite(capacity)&&capacity>=0&&capacity<=1&&std::isfinite(q.balance_j)&&q.balance_j>=0&&
  std::isfinite(q.held_j)&&q.held_j>=0&&q.balance_j+q.held_j<=capacity;
}
}
