#include "copycat.ih"

char **CopyCat::duplicate(size_t count, char const *const *data)
{    
    char **newCopy = new char *[count + 1](0);       // copy of char ** pointer

    for (size_t idx = 0; idx != count; ++idx)
        newCopy[idx] = ntbsCopy(data[idx]); // copy each NTBS

    return newCopy;
}