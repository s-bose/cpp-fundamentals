#include "main.ih"

size_t countWords(istream &is)
{
    size_t count = 0;
    
    string str;
    while (is >> str)   // extract each word into str
        ++count;        // ignores whitespace(s)
    return count;
}