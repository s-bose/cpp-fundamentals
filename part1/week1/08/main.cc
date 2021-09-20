#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)

    size_t fifteen = 15;
    fifteen = fifteen << (4 * nibble);

    size_t inv = ((size_t) - 1) ^ fifteen;
    replacement = replacement << (4 * nibble);
    
    value = (value & inv) | replacement;

    cout << bitset<32>(value) << '\n';
    cout << hex << value << '\n';       // show the new value
}
