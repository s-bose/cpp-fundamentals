#ifndef INCLUDED_SIMPLE_
#define INCLUDED_SIMPLE_

template <typename Type>
class Simple
{
    Type d_value = Type{};

    public:
        Simple() = default;
        Simple(Type const &value);

        Type &get();
};


template <typename Type>
Simple<Type>::Simple(Type const &value)
:
    d_value(value)
{}

template <typename Type>
Type &Simple<Type>::get()
{
    return d_value;
}


// template <typename Tp>
// class Simple<Tp *>
// {
//     Tp d_value = Tp{};

//     public:
//         Simple() = default;
//         Simple(Tp *ptr);
//         Tp &get();
// };

// template <typename Tp>
// Simple<Tp *>::Simple(Tp *ptr)
// :
//     d_value(*ptr)
// {}

// template <typename Tp>
// Tp &Simple<Tp *>::get()
// {
//     return d_value;
// }


// alternatively, we can inherit from Simple<ValueType> 
// to Simple<PtrType>
// template <typename T>
// class Simple<T *> : public Simple<T>
// {
//     public:
//         Simple() = default;
//         Simple(T const *ptr);
// };


// template <typename T>
// Simple<T *>::Simple(T const *ptr)
// :
//     Simple<T>(*ptr)
// {}


#endif
