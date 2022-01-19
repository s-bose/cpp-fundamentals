#include <iostream>
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
    Strings strings(argc, argv);

    strings[1] = "changed";
    cout << strings[1] << '\n';    
    // cout << (strings[0] = "neue Worter") << '\n';
}