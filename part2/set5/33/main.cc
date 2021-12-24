#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, size_t> smap;
    std::string word;
    while (std::cin >> word)
        ++smap[word];

    for (auto const &[key, value]: smap)
        std::cout << key << ": " << value << '\n';
}
