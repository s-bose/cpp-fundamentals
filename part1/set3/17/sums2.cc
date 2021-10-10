#include "sums.h"

#include <iostream>
#include <string>

void sum(int argc, char *argv[], double &total)
{
    for (int idx = 1; idx < argc; ++idx)
        total += std::stod(argv[idx]);  // sums over double values

    std::cout << total << '\n';
}
