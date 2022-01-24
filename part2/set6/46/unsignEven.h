#ifndef INCLUDED_UNSIGN_
#define INCLUDED_UNSIGN_

#include <cstddef>

struct UEven                // wrapper for even unsigned
{
    unsigned d_value;

public:
    operator unsigned const &() const;
    unsigned operator++();  // custom increment op
};

inline UEven::operator unsigned const &() const
{
    return d_value;         // `unsigned' when used as rvalue
}

inline unsigned UEven::operator++()
{
    return ++(++d_value);   // increment doubles each element
}

#endif