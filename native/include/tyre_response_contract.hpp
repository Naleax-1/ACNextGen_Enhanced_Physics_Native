#pragma once
#include "json.hpp"
#include <string>
namespace ngp {
inline bool tyre_response_contract_valid(const std::string& mode){
    return mode=="legacy"||mode=="owned_lateral_limit_v1";
}
inline bool tyre_response_request_matches(const nlohmann::json& command,const std::string& mode){
    if(!tyre_response_contract_valid(mode)||!command.is_object())return false;
    auto value=command.find("tyre_response_contract");
    if(value==command.end())return mode=="legacy";
    return value->is_string()&&value->get<std::string>()==mode;
}
}
