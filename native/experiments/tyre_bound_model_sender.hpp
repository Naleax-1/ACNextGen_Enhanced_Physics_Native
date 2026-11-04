#pragma once
#include "tyre_bound_wire.hpp"
#include "../src/bridge_host.hpp"
#include <limits>
namespace ngp::experiment {
enum class BoundTyreModelSource { owned, reference_candidate };
// Candidate construction only: caller must supply independently verified
// context, exclusive ownership and an actuator path. This function does not
// open a mapping, assert a profile, or select a physical output.
inline bool bound_tyre_from_model(AsyncModels& models,const TyreLocalExpected& expected,
 const NgpeSensor& sensor,uint32_t sequence,EnhancementCompute compute,BoundTyreFrame& out,
 BoundTyreModelSource source_kind=BoundTyreModelSource::owned){
 out={};if(!expected.profile_verified||!compute||sensor.epoch!=expected.epoch||
    sensor.generation!=expected.generation||sensor.car_hash!=expected.car_hash||
    sensor.sequence!=expected.current_sensor_sequence||sensor.clock!=expected.clock)return false;
 std::array<double,4> coefficients{};uint32_t mask=0;uint64_t frame=0;double model_clock=-1.,age=0.;
 bool available=false;
 if(source_kind==BoundTyreModelSource::owned)
  available=models.fast_owned_tyre(coefficients,mask,frame,model_clock,age,expected.generation,expected.car_hash,
      expected.epoch,sensor.clock);
 else if(source_kind==BoundTyreModelSource::reference_candidate)
  available=models.fast_tyre_reference(coefficients,mask,frame,model_clock,age,expected.generation,expected.car_hash,
      expected.epoch,sensor.clock);
 if(!available||!frame||frame>std::numeric_limits<uint32_t>::max())return false;
 NgpeHints hints{};hints.abi=NGPE_ABI;hints.tyre_mask=mask;
 for(unsigned i=0;i<4;++i)hints.tyre_ns_m[i]=coefficients[i];
 NgpeCommand source{};if(compute(&sensor,&hints,age,expected.generation,NGPE_TYRE,&source)!=0)return false;
 return make_bound_tyre_wire(expected,sequence,static_cast<uint32_t>(frame),sensor,hints,model_clock,age,source,compute,out);
}
}
