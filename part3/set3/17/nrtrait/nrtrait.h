#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_

#include <iosfwd>
#include <cmath>

template <size_t Nr>
struct NrTrait
{
                // evaluate expr compile-time
    static constexpr size_t value = Nr;
    static constexpr bool even = not (Nr % 2);
    static constexpr bool by3 = not (Nr % 3);
    
                // find no. of digits 
    static constexpr size_t width = std::ceil(std::log10(Nr));
};

        
#endif
