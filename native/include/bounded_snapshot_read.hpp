#pragma once
namespace ngp {
// Retry only acquisition, never accept cached/partially copied output. No wait,
// no freshness extension, and a permanently invalid frame remains invalid.
template<class T,class Reader> bool bounded_snapshot_read(T& out,Reader read){
    for(unsigned i=0;i<3;++i){T candidate{};if(read(candidate)){out=candidate;return true;}}
    return false;
}
}
