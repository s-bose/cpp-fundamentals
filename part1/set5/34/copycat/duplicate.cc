#include "copycat.ih"

char **CopyCat::duplicate(char const *const *data)
{
    size_t size = nElements(data);
    
    char **newCopy = new char*[size];       // copy of char ** pointer

    for (size_t idx = 0; idx != size; ++idx)
        newCopy[idx] = ntbsCopy(data[idx]); // copy each NTBS

    return newCopy;
}