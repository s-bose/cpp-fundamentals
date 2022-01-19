#include "strings.ih"

string &Strings::Wrap::operator=(string const &rhs)
{
                                    // upon assignment (lvalue)
    Strings::Wrap tmp;              // create new shared_ptr copy
    tmp.d_data = new string{rhs};
    swap(*this, tmp);
    return *this->d_data;
}