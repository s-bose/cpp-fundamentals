#include "main.ih"

size_t countLines(istream &is)
{
    size_t count = 0;
    
    string str;
    while (getline(is, str))
    {
        if (str.size())     // skip empty newlines
            ++count;
    }
       
    return count;
}