#ifndef INCLUDED_SIMPLE_
#define INCLUDED_SIMPLE_

template <typename Type>
class Simple
{
    Type d_value;

    public:
        Simple();
        Simple(Type const &value);

        Type &get();
};

template <typename Type>
Simple<Type>::Simple()
:
    d_value(Type{})
{}

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

template <typename Tp>
class Simple<Tp *>
{
    Tp *d_value;

    public:
        Simple();
        Simple(Tp *value);

        Tp &get();
};

template <typename Tp>
Simple<Tp *>::Simple()
:
    d_value(new Tp)
{}

template <typename Tp>
Simple<Tp *>::Simple(Tp *value)
:
    d_value(value)
{}

template <typename Tp>
Tp &Simple<Tp *>::get()
{
    return *d_value;
}

#endif
