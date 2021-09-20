#include <iostream>

using namespace std;

int main()
{
    size_t num;
    cout << "Enter a number: ";
    cin >> num;

                            // even if divisible by 2 (no remainder) else odd
    cout << (num % 2 ? "odd" : "even") << '\n';

                            // int division followed by multiplication by 2
                            // gives the same num if even
    cout << ((num / 2) * 2 == num ? "even": "odd") << '\n';

    
                            // even LSB is 0, bitwise AND with 1 produces 0
    cout << (num & 1 ? "odd": "even") << '\n';


                            // 1 left-shift followed by 1 right-shift produces
                            // same result as int division & multiplication 
                            // by 2
    cout << ((num >> 1) << 1 == num ? "even": "odd") << '\n';


                            // XOR with 1 increments num by 1 if even
                            // and decrements by 1 if odd
    cout << ((num ^ 1) == (num + 1) ? "even": "odd") << '\n';

                            // odd LSB is 1, btiwise OR with 1 does not change it
    cout << ((num | 1) == num ? "odd": "even") << '\n';
}
