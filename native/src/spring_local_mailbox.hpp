#pragma once
#include "spring_local_protocol.h"
#include "wheel_material_transport.hpp"
#include <windows.h>
#include <string>
#include <stdexcept>
#include <cstring>
class SpringLocalMailbox {
    HANDLE handle=nullptr;NgpSpringLocalHintFrame* data=nullptr;
public:
    SpringLocalMailbox()=default;SpringLocalMailbox(const SpringLocalMailbox&)=delete;
    ~SpringLocalMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpSpringLocalHintFrame),name.c_str());
        if(!handle)throw std::runtime_error("Spring local mapping creation failed");
        data=static_cast<NgpSpringLocalHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpSpringLocalHintFrame)));
        if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Spring local mapping view failed");}data->commit=0;
    }
    void publish(const NgpSpringLocalHint& value){
        if(!data)return;if(!value.sequence){data->commit=0;return;}
        data->commit=value.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&value,sizeof value);
        data->checksum=ngp::wheel_material_checksum(&value,sizeof value);MemoryBarrier();data->commit=value.sequence*2;
    }
};
