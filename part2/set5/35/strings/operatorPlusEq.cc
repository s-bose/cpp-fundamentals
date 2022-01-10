#include "strings.ih"

Strings &Strings::operator+=(std::string const &rhs)
{
    d_data.push_back(rhs);
    return *this;
}