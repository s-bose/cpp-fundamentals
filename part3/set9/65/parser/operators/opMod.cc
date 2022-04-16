#include "../parser.ih"

RuleValue Parser::opMod(RuleValue &lvalue, RuleValue &rvalue) const
{
    lvalue.d_number = int_(lvalue) % int_(rvalue);
    lvalue.d_type = RuleValue::VALUE;

    return move(lvalue);
}