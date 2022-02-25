#ifndef INCLUDED_COUNTER_
#define INCLUDED_COUNTER_

#include <memory>
#include <ostream>
#include "../instancectr/instancectr.h"

template <typename Type>
class Counter: public InstanceCtr
{
        // All instance of Counter<Type> inherits
        // from InstanceCtr.
        // for each obj creation (regardless of Type),
        // an InstanceCtr base is created, thus
        // counting all global objs.

    static size_t s_count;
    static size_t s_actual;
    std::shared_ptr<Type> d_data;

    public:
        Counter();
        Counter(Type const &value);
        Counter(Counter<Type> const &obj);
        Counter(Counter<Type> &&tmp);
        ~Counter();

        static size_t count();
        static size_t actual();
        
        Counter<Type> &operator++();
        

        Type get() const;

        template <typename Tp>
        friend std::ostream &operator<<(std::ostream &, 
                                       Counter<Tp> const &);

};

template <typename Type>
Counter<Type>::Counter()
:
    d_data(std::make_shared<Type>(Type{}))
{
    ++s_count;
    ++s_actual;
}

template <typename Type>
Counter<Type>::Counter(Type const &value)
: 
    d_data(std::make_shared<Type>(value))
{
    ++s_count;
    ++s_actual;
}

template <typename Type>
Counter<Type>::Counter(Counter<Type> const &obj)
:
    d_data(obj.d_data)
{
    ++s_count;
    ++s_actual;
}

template <typename Type>
Counter<Type>::Counter(Counter<Type> &&tmp)
:
    d_data(std::move(tmp.d_data))
{
    ++s_count;
    ++s_actual;
}

template <typename Type>
size_t Counter<Type>::count()
{
    return s_count;
}

template <typename Type>
size_t Counter<Type>::actual()
{
    return s_actual;
}

template <typename Type>
Counter<Type> &Counter<Type>::operator++()
{
    ++*d_data;
    return *this;
}

template <typename Type>
Type Counter<Type>::get() const
{
    return *d_data;
}

template <typename Tp>
std::ostream &operator<<(std::ostream &out, 
                        Counter<Tp> const &obj)
{
    return out << *obj.d_data;
}

template <typename Type>
Counter<Type>::~Counter()
{
    --s_actual;
}

    // initialize static count (class specific)
template <typename Type>
size_t Counter<Type>::s_count = 0;

template <typename Type>
size_t Counter<Type>::s_actual = 0;


#endif
