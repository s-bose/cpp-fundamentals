#include "parser.ih"

RuleValue::RuleValue()
:
    d_type(VARIABLE),
    d_idx(0)
{}

RuleValue::RuleValue(double value)
:
    d_type(VALUE),
    d_number(value)
{}

RuleValue::RuleValue(unsigned idx)
:
    d_type(VARIABLE),
    d_idx(idx)
{}

