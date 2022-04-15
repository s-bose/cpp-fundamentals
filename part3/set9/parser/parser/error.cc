#include "parser.ih"

void Parser::error(char const *msg)
{
    cout << "At " << d_scanner.matched() << ": " << msg << ".\n";
    cout << '(' << static_cast<int>(d_scanner.matched()[0]) << ")\n";
    d_display = false;
}
