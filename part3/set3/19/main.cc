#include "chars/chars.h"
#include <iostream>

using namespace std;

int main()
{
    cout << Chars<'h', 'e', 'l', 'l', 'o'>() << '\n'
         << Chars<'m', 'e', 't', 'a'>() 
         << Chars<>() << '\n';
}