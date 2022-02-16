#include "rawstring.ih"

RawString::RawString(size_t capacity, string const &fill)
: 
    d_capacity(capacity)
{
    string *ptr = rawCapacity<string>(capacity);
    for (size_t idx = 0; idx != capacity; ++idx)
        new (ptr + idx) string{fill};

    d_sPtr = ptr;
}