#include "strings.ih"

Strings::Strings(int argc, char **argv)
:
    d_str(argv, argv + argc)
{}