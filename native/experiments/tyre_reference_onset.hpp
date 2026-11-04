#pragma once
#include "tyre_reference_producer.hpp"
namespace ngp::experiment {
struct TyreReferenceOnsetProfile {
 double rise_ns_m_per_second=0.;
 bool rate_verified=false;
};
// Experimental coefficient limiter only. Caller must first validate the held
// model publication and physics sensor. This does not grant API permission or
// bound actual force jerk, which also depends on changing velocity/direction.
class TyreReferenceOnset {
 const TyreReferenceOnsetProfile profile_;
 bool enabled_=false,initialized_=false;
 uint32_t stopped_generation_=0;
 TyreResponseSample previous_{};
 TyreReferenceCandidate last_{};
 TyreReferenceCandidate reject(){last_={};return last_;}
public:
 explicit TyreReferenceOnset(TyreReferenceOnsetProfile p={}):profile_(p){}
 const TyreReferenceCandidate& last()const{return last_;}
 void stop(){if(initialized_)stopped_generation_=previous_.generation;enabled_=initialized_=false;previous_={};last_={};}
 void resume(){enabled_=true;}
 TyreReferenceCandidate update(const TyreReferenceCandidate& target,const TyreResponseSample& clock,double dt){
  if(!enabled_||!profile_.rate_verified||!std::isfinite(profile_.rise_ns_m_per_second)||profile_.rise_ns_m_per_second<=0||
     !target.valid||target.mask&~15u||!clock.epoch||!clock.generation||!clock.car_hash||!clock.sequence||!clock.model_units_id||
     clock.generation==stopped_generation_||!std::isfinite(clock.clock)||clock.clock<0||!std::isfinite(dt)||dt<=0||dt>.02)return reject();
  if(initialized_&&(clock.epoch!=previous_.epoch||clock.generation!=previous_.generation||clock.car_hash!=previous_.car_hash||
     clock.model_units_id!=previous_.model_units_id||clock.sequence<=previous_.sequence||clock.clock<=previous_.clock||
     std::abs((clock.clock-previous_.clock)-dt)>1e-9))return reject();
  for(unsigned i=0;i<4;++i){
   const double c=target.coefficient[i];
   if(!std::isfinite(c)||c<0||c>8||(!(target.mask&(1u<<i))&&c!=0))return reject();
  }
  auto next=target;
  for(unsigned i=0;i<4;++i){
   if(!(target.mask&(1u<<i))){next.coefficient[i]=0.;continue;}
   // A decrease, missing wheel or previous rejection never leaves a tail.
   next.coefficient[i]=std::min(target.coefficient[i],last_.coefficient[i]+profile_.rise_ns_m_per_second*dt);
  }
  previous_=clock;initialized_=true;last_=next;return last_;
 }
};
}
