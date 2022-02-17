#include "main.ih"

int main()
{
    set<string> sset;
    string word;
    while (cin >> word)
        sset.insert(word);  // set will contain only unique strings

    for (auto const &word : sset)
        cout << word << '\n';
}
