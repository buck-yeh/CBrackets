#include "BracketBalance.h"
#include "StrLiteralScanner.h"

namespace bux {

bool bracketsMatched(const C_LexUTF32 *ch, size_t n)
{
    struct: I_Parser
    {
        size_t          m_lcount{}, m_rcount{};

        // Implement I_Parser
        void add(T_LexID token, unsigned, unsigned, I_LexAttr*) override
        {
            switch (token)
            {
            case '[':   ++m_lcount; break;
            case ']':   ++m_rcount; break;
            default:;
            }
        }
        std::string_view setSource(std::string_view) override
        {
            return {};
        }
    }   parser;

    C_StrLiteralScanner scanner(parser);
    for (size_t i = 0; i < n; ++i)
        scanner.add(unsigned(i), ch[i]);

    return  parser.m_lcount <= parser.m_rcount;
}

} // namespace bux
