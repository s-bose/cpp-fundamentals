//#define XERR
#include "copycat.ih"


CopyCat::CopyCat()
{
    d_size = nElements(environ);
    d_data = duplicate(environ);
}