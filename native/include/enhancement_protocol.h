#pragma once
#include <stdint.h>
#include "bridge_protocol.h"
// Independent extension to the stable ABI4 route. SI quantities throughout.
enum { NGPE_ABI=1, NGPE_SUSPENSION=1, NGPE_TYRE=2, NGPE_DIFF=4 };
typedef struct NgpeHints {
    uint32_t abi, suspension_mask, tyre_mask, diff_valid;
    double suspension_ns_m[4], tyre_ns_m[4], diff_capacity_nm;
} NgpeHints;
typedef struct NgpeSensor {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,traction_type,api_mask;
    uint32_t ack,applied_suspension,applied_tyre,applied_diff,api_calls,api_stage,fault,reserved;
    double dt,clock,supplement_age;
    double side[3],up[3],body_origin[3];
    double positions[4][3],body_velocity[4][3],wheel_velocity[4][3];
    double wheel_omega[4],load[4];
} NgpeSensor;
typedef struct NgpeCommand {
    uint32_t abi,epoch,sequence,generation,car_hash,channels,max_hold_frames,flags;
    double source_clock,ttl_seconds,model_age,power[3],total_power;
    double suspension_force[4][3],tyre_force[4][3],wheel_torque[4],positions[4][3];
} NgpeCommand;
typedef struct NgpeSensorFrame {uint32_t commit,checksum;NgpeSensor packet;} NgpeSensorFrame;
typedef struct NgpeCommandFrame {uint32_t commit,checksum;NgpeCommand packet;} NgpeCommandFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpeHints)==88,"enhancement hints ABI");
static_assert(sizeof(NgpeSensor)==512,"enhancement sensor ABI");
static_assert(sizeof(NgpeCommand)==408,"enhancement command ABI");
static_assert(sizeof(NgpeSensorFrame)==520,"enhancement sensor frame ABI");
static_assert(sizeof(NgpeCommandFrame)==416,"enhancement command frame ABI");
#endif
