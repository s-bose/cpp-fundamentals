#ifndef INCLUDED_WRAPPER_
#define INCLUDED_WRAPPER_

#include <string>
#include <memory>
#include <ostream>

class Wrapper
{
    std::shared_ptr<std::string> d_str;

    public:
        Wrapper() = default;
        Wrapper(std::string const &str);

        std::string &operator=(std::string rhs); // handling lvalue
        operator std::string const &() const;    // handling rvalue

    private:
};
        
inline Wrapper::Wrapper(std::string const &str)
:
    d_str(std::make_shared<std::string>(str))
{}


inline std::ostream &operator<<(std::ostream &out, Wrapper const &wrap)
{
    return out << static_cast<std::string const &>(wrap);
}

#endif
