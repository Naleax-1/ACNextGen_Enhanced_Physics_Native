#pragma once
#include "tyre_local_validation.hpp"
#include <windows.h>
#include <cstring>
#include <stdexcept>
#include <string>
// Transport only. Does not qualify a profile, select an owner, or apply force.
class TyreLocalMailbox {
 HANDLE handle_=nullptr,publisher_=nullptr;NgpTyreLocalHintFrame* data_=nullptr;uint32_t last_sequence_=0;
public:
 TyreLocalMailbox()=default;TyreLocalMailbox(const TyreLocalMailbox&)=delete;
 TyreLocalMailbox& operator=(const TyreLocalMailbox&)=delete;
 ~TyreLocalMailbox(){cancel();if(data_)UnmapViewOfFile(data_);if(handle_)CloseHandle(handle_);if(publisher_){ReleaseMutex(publisher_);CloseHandle(publisher_);}}
 void open(const std::wstring& name){
  if(data_)return;
  const auto lock_name=name+L".Publisher";
  publisher_=CreateMutexW(nullptr,TRUE,lock_name.c_str());
  if(!publisher_)throw std::runtime_error("Tyre publisher lock creation failed");
  if(GetLastError()==ERROR_ALREADY_EXISTS){CloseHandle(publisher_);publisher_=nullptr;throw std::runtime_error("Tyre publisher already exists");}
  handle_=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpTyreLocalHintFrame),name.c_str());
  if(!handle_){ReleaseMutex(publisher_);CloseHandle(publisher_);publisher_=nullptr;throw std::runtime_error("Tyre hint mapping creation failed");}
  data_=static_cast<NgpTyreLocalHintFrame*>(MapViewOfFile(handle_,FILE_MAP_WRITE,0,0,sizeof(NgpTyreLocalHintFrame)));
  if(!data_){CloseHandle(handle_);handle_=nullptr;ReleaseMutex(publisher_);CloseHandle(publisher_);publisher_=nullptr;throw std::runtime_error("Tyre hint mapping view failed");}
  cancel();
 }
 void cancel(){if(data_){InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),0);MemoryBarrier();}}
 bool publish(const NgpTyreLocalHintFrame& frame,const ngp::TyreLocalExpected& expected){
  if(!data_)return false;
  if(frame.packet.sequence<=last_sequence_||!ngp::tyre_local_hint_valid(frame,frame.commit,frame.commit,expected)){
   cancel();return false;
  }
  const auto sequence=frame.packet.sequence;
  InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(sequence*2u-1u));
  MemoryBarrier();std::memcpy(&data_->packet,&frame.packet,sizeof frame.packet);data_->checksum=frame.checksum;
  MemoryBarrier();InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(sequence*2u));
  last_sequence_=sequence;return true;
 }
};
