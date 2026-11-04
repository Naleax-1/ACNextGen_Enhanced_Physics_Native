#pragma once
#include "brake_local_protocol.h"
#include "drive_transport.hpp"
#include <windows.h>
#include <string>
#include <stdexcept>
#include <cstring>
class BrakeLocalMailbox {
 HANDLE handle=nullptr;NgpBrakeLocalHintFrame* data=nullptr;
public:
 BrakeLocalMailbox()=default;BrakeLocalMailbox(const BrakeLocalMailbox&)=delete;BrakeLocalMailbox& operator=(const BrakeLocalMailbox&)=delete;
 ~BrakeLocalMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
 void open(const std::wstring& name){
  if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpBrakeLocalHintFrame),name.c_str());
  if(!handle)throw std::runtime_error("Brake local hint mapping creation failed");
  data=static_cast<NgpBrakeLocalHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpBrakeLocalHintFrame)));
  if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Brake local hint view failed");}data->commit=0;
 }
 void publish(const NgpBrakeLocalHint& value){
  if(!data)return;if(!value.sequence){data->commit=0;return;}
  data->commit=value.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&value,sizeof value);
  data->checksum=ngp::drive_checksum(&value,sizeof value);MemoryBarrier();data->commit=value.sequence*2;
 }
};
