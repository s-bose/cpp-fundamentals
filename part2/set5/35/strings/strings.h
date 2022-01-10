#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "wrap/wrap.h"

class Strings
{
    std::vector<Wrap> d_data;

    public:
        Strings() = default;
        Strings(int argc, char **argv);
        Strings(char **environLike);

        Strings &operator+=(std::string const &rhs);
        void printStrs() const;

        size_t size() const;
        size_t capacity() const;
        Wrap const &at(size_t idx) const; // for const-objects
        Wrap &at(size_t idx);             // for non-const objects
        Wrap &operator[](size_t idx); 

        void resize(size_t newSize);
        void reserve(size_t newCapacity);

    private:
};

inline size_t Strings::size() const
{
    return d_data.size();
}

inline size_t Strings::capacity() const
{
    return d_data.capacity();
}

inline void Strings::resize(size_t newSize)
{
    d_data.resize(newSize);
}

inline void Strings::reserve(size_t newCapacity)
{
    d_data.reserve(newCapacity);
}

inline Wrap const &Strings::at(size_t idx) const
{
    return d_data[idx];
}

inline Wrap &Strings::at(size_t idx)
{
    return d_data[idx];
}

inline Wrap &Strings::operator[](size_t idx)
{
    return d_data[idx];
}

inline void Strings::printStrs() const
{
    for (auto const &item : d_data)
        std::cout << item << '\n';
}

#endif
