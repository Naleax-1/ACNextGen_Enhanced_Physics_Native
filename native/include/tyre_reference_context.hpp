#pragma once
#include "json.hpp"
#include <cmath>
#include <cstdint>
namespace ngp {
struct TyreReferenceContext {
 uint32_t epoch=0,generation=0,car_hash=0,source_sequence=0;
 double worker_clock=0;
};
inline bool parse_tyre_reference_context(const nlohmann::json& value,TyreReferenceContext& out){
 out={};if(!value.is_object())return false;
 auto integer=[&](const char* key,uint32_t& target){
  if(!value.contains(key)||!value[key].is_number_integer())return false;
  const auto& n=value[key];
  if(n.is_number_unsigned()){auto v=n.get<uint64_t>();if(!v||v>UINT32_MAX)return false;target=uint32_t(v);}
  else{auto v=n.get<int64_t>();if(v<=0||v>UINT32_MAX)return false;target=uint32_t(v);}
  return true;
 };
 uint32_t schema=0;TyreReferenceContext next;
 if(!integer("schema",schema)||schema!=1||!integer("epoch",next.epoch)||
    !integer("generation",next.generation)||!integer("car_hash",next.car_hash)||
    !integer("source_sequence",next.source_sequence)||!value.contains("worker_clock")||
    !value["worker_clock"].is_number())return false;
 next.worker_clock=value["worker_clock"].get<double>();
 if(!std::isfinite(next.worker_clock)||next.worker_clock<0)return false;
 out=next;return true;
}
class TyreReferenceContextHistory {
 bool initialized_=false;
 TyreReferenceContext previous_{},rejected_{};
 const char* rejection_="";
public:
 const char* last_rejection()const{return rejection_;}
 const TyreReferenceContext& previous()const{return previous_;}
 const TyreReferenceContext& rejected()const{return rejected_;}
 bool admit(const TyreReferenceContext& value){
  const char* reason="";
  if(!value.epoch||!value.generation||!value.car_hash||!value.source_sequence)reason="invalid_identity_or_sequence";
  else if(!std::isfinite(value.worker_clock)||value.worker_clock<0)reason="invalid_worker_clock";
  else if(initialized_){
   if(value.epoch!=previous_.epoch)reason="epoch_changed";
   else if(value.generation!=previous_.generation)reason="generation_changed";
   else if(value.car_hash!=previous_.car_hash)reason="car_changed";
   else if(value.source_sequence<=previous_.source_sequence)reason="sequence_not_advanced";
   else if(value.worker_clock<=previous_.worker_clock)reason="clock_not_advanced";
  }
  rejection_=reason;
  if(*reason){rejected_=value;return false;}
  previous_=value;initialized_=true;rejected_={};return true;
 }
};
// Compare the DLL echo to the immutable input of this exact completed Job.
inline bool tyre_reference_echo_matches(const nlohmann::json& value,
 const nlohmann::json& envelope,uint32_t generation,uint32_t car_hash,
 uint32_t epoch,double clock){
 TyreReferenceContext expected,actual;
 if(!parse_tyre_reference_context(envelope,expected)||
    !value.is_object()||!value.contains("valid")||value["valid"]!=true||
    !value.contains("reference_context_validated")||value["reference_context_validated"]!=true)return false;
 nlohmann::json echo={{"schema",1}};
 for(auto pair:{std::pair<const char*,const char*>{"epoch","source_worker_epoch"},
   {"generation","source_generation"},{"car_hash","source_car_hash"},
   {"source_sequence","source_sequence"},{"worker_clock","source_worker_clock"}}){
  if(!value.contains(pair.second))return false;echo[pair.first]=value[pair.second];
 }
 return parse_tyre_reference_context(echo,actual)&&expected.epoch==epoch&&
  expected.generation==generation&&expected.car_hash==car_hash&&expected.worker_clock==clock&&
  actual.epoch==expected.epoch&&actual.generation==expected.generation&&
  actual.car_hash==expected.car_hash&&actual.source_sequence==expected.source_sequence&&
  actual.worker_clock==expected.worker_clock;
}

}
