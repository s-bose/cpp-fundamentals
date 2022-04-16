#include "parser.ih"

void Parser::prompt()
{
    d_display = true;
    cout << "> " << flush;
}
