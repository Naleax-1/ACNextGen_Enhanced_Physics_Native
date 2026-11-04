#pragma once
#include "tyre_reference_producer.hpp"
namespace ngp::experiment {
// All access must occur under the Host result/revision lock. Times are monotonic
// seconds in one Host clock domain. Worker time belongs to a separate domain.
struct TyreReferencePublication {
 TyreReferenceCandidate candidate;
 uint64_t revision=0,frame=0;
 uint32_t epoch=0,generation=0,car=0;
 double submitted=0,completed=0,worker_clock=0;
};
inline TyreReferenceCandidate consume_tyre_reference(const TyreReferencePublication& p,
 uint64_t revision,uint32_t epoch,uint32_t generation,uint32_t car,
 double now,double worker_clock,bool requested){
 if(!requested||!p.candidate.valid||!p.frame||!epoch||!generation||!car||
    p.revision!=revision||p.epoch!=epoch||p.generation!=generation||p.car!=car||
    !std::isfinite(now)||!std::isfinite(p.submitted)||!std::isfinite(p.completed)||
    p.submitted<0||p.completed<p.submitted||now<p.completed||now-p.submitted>.2||
    !std::isfinite(worker_clock)||!std::isfinite(p.worker_clock)||p.worker_clock<0||
    worker_clock<p.worker_clock||worker_clock-p.worker_clock>.2||p.candidate.mask&~15u)return {};
 for(unsigned i=0;i<4;++i){
  double c=p.candidate.coefficient[i];
  if(!std::isfinite(c)||c<0||c>8||(!(p.candidate.mask&(1u<<i))&&c!=0))return {};
 }
 return p.candidate;
}
// Caller holds the same Host mutex for accept/cancel/read.
class TyreReferenceResultSlot {
 uint64_t revision_=0,last_frame_=0;
 TyreReferencePublication publication_{};
public:
 uint64_t revision()const{return revision_;}
 bool cancel(){
  publication_={};last_frame_=0;
  if(revision_==UINT64_MAX)return false;
  ++revision_;return true;
 }
 bool accept(const TyreReferencePublication& p,double now,double worker_clock){
  if(revision_==UINT64_MAX||p.revision!=revision_||p.frame<=last_frame_||
     !consume_tyre_reference(p,revision_,p.epoch,p.generation,p.car,now,worker_clock,true).valid)return false;
  publication_=p;last_frame_=p.frame;return true;
 }
 TyreReferenceCandidate read(uint32_t epoch,uint32_t generation,uint32_t car,
                             double now,double worker_clock,bool requested)const{
  return consume_tyre_reference(publication_,revision_,epoch,generation,car,now,worker_clock,requested);
 }
};
}
