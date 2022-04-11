#include "parser.ih"

int Parser::lex()
{
    auto token = d_scanner.lex();
    if (token == Tokens::NUM)   // convert NUM's semantic value to
                                // double (STYPE_)
        d_val_ = std::stod(d_scanner.matched());
    return token;
}