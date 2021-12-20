#ifndef INCLUDED_PROCESSOR_
#define INCLUDED_PROCESSOR_

#include <cstddef>
#include "base.h"


class Processor: private Base
{
    // private inheritance, only members can access the enum
    size_t f_debug;

    public:
        Processor();
};


inline Processor::Processor()
:
    f_debug(static_cast<size_t>(Msg::DEBUG))
{}


#endif