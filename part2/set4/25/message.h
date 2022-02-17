#ifndef INCLUDED_MESSAGE_
#define INCLUDED_MESSAGE_

#include "base.h"
#include <iostream>

class Message
{
    Base &d_base;          // polymorphic base reference

    public:
        Message(Base &base);
        void show();
};

inline Message::Message(Base &base)
:
    d_base(base)
{}

inline void Message::show()
{
    d_base.hello(std::cout); // call vHello of the referred obj
}                            // at runtime

#endif