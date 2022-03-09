#ifndef INCLUDED_CONVERT_
#define INCLUDED_CONVERT_

#include <iosfwd>
#include "../../20/merge/merge.h"

template <size_t num, size_t radix, bool displayed = !!(num / radix)>
struct Display
{};


template <size_t num, size_t radix>
class Convert
{
    public:
        typedef Display<num, radix>::Char CP;
};


template <size_t num, size_t radix>
struct Display<num, radix, true>
{
    enum
    {
        shft = num % radix,
        ch = shft + (shft < 10 ? '0' : 'a' - 10)
    };

    typedef Merge< typename Display<num / radix, radix>::Char, OneChar<ch> >::CP Char;
};

template <size_t num, size_t radix>
struct Display<num, radix, false>
{
    enum
    {
        shft = num % radix,
        ch = shft + (shft < 10 ? '0' : 'a' - 10)
    };
    typedef Chars<ch> Char;
};
#endif
