#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_

#include <iosfwd>
#include <string>
#include <cmath>

template <size_t Nr>
struct NrTrait
{
    static constexpr size_t value = Nr;
    static constexpr bool even = not (Nr % 2);
    static constexpr bool by3 = not (Nr % 3);
    static constexpr size_t width = std::ceil(std::log10(Nr));
};

        
#endif
