//#define XERR
#include "numbers.ih"

Numbers::Numbers(size_t size)
: 
    d_size(size),
    d_nums(new int[size]())
{
    // initialize d_nums with 0
}
