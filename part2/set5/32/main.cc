#include <iostream>
#include <set>


int main()
{
    std::set<std::string> sset;
    std::string word;
    while (std::cin >> word)
        sset.insert(word);

    for (auto const &word: sset)
        std::cout << word << '\n';
}
