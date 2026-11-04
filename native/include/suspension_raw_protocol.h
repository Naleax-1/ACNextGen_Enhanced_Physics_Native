#pragma once
#include <stdint.h>
// Diagnostic raw values only: no unit, phase or actuator qualification.
typedef struct NgpSuspensionRawSensor {
 uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
 uint32_t app_masks[2],suspension_masks[2],damper_masks[2],render_mask,reserved2;
 uint64_t render_frames[2];
 double dt,clock_before,clock_after;
 double app_before[4],app_after[4],suspension_before[4],suspension_after[4],damper_before[4],damper_after[4];
} NgpSuspensionRawSensor;
typedef struct NgpSuspensionRawFrame {uint32_t commit,checksum;NgpSuspensionRawSensor packet;} NgpSuspensionRawFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpSuspensionRawSensor)==296,"Suspension raw packet ABI");
static_assert(sizeof(NgpSuspensionRawFrame)==304,"Suspension raw frame ABI");
#endif
