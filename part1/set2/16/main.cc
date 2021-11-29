#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    size_t radix = std::stoul(argv[1]);
    size_t num = std::stoul(argv[2]);

    std::cout << num << ", displayed using radix " << radix << " is: ";

    std::string result;
    if (num == 0)                    // display 0 if num is 0 
        std::cout << num;

    do
    {
        size_t digit = num % radix;  // extract LSB in radix base
        num /= radix;
        
        digit += digit < 10 ? '0' : 'a' - 10;   // if digit in 0-9, add that to char '0
                                                // to get the correct char
                                                // else get the displacement from 'a'

        result.insert(0, 1, digit);
    }
    while (num != 0);
                                     // print digits in MSB first order
    std::cout << argv[2] << ", displayed using radix " << argv[1] << " is: " << result << '\n';
}
