#ifndef INCLUDED_MYSTRING_
#define INCLUDED_MYSTRING_

#include <string>

class MyString: public std::string
{
    public:
        MyString() = default;
        MyString(std::string const &str);
        MyString(size_t count, std::string const &str);

    private:
                // repeats str, count times
        static std::string repeat(size_t count, std::string const &str);
};

// constructor
inline MyString::MyString(std::string const &str)
:
    std::string(str)
{}


#endif
