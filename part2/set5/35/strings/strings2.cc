#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_str(0)
{
    while (*environLike)
        d_str.push_back( *environLike++ );
}