#include "main.h"
#include <iostream>

using namespace std;

int main()
{
    int chVal = 'X';
                // compiler infers `FromType' as `int'
    cout << as<char>(chVal) << '\n';
}