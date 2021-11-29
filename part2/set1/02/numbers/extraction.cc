#include "numbers.ih"

std::istream &operator>>(std::istream &in, Numbers &num)
{
    for (size_t idx = 0; idx != num.size(); ++idx)
        in >> num[idx]; // extract num.size() no. of ints from istream
    return in;
}
