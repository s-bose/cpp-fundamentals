#include "main.ih"

string greet(string &&tmp)
{
        // function expecting std::string rvalue
    string ret = "Greetings! ";
    return (ret += move(tmp));
}

