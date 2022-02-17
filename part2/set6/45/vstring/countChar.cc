#include "vstring.ih"

size_t Vstring::countChar(std::string const &str, CharMap &cmap, 
                         bool (*accept)(char, CharMap &))
{
    return accumulate(  // accumulate counts of accepted char
        str.begin(),    // in str
        str.end(),
        size_t{},       // init count
        [&](size_t count, char ch)
        {
            return count += accept(ch, cmap);
        }
    );
}