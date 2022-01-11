#include "strings.ih"

Strings::Strings(int argc, char **argv)
:
    d_str(0)
{
    for (size_t idx = 0, end = argc; idx != end; ++idx)
        d_str.push_back( argv[idx] );
}