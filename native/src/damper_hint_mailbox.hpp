#pragma once
#include "damper_local_protocol.h"
#include "wheel_material_transport.hpp"
#include <windows.h>
#include <string>
#include <stdexcept>
#include <cstring>
class DamperHintMailbox {
    HANDLE handle=nullptr;NgpDamperModelHintFrame* data=nullptr;
public:
    DamperHintMailbox()=default;DamperHintMailbox(const DamperHintMailbox&)=delete;
    ~DamperHintMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpDamperModelHintFrame),name.c_str());
        if(!handle)throw std::runtime_error("Damper hint mapping creation failed");
        data=static_cast<NgpDamperModelHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpDamperModelHintFrame)));
        if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Damper hint mapping view failed");}data->commit=0;
    }
    void publish(const NgpDamperModelHint& hint){
        if(!data)return;if(!hint.sequence){data->commit=0;return;}
        data->commit=hint.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&hint,sizeof hint);
        data->checksum=ngp::wheel_material_checksum(&hint,sizeof hint);MemoryBarrier();data->commit=hint.sequence*2;
    }
};
