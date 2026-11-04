#pragma once
#include <stdint.h>
// Model hints carry no physical qualification or force permission.
struct NgpBrakeLocalHint {
 uint32_t abi,epoch,sequence,generation,car_hash,patch_code,valid_mask,reserved;
 uint64_t evidence_id;double source_clock,ratio[4];
};
struct NgpBrakeLocalHintFrame {uint32_t commit,checksum;NgpBrakeLocalHint packet;};
struct NgpBrakeLocalStatus {
 uint32_t abi,epoch,sequence,generation,car_hash,patch_code,flags,fault,model_sequence,api_calls,api_attempts,reserved;
 uint64_t evidence_id;double clock;
};
struct NgpBrakeLocalStatusFrame {uint32_t commit,checksum;NgpBrakeLocalStatus packet;};
static_assert(sizeof(NgpBrakeLocalHint)==80&&sizeof(NgpBrakeLocalHintFrame)==88,"Brake local hint ABI");
static_assert(sizeof(NgpBrakeLocalStatus)==64&&sizeof(NgpBrakeLocalStatusFrame)==72,"Brake local status ABI");
