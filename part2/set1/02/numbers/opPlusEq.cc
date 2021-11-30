#include "numbers.ih"

Numbers &Numbers::operator+=(Numbers const &other)
{
    if (d_size == other.size())
    {
        Numbers copy{ *this };
        for (size_t idx = 0; idx != d_size; ++idx)
            copy[idx] += other[idx];
        swap(copy);
        return *this;
    }
    std::cerr << "Cannot add: size mismatch" << '\n';
    return *(new Numbers(0)); // dummy return
}
