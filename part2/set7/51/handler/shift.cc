#include "handler.ih"


void Handler::shift(ostream &out, string const &text)
{
    string shifted = text;
    do
    {
        out << shifted << '\n';
                                    // append first char to end
                                    // repeat until rotate back to original
        shifted = shifted.substr(1) + shifted.substr(0, 1);
    } while (shifted != text);
}