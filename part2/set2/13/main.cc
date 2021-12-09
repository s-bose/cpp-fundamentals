#include <iostream>
#include <string>
#include <stdexcept>
#include "maxfour/maxfour.h"

using namespace std;

int main()
{
    MaxFour *itemList = 0;
    try
    {
        itemList = new MaxFour[10];     // try allocating 10 obj
        cout << MaxFour::count() << '\n';
    }
    catch(char const* str)              // catch exception re-thrown
    {                                   // by constructor
        cerr << str << endl;
        delete[] itemList;              // delete the remaining
    }
}
