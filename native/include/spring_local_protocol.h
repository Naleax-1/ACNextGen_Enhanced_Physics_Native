#pragma once
#include <stdint.h>
enum { NGP_SPRING_LOCAL_EFFECT_ID = 2 };
struct NgpSpringLocalHint {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,valid_mask,effect_id;
    uint64_t evidence_id;double source_clock,excess_ratio[4];
};
struct NgpSpringLocalHintFrame {uint32_t commit,checksum;NgpSpringLocalHint packet;};
struct NgpSpringLocalStatus {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags;
    uint64_t evidence_id,reference_lease;double clock,balance_j,held_j;
};
struct NgpSpringLocalStatusFrame {uint32_t commit,checksum;NgpSpringLocalStatus packet;};
static_assert(sizeof(NgpSpringLocalHint)==80&&sizeof(NgpSpringLocalHintFrame)==88,"Spring local hint ABI");
static_assert(sizeof(NgpSpringLocalStatus)==80&&sizeof(NgpSpringLocalStatusFrame)==88,"Spring local status ABI");
