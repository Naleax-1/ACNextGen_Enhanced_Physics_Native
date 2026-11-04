#pragma once
#include "tyre_reference_producer.hpp"
#include <limits>
namespace ngp::experiment {
// Called on the model-owning thread after EACH successful original-model step.
// Worker time tracks input freshness; accumulated dt tracks model integration.
// This does not authenticate transport or authorize force application.
class TyreReferenceStepClock {
    uint64_t frame_=0,units_=0;
    double model_clock_=0.,worker_clock_=-1.;
    uint32_t epoch_=0,generation_=0,car_=0;
public:
    bool complete(uint64_t completed_frame,double dt,uint32_t epoch,uint32_t generation,
                  uint32_t car,uint64_t units,double worker_clock,double input_age,
                  TyreReferenceInput& out){
        out={};
        if(!completed_frame||completed_frame>std::numeric_limits<uint32_t>::max()||
           !epoch||!generation||!car||!units||!std::isfinite(dt)||dt<=0||dt>.1||
           !std::isfinite(worker_clock)||worker_clock<0||!std::isfinite(input_age)||input_age<0||input_age>.02)return false;
        // A missing completed model step cannot be silently integrated away.
        if(frame_&&(completed_frame!=frame_+1||epoch!=epoch_||generation!=generation_||
                    car!=car_||units!=units_||worker_clock<=worker_clock_))return false;
        const double next=model_clock_+dt;
        if(!std::isfinite(next)||next<=model_clock_)return false;
        out.models_ready=true;out.dt=dt;out.input_age=input_age;
        out.stamp={epoch,generation,car,static_cast<uint32_t>(completed_frame),units,next,0.};
        frame_=completed_frame;model_clock_=next;worker_clock_=worker_clock;
        epoch_=epoch;generation_=generation;car_=car;units_=units;
        return true;
    }
};
}
