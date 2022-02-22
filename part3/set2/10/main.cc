#include "counter/counter.h"
#include <iostream>

using namespace std;

int main()
{
    Counter<int> c1;        // c1 = 0
    Counter<int> c2(1);     // c2 = 1

    ++c1;                   // c1 = 1
    ++c2;                   // c2 = 2
    cout << "c1: " << c1 << "\n"
            "c2: " << c2 << '\n';

    {
        Counter<int> c3(c1); // c3 = c1 = 1
        ++c3;                // c3 = c1 = 2
        cout << "c3: " << c3 << '\n';
    }

    Counter<double> d1;
    ++d1;

    cout << "Object count\n"
            "int: " << Counter<int>::count() << "\n"
            "double: " << Counter<double>::count() << "\n"
            "Object actual\n"
            "int: " << Counter<int>::actual() << "\n"
            "double: " << Counter<double>::actual() << '\n';
}