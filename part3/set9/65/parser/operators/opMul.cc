#include "../parser.ih"

RuleValue Parser::opMul(RuleValue &lvalue, RuleValue &rvalue)
{
    return RuleValue(valueOf(lvalue) * valueOf(rvalue));
}