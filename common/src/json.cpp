#include <bln_mp/common/json.h>

namespace bln_mp::common {

auto to_string(const Json& j, const int indent) -> std::string
{
    return j.dump(indent);
}

} // namespace bln_mp::common
