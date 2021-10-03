#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
    int num = std::stoi(argv[1]);
    size_t const n_bits = sizeof(int) * 8;

    std::string bit_vals;           // bit values for bits in num
    std::string bits;               // binary representation of num

    for (size_t shift = 0; shift != n_bits; ++shift)
    {
        int mask = num & (1 << shift);  // mask = 1... -2^(N-1)

        std::stringstream ss;

        if (mask)
        {                           // if 2's power exists  
            bits += '1';            // append the 2^shift components
            ss << " + " << mask;    // delimiting with +
        }
        else
            bits += '0';

        bit_vals.insert(0, ss.str());   // prepend MSB values to LSBs 
    }

    std::cout << num << " = " << std::string(bits.rbegin(), bits.rend())

                                    // remove delim from the beginning
              << " = " << bit_vals.erase(0, 3) << '\n';
}
