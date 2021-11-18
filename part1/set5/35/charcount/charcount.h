#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <cstddef>
#include <iosfwd>

namespace
{
    struct Char
    {
        char ch;
        size_t count;
    };

    struct CharInfo
    {
        Char *ptr;
        size_t nCharObj;
    };
};

class CharCount
{
    public:
        CharCount();
        size_t count(std::istream &is);
    private:
};
        
#endif
