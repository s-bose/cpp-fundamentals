#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

#include <iosfwd>
#include <cmath>
#include <string>

template <size_t num>
struct Bin
{
    constexpr static 
    size_t value = 10 * Bin<(num >> 1)>::value + (num & 1);       
};

template <>
struct Bin<0>
{
    constexpr static 
    size_t value = 0;
};

#endif
