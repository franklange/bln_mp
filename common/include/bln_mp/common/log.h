#pragma once

#include <bln_log/log.hpp>

namespace bln_mp::common {

#define log_dbg_base(args, ...) bln_log_dbg(args, ## __VA_ARGS__)
#define log_rel_base(args, ...) bln_log_rel(args, ## __VA_ARGS__)
#define log_err_base(args, ...) bln_log_err(args, ## __VA_ARGS__)

} // namespace bln_mp::common
