#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>

using namespace std;

namespace
{
    ostream &now(ostream &os)
    {                                                   // get the current time in seconds
        time_t tsecs = chrono::system_clock::to_time_t(chrono::system_clock{}.now());

        return os << put_time(localtime(&tsecs), "%c"); // standard date time string
    }
}


int main()
{
    cout << now << '\n';
}
