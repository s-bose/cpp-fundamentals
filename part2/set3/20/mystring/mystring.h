#ifndef INCLUDED_MYSTRING_
#define INCLUDED_MYSTRING_

#include <string>

class MyString: public std::string
{
    public:
        MyString() = default;
        MyString(char const *txt);
        MyString(char const *txt, size_t n_size);
        MyString(size_t n_size, char chr);
        MyString(size_t count, std::string const &str);
        MyString(MyString const &other);
        MyString(MyString &&tmp);

    private:

};

// constructors
inline MyString::MyString(char const *txt)
: std::string(txt)
{}

inline MyString::MyString(char const *txt, size_t n_size)
: std::string(txt, n_size)
{}

inline MyString::MyString(size_t n_size, char chr)
: std::string(n_size, chr)
{}

inline MyString::MyString(MyString const &other)
: std::string(other)
{}

inline MyString::MyString(MyString &&tmp)
: std::string(std::move(tmp))
{}

#endif
