#include "sums.h"

#include <iostream>
#include <string>

namespace
{
    bool doubleArg(int argc, char *argv[]) // check for doubles
    {
        for (int iter = 1; iter < argc; ++iter)
        {
            if (std::string(argv[iter]).find('.') != std::string::npos)
                return true;
        }
        return false;
    }
}

int main(int argc, char *argv[])
{
    
    if (doubleArg(argc, argv))
    {
        double total = 0;
        sum(argc, argv, total);
    }
    else
    {
        int total = 0;
        sum(argc, argv, total);
    }
}
