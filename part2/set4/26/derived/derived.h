#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include <ostream>
#include <string>
#include "../base/base.h"


class Derived: public Base
{
    std::string d_str;

    public:
        Derived();

    private:
        void vHello(std::ostream &out) override;
};


inline Derived::Derived()
:
    d_str("hello from Derived")
{}


inline void Derived::vHello(std::ostream &out)
{
    out << d_str << '\n';
}


#endif