#include <iostream>
#include "funcTemplate.h"

using namespace std;

int main()
{
    Impl1 imp1;
    Impl2 imp2;

<<<<<<< HEAD
    cout << hex << imp1.VOIDPTR << '\n' // convert union to void ptr
=======
    cout << hex << imp1.VOIDPTR << '\n'
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
                << imp2.VOIDPTR << '\n'
                << reinterpret_cast<void *>(&total<int>) << '\n';
}