#include "../parser.ih"

RuleValue Parser::opAdd(RuleValue &lvalue, RuleValue &rvalue)
{
    return RuleValue(valueOf(lvalue) + valueOf(rvalue));
}
