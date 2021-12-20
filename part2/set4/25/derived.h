#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "base.h"
#include <ostream>
#include <string>


class Derived: public Base
{
    std::string d_str;

    public:
        Derived(std::string const &str);

    private:
        void vHello(std::ostream &out) override;
};

inline Derived::Derived(std::string const &str)
:
    d_str(str)
{}

inline void Derived::vHello(std::ostream &out) // re-implement Base's vHello
{
    out << d_str << '\n';
}

#endif