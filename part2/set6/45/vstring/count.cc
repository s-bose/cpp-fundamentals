#include "vstring.ih"

size_t Vstring::count(CharMap &cmap, bool (*accept)(char, CharMap &))
{
    size_t n_accepted = 0;      // init accept count

    for_each(
        begin(),
        end(),
        [&](string const &str)
        {                       // add accept-counts for each str
            n_accepted += countChar(str, cmap, accept);
        }
    );
    
    return n_accepted;
}
