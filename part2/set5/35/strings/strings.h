#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <iostream>
#include <memory>

class Strings
{
    std::vector<std::shared_ptr<std::string>> d_str;

    public:
        Strings() = default;
        Strings(int argc, char **argv);
        Strings(char **environLike);

        Strings &operator+=(std::string const &rhs);
        void printStrs() const;

        size_t size() const;
        size_t capacity() const;
        std::string const &at(size_t idx) const; // for const-objects
        std::string &at(size_t idx);             // for non-const objects
        std::string &operator[](size_t idx); 

        void resize(size_t newSize);
        void reserve(size_t newCapacity);

    private:
};


inline Strings::Strings(int argc, char **argv)
:
    d_str(argv, argv + argc)
{}


inline size_t Strings::size() const
{
    return d_str.size();
}


inline size_t Strings::capacity() const
{
    return d_str.capacity();
}


inline std::string const &Strings::at(size_t idx) const
{
    return d_str[idx];
}


inline std::string &Strings::at(size_t idx)
{
    return d_str[idx];
}


inline std::string &Strings::operator[](size_t idx)
{
    return d_str[idx];
}


inline void Strings::resize(size_t newSize)
{
    d_str.resize(newSize);
}


inline void Strings::reserve(size_t newCapacity)
{
    d_str.reserve(newCapacity);
}


inline void Strings::printStrs() const
{
    for (auto const &str: d_str)
        std::cout << str << '\n';
}

#endif
