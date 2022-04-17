#include "../parser.ih"

RuleValue Parser::opRShiftEq(RuleValue &lvalue, RuleValue &rvalue)
{
    double shifted = int_(lvalue) >> int_(rvalue);
    return RuleValue(shifted);
}
