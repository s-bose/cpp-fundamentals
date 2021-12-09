#ifndef INCLUDED_MAXFOUR_
#define INCLUDED_MAXFOUR_

#include <cstddef>

class MaxFour
{
    double *d_array;
    static size_t d_count;      // no. of instances
    
    public:
        MaxFour();
        ~MaxFour();
        static size_t count();
};

#endif
