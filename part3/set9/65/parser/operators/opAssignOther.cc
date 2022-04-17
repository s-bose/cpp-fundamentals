#include "../parser.ih"

RuleValue &Parser::opAssignOthr(RuleValue &lvalue, RuleValue &rvalue)
{
    if (lvalue.d_type == RuleValue::VARIABLE)
    {
        int currOp = d_scanner.getCurrOp(); // get current op token
        size_t idx = currOp - Tokens::PLUS; // offset
        RuleValue res = (this->*s_opFunc[idx])(lvalue, rvalue);
            // if op comparison [==, !=, <=, >=] 
            // don't mutate lvalue
        if (currOp >= Tokens::EQ and currOp <= Tokens::GEQ)
            return move(res);

        d_value[lvalue.d_idx] = valueOf(res);
    }
    else if (d_display)
    {
        ++d_nErrors_;
        error("Non-lvalue in assignment");
    }

    return lvalue;
}