#include "nrtrait/nrtrait.h"

#include <iostream>

using namespace std;

int main()
{
    cout << NrTrait<1971962>::value << '\n'
         << NrTrait<1971962>::even << '\n'
         << NrTrait<1971962>::by3 << '\n'
         << NrTrait<0>::width << '\n';
}
