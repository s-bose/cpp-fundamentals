#include "parser.ih"

RuleValue Parser::negate(RuleValue &expr) const
{
    return -valueOf(expr);
}
