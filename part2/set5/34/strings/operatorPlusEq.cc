#include "strings.ih"

Strings &Strings::operator+=(std::string const &rhs)
{
    d_str.push_back(rhs);   // add rhs to the vector
    return *this;
}