#include "../parser.ih"

RuleValue Parser::opAdd(RuleValue &lvalue, RuleValue &rvalue) const
{
    lvalue.d_number = valueOf(lvalue) + valueOf(rvalue);
    lvalue.d_type = RuleValue::VALUE;

    return move(lvalue);
}