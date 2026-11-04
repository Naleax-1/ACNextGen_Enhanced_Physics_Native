#pragma once
#include "wheel_torque_local_protocol.h"
#include "drive_transport.hpp"
#include <windows.h>
#include <stdexcept>
#include <string>
class WheelTorqueLocalMailbox {
    HANDLE handle=nullptr;NgpWheelLocalHintFrame* data=nullptr;
public:
    WheelTorqueLocalMailbox()=default;WheelTorqueLocalMailbox(const WheelTorqueLocalMailbox&)=delete;WheelTorqueLocalMailbox& operator=(const WheelTorqueLocalMailbox&)=delete;
    ~WheelTorqueLocalMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpWheelLocalHintFrame),name.c_str());
        if(!handle)throw std::runtime_error("Wheel local hint mapping creation failed");
        data=static_cast<NgpWheelLocalHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpWheelLocalHintFrame)));
        if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Wheel local hint mapping view failed");}data->commit=0;
    }
    void publish(const NgpWheelLocalHint& q){
        if(!data)return;if(!q.sequence){data->commit=0;return;}
        data->commit=q.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&q,sizeof q);
        data->checksum=ngp::drive_checksum(&q,sizeof q);MemoryBarrier();data->commit=q.sequence*2;
    }
};
