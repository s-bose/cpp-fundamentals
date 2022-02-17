#include "mystring/mystring.h"
#include "main.ih"

#include <iostream>
#include <initializer_list>

using namespace std;

int main()
{
    MyString m1;
    MyString m2("hello world");
    
    MyString m3(10, "Penny");
    MyString m4(move(m3));
    printStrings({m1, m2, m3, m4});
    
   
    cout << greet(m4) << '\n';
    cout << greet(move(m4)) << '\n';
    cout << greet(&m2) << '\n';
}
