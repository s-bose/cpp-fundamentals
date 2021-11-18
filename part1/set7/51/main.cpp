#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc > 3)
    {
        cout << "Require two numerical unsigned inputs" << '\n';
        return 1;
    }

    istringstream istr(argv[1]);
    size_t no1 = 0;
    istr >> no1;

    cout << "extracted first number: " << no1 << '\n';

    istr.str(argv[2]);
    istr.clear();
    size_t no2 = 0;
    istr >> no2;

    cout << "extracted second number: " << no2 << '\n';
}