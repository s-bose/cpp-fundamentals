// #include "sums.h"

#include <iostream>
#include <string>

namespace
{
    bool doubleArg(size_t argc, char *argv[]) // check for doubles
    {
        for (size_t iter = 1; iter < argc; ++iter)
        {
            if (std::string(argv[iter]).find('.') != std::string::npos)
                return true;
        }
        return false;
    }


    // alternative implementation (with one extra argument to differentiate)
    double sum(size_t argc, char *argv[], int)
    {
        double ret = 0;

        for (size_t idx = 1; idx != argc; ++idx) // all arguments
            ret += std::stod(argv[idx]);              // convert to double and sum

        return ret; // return the sum
    }


    int sum(size_t argc, char *argv[])
    {
        int ret = 0;

        for (size_t idx = 1; idx != argc; ++idx) // all arguments
            ret += std::stoi(argv[idx]);              // convert to int and sum

        return ret; // return the sum
    }
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "Pass a series of values to compute their sum\n";
        return 0;
    }

    if (doubleArg(argc, argv))
        std::cout << "Sum of doubles: " << sum(argc, argv, 1) << '\n';
    else
        std::cout << "Sum of ints: " << sum(argc, argv) << '\n';
}
