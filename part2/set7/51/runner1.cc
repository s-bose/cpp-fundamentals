#include "main.ih"

void runner1(Handler &handler, ostream &out, string const &text)
{
    handler.shift(out, text); // run external handler
}