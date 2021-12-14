#ifndef INCLUDED_STRING_
#define INCLUDED_STRING_

#include <string>

class String: public std::string
{
    public:
        String() = default;
        String(std::string const &str);
        String &insert(std::string const &txt);

        using std::string::insert;  // make std::string inserts available

    private:
};

inline String::String(std::string const &str)
: std::string(str)                  // construct from std::string
{}


inline String &String::insert(std::string const &txt)
{
    insert(0, txt);                 // call Base insert with offset 0 
    return *this;                   // to insert at beginning
}

// comparison operators
inline bool operator==(String const &lhs, String const &rhs)
{
                                    // call comparison on the underlying
                                    // std::strings
    return std::string(lhs) == std::string(rhs);
}


inline bool operator!=(String const &lhs, String const &rhs)
{
    return std::string(lhs) != std::string(rhs);
}


inline bool operator<(String const &lhs, String const &rhs)
{
    return std::string(lhs) < std::string(rhs);
}


inline bool operator<=(String const &lhs, String const &rhs)
{
    return std::string(lhs) <= std::string(rhs);
}


inline bool operator>(String const &lhs, String const &rhs)
{
    return std::string(lhs) > std::string(rhs);
}


inline bool operator>=(String const &lhs, String const &rhs)
{
    return std::string(lhs) >= std::string(rhs);
}


#endif
