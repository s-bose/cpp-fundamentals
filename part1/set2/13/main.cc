#include <iostream>
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

        std::string bitval;
        
        if (not mask)
            bits += '0';           // prepend bits from right to left
        else
        {
            bits += '1';
                                    // if 2's power exists 
                                    // append the 2^shift components
                                    // delimiting with '+'

            bitval += " + " + std::to_string(mask);
        }

        bit_vals.insert(0, bitval); // prepend bit values
    }

    std::cout << num << " = " << std::string(bits.rbegin(), bits.rend())

                                    // remove delim from the beginning
                     << " = " << bit_vals.erase(0, 3) << '\n';
}
