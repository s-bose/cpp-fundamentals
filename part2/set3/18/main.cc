#include "main.ih"

int main()
{
    Derived d1;
    Derived d2(d1);       // copy constructor
    Derived d3(move(d2)); // move constructor
}
