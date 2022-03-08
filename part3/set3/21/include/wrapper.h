#ifndef INCLUDED_WRAPPER_
#define INCUDED_WRAPPER_

#include <tuple>

template <typename... Rest>
struct Wrapper
{
    typedef std::tuple<Rest...> T_Tuple;
    enum
    {
        count = sizeof...(Rest)
    };
};

#endif