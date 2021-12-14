#include "mystring/mystring.h"
#include "main.ih"

#include <iostream>
#include <initializer_list>

using namespace std;

int main()
{
    MyString m1;
    MyString m2("hello world");
    MyString m3(10, 'a');
    MyString m4(m2);

    MyString m5(10, "Penny");
    MyString m6(move(m5));
    printStrings({m1, m2, m3, m4, m5, m6});
    
    MyString name = "Shiladitya";
    cout << greet(name) << '\n';
    cout << greet(move(name)) << '\n';
    cout << greet(&name) << '\n';
}
