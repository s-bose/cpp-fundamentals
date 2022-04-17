#include "../parser.ih"

RuleValue Parser::opOr(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (int_(lvalue) | int_(rvalue));
    return RuleValue(res);
}