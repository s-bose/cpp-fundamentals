#include "../parser.ih"

RuleValue Parser::opLShiftEq(RuleValue &lvalue, RuleValue &rvalue)
{
    double shifted = (int_(lvalue) << int_(rvalue));
    std::cout << shifted << std::endl;

    return RuleValue(shifted);
}
