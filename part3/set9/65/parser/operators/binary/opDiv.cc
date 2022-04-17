#include "../../parser.ih"

RuleValue Parser::opDiv(RuleValue &lvalue, RuleValue &rvalue)
{
    return RuleValue(valueOf(lvalue) / valueOf(rvalue));
}