#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace chrono;

void usage();

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        usage();
        return 1;
    }

    size_t hoursIn = stoul(argv[1]);
    size_t secondsIn = stoul(argv[2]);
   
                                       // cast hours to minutes
    minutes hourToMin = duration_cast<minutes>(hours{hoursIn});
    
                                       // cast seconds to minutes
    duration<double, minutes::period> secsToMin = seconds{secondsIn}; 
    
    cout << hoursIn << " hours to minutes: " << hourToMin.count() << '\n';
    cout << secondsIn << " seconds to minutes: " << secsToMin.count() << '\n';
}

void usage()
{
    cout << "Usage: a.out [hour] [second]\n"
            "[hour]   -- hour count, to be converted to minutes\n"
            "[second] -- seconds count, to be converted to minutes\n";
}