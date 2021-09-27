#include <iostream>

namespace
{
    struct mask_t            // struct to define the bit sequence
    {                        // specifying bit size of each field
        size_t a: 1 = 0;     // and initializing with values
        size_t b: 3 = 7; 
        size_t c: 4 = 15;
        size_t d: 5 = 10;
        size_t e: 4 = 6;
        size_t f: 4 = 7;
        size_t g: 4 = 15;
        size_t h: 4 = 15;
        size_t i: 4 = 7;
        size_t j: 5 = 0;
        size_t k: 2 = 3;        
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
}
