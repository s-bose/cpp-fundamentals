#ifndef _INCLUDED_RULEVALUE_H_
#define _INCLUDED_RULEVALUE_H_

struct RuleValue
{
    enum Type
    {
        VALUE,
        VARIABLE
    };

    Type        d_type;
    double      d_number;
    unsigned    d_idx;

    public:
        RuleValue();
        RuleValue(double value);
        RuleValue(unsigned idx);
};

#endif
