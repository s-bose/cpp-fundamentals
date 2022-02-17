#include "main.ih"

int main()
{
    map<string, size_t> smap;   // map each string with their frequencies 
    string word;
    while (cin >> word)
        ++smap[word];

    for (auto const &[key, value]: smap)
        cout << key << ": " << value << '\n';
}
