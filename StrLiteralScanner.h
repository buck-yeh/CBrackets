// This file is fully generated by running scannergen v1.5.0

#ifndef StrLiteralScannerH
#define StrLiteralScannerH

#include <bux/ImplScanner.h>

namespace bux {

class C_StrLiteralScanner: public C_ScannerImpl<uint8_t,int8_t,C_LexUTF32>
{
public:
    C_StrLiteralScanner(I_Parser &parser);
};

} // namespace bux

#endif // StrLiteralScannerH
