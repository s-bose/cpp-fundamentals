#include "nrtrait/nrtrait.h"

#include <iostream>

using namespace std;

int main()
{
    cout << NrTrait<123>::value << '\n'
         << NrTrait<123>::even << '\n'
         << NrTrait<12>::even << '\n'
         << NrTrait<8375>::by3 << '\n'
         << NrTrait<375>::by3 << '\n'
         << NrTrait<8375>::width << '\n';
}