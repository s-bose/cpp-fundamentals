#include "mystring.ih"

string MyString::repeat(size_t count, string const &str)
{
    string ret;
    for (size_t iter = 0; iter != count; ++iter)
        ret += str;
    return ret;
}
