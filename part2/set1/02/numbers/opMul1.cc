#include "numbers.ih"

Numbers operator*(int scalar, Numbers const &rhs)
{
    Numbers copy{ rhs };
    copy *= scalar;
    return copy;
}
