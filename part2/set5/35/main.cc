#include <iostream>
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
    Strings strings(argc, argv);
    Strings strings2(strings);

    auto strCpy = strings[0];
    strCpy = "hello world";
    cout << strCpy << '\n';
    
    cout << strings[0] << '\n';

}