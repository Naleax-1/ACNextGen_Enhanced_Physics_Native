#pragma once
#include <stdint.h>
enum { NGP_BODY_FORCE_ABI=1 };
typedef struct NgpBodyForceCommand {
    uint32_t abi,epoch,generation,car_hash,sequence,mask,reserved[2];
    uint64_t evidence_id;
    double source_clock,work_bound_j,positions[4][3],forces[4][3];
} NgpBodyForceCommand;
typedef struct NgpBodyObservation {
    uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault,samples_valid,reserved;
    uint64_t evidence_id;
    double clock_before,clock_after,positions[4][3],forces[4][3],velocity_before[4][3],velocity_after[4][3];
} NgpBodyObservation;
typedef struct NgpBodyForceCommandFrame {uint32_t commit,checksum;NgpBodyForceCommand packet;} NgpBodyForceCommandFrame;
typedef struct NgpBodyObservationFrame {uint32_t commit,checksum;NgpBodyObservation packet;} NgpBodyObservationFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpBodyForceCommand)==248,"Body command ABI");
static_assert(sizeof(NgpBodyObservation)==448,"Body observation ABI");
static_assert(sizeof(NgpBodyForceCommandFrame)==256,"Body command frame ABI");
static_assert(sizeof(NgpBodyObservationFrame)==456,"Body observation frame ABI");
#endif
