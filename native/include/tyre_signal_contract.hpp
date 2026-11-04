#pragma once
#include "json.hpp"
#include <string>
namespace ngp {
inline bool tyre_signal_contract_valid(const std::string& mode){return mode=="original"||mode=="owner_state_v1";}
inline bool tyre_signal_request_matches(const nlohmann::json& request,const std::string& mode){
 if(!tyre_signal_contract_valid(mode)||!request.is_object())return false;
 auto value=request.find("tyre_signal_contract");
 if(value==request.end())return mode=="original";
 return value->is_string()&&value->get<std::string>()==mode;
}
}
