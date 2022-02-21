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

inline Exception &&operator<<(Exception &&in, char const *txt)
{
    in.str() += txt;
    return std::move(in);
}

inline Exception &&operator<<(Exception &&in, char ch)
{
    in.str() += ch;
    return std::move(in);
}

inline Exception &&operator<<(Exception &&in, std::string const &str)
{
    in.str() += str;
    return std::move(in);
}

inline Exception &&operator<<(Exception &&in, size_t value)
{
    in.str() += std::to_string(value);
    return std::move(in);
}

        
#endif




