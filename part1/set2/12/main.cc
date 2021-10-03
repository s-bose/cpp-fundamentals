#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::cout << "? "; // input prompt

        std::string line;

                    // break if line empty or EOF
        if (not std::getline(std::cin, line) or line.empty())
            break;

                    // print the line by iterating in reverse
        std::cout << std::string(line.rbegin(), line.rend()) << '\n';
    }
}
