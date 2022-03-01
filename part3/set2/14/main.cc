#include <string>
#include <algorithm>
#include <iostream>
#include "storage.h"

using namespace std;

int main(int argc, char **argv) {
    Storage<string> storage{"1", "2", "3", "8", "4"};

    sort(storage.begin(), storage.end());

    for (int i = 0; i < 5; ++i)
        cout << storage[i] << ' ';
    cout << endl;

    sort(storage.rbegin(), storage.rend());

    for (int i = 0; i < 5; ++i)
        cout << storage[i] << ' ';
    cout << endl;

    return 0;
}