#ifndef INCLUDED_DISPLAY_
#define INCLUDED_DISPLAY_

#include <iosfwd>

#include "remchar.h"
#include "../../20/merge/merge.h"


    // converts `num' to base `radix' and stores
    // its char representation.

    // bool `start' non-type parameter checks
    // whether `num / radix' reaches 0 
template < 
            size_t num, 
            size_t radix,
            bool start = !!(num / radix)
         >
class Display;


template <size_t num, size_t radix>
class Display<num, radix, true>
{
        // LSB of current num in base radix is stored
        // in `ch' & passed in a OneChar type
        

        // recursively instantiate `Display' on the remaining
        // leftmost digits (num / radix) and merge it's
        // CharStr (Char<>) with the current num's LSB (OneChar<ch>)
        // in the Merge type typedef'd as CharStr


    enum { ch = RemChar<num, radix>::value };

    public:
        typedef Merge< 
                        typename 
                        Display<num / radix, radix>::CharStr, 
                        
                        OneChar<ch> 
                    >::CP CharStr;
};


template <size_t num, size_t radix>
class Display<num, radix, false>
{

        // if `start' == false, num < radix
        // extract num in base `radix' and save it 
        // in a `OneChar' 
    enum { ch = RemChar<num, radix>::value };
    
    public:
        typedef OneChar<ch> CharStr;
};

#endif