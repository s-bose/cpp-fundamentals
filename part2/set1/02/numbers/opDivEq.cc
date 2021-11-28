#include "numbers.ih"

Numbers &Numbers::operator/=(int scalar)
{

    Numbers copy{*this};
    for (size_t idx = 0; idx != d_size; ++idx)
        copy[idx] /= scalar;

    swap(copy);
    return *this;
}