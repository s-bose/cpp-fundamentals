#include "copycat/copycat.h"

#include <iostream>

using namespace std;

extern char **environ;

int main(int argc, char **argv)
{
    CopyCat cpy(argc, argv);

    cpy.printData();
}