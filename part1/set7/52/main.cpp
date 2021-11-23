#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>

using namespace std;

namespace
{
    ostream &now(ostream &os)
    {                                 // get the current time in seconds
        time_t tsecs = chrono::system_clock::to_time_t(chrono::system_clock{}.now());
                                      // standard date time string
        return os << put_time(localtime(&tsecs), "%c");
    }
}


int main()
{
    cout << now << '\n';
}
