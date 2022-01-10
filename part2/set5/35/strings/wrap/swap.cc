//#define XERR
#include "wrap.ih"

void Wrap::swap(Wrap &other)
{
    char buffer[sizeof(Wrap)];
    memcpy(buffer, this,   sizeof(Wrap));
    memcpy(static_cast<void *>(this),   &other, sizeof(Wrap));
    memcpy(static_cast<void *>(&other), buffer, sizeof(Wrap));
}
