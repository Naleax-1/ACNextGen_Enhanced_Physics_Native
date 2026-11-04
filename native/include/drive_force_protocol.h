#pragma once
#include <stdint.h>
enum { NGPD_FORCE_ABI=1 };
typedef struct NgpdForceCommand {
    uint32_t abi,epoch,generation,car_hash,sequence,mask,sensor_sequence,reserved;
    uint64_t evidence_id;
    double source_clock,work_bound_j,delta_nm[2];
} NgpdForceCommand;
// Raw observations only. This packet grants no work/unit qualification.
typedef struct NgpdForceObservation {
    uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault,samples_valid,reserved;
    uint64_t evidence_id;
    double clock_before,clock_after,omega_before[2],omega_after[2],applied_nm[2];
} NgpdForceObservation;
typedef struct NgpdForceCommandFrame {uint32_t commit,checksum;NgpdForceCommand packet;} NgpdForceCommandFrame;
typedef struct NgpdForceObservationFrame {uint32_t commit,checksum;NgpdForceObservation packet;} NgpdForceObservationFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpdForceCommand)==72,"Drive command ABI");
static_assert(sizeof(NgpdForceObservation)==112,"Drive raw observation ABI");
static_assert(sizeof(NgpdForceCommandFrame)==80,"Drive command frame ABI");
static_assert(sizeof(NgpdForceObservationFrame)==120,"Drive raw observation frame ABI");
#endif
