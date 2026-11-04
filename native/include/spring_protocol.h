#pragma once
#include <stdint.h>
// Independent candidate ABI. No force permission is represented by this packet.
enum { NGPS_ABI=1 };
typedef struct NgpsModelHints {
    uint32_t abi,valid_mask,units_qualified,reserved;
    double effective_rate[4],base_rate[4],excess_ratio[4];
} NgpsModelHints;
typedef struct NgpsHintsPacket {
    uint32_t abi,epoch,generation,car_hash,sequence,flags;
    double source_clock,model_age;
    NgpsModelHints hints;
} NgpsHintsPacket;
typedef struct NgpsHintsFrame {
    uint32_t commit,checksum;
    NgpsHintsPacket packet;
} NgpsHintsFrame;
#ifdef __cplusplus
static_assert(sizeof(NgpsModelHints)==112,"Spring hints ABI");
static_assert(sizeof(NgpsHintsPacket)==152,"Spring packet ABI");
static_assert(sizeof(NgpsHintsFrame)==160,"Spring frame ABI");
#endif
