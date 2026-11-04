#pragma once
#include <cmath>
#include <cstdint>
namespace ngp {
// Observation admission only; this is not a physical command lease.
inline bool tyre_shadow_worker_matches(bool fresh,uint32_t source_epoch,double source_clock,
                                      uint32_t current_epoch,double current_clock){
 return fresh&&source_epoch&&source_epoch==current_epoch&&
   std::isfinite(source_clock)&&source_clock>=0&&std::isfinite(current_clock)&&
   current_clock>=source_clock&&current_clock-source_clock<=.2;
}
class TyreShadowClockHistory {
 uint32_t epoch_=0,car_=0;
 double maximum_=0;
public:
 bool observe(bool fresh,uint32_t epoch,uint32_t car,double clock){
  if(!fresh||!epoch||!car||!std::isfinite(clock)||clock<0)return false;
  if(epoch!=epoch_||car!=car_){epoch_=epoch;car_=car;maximum_=clock;return true;}
  if(clock<maximum_)return false;
  maximum_=clock;return true;
 }
};
}
