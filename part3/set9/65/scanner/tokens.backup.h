#ifndef INCLUDED_TOKENS_
#define INCLUDED_TOKENS_

struct Tokens
{
    // Symbolic tokens:
    enum Tokens_
    {
        NUMBER = 257,
        IDENT,
        LIST,
        OP_ASSIGN,
        OP_LOGIC,
        OP_COMP,
        OP_SHIFT,
        uMinus,
    };

    enum OpAssign_
    {
        PLUS = 300,
        MINUS,
        MUL,
        DIV,
        MOD,
        AND,
        OR,
        XOR,
        SHL,
        SHR,
    };

    enum OpComp_
    {
        EQ = 310,
        NEQ,
        LEQ,
        GEQ,
    };

    enum OpLogic_
    {
        L_OR = 320,
        L_AND,
    };
};

#endif
