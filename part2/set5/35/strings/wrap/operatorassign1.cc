//#define XERR
#include "wrap.ih"

Wrap &Wrap::operator=(string str)
{
    Wrap tmp;
    tmp.d_str = shared_ptr<string>( new string{ str } );
    swap(tmp);
    return *this;
}
