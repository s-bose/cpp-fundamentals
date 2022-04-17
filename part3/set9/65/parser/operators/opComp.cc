#include "../parser.ih"

RuleValue Parser::opComp(RuleValue &lvalue, RuleValue &rvalue)
{
    int token = d_scanner.getCurrOp();
    size_t idx = token - Tokens::PLUS;
    return (this->*s_opFunc[idx])(lvalue, rvalue);
}
