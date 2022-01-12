#include "strings.ih"

Strings::Wrap::operator const std::string &() const
{
    return *d_data; // return the pointed string when used as rvalue
}