#pragma once
#include <stdint.h>
// Separate experimental ABI; never reinterpret the existing force command.
enum { NGP_TYRE_LOCAL_ABI=1, NGP_TYRE_LOCAL_EFFECT=0x54595245,
       NGP_TYRE_LOCAL_EXISTING_EFFECT=0x544c4547 };
// Status bit 32 indicates at least one API call with an unknown outcome.
enum { NGP_TYRE_STATUS_UNCERTAIN=32, NGP_TYRE_STATUS_EXISTING=64 };
struct NgpTyreLocalHint {
 uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sensor_sequence,model_sequence,valid_mask,effect_id;
 uint64_t evidence_id;
 double sensor_clock,model_clock,coefficient[4];
};
struct NgpTyreLocalHintFrame {uint32_t commit,checksum;NgpTyreLocalHint packet;};
// Power is callback-observed successful-call power, not an AC solver receipt.
struct NgpTyreLocalStatus {
 uint32_t abi,epoch,generation,car_hash,patch_code,sequence,ack_hint_sequence,api_calls,applied_frames,fault,flags,active_mask;
 uint64_t evidence_id;
 double clock,observed_power_w,observed_dissipated_j;
};
struct NgpTyreLocalStatusFrame {uint32_t commit,checksum;NgpTyreLocalStatus packet;};
static_assert(sizeof(NgpTyreLocalHint)==96&&sizeof(NgpTyreLocalHintFrame)==104,"Tyre local hint ABI");
static_assert(sizeof(NgpTyreLocalStatus)==80&&sizeof(NgpTyreLocalStatusFrame)==88,"Tyre local status ABI");
