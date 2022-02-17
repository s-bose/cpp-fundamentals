#ifndef INCLUDED_PASSONSTREAMBUF_
#define INCLUDED_PASSONSTREAMBUF_

#include <streambuf>
#include <iostream>

class PassOnStreamBuf: public std::streambuf
{
    std::ostream &d_os;
    public:
        PassOnStreamBuf(std::ostream &os);
    private:
        int overflow(int ch) override;
};
        
#endif


inline PassOnStreamBuf::PassOnStreamBuf(std::ostream &os)
:
    d_os(os)
{}