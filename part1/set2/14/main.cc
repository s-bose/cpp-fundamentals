#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
                                      // each arg as bits (leftmost LSB)
    size_t n_combs = 1 << (argc - 1); // 2^n combinations for n bits

    for (size_t combs = 0; combs < n_combs; ++combs)
    {
        std::cout << combs + 1 << ": ";

        for (size_t b_idx = 0; b_idx < combs; ++b_idx)
        {                           // iterate over each bits in comb
                                    // place args in their bit location 
            if (combs & (1 << b_idx))
                std::cout << argv[b_idx + 1] << ' ';
        }
        std::cout << '\n';
    }
}
