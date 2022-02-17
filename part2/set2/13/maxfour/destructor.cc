#include "maxfour.ih"

MaxFour::~MaxFour()
{
    delete[] d_array;
    --d_count;  // decrement instance count;
}
