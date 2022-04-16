#include "parser.ih"

RuleValue Parser::value()
{
    return RuleValue(stod(d_scanner.matched()));
}
