#include <iostream>
#include <string>

std::istream &promptGet(std::istream &in, std::string &str)
{
    std::cout << "Enter a line or ^D\n"; // ^D signals end-of-input

    return std::getline(in, str);
}


int main()
{
    std::string str;
    while (promptGet(std::cin, str))
        std::cout << str;
}