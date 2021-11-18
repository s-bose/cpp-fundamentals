#include "copycat.ih"


CopyCat::CopyCat(int argc, char **argv)
{
    d_size = argc;
    d_data = duplicate(argv);
}
