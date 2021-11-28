#include "numbers.ih"

Numbers &Numbers::operator=(Numbers const &other)
{
    Numbers copy{ other };
    swap(copy);
    return *this;
}