#ifndef INCLUDED_HANDLER_
#define INCLUDED_HANDLER_

#include <iostream>
#include "base.h"

class Handler: private Base
{   
    // private inheritance, only members can access the enum
    public:
        static void errorPrefix(Msg msg);
};


inline void Handler::errorPrefix(Msg msg)
{
    std::cerr << (
                  msg == Msg::ERR ? "!!! ERROR !!!" :
                  msg == Msg::WARNING ? "--- WARNING ---" :
                  msg == Msg::INFO ? "___ INFO ___" : "\n"
                ) << '\n';
}


#endif