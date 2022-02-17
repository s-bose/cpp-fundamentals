#ifndef INCLUDED_RAWSTRING_
#define INCLUDED_RAWSTRING_

#include <memory>
#include <string>


template <typename Type>
Type *rawCapacity(size_t capacity)
{   
                // allocate `capacity' Type blocks
    Type *ptr = static_cast<Type *>(
        operator new(capacity * sizeof(Type)));

    return ptr;
}

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
