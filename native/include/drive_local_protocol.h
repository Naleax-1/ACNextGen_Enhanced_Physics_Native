#pragma once
#include <stdint.h>
enum { NGP_DRIVE_LOCAL_ABI=2, NGP_DRIVE_LOCAL_HINT_ABI=3, NGP_DRIVE_LOCAL_EFFECT_ID=3 };
// Additional windup components; no unit or energy permission in hints.
struct NgpDriveLocalHint {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,effect_id,reserved;
    uint64_t evidence_id;double source_clock,demand,soft,transmission,windup,lsd_capacity;
};
struct NgpDriveLocalHintFrame {uint32_t commit,checksum;NgpDriveLocalHint packet;};
struct NgpDriveLocalStatus {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags,effect_id,reserved;
    uint64_t evidence_id;double clock,held_j,balance_j;
};
struct NgpDriveLocalStatusFrame {uint32_t commit,checksum;NgpDriveLocalStatus packet;};
static_assert(sizeof(NgpDriveLocalHint)==88&&sizeof(NgpDriveLocalHintFrame)==96,"Drive local hint ABI");
static_assert(sizeof(NgpDriveLocalStatus)==80&&sizeof(NgpDriveLocalStatusFrame)==88,"Drive local status ABI");
