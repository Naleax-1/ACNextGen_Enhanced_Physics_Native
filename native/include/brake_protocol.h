#pragma once
#include <stdint.h>
enum { NGPB_ABI=1 };
// Owned model values only. No wheel torque permission or SI approval.
typedef struct NgpbModelHints {
    uint32_t abi,valid_mask,units_qualified,reserved;
    double friction_ratio[4],disc_temperature_model[4],lock_ratio[4];
} NgpbModelHints;
typedef struct NgpbSensor {
    uint32_t abi,epoch,sequence,generation,car_hash,valid_mask,abs_in_action,units_qualified;
    double dt,clock,brake_input,handbrake_input;
    double brake_torque_raw[4],handbrake_torque_raw[4],angular_speed_raw[4];
} NgpbSensor;
typedef struct NgpbSensorFrame {uint32_t commit,checksum;NgpbSensor packet;} NgpbSensorFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpbModelHints)==112,"Brake model hints ABI");
static_assert(sizeof(NgpbSensor)==160,"Brake sensor ABI");
static_assert(sizeof(NgpbSensorFrame)==168,"Brake sensor frame ABI");
#endif
