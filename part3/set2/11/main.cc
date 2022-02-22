#include "counter/counter.h"
#include <iostream>

using namespace std;

int main()
{
    Counter<int> c1;
    Counter<int> c2(1);
    {
        Counter<int> c3(c1);
    }

    Counter<double> d1;
    Counter<float> f1(4.5f);

    cout << "Total instance count: " << f1.gCount() << "\n"
         << "Total instance actual: " << f1.gActual() << '\n';
}