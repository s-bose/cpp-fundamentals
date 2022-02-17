#include "copycat.ih"

CopyCat::CopyCat(int argc, char const *const *argv)
:
    d_size(argc),
    d_data(duplicate(d_size, argv))
{}
