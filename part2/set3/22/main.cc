#include "main.ih"

int main()
{
    Derived d1;
    caller(d1); // pass Derived obj in place of Base ref.
}
