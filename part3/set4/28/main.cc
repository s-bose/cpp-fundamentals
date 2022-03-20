#include "traits/traits.h"
#include <iostream>

using namespace std;

int main()
{
    int plain = 2;
    int *ptr = &plain;
    int &ref = plain;
    int &&rval = int(42);

    cout << "Plain: " << Traits<decltype(plain)>::value << '\n'
         << "Ptr: "   << Traits<decltype(ptr)>::value << '\n'
         << "Ref: "   << Traits<decltype(ref)>::value << '\n'
         << "RRef: "  << Traits<decltype(rval)>::value << '\n'; 
}