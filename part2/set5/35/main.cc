#include <iostream>
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
    Strings strings(argc, argv);
    Strings strings1(strings);

    strings[1] = "changed";

}