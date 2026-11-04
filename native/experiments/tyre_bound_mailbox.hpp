#pragma once
#include "tyre_bound_wire.hpp"
#include <windows.h>
#include <cstring>
#include <stdexcept>
#include <string>
// Test transport only: never qualifies a profile or controls physics.
class BoundTyreMailbox {
 HANDLE mapping_=nullptr,owner_=nullptr;ngp::experiment::BoundTyreFrame* data_=nullptr;uint32_t last_=0;
public:
 BoundTyreMailbox()=default;BoundTyreMailbox(const BoundTyreMailbox&)=delete;
 ~BoundTyreMailbox(){cancel();if(data_)UnmapViewOfFile(data_);if(mapping_)CloseHandle(mapping_);if(owner_){ReleaseMutex(owner_);CloseHandle(owner_);}}
 void open(const std::wstring& name){
  if(data_)return;owner_=CreateMutexW(nullptr,TRUE,(name+L".Publisher").c_str());
  if(!owner_)throw std::runtime_error("Bound tyre owner lock failed");
  if(GetLastError()==ERROR_ALREADY_EXISTS){CloseHandle(owner_);owner_=nullptr;throw std::runtime_error("Bound tyre publisher exists");}
  mapping_=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(*data_),name.c_str());
  if(!mapping_)throw std::runtime_error("Bound tyre mapping failed");
  data_=static_cast<ngp::experiment::BoundTyreFrame*>(MapViewOfFile(mapping_,FILE_MAP_WRITE,0,0,sizeof(*data_)));
  if(!data_)throw std::runtime_error("Bound tyre view failed");cancel();
 }
 void cancel(){if(data_){InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),0);MemoryBarrier();}}
 bool publish(const ngp::experiment::BoundTyreFrame& frame,const ngp::TyreLocalExpected& expected){
  if(!data_)return false;
  if(frame.packet.hint.sequence<=last_||!ngp::experiment::bound_tyre_wire_valid(frame,frame.commit,frame.commit,expected)){cancel();return false;}
  InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(frame.commit-1));
  MemoryBarrier();std::memcpy(&data_->packet,&frame.packet,sizeof frame.packet);data_->checksum=frame.checksum;
  MemoryBarrier();InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(frame.commit));
  last_=frame.packet.hint.sequence;return true;
 }
};
