#include "main.ih"

string greet(string const *ptr)
{
        // function expecting std::string pointer
    string ret = "Greetings! ";
    return (ret += *ptr);
}
