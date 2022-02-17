#ifndef INCLUDED_TSOSWRAP_
#define INCLUDED_TSOSWRAP_

#include <iostream>
#include <shared_mutex>
#include "../passonstreambuf/passonstreambuf.h"

struct TSosWrap: private PassOnStreamBuf, public std::ostream
{
    static std::shared_mutex d_mutex;
    TSosWrap(std::ostream &os);
};


inline TSosWrap::TSosWrap(std::ostream &os)
:
    PassOnStreamBuf(os),
    std::ostream(this)
{}
   
#endif
