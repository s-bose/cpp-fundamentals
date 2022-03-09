#ifndef INCLUDED_FIRSTSEEN_
#define INCLUDED_FIRSTSEEN_

#include "wrapper.h"
#include <iosfwd>
#include <type_traits>


    // template TypeIdx 
    // it uses index idx to check if idx-th type
    // in WrapperT's variadic args matches its 0-th
    // type.
    // bool isLast is computed to check whether idx
    // exceeded the range of var-args 
template <
        size_t idx, 
        typename WrapperT, 
        bool isLast = idx == WrapperT::count>
struct TypeIdx;


template <
        size_t idx,
        typename... Vars>
struct TypeIdx<idx, Wrapper<Vars...>, false>
{
        // if idx within range, check the types of
        // the tuple_elements at 0-th and idx-th position
        // within Wrapper's inner tuple

        // if match is found, return idx, else recurse down
        // onto the next idx
    typedef typename Wrapper<Vars...>::T_Tuple TupleType;

    enum
    {
        index = std::is_same<
            typename std::tuple_element<idx, TupleType>::type,
            typename std::tuple_element<0, TupleType>::type
        >::value 
            ? idx 
            : TypeIdx<idx + 1, Wrapper<Vars...>>::index
    };
};

template <
    size_t idx,
    typename... Vars>
struct TypeIdx<idx, Wrapper<Vars...>, true>
{
        // if idx out of range, no type-match is found
        // return 0 
    enum { index = 0 };
};

#endif