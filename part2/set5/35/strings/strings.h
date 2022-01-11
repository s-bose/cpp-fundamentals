#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>
#include <iostream>
#include <memory>


class Strings
{
    std::vector<std::string> d_str;

    public:
        class Wrap;
        Wrap operator[](size_t idx);

        class Wrap
        {   
            std::shared_ptr<std::string> d_data;

            friend Wrap Strings::operator[](size_t idx);

            Wrap() = default;
            Wrap(std::string &str);


            public:
                std::string &operator=(std::string const &rhs);
                operator std::string const &() const;
                friend std::ostream &operator<<(std::ostream &out, Strings::Wrap const &obj);

            private:
                void swap(Wrap &other);
        };

        Strings() = default;
        Strings(int argc, char **argv);
        Strings(char **environLike);

        Strings &operator+=(std::string const &rhs);
        void printStrs() const;

        size_t size() const;
        size_t capacity() const;

        void resize(size_t newSize);
        void reserve(size_t newCapacity);


    private:
};


inline Strings::Wrap::Wrap(std::string &str)
:
    d_data(std::shared_ptr<std::string>( new std::string{ str } ))    
{}

inline Strings::Wrap::operator const std::string &() const
{
    return *d_data;
}

inline Strings::Wrap Strings::operator[](size_t idx)
{
    return Strings::Wrap( d_str[idx] );
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

inline void Strings::printStrs() const
{
    for (size_t idx = 0; idx != d_str.size(); ++idx)
        std::cout << d_str[idx] << '\n';
}

#endif


