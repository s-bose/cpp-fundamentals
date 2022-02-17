#include "numbers.ih"

bool operator!=(Numbers const &lhs, Numbers const &rhs)
{
    return !(lhs == rhs);
}