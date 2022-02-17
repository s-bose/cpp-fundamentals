#ifndef INCLUDED_RAWSTRING_
#define INCLUDED_RAWSTRING_

#include <memory>
#include <string>


<<<<<<< HEAD
template <typename Type>
Type *rawCapacity(size_t capacity)
{   
                // allocate `capacity' Type blocks
    Type *ptr = static_cast<Type *>(
        operator new(capacity * sizeof(Type)));

    return ptr;
}

=======
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
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
