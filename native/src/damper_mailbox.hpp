#pragma once
#include "damper_transport.hpp"
#include <windows.h>
#include <string>
#include <stdexcept>
#include <cstring>
struct DamperCommandMailbox {
    HANDLE handle=nullptr;NgpDamperCommandFrame* data=nullptr;
    DamperCommandMailbox()=default;
    DamperCommandMailbox(const DamperCommandMailbox&)=delete;
    DamperCommandMailbox& operator=(const DamperCommandMailbox&)=delete;
    ~DamperCommandMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        if(data)return;
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpDamperCommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Damper command mapping creation failed");
        data=static_cast<NgpDamperCommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpDamperCommandFrame)));
        if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Damper command mapping view failed");}
        data->commit=0;
    }
    void publish(const NgpDamperCommand& command){
        if(!data)return;
        if(!command.sequence){data->commit=0;return;}
        data->commit=command.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&command,sizeof command);data->checksum=ngp::wheel_material_checksum(&command,sizeof command);
        MemoryBarrier();data->commit=command.sequence*2;
    }
};
