#include <iostream>
#include "funcTemplate.h"

using namespace std;

int main()
{
    Impl1 imp1;
    Impl2 imp2;

    cout << hex << imp1.VOIDPTR << '\n'
                << imp2.VOIDPTR << '\n'
                << reinterpret_cast<void *>(&total<int>) << '\n';
}