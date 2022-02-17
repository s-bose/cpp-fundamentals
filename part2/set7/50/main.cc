#include <iostream>
#include <chrono>
#include <string>
#include <iomanip>

using namespace std;
using namespace chrono;


void usage();

int main(int argc, char **argv)
{
     if (argc != 2)
     {
          usage();
          return 1;
     }

     string shift_str = argv[1];
     int shift_int = stoi(shift_str);

     seconds shift;
     if (shift_str.ends_with('s'))
          shift = seconds(shift_int);
     else if (shift_str.ends_with('m'))
          shift = minutes(shift_int);
     else if (shift_str.ends_with('h'))
          shift = hours(shift_int);
     else
     {
          usage();
          return 1;
     }

     time_point const actualTime = system_clock::now();
     time_t printTime = system_clock::to_time_t(actualTime);

     cout << "local: "                  // print local time
          << put_time(localtime(&printTime), "%Y-%m-%d %X") << '\n'
          << "UTC:   "                  // print UTC time
          << put_time(gmtime(&printTime), "%Y-%m-%d %X") << '\n';

                                        // add time
     time_t addTime = system_clock::to_time_t(actualTime + shift);
                                        // subtract time
     time_t subTime = system_clock::to_time_t(actualTime - shift); 
    

                                       
     cout << "Added time\n" 
          << "local: "                  // print local added time
          <<  put_time(localtime(&addTime), "%Y-%m-%d %X") << '\n'
          << "UTC:   "                  // print UTC added time
          << put_time(gmtime(&addTime), "%Y-%m-%d %X") << '\n';

     cout << "Subtracted time\n"
          << "local: "                  // print local subtracted time
          << put_time(localtime(&subTime), "%Y-%m-%d %X") << '\n'
          << "UTC:   "                  // print UTC subtracted time
          << put_time(gmtime(&subTime), "%Y-%m-%d %X") << '\n';
}

void usage()
{
     cout << "Usage: a.out [timedelta]\n"
             "timedelta: integer, followed by literal"
             " 's'|'m'|'h' (second|minute|hour)\n";
}