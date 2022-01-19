#include <iostream>
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
    Strings strings(argc, argv);

    string strCpy = strings[1];
    // strCpy = "hello world";
    cout << strCpy << '\n';
    
    // cout << strings[0] << '\n';
}