#include "../parser.ih"

RuleValue Parser::opLogic(RuleValue &op,
                   RuleValue &lvalue, RuleValue &rvalue)
{
    if (int_(op) == Tokens::OpLogic_::L_AND)
        lvalue.d_number = (int_(lvalue) && int_(rvalue));
    else
        lvalue.d_number = (int_(lvalue) || int_(rvalue));

    lvalue.d_type = RuleValue::VALUE;
    return move(lvalue);
}