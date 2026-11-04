#pragma once
#include <stdint.h>
struct NgpCphysPacket {
 uint32_t abi,epoch,sequence,valid_mask;
 double dt,clock;
 double car[17];
 double wheel[4][9];
};
struct NgpCphysFrame {uint32_t commit,checksum;NgpCphysPacket packet;};
static_assert(sizeof(NgpCphysPacket)==456,"cphys packet ABI");
static_assert(sizeof(NgpCphysFrame)==464,"cphys frame ABI");
inline uint32_t cphys_checksum(const NgpCphysPacket& p){const auto* bytes=reinterpret_cast<const unsigned char*>(&p);uint32_t a=1,b=0;
for(unsigned i=0;i<sizeof p;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}return b*65536+a;}
