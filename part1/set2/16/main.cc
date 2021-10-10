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

    while (num)
    {
        size_t digit = num % radix;  // extract LSB in radix base
        num /= radix;
                                      
        if (digit > 9)               // produce alphabets for digits > 9
            result += static_cast<char>('a' + (digit - 10));
        else
           result += std::to_string(digit);

    }
                                     // print digits in MSB first order
    std::cout << std::string(result.rbegin(), result.rend()) << '\n';
}
