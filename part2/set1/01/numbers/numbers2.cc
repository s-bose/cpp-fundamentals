//#define XERR
#include "numbers.ih"

Numbers::Numbers(size_t size, int value)
: 
    d_size(size),
    d_nums(new int[size])
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_nums[idx] = value;    // initialize with value
}
