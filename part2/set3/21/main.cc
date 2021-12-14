#include "mystring/mystring.h"

#include <iostream>
using namespace std;

int main()
{
    String str(" world");
    str.insert("hello");
    cout << str << '\n';
    
    String str1("hello world");

    str.insert(0, 5, 'H');
    cout << str << '\n';

    String str2("abc");
    cout << boolalpha << (str == str1) << ' ' << (str2 < str1) << '\n';
}
