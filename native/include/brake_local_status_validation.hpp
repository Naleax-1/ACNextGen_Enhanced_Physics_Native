#pragma once
#include "brake_local_protocol.h"
#include <cmath>
namespace ngp {
inline bool brake_local_status_valid(const NgpBrakeLocalStatus& q,uint32_t epoch,uint32_t generation,uint32_t car,uint32_t patch,uint64_t evidence,double clock){
 return q.abi==1&&q.epoch==epoch&&epoch&&q.generation==generation&&generation&&q.car_hash==car&&car&&q.patch_code==patch&&patch&&
  q.evidence_id==evidence&&evidence&&q.sequence&&q.sequence<1073741823&&q.flags<=15&&q.fault<=22&&!q.reserved&&
  q.model_sequence<1073741823&&q.api_calls<=q.api_attempts&&q.api_attempts<2147483647&&
  std::isfinite(q.clock)&&q.clock>=0&&std::isfinite(clock)&&clock>=0&&q.clock<=clock+.003001&&clock-q.clock<=.02;
}
}
