#pragma once
#include <stdint.h>
enum { NGPS_FORCE_ABI=1 };
typedef struct NgpsForceCommand {
    uint32_t abi,epoch,generation,car_hash,sequence,mask,reserved[2];
    uint64_t reference_lease;
    double source_clock,ttl,return_energy_j;
    double up[3],body_force_n[4],positions[4][3];
} NgpsForceCommand;
typedef struct NgpsForceReceipt {
    uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault;
    uint64_t reference_lease;
    double clock,estimated_work_j;
    uint32_t work_qualified,reserved;
} NgpsForceReceipt;
typedef struct NgpsForceCommandFrame {uint32_t commit,checksum;NgpsForceCommand packet;} NgpsForceCommandFrame;
typedef struct NgpsForceReceiptFrame {uint32_t commit,checksum;NgpsForceReceipt packet;} NgpsForceReceiptFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpsForceCommand)==216,"Spring force command ABI");
static_assert(sizeof(NgpsForceReceipt)==64,"Spring force receipt ABI");
static_assert(sizeof(NgpsForceCommandFrame)==224,"Spring command frame ABI");
static_assert(sizeof(NgpsForceReceiptFrame)==72,"Spring receipt frame ABI");
#endif
