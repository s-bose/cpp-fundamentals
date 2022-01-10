//#define XERR
#include "wrap.ih"


Wrap::Wrap(string str)
: 
    d_str(0)
{
    d_str = shared_ptr<string>( new string{ str } );
}
