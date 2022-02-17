#include "main.ih"

string greet(string const &str)
{
        // function expecting std::string reference
    string ret = "Greetings! ";
    return (ret += str);
}

