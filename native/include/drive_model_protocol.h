#pragma once
#include <stdint.h>
enum { NGPD_MODEL_ABI=1 };
// Values owned by drivetrain and driveline_windup. No actuator permission.
typedef struct NgpdModelHints {
    uint32_t abi,valid,units_qualified,reserved;
    double wheel_drive_torque_model_nm,drive_normalized,windup_demand_normalized;
    double windup_transmitted_normalized,windup_torque_normalized,windup_soft_normalized;
} NgpdModelHints;
// Separate additive API preserves the original 64-byte drive hint ABI.
typedef struct NgpdModelComponents {
    uint32_t abi,valid,units_qualified,reserved;
    double transmission_correction,windup_correction;
} NgpdModelComponents;
#ifdef __cplusplus
static_assert(sizeof(NgpdModelComponents)==32,"Drive components ABI");
static_assert(sizeof(NgpdModelHints)==64,"Drive model hints ABI");
#endif
