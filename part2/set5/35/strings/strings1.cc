#include "strings.ih"

Strings::Strings(int argc, char **argv)
:
    d_data(0)
{
    for (size_t idx = 0, end = argc; idx != end; ++idx)
        d_data.push_back(Wrap{ argv[idx] });
}