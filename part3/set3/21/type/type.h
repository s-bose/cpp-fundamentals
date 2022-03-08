#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include <iosfwd>
#include <tuple>
#include <type_traits>

template <size_t idx, typename... Rest>
class TypeIdx;

template <typename... Rest>
class Type
{
    public:
        enum
        {
            located = TypeIdx<sizeof...(Rest)-1, Rest...>::found
        };

};

template <size_t idx, typename... Rest>
class TypeIdx
{
    typedef std::tuple<Rest...> T_Tuple;
    public:
        enum
        {
            found = std::is_same<
                        typename std::tuple_element<idx, T_Tuple>::type,
                        typename std::tuple_element<0, T_Tuple>::type
                    >::value ?  idx : TypeIdx<idx - 1, Rest...>::found
        };
};


// TODO - have to reverse this

template <typename... Rest>
class TypeIdx<0, Rest...>
{
    public:
    enum
    {
        found = 0
    };
};

#endif
