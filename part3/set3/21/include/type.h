#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include "firstseen.h"

template <typename... Rest>
struct Type
{
    enum
    {
        located = FirstSeen<1, Wrapper<Rest...>>::index
    };
};

template <typename One>
struct Type<One>
{
    enum { located = 0 };
};



#endif
