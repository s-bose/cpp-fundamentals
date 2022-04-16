#include "parser.ih"

RuleValue &Parser::assign(RuleValue &lvalue, RuleValue &rvalue)
{
    if (lvalue.d_type == RuleValue::VARIABLE)
        d_value[lvalue.d_idx] = valueOf(rvalue);
    else if (d_display)
    {
        ++d_nErrors_;
        error("Non-lvalue in assignment");
    }
    
    return lvalue;
}
