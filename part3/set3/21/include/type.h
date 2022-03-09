#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include "typeidx.h"

template <typename... Rest>
struct Type
{
        // unfolds var-args to Wrapper, which in turn
        // unfolds them to its inner tuple.

        // recursively call `TypeIdx' on `Wrapper'
        // store the index of the first reoccurence of
        // the first type into `located' 
    enum
    {
            // start from 2nd tuple element  
        located = TypeIdx<1, Wrapper<Rest...>>::index
    };
};

template <typename One>
struct Type<One>
{
    enum { located = 0 };   // trivial-case for
                            // single arg
};



#endif
