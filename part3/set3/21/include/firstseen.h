#ifndef INCLUDED_FIRSTSEEN_
#define INCLUDED_FIRSTSEEN_

#include "wrapper.h"
#include <iosfwd>
#include <type_traits>


template <
        size_t idx, 
        typename WrapperT, 
        bool isLast = idx == WrapperT::count>
struct FirstSeen;

template <
        size_t idx,
        typename... Vars>
struct FirstSeen<idx, Wrapper<Vars...>, false>
{
    typedef typename Wrapper<Vars...>::T_Tuple TupleType;

    enum
    {
        index = std::is_same<
            typename std::tuple_element<idx, TupleType>::type,
            typename std::tuple_element<0, TupleType>::type
        >::value 
            ? idx 
            : FirstSeen<idx + 1, Wrapper<Vars...>>::index
    };
};

template <
    size_t idx,
    typename... Vars>
struct FirstSeen<idx, Wrapper<Vars...>, true>
{
    enum { index = 0 };
};

#endif