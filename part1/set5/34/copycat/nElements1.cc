#include "copycat.ih"

size_t CopyCat::nElements(char const *ntbs)
{
    size_t size = 0; // count the no of chars
                     // in an NTBS
    while (*ntbs++)
        ++size;
    return size;
}