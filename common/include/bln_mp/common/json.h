#pragma once

#include <nlohmann/json.hpp>

#include <string>

namespace bln_mp::common {

using Json = nlohmann::json;

auto to_string(const Json&, int indent = -1) -> std::string;

} // namespace bln_mp::common
