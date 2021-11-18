#include "copycat.ih"

char *CopyCat::ntbsCopy(char const *ntbs)
{
    size_t size = nElements(ntbs);
    
    char *newCopy = new char[size];          // copy NTBS pointer
    for (size_t idx = 0; idx != size; ++idx)
        newCopy[idx] = ntbs[idx];            // copy each char
    
    return newCopy;
}