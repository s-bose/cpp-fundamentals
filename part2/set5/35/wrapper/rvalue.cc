#include "wrapper.ih"

Wrapper::operator std::string const &() const
{
    return *d_str; // return the pointed string when used as rvalue
}