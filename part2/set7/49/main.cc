#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    int hoursIn;
    int secondsIn;
    cin >> hoursIn >> secondsIn;
                                       // cast hours to minutes
    auto hourToMin = duration_cast<minutes>(hours{hoursIn});
                                       // cast seconds to minutes
    duration<float, minutes::period> secsToMin = seconds{secondsIn}; 
    cout << hoursIn << " hours to minutes: " << hourToMin.count() << '\n';
    cout << secondsIn << " seconds to minutes: " << secsToMin.count() << '\n';
}
