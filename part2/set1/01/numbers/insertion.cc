#include "numbers.ih"

std::ostream &operator<<(std::ostream &out, Numbers const &num)
{
    for (size_t idx = 0; idx != num.size(); ++idx)
        out << num[idx] << ' '; // insert num's elements to out
                                // separated by blanks
    return out << '\n';
}