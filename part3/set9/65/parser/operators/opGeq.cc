#include "../parser.ih"

RuleValue Parser::opGeq(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (int_(lvalue) >= int_(rvalue));
    return RuleValue(res);
}
