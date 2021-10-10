#include "main.ih"

size_t countChars(istream& is)
{
    size_t count = 0;

    while (is.get() != EOF)
        ++count;
        
    return count;
}