#include "mystring.ih"

MyString::MyString(size_t count, string const &str)
: 
    std::string(MyString::repeat(count, str))
{
    // initialize base std::string with repeated string
}
