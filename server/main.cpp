#include <bln_mp/common/log.h>

#define TAG "[MAIN]"
#define log(args, ...) log_rel_base(TAG, args, ## __VA_ARGS__)

auto main() -> int
{
    log("hi");

    return 0;
}
