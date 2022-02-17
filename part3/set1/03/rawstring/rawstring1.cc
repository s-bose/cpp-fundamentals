#include "rawstring.ih"

RawString::RawString(size_t capacity, string const &fill)
: 
    d_capacity(capacity)
{
                    // get the raw memory block
    string *ptr = rawCapacity<string>(capacity);
                    // instantiate each cell
    for (size_t idx = 0; idx != capacity; ++idx)
        new (ptr + idx) string{ fill };

    d_sPtr = ptr;
}