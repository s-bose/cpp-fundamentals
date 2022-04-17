#include "../../parser.ih"

RuleValue Parser::opNeq(RuleValue &lvalue, RuleValue &rvalue)
{
    double ret = (int_(lvalue) != int_(rvalue));
    return RuleValue(ret);
}
