#include "main.h"

#include "rawstring/rawstring.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    RawString rsp(10, "guten tag!" );
    rsp.print();
}