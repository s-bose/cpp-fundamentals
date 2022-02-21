#ifndef INCLUDED_UNION_
#define INCLUDED_UNION_

#include <iosfwd>

union PtrUnion
{
    int (*u_func)(int *arr, size_t size);
    void *u_void;
};

#endif