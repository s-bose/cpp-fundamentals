#ifndef INCLUDED_TSOSWRAP_
#define INCLUDED_TSOSWRAP_

#include <iostream>
#include "../passonstreambuf/passonstreambuf.h"

struct TSosWrap: private PassOnStreamBuf, public std::ostream
{
    TSosWrap(std::ostream &os);

    private:
};


inline TSosWrap::TSosWrap(std::ostream &os)
:
    PassOnStreamBuf(os),
    std::ostream(this)
{}
   
#endif
