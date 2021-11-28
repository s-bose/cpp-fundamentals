#include "numbers.ih"

Numbers::Numbers(initializer_list<int> iniList)
: 
    d_size(iniList.size()),
    d_nums(new int[d_size])
{
    size_t idx = 0;
    for
    (
        initializer_list<int>::const_iterator begin = iniList.begin();
        begin != iniList.end();
        ++begin, ++idx
    )
        d_nums[idx] = *begin;   // copy from initializer list
}
