#pragma once
#include "tyre_bound_model_sender.hpp"
#include "tyre_bound_mailbox.hpp"
namespace ngp::experiment {
// Prototype orchestration only. The caller supplies trusted, independent
// permission and profile checks; no physical authorization is inferred here.
class BoundTyreSenderChannel {
 BoundTyreMailbox& mailbox_;uint32_t sequence_=0;
public:
 explicit BoundTyreSenderChannel(BoundTyreMailbox& mailbox):mailbox_(mailbox){}
 ~BoundTyreSenderChannel(){mailbox_.cancel();}
 BoundTyreSenderChannel(const BoundTyreSenderChannel&)=delete;
 bool update(AsyncModels& models,const TyreLocalExpected& expected,const NgpeSensor& sensor,
  bool requested,bool worker_fresh,bool owner_selected,bool permission,EnhancementCompute compute){
  if(!requested||!worker_fresh||!owner_selected||!permission||!expected.profile_verified||sequence_>=1073741822u){mailbox_.cancel();return false;}
  BoundTyreFrame frame{};const uint32_t next=sequence_+1;
  if(!bound_tyre_from_model(models,expected,sensor,next,compute,frame)||!mailbox_.publish(frame,expected)){
   mailbox_.cancel();return false;
  }
  sequence_=next;return true;
 }
 void stop(){mailbox_.cancel();}
};
}
