#include "parser.ih"

// $insert lex
int Parser::lex()
{
    auto token = d_scanner.lex();
    if (token == Tokens::NUM)
        d_val_ = std::stod(d_scanner.matched());
    return token;
}