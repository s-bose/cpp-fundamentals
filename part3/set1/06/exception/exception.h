#ifndef INCLUDED_EXCEPTION_
#define INCLUDED_EXCEPTION_

#include <string>
#include <sstream>
#include <exception>

class Exception: public std::exception
{
    std::string d_what;

    public:
        Exception() = default;

        std::string &str();

        char const *what() const noexcept(true) override;   
};

inline std::string &Exception::str()
{
    return d_what;
}

template <typename Type>
inline Exception &&operator<<(Exception &&in, Type const &txt)
{
    in.str() += txt;
    return std::move(in);
}
        
#endif




