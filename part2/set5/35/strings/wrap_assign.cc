#include "strings.ih"
#include <iostream>


string &Strings::Wrap::operator=(string const &rhs)
{
    Strings::Wrap tmp;
    tmp.d_data = shared_ptr<string>(new string{rhs});
    Strings::Wrap::swap(tmp);
    return *this->d_data;
}