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
        EQ,
        NEQ,
        LEQ,
        GEQ,
        SHL,
        SHR,
    };

    enum OpLogic_
    {
        L_OR = 400,
        L_AND,
    };
};

#endif
