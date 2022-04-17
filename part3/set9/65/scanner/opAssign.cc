#include "scanner.ih"

int Scanner::opAssign(std::string const &str)
{
    d_operator = str.size() == 2 
                            ? std::string{str[0]} 
                            : str.substr(0, 2);

    return Tokens::OP_ASSIGN;
}