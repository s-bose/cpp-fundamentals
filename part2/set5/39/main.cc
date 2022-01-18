#include <iostream>
#include "split/split.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << argc << " arguments received:\n";

    for (int idx = 0; idx != argc; ++idx)
        cout << idx << ": " << argv[idx] << '\n';

    Split split{argc, &argv};

    cout << '\n'
         << argc << " arguments after splitting:\n";

    for (int idx = 0; idx != argc; ++idx)
        cout << idx << ": " << argv[idx] << '\n';

    cout << "final zero element? " << (argv[argc] == 0 ? "yes" : "no") << '\n';
}