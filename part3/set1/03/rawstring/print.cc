#include "rawstring.ih"

void RawString::print() const
{
    for (size_t idx = 0; idx != d_capacity; ++idx)
        cout << d_sPtr[idx] << '\n';
}