#include "strings.ih"
#include <cstring>

void Strings::Wrap::swap(Strings::Wrap &other)
{
    char buffer[sizeof(Strings::Wrap)];
    memcpy(buffer, this, sizeof(Strings::Wrap));
    memcpy(static_cast<void *>(this), &other, sizeof(Strings::Wrap));
    memcpy(static_cast<void *>(&other), buffer, sizeof(Strings::Wrap));
}
