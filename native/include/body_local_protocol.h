#pragma once
#include <stdint.h>
typedef struct NgpBodyLocalHint {
 uint32_t abi,epoch,sequence,generation,car_hash,patch_code,valid_mask,reserved;
 uint64_t evidence_id;
 double source_clock,roll_moment_nm,pitch_moment_nm,yaw_moment_nm;
} NgpBodyLocalHint;
typedef struct NgpBodyLocalStatus {
 uint32_t abi,epoch,sequence,generation,car_hash,patch_code,flags,fault,model_sequence,sent,acked,reserved;
 uint64_t evidence_id;
 double clock,balance_j,held_j;
} NgpBodyLocalStatus;
typedef struct NgpBodyLocalHintFrame {uint32_t commit,checksum;NgpBodyLocalHint packet;} NgpBodyLocalHintFrame;
typedef struct NgpBodyLocalStatusFrame {uint32_t commit,checksum;NgpBodyLocalStatus packet;} NgpBodyLocalStatusFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpBodyLocalHint)==72,"Body local hint ABI");
static_assert(sizeof(NgpBodyLocalStatus)==80,"Body local status ABI");
static_assert(sizeof(NgpBodyLocalHintFrame)==80,"Body local hint frame ABI");
static_assert(sizeof(NgpBodyLocalStatusFrame)==88,"Body local status frame ABI");
#endif
