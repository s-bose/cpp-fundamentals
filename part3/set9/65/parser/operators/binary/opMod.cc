#include "../../parser.ih"

RuleValue Parser::opMod(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (int_(lvalue) % int_(rvalue));
    return RuleValue(res);
}