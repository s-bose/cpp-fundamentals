#include "parser.ih"

void Parser::display(RuleValue &expr)
{
    if (d_display)
        cout << valueOf(expr) << '\n';
    prompt();
}
