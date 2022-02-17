#include "main.ih"

bool vowels(char ch, Vstring::CharMap &cmap)
{
    if ("aeiuoAEIOU"s.find(ch) != string::npos)
    {
        ++cmap[ch]; // count vowel frequency
        return true;
    }
    return false;
}