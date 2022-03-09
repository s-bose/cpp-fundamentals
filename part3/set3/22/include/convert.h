#ifndef INCLUDED_CONVERT_
#define INCLUDED_CONVERT_

#include <iosfwd>
#include "display.h"



template <size_t num, size_t radix>
struct Convert
{   
        // stores a Chars<...> class instantiated with
        // all comma-separated ascii chars in base radix 
    typedef Display<num, radix>::CharStr CP;
};


#endif
