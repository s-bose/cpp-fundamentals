#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);      // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);            // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;  // new nibble (= 0 .. 15)

    size_t shift = 4 * nibble;  // offset index to the replaced hex

                                // xor size_t max (all 1) with 15 shifted
                                // to nibble position to mask & reset nibble
    size_t all_one = ~1 | 1;
    size_t mask = all_one ^ (15 << shift);

    replacement = replacement << shift;   // move replacement to its position
    value = (value & mask) | replacement; // reset & replace nibble

    cout << hex << value << '\n';         // show the new value
}
