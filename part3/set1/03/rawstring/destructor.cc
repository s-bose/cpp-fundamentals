#include "rawstring.ih"

RawString::~RawString()
{
    for (string *ptrEnd = d_sPtr + d_capacity; ptrEnd-- != d_sPtr;)
        ptrEnd->~string();

    operator delete(d_sPtr);
}