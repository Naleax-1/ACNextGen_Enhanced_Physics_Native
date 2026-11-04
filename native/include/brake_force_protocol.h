#pragma once
#include <stdint.h>
enum { NGPB_FORCE_ABI=1 };
typedef struct NgpbForceCommand {
    uint32_t abi,epoch,generation,car_hash,sequence,mask,sensor_sequence,reserved;
    uint64_t evidence_id;
    double source_clock;
    double ratio[4],baseline_nm[4],delta_raw[4];
} NgpbForceCommand;
typedef struct NgpbForceReceipt {
    uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault;
    uint64_t evidence_id;
    double clock;
    uint32_t api_attempts,reserved;
} NgpbForceReceipt;
typedef struct NgpbForceCommandFrame {uint32_t commit,checksum;NgpbForceCommand packet;} NgpbForceCommandFrame;
typedef struct NgpbForceReceiptFrame {uint32_t commit,checksum;NgpbForceReceipt packet;} NgpbForceReceiptFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpbForceCommand)==144,"Brake force command ABI");
static_assert(sizeof(NgpbForceReceipt)==56,"Brake force receipt ABI");
static_assert(sizeof(NgpbForceCommandFrame)==152,"Brake force command frame ABI");
static_assert(sizeof(NgpbForceReceiptFrame)==64,"Brake force receipt frame ABI");
#endif
