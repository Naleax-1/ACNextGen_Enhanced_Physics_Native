#pragma once
#include <stdint.h>
// Diagnostic only: SDK frame counters are not brake solver timestamps.
typedef struct NgpbTiming {
    uint32_t abi,epoch,sequence,generation,car_hash,flags,reserved[2];
    double clock,sdk_frame_before,sdk_frame_after;
} NgpbTiming;
typedef struct NgpbTimingFrame {uint32_t commit,checksum;NgpbTiming packet;} NgpbTimingFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpbTiming)==56,"Brake timing diagnostic ABI");
static_assert(sizeof(NgpbTimingFrame)==64,"Brake timing frame ABI");
#endif
