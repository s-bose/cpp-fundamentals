#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "base.h"

class Derived: public Base
{
    public:
        Derived() = default;
        Derived(Derived const &other);
        Derived(Derived &&tmp);
};


inline Derived::Derived(Derived const &other)
    : Base(other)           // Base copy constructor
{}


inline Derived::Derived(Derived &&tmp)
    : Base(std::move(tmp))  // Base move constructor
{}

#endif
