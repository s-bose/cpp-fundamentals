#include "parser.ih"

double Parser::valueOf(RuleValue const &expr) const
{
    return expr.d_type == RuleValue::VALUE ? 
                expr.d_number 
            : 
                d_value[expr.d_idx];
}
