#include <iostream>
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
    Strings strings(argc, argv);
    Strings strings2(strings);

    strings2[0] = "first one got changed";
    strings2.printStrs();

    cout << "\n\n\n";

    strings.printStrs();
}