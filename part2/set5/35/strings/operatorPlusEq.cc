#include "strings.ih"

Strings &Strings::operator+=(std::string const &rhs)
{
    d_str.push_back( new string{rhs} );
    return *this;
}