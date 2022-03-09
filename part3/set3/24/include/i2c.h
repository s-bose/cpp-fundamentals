#ifndef INCLUDED_I2C_
#define INCLUDED_I2C_

#include <iosfwd>

template <char... charList>
struct CArray
{
        // stores NTBS constructed from 
        // unfolding charList
    constexpr static 
    char const str[sizeof...(charList) + 1] = {charList..., '\0'};
};



template <typename ArrayT, char ch>
struct AppendArray;


template <
    template<char...> class ArrayT,
    char... charList,
    char ch
>
struct AppendArray<
    ArrayT<charList...>, ch
>
{
        // specialized to take a CArray<...> class
        // and append `ch' to its charList and make
        // a new CArray class with updated NTBS
    using array = CArray<charList..., ch>;
};



template <size_t num>
struct I2C
{
        // stores the returned `CArray' class as `type'
        // and calls AppendArray on the LSB decimal char
        // of `num' and the returned `CArray' class from
        // remaining MSB digits. 
        // thus recursively expanding num's digits right-
        // -to-left until 0

    typedef typename 
    AppendArray< 
                typename I2C<num / 10>::type, 
                '0' + num % 10 
               >::array type;

        // final CArray::str contains leading `0' from edge
        // case. Hence skip one char.
    constexpr static auto s_ntbs = type::str + 1;
};


template<>
struct I2C<0>
{
        // edge case specialization for I2C
        // store a single char '0'
    typedef CArray<'0'> type;

        // returns literal 0 (null-terminated)
    constexpr static auto s_ntbs = type::str;
};

#endif
