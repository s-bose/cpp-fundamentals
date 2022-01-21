#include "copyfile/copyfile.h"
#include <iostream>

using namespace std;

int main()
{
    CopyFile cpy;
    cpy.copyFile(0, "main.cc", "main0.cc");
    cpy.copyFile(1, "main.cc", "main1.cc");
    cpy.copyFile(2, "main.cc", "main2.cc");
    cpy.copyFile(3, "main.cc", "main3.cc");
    cpy.copyFile(4, "main.cc", "main4.cc");
}
