#include <iostream>
#include <string>
#include "include/i2c.h"


using namespace std;


int main()
{
    cout << I2C<123>::s_ntbs << '\n'
         <<                     // shows 123
        I2C<0>::s_ntbs << '\n'; // shows 0

    string value{I2C<15937>::s_ntbs};

    cout << value << '\n';      // shows 15937
}