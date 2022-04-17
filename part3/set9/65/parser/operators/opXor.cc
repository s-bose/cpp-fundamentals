#include "../parser.ih"

RuleValue Parser::opXor(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (int_(lvalue) ^ int_(rvalue));
    cout << res << endl;
    return RuleValue(res);
}