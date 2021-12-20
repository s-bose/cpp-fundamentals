#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <ostream>


class Base
{
    public:
        void hello(std::ostream &out);          // public interface

    private:
        virtual void vHello(std::ostream &out);
};


inline void Base::hello(std::ostream &out)
{
    vHello(out);
}


inline void Base::vHello(std::ostream &out)
{
    out << "hello from Base" << '\n';
}


#endif