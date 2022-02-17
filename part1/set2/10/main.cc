#include <iostream>
#include <string>
#include <cctype>

int main()
{ 
    std::string str; 

    for 
    (
        size_t iter = 0, a_size = 1 << 8;         // total 2^8 ascii values
        iter != a_size; 
        ++iter
    )                                             // iterate over all ascii
        if (std::isalpha(iter))
            str += iter;                          // append to str if alphabet
    
    std::cout << str << '\n';                     // print the string
}
