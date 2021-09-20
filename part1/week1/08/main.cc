#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);      // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);            // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;  // new nibble (= 0 .. 15)

    size_t mask = 15 << (4 * nibble);          // left-shift 15 (1111) by
                                               // offset no of blocks

    mask = ((size_t) - 1) ^ mask;              // flip the mask
    replacement = replacement << (4 * nibble); // move the replacement to its position
    
    value = (value & mask) | replacement;      // reset & replace the nibble with replacement 

    cout << bitset<32>(value) << '\n';
    cout << hex << value << '\n';       // show the new value
}
