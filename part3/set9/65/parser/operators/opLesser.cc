#include "../parser.ih"

RuleValue Parser::opLesser(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (valueOf(lvalue) < valueOf(rvalue));
    return RuleValue(res);
}