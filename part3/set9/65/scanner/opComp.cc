#include "scanner.ih"

int Scanner::opComp(std::string const &str)
{
    d_operator = std::string{ str[0] };
    return Tokens::OP_COMP;
}