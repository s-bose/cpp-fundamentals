#include "strings.ih"

string &Strings::Wrap::operator=(string const &rhs)
{
                                    // upon assignment (lvalue)
    Strings::Wrap tmp;              // create new shared_ptr copy
    tmp.d_data = shared_ptr<string>(new string{rhs});
    Strings::Wrap::swap(tmp);
    return *this->d_data;
}