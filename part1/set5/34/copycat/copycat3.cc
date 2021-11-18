#include "copycat.ih"

CopyCat::CopyCat(char **data)
{
    d_size = nElements(data);
    d_data = duplicate(data);
}