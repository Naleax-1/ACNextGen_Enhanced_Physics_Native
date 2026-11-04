#pragma once
#include "body_local_protocol.h"
#include "body_transport.hpp"
#include <windows.h>
#include <cstring>
#include <stdexcept>
#include <string>
class BodyLocalMailbox {
 HANDLE handle=nullptr;NgpBodyLocalHintFrame* data=nullptr;
public:
 BodyLocalMailbox()=default;BodyLocalMailbox(const BodyLocalMailbox&)=delete;BodyLocalMailbox& operator=(const BodyLocalMailbox&)=delete;
 ~BodyLocalMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
 void open(const std::wstring& name){
  if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpBodyLocalHintFrame),name.c_str());
  if(!handle)throw std::runtime_error("Body local hint mapping creation failed");
  data=static_cast<NgpBodyLocalHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpBodyLocalHintFrame)));
  if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Body local hint view failed");}data->commit=0;
 }
 void publish(const NgpBodyLocalHint& value){
  if(!data)return;if(!value.sequence){data->commit=0;return;}
  data->commit=value.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&value,sizeof value);
  data->checksum=ngp::body_checksum(&value,sizeof value);MemoryBarrier();data->commit=value.sequence*2;
 }
};
