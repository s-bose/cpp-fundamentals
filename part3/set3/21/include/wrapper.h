#ifndef INCLUDED_WRAPPER_
#define INCUDED_WRAPPER_

#include <tuple>

template <typename... Rest>
struct Wrapper
{
        // basic wrapper around a variadic tuple
        // that contains the no. of type args
    typedef std::tuple<Rest...> T_Tuple;
    
    enum { count = sizeof...(Rest) };
};

#endif