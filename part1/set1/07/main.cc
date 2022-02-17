#include <iostream>

namespace
{
    struct mask_t            // struct to define the bit sequence
    {                        // specifying bit size of each field
        size_t bt_a: 1 = 0;     // and initializing with values
        size_t bt_b: 3 = 7; 
        size_t bt_c: 4 = 15;
        size_t bt_d: 5 = 10;
        size_t bt_e: 4 = 6;
        size_t bt_f: 4 = 7;
        size_t bt_g: 4 = 15;
        size_t bt_h: 4 = 15;
        size_t bt_i: 4 = 7;
        size_t bt_j: 5 = 0;
        size_t bt_k: 2 = 3;        
    };

    union bits_union         // union to store value
    {
        size_t value;        // value holds mask's initializer defaults
        mask_t mask{};
    };
};

int main()
{
                             // create anonymous default bits_union
                             // object and display its value in hex
    std::cout << std::hex << bits_union{}.value << '\n';

                             // also works
    // std::cout << std::hex << bits_union{ .mask = mask_t{} }.value << '\n'; 
}
