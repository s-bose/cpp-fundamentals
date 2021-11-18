#include "line/line.h"
#include <iostream>

using namespace std;

int main()
{
    Line line;
    while (line.getLine())
    {
        cout << line.next() << ' ';
        cout << line.next() << ' ';
        cout << line.next() << ' ';
        cout << line.next() << '\n';
    }
}