#include "unique/unique.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Unique<int> value{42};

    Unique<int> second{value};

    cout << value.get() << ' ' << second.get() << '\n';

    second.get() = 13;

    cout << value.get() << ' ' << second.get() << '\n';

    Unique<string> text{"hello world"};
    text = Unique<string>{"hello world (2)"};

    cout << text.get() << '\n';
}
