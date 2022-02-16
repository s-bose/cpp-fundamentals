#ifndef INCLUDED_RAWSTRING_
#define INCLUDED_RAWSTRING_

#include <memory>
#include <string>


class RawString
{
    size_t d_capacity;
    std::string *d_sPtr;

    public:

        RawString(size_t capacity, std::string const &fill);
        ~RawString();
    
        void print() const;
};

#endif
