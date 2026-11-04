#pragma once
#include <stdint.h>
typedef struct NgpDamperCommand {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,mask,reserved;
    uint64_t evidence_id;
    double source_clock,dt,work_bound_j;
    double body_local_point[4][3],wheel_local_point[4][3],world_force_n[4][3];
} NgpDamperCommand;
typedef struct NgpDamperObservation {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,completed_mask,api_calls,fault,samples_valid;
    uint64_t evidence_id;
    double clock_before,clock_after;
    double body_local_point[4][3],wheel_local_point[4][3],body_force_n[4][3],wheel_force_n[4][3];
    double body_before[4][3],body_after[4][3],wheel_before[4][3],wheel_after[4][3];
} NgpDamperObservation;
typedef struct NgpDamperCommandFrame {uint32_t commit,checksum;NgpDamperCommand packet;} NgpDamperCommandFrame;
typedef struct NgpDamperObservationFrame {uint32_t commit,checksum;NgpDamperObservation packet;} NgpDamperObservationFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpDamperCommand)==352,"Damper command ABI");
static_assert(sizeof(NgpDamperCommandFrame)==360,"Damper command frame ABI");
static_assert(sizeof(NgpDamperObservation)==832,"Damper observation ABI");
static_assert(sizeof(NgpDamperObservationFrame)==840,"Damper observation frame ABI");
#endif
