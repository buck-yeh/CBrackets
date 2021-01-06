# Brief
Library to scan doubly-bracketed values in form of [[...]]
1. from annotated production rules of `parsergen`'s input:
    ~~~c++
    <Line> ::= <NewLexIds>              [[]]
    <Line> ::= <OperatorAssociation>    [[
        auto &c = $c;
        if (!c.testCond())
            return;

        $1.m_attr.disown(); // not a pointer
        c.incWeight();
    ]]
    ~~~
2. from option definitions of both `parsergen` and `scannergen`'s inputs:
    ~~~c++
    %HEADERS_FOR_CPP     [[
    #include "ParserIdDef.h"

    // %HEADERS_FOR_SCANNER_CPP expanded BEGIN
    #include "BracketBalance.h"
    // %HEADERS_FOR_SCANNER_CPP expanded END
    ]]
    ~~~
