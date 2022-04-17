#include "../../parser.ih"

RuleValue Parser::opGreater(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (valueOf(lvalue) > valueOf(rvalue));
    return RuleValue(res);
}