#include "rawstring.ih"

RawString::RawString(size_t capacity, string const &fill)
: 
    d_capacity(capacity)
{
<<<<<<< HEAD
                    // get the raw memory block
    string *ptr = rawCapacity<string>(capacity);
                    // instantiate each cell
    for (size_t idx = 0; idx != capacity; ++idx)
        new (ptr + idx) string{ fill };
=======
    string *ptr = rawCapacity<string>(capacity);
    for (size_t idx = 0; idx != capacity; ++idx)
        new (ptr + idx) string{fill};
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d

    d_sPtr = ptr;
}