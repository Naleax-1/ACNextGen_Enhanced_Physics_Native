#pragma once
#include <stdint.h>
typedef struct NgpBodySensor {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
    double dt,clock,axes[3][3],positions[4][3],velocity_local[4][3];
} NgpBodySensor;
typedef struct NgpBodySensorFrame {uint32_t commit,checksum;NgpBodySensor packet;} NgpBodySensorFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpBodySensor)==312,"Body sensor ABI");
static_assert(sizeof(NgpBodySensorFrame)==320,"Body sensor frame ABI");
#endif
