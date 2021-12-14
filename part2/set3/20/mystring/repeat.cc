#include "mystring.ih"

string repeat(size_t count, string const &str)
{
    string ret;     // repeat str, count times
    for (size_t iter = 0; iter != count; ++iter)
        ret += str;
    return ret;
}
