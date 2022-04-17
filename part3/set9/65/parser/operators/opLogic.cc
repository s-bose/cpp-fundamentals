#include "../parser.ih"

RuleValue Parser::opLogic(RuleValue &lvalue, RuleValue &rvalue)
{
    int token = d_scanner.getCurrOp();

    double res;
    if (token == Tokens::L_AND)
        res = (int_(lvalue) && int_(rvalue));
    else
        res = (int_(lvalue) || int_(rvalue));

    return RuleValue(res);
}