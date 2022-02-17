#include "rawstring.ih"

RawString::~RawString()
{
<<<<<<< HEAD
    for 
    (
        string *ptrEnd = d_sPtr + d_capacity; 
        ptrEnd-- != d_sPtr; 
    )
=======
    for (string *ptrEnd = d_sPtr + d_capacity; ptrEnd-- != d_sPtr;)
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
        ptrEnd->~string();

    operator delete(d_sPtr);
}