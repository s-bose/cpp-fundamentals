#include "copycat.ih"

char *CopyCat::ntbsCopy(char const *ntbs)
{
    // this basically copies the NTBS string to ret, preserving the null-termination
    string tmp{ntbs}; // get the ntbs's details

    char *ret = new char[tmp.length() + 1]; // allocate memory (+ space for `\0')

    ret[tmp.copy(ret, string::npos)] = 0; // initialize the memory for \0

    return ret; // return the copy
}