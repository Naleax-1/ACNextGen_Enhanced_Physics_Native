#pragma once
#include <stdint.h>
// Separate read-only source. clock is NOT Common Worker time. No force consent.
typedef struct NgpFFBPhysicsInput {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
    double dt,clock;
    double position[3],axes[3][3],local_velocity_raw[3],local_angular_velocity_raw[3];
    double wheel_position[4][3],wheel_axes[4][3][3],wheel_velocity_raw[4][3];
    // damperSpeed, travel, omega, load, fx, fy, mz, slipAngle, slipRatio; raw SDK values.
    double wheel_values[4][9];
} NgpFFBPhysicsInput;
typedef struct NgpFFBPhysicsInputFrame {uint32_t commit,checksum;NgpFFBPhysicsInput packet;} NgpFFBPhysicsInputFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpFFBPhysicsInput)==960,"FFB input ABI");
static_assert(sizeof(NgpFFBPhysicsInputFrame)==968,"FFB input frame ABI");
#endif
