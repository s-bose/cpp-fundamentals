#include "../../parser.ih"

RuleValue Parser::opEq(RuleValue &lvalue, RuleValue &rvalue)
{
    double res = (int_(lvalue) == int_(rvalue));
    cout << res << endl;
    return RuleValue(res);
}
