#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <iostream>


class Strings
{
    std::vector< std::string * > d_str;

    public:
        class Wrap;                     // wrapper class for handling COW
        Wrap operator[](size_t idx);

        class Wrap
        {                               // store string through smart pointer
            std::string *d_data;

            friend Wrap Strings::operator[](size_t idx);

            Wrap() = default;
            Wrap(std::string *pstr);

            public:
                                                      // handling lvalue
                std::string &operator=(std::string const &rhs);
                operator std::string const &() const; // handling rvalue
                friend std::ostream &operator<<(std::ostream &out, Strings::Wrap const &obj);
        };

        Strings() = default;
        Strings(int argc, char **argv);
        Strings(char **environLike);
        ~Strings();

        Strings &operator+=(std::string const &rhs);

        size_t size() const;
        size_t capacity() const;

        void resize(size_t newSize);
        void reserve(size_t newCapacity);


    private:
};


inline Strings::Wrap::Wrap(std::string *pstr)
:                       // create fresh new shared_ptr
    d_data(pstr)    
{}



inline Strings::Wrap Strings::operator[](size_t idx)
{                       // return the string wrapped COW Wrapper
    return Strings::Wrap{ d_str[idx] };
}

inline size_t Strings::size() const
{
    return d_str.size();
}

inline size_t Strings::capacity() const
{
    return d_str.capacity();
}

inline void Strings::resize(size_t newSize)
{
    d_str.resize(newSize);
}

inline void Strings::reserve(size_t newCapacity)
{
    d_str.reserve(newCapacity);
}

inline std::ostream &operator<<(std::ostream &out, Strings::Wrap const &obj)
{
    return out << static_cast<std::string const &>(obj);
}

#endif


