#include "../parser.ih"

RuleValue Parser::opSub(RuleValue &lvalue, RuleValue &rvalue)
{
    return RuleValue(valueOf(lvalue) - valueOf(rvalue));
}
