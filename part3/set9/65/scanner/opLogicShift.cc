#include "scanner.ih"

int Scanner::opLogicShift(std::string const &str)
{
    d_operator = str;
    if (str[0] == '|' or str[0] == '&')
        return Tokens::OP_LOGIC;
    
    return Tokens::OP_SHIFT;    // "<<" or ">>"
}