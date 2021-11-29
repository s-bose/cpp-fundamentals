#include "main.ih"

size_t countChars(istream& is)
{
    size_t count = 0;

    char ch;
    while (is.get(ch))
        ++count;
        
    return count;
}