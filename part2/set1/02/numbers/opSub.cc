#include "numbers.ih"

Numbers operator-(Numbers const &lhs, Numbers const &rhs)
{
    Numbers copy{ lhs };
    return (copy -= rhs);
}