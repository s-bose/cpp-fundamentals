#include "sums.h"

#include <iostream>
#include <string>


void sum(int argc, char *argv[], int &total)
{
    for (int idx = 1; idx < argc; ++idx)
        total += std::stoi(argv[idx]);   // sums over int values;

    std::cout << total << '\n';
}
