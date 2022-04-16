#include "parser.ih"

void Parser::display(STYPE_ expr)
{
    if (d_display)
        cout << expr << '\n';
    prompt();
}
