#include "main.ih"

Base **derivedFactory(size_t size)
{
    Base **bptr = new Base*[size];
    for (size_t iter = 0; iter != size; ++iter)
        bptr[iter] = new Derived;

    return bptr;
}