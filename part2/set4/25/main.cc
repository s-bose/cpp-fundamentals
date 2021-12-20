#include "main.ih"

int main()
{
    Base base;
    Derived derived("hello world");
    Message message1(base);
    Message message2(derived);
    message1.show();
    message2.show();
}