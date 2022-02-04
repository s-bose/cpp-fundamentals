#include "passonstreambuf.ih"

int PassOnStreamBuf::overflow(int ch)
{
    d_os.put(ch);
    return ch;
}