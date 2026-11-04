#pragma once
#include <stdint.h>
struct NgpDamperModelHint {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,valid_mask,reserved;
    uint64_t evidence_id;double source_clock,coefficient_scale[4];
};
struct NgpDamperModelHintFrame {uint32_t commit,checksum;NgpDamperModelHint packet;};
struct NgpDamperLocalStatus {
    // flags: low four bits are permission/context; bit 4 is a locally pending
    // application. No fresh model/candidate => no bit 4, even if permission stays.
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags;
    uint64_t evidence_id;double clock,balance_j,held_j;
};
struct NgpDamperLocalStatusFrame {uint32_t commit,checksum;NgpDamperLocalStatus packet;};
static_assert(sizeof(NgpDamperModelHint)==80&&sizeof(NgpDamperModelHintFrame)==88,"Damper hint ABI");
static_assert(sizeof(NgpDamperLocalStatus)==72&&sizeof(NgpDamperLocalStatusFrame)==80,"Damper status ABI");
