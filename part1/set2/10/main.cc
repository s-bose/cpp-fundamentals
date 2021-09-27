#include <iostream>
#include <string>
#include <cctype>
int main()
{
    size_t a_size = 1 << 8;                       // total 2^8 ascii values

    std::string str;
    
    for (size_t iter = 0; iter < a_size; iter++) // iterate over all ascii
        str += !!std::isalpha(iter) * iter;      // append to str if alphabet
    
    std::cout << str << '\n';                    // print the string
}
