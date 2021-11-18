#include "copycat.ih"

size_t CopyCat::nElements(char const *const *data)
{
    size_t size = 0; // count the no of NTBS
                     // in a char ** ptr
    while (*data++)
        ++size;
    return size;

}