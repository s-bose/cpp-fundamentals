#include <iostream>

namespace
{
    struct mask_t            // struct to define the bit sequence
    {                        // specifying bit size of each field
        size_t a: 1;
        size_t b: 3; 
        size_t c: 4;
        size_t d: 5;
        size_t e: 4;
        size_t f: 4;
        size_t g: 4;
        size_t h: 4;
        size_t i: 4;
        size_t j: 5;
        size_t k: 2;        
    };

    union bits_union         // union to store value
    {
        size_t value;   
                             // value is set by initializing the 
                             // bit-fields of the struct
        mask_t mask = {0, 7, 15, 10, 6, 7, 15, 15, 7, 0, 3};
    };
};

int main()
{
    bits_union num;
                            // output value as hexadecimal
    std::cout << std::hex << num.value << '\n';
}
