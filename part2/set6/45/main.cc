#include "main.ih"

using namespace std;

int main()
{
    Vstring vstring(cin);
    Vstring::CharMap vmap;

    // display Vowel count
    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';

    // Display all elements of vmap
    for_each(
        vmap.begin(), vmap.end(),
        [](decltype(*vmap.begin()) value)
        {
            cout << value.first << ": " << value.second << '\n';
        }
    );
}