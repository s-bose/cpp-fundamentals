#include "copycat/copycat.h"

#include <iostream>

using namespace std;

extern char **environ;

int main(int argc, char **argv)
{
    CopyCat cpy(argc, argv);

    cout << *cpy.data() << '\n';
    cout << *(cpy.data() + 1) << '\n';
}