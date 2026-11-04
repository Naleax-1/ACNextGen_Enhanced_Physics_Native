#pragma once
#include "drive_local_protocol.h"
#include "drive_transport.hpp"
#include <windows.h>
#include <stdexcept>
#include <string>
#include <cstring>
class DriveLocalMailbox {
    HANDLE handle=nullptr;NgpDriveLocalHintFrame* data=nullptr;
public:
    DriveLocalMailbox()=default;DriveLocalMailbox(const DriveLocalMailbox&)=delete;DriveLocalMailbox& operator=(const DriveLocalMailbox&)=delete;
    ~DriveLocalMailbox(){if(data){data->commit=0;UnmapViewOfFile(data);}if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        if(data)return;handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpDriveLocalHintFrame),name.c_str());
        if(!handle)throw std::runtime_error("Drive local hint mapping creation failed");
        data=static_cast<NgpDriveLocalHintFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpDriveLocalHintFrame)));
        if(!data){CloseHandle(handle);handle=nullptr;throw std::runtime_error("Drive local hint mapping view failed");}data->commit=0;
    }
    void publish(const NgpDriveLocalHint& value){
        if(!data)return;if(!value.sequence){data->commit=0;return;}
        data->commit=value.sequence*2-1;MemoryBarrier();std::memcpy(&data->packet,&value,sizeof value);
        data->checksum=ngp::drive_checksum(&value,sizeof value);MemoryBarrier();data->commit=value.sequence*2;
    }
};
