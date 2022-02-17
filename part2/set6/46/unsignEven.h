#ifndef INCLUDED_UNSIGN_
#define INCLUDED_UNSIGN_

#include <cstddef>

struct UEven                // wrapper for even unsigned
{
    unsigned d_value;
    
    public:
        operator unsigned const &() const;
        UEven &operator++();  // custom increment op
};


inline UEven::operator unsigned const &() const
{
    return d_value;         // `unsigned' when used as rvalue
}


inline UEven &UEven::operator++()
{
    d_value += 2;   // increment doubles each element
    return *this;
}

#endif