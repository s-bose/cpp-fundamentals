#include "strings.ih"

Strings::Wrap::operator std::string const &() const
{
    return *d_data; // return the pointed string when used as rvalue
}