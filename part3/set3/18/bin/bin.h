#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

#include <iosfwd>

template <size_t num>
struct Bin
{
    enum
    {   // append last bit & rshift `num'
        // and recursively call the remaining bits
        value = 10 * Bin<(num >> 1)>::value + (num & 1)
    };
};

template <>
struct Bin<0>
{
        // specialization for base-case 0
    enum { value = 0 };   
};

#endif
