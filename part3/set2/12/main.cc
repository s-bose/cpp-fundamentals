#include "simple/simple.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Simple<int> sim1;

    cout << sim1.get() << '\n';

    int val = 12;

    Simple<int *> sim2{&val};

    cout << sim2.get() << '\n';
}