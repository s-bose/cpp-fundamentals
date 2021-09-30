#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    for (int combs = 0; combs < (1 << (argc - 1)); ++combs)
    {
        std::cout << combs + 1 << ": ";
        for (int b_idx = 0; b_idx < combs; ++b_idx)
        {
            if (combs & (1 << b_idx))
                std::cout << argv[b_idx + 1] << ' ';
        }
        std::cout << '\n';
    }
}
