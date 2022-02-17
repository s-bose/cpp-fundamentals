#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
    public:
        Base();
        Base(Base const &other);
        Base(Base &&tmp);
};

inline Base::Base()
{
    std::cout << "Base default constructor called\n";
}

inline Base::Base(Base const &other)
{
    std::cout << "Base copy constructor called\n";
}

inline Base::Base(Base &&tmp)
{
    std::cout << "Base move constructor called\n";
}

#endif
