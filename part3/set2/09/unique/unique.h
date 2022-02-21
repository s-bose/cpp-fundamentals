#ifndef INCLUDED_UNIQUE_
#define INCLUDED_UNIQUE_

#include <memory>

template <typename Type>
class Unique
{
    std::unique_ptr<Type> d_data;

    public:
        Unique() = default;
        Unique(Unique<Type> const &obj);
        Unique(Unique<Type> &&tmp);
        Unique(Type value);
        Unique(Type *ptr);
        Unique<Type> &operator=(Unique<Type> const &obj);
        Unique<Type> &operator=(Unique<Type> &&tmp);

        Type get() const;
        Type &get();
};


template <typename Type>
Unique<Type>::Unique(Type value)
:
    d_data(std::make_unique<Type>(value))
{}

template <typename Type>
Unique<Type>::Unique(Type *ptr)
:
    d_data(ptr)
{}

template <typename Type>
Unique<Type>::Unique(Unique<Type> const &obj)
:
    d_data(std::make_unique<Type>(*obj.d_data))
{}

template <typename Type>
Unique<Type>::Unique(Unique<Type> &&tmp)
:
    d_data(std::move(tmp.d_data))
{}

template <typename Type>
Type Unique<Type>::get() const
{
    return *d_data;
}

template <typename Type>
Type &Unique<Type>::get()
{
    return *d_data;
}

template <typename Type>
Unique<Type> &Unique<Type>::operator=(Unique<Type> const &obj)
{
    Unique<Type> tmp(obj);
    d_data.swap(tmp.d_data);
    return *this;
}

template <typename Type>
Unique<Type> &Unique<Type>::operator=(Unique<Type> &&tmp)
{
    d_data.swap(tmp.d_data);
    return *this;
}

#endif
