#include <memory>

template <typename Type>
Type *rawCapacity(size_t capacity)
{
    Type *ptr = static_cast<Type *>(
        operator new(capacity * sizeof(Type))
    );
    
    return ptr;
}