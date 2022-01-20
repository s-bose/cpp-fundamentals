#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_data(0)
{
    while (*environLike)
        d_data.push_back(Wrapper(*environLike++));
}