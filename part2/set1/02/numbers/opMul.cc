#include "numbers.ih"

Numbers operator*(Numbers const &lhs, int scalar)
{
    Numbers copy{ lhs };
    copy *= scalar;
    return copy;
}