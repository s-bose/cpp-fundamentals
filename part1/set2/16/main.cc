#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    size_t radix = std::stoul(argv[1]);
    size_t num = std::stoul(argv[2]);

    std::cout << num << ", displayed using radix " << radix << " is: ";

    std::string result;
    if (!num)
        std::cout << num;

    while (num)
    {
        size_t digit = num % radix;  // extract LSB in base radix
        num = num / radix;
                                     // produce alphabets for digits > 9 
        digit = digit > 9 ? ('a' + (digit - 10)) : digit;
        result += digit;
    }
                                     // print digits in MSB first order
    std::cout << std::string(result.rbegin(), result.rend()) << '\n';
}
