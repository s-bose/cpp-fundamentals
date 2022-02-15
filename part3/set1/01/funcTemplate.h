#ifndef INCLUDED_FUNCTEMPLATE_
#define INCLUDED_FUNCTEMPLATE_

#include <numeric>
#include <iosfwd>

template <typename Type>
Type total(Type *arr, size_t size)
{
    return std::accumulate(arr, arr + size, Type{});
}

union Impl1
{

    int (*FUNCPTR)(int *arr, size_t size);
    void *VOIDPTR;

    Impl1();
};

union Impl2
{

    int (*FUNCPTR)(int *arr, size_t size);
    void *VOIDPTR;

    Impl2();
};

#endif