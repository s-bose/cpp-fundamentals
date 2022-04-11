#include "parser.ih"

int Parser::lex()
{
    auto token = d_scanner.lex();
    if (token == Tokens::NR)    // convert semantic value of NR
                                // to int (STYPE_)
        d_val_ = std::stoi(d_scanner.matched());
    return token;
}