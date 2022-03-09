#ifndef INCLUDED_REMCHAR_
#define INCLUDED_REMCHAR_

#include <iosfwd>

template <size_t val, size_t radix>
struct RemChar
{
        // class that computes remainder of val & radix
        // and its ascii representation
    enum
    {
        rem = val % radix,
        value = rem + (rem < 10 ? '0' : 'a' - 10)
    };

};


#endif