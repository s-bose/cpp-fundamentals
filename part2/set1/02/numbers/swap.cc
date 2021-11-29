#include "numbers.ih"

void Numbers::swap(Numbers &other)
{
    char bytes[sizeof(Numbers)];
    memcpy(bytes, this, sizeof(Numbers));
    memcpy(static_cast<void *>(this), &other, sizeof(Numbers));
    memcpy(static_cast<void *>(&other), bytes, sizeof(Numbers));
}