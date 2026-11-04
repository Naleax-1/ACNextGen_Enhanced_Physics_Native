#pragma once
#include "tyre_observation_protocol.hpp"
#include <windows.h>
#include <cstring>
#include <stdexcept>
#include <string>
// Separate, explicitly opt-in diagnostic mapping. Never contains force commands.
class TyreObservationMailbox {
 HANDLE mapping_=nullptr,owner_=nullptr;ngp::TyreObservationFrame* data_=nullptr;
public:
 TyreObservationMailbox()=default;TyreObservationMailbox(const TyreObservationMailbox&)=delete;
 ~TyreObservationMailbox(){cancel();if(data_)UnmapViewOfFile(data_);if(mapping_)CloseHandle(mapping_);if(owner_){ReleaseMutex(owner_);CloseHandle(owner_);}}
 void open(const std::wstring& name){
  owner_=CreateMutexW(nullptr,TRUE,(name+L".Publisher").c_str());
  if(!owner_)throw std::runtime_error("Tyre observation lock failed");
  if(GetLastError()==ERROR_ALREADY_EXISTS){CloseHandle(owner_);owner_=nullptr;throw std::runtime_error("Tyre observation publisher exists");}
  mapping_=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(ngp::TyreObservationFrame),name.c_str());
  if(!mapping_)throw std::runtime_error("Tyre observation mapping failed");
  data_=static_cast<ngp::TyreObservationFrame*>(MapViewOfFile(mapping_,FILE_MAP_WRITE,0,0,sizeof(*data_)));
  if(!data_)throw std::runtime_error("Tyre observation mapping view failed");cancel();
 }
 void cancel(){if(data_){InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),0);MemoryBarrier();}}
 bool publish(const ngp::TyreObservationFrame& f,const ngp::TyreObservationContext& c){
  if(!data_||!ngp::tyre_observation_valid(f,f.commit,f.commit,c)){cancel();return false;}
  InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(f.commit-1));
  MemoryBarrier();std::memcpy(&data_->packet,&f.packet,sizeof f.packet);data_->checksum=f.checksum;
  MemoryBarrier();InterlockedExchange(reinterpret_cast<volatile LONG*>(&data_->commit),static_cast<LONG>(f.commit));return true;
 }
};
