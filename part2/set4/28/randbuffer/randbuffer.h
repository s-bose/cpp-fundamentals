#ifndef INCLUDED_RANDBUFFER_
#define INCLUDED_RANDBUFFER_

#include <streambuf>

class RandBuffer: public std::streambuf
{   
    int d_min;
    size_t d_range;
    size_t d_end;
    char *d_buffer;

    public:
        RandBuffer(int min, int max, size_t seed);

    private:
        int underflow();
};
        
#endif
