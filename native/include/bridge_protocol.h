#pragma once
#include <stdint.h>
// Native/CSP binary ABI. No pointers, strings, JSON, or platform-sized integers.
// All vectors are doubles. Positions are car-local metres; forces are world N.
enum { NGP4_ABI=4, NGP4_SENSOR_VALID=1, NGP4_OFFLINE=2, NGP4_PERMISSION=4, NGP4_PARENT_ENABLED=8 };
enum { NGP4_EFFECT_NONE=0, NGP4_EFFECT_YAW_DAMPING=1, NGP4_EFFECT_PROBE=2 };
enum { NGP4_CMD_ACTIVE=1, NGP4_CMD_DIAGNOSTIC=2 };
typedef struct Ngp4Sensor {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,ack_sequence,applied_frames;
    uint32_t api_status,api_stage,fault_code,api_calls,reserved[4];
    double dt,clock;
    double side[3],front_velocity[3],rear_velocity[3],linear_velocity[3];
    double wheel_omega[4];
    // Render-rate supplement: angle rad, ratio, load N, travel m, camber rad,
    // native Fx/Fy N and Mz Nm. flags bits 16..19 mark valid wheel supplements.
    double wheel[4][8];
} Ngp4Sensor;
typedef struct Ngp4Command {
    uint32_t abi,epoch,sequence,generation,car_hash,effect_id,max_hold_frames,flags;
    double ttl_seconds,source_clock,model_age_seconds,yaw_rate,spin_risk,authority;
    double power_w,yaw_moment_nm,damping_nm_s;
    double positions[2][3],forces[2][3];
} Ngp4Command;
typedef struct Ngp4SensorFrame {uint32_t commit,checksum;Ngp4Sensor packet;} Ngp4SensorFrame;
typedef struct Ngp4CommandFrame {uint32_t commit,checksum;Ngp4Command packet;} Ngp4CommandFrame;
#ifdef __cplusplus
#include <cstddef>
static_assert(sizeof(Ngp4Sensor)==464,"sensor ABI");
static_assert(sizeof(Ngp4Command)==200,"command ABI");
static_assert(sizeof(Ngp4SensorFrame)==472,"sensor frame ABI");
static_assert(sizeof(Ngp4CommandFrame)==208,"command frame ABI");
inline uint32_t ngp4_checksum(const void* data,size_t size){
    const auto* bytes=static_cast<const unsigned char*>(data);uint32_t a=1,b=0;
    for(size_t i=0;i<size;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}
    return (b<<16)|a;
}
#endif
