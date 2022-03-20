#ifndef INCLUDED_TRAITS_
#define INCLUDED_TRAITS_

template <typename Type>
class Traits        // plain type
{
    enum
    {
        isPointer = false,
        isRef = false,
        isRRef = false
    };

    public:
        enum
        {
            value = 1
        };
};


template <typename Type>
class Traits<Type *>    // ptr type 
{
    enum
    {
        isPointer = true,
        isRef = false,
        isRRef = false
    };

    public:
        enum
        {
            value = 2
        };
};

template <typename Type>
class Traits<Type &>    // ref type
{
    enum
    {
        isPointer = false,
        isRef = true,
        isRRef = false
    };

public:
    enum
    {
        value = 3
    };
};

template <typename Type>
class Traits<Type &&>   // rref type
{
    enum
    {
        isPointer = false,
        isRef = true,
        isRRef = true
    };

public:
    enum
    {
        value = 4
    };
};

#endif
