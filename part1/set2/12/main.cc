#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::cout << "? ";

        std::string line;
        if (not std::getline(std::cin, line) or line.empty())
            break;
        for
        (
            std::string::reverse_iterator revIt = line.rbegin();
            revIt != line.rend();
            ++revIt
        )
            std::cout << *revIt;
        
        std::cout << '\n';
    }
}
