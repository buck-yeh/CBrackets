#pragma once

#include <bux/ScannerBase.h>    // bux::C_LexUTF32

namespace bux {

bool bracketsMatched(const C_LexUTF32 *ch, size_t n);

} // namespace bux
