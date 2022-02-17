#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "../wrapper/wrapper.h"

class Strings
{
    std::vector<Wrapper> d_data;    // vector of pointers with COW wrapper

    public:
        Wrapper &operator[](size_t idx);

        Strings() = default;
        Strings(int argc, char **argv);
        Strings(char **environLike);

        Strings &operator+=(std::string const &rhs);

        size_t size() const;
        size_t capacity() const;

        void resize(size_t newSize);
        void reserve(size_t newCapacity);
        void print() const;

    private:
};



inline Wrapper &Strings::operator[](size_t idx) 
{
    return d_data[idx];
}

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

inline void Strings::print() const
{
    for (auto const &wrap : d_data)
        std::cout << wrap << '\n';
}

#endif


