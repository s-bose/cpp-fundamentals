#include "parser.ih"

void Parser::error(char const *msg)
{
    cerr << "Syntax error\n";
    d_display = false;
}
