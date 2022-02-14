#include "main.ih"

double product(double const *lhs, double const *rhs)
{
    return inner_product(lhs, lhs + 5, rhs, 0);
}