#include "numbers.ih"

Numbers operator/(Numbers const &lhs, int scalar)
{
    if (scalar == 0)
        std::cerr << "Cannot divide by zero" << '\n';
    Numbers copy{ lhs };
    copy /= scalar;
    return copy;
}