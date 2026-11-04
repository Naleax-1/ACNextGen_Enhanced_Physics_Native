#pragma once
#include <stdint.h>
typedef struct NgpWheelInterval {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
    double dt,clock_before,clock_after;
    double origin_before[3],origin_after[3],up_before[3],up_after[3];
    double positions_before[4][3],positions_after[4][3],body_velocity_before[4][3],body_velocity_after[4][3];
} NgpWheelInterval;
typedef struct NgpWheelIntervalFrame {uint32_t commit,checksum;NgpWheelInterval packet;} NgpWheelIntervalFrame;
typedef struct NgpWheelMaterial {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
    double dt,clock_before,clock_after;
    double body_before[4][3],body_after[4][3],wheel_before[4][3],wheel_after[4][3];
} NgpWheelMaterial;
typedef struct NgpWheelMaterialFrame {uint32_t commit,checksum;NgpWheelMaterial packet;} NgpWheelMaterialFrame;
typedef struct NgpWheelGeometry {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
    double clock,body_origin[3],body_axes[3][3],wheel_origin[4][3],wheel_axes[4][3][3];
} NgpWheelGeometry;
typedef struct NgpWheelGeometryFrame {uint32_t commit,checksum;NgpWheelGeometry packet;} NgpWheelGeometryFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpWheelInterval)==536,"Wheel interval ABI");
static_assert(sizeof(NgpWheelIntervalFrame)==544,"Wheel interval frame ABI");
static_assert(sizeof(NgpWheelMaterial)==440,"Wheel material ABI");
static_assert(sizeof(NgpWheelMaterialFrame)==448,"Wheel material frame ABI");
static_assert(sizeof(NgpWheelGeometry)==520,"Wheel geometry ABI");
static_assert(sizeof(NgpWheelGeometryFrame)==528,"Wheel geometry frame ABI");
#endif
