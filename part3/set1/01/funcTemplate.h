#ifndef INCLUDED_FUNCTEMPLATE_
#define INCLUDED_FUNCTEMPLATE_

#include <numeric>
#include <iosfwd>

template <typename Type>
Type total(Type *arr, size_t size)
{
    return std::accumulate(arr, arr + size, Type{});
}

#endif