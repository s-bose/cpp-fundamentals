#include "strings.ih"

void Strings::push_back(string const &str)
{
    d_strs.push_back(str);
    if (d_strs.capacity() > d_strs.size())
        vector<string>(d_strs).swap(d_strs); // shrink capacity
}