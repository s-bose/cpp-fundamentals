#include <iostream>
#include <chrono>
#include <string>
#include <iomanip>

using namespace std;
using namespace chrono;


void usage()
{
     cout << "Usage: a.out [timedelta]\n"
             "timedelta: integer, followed by literal"
             " 's'|'m'|'h' (second|minute|hour)\n"; 
}


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

     time_point actualTime = system_clock::now();
     time_t printTime = system_clock::to_time_t(actualTime);
                                        // print local time
     cout << "local: " 
          <<  put_time(localtime(&printTime), "%Y-%m-%d %X") << '\n';
                                        // print UTC time
     cout << "UTC:   " 
          <<  put_time(gmtime(&printTime), "%Y-%m-%d %X") << '\n';

     time_t addTime = system_clock::to_time_t(actualTime + shift); // add time
     time_t subTime = system_clock::to_time_t(actualTime - shift);
    

                                        // print local added time
     cout << "Added time\n" << "local: " 
          <<  put_time(localtime(&addTime), "%Y-%m-%d %X") << '\n';
                                        // print UTC added time
     cout << "UTC:   " 
          <<  put_time(gmtime(&addTime), "%Y-%m-%d %X") << '\n';


     cout << "Subtracted time\n" << "local: "
          << put_time(localtime(&subTime), "%Y-%m-%d %X") << '\n';
     // print UTC subtracted time
     cout << "UTC:   "
          << put_time(gmtime(&subTime), "%Y-%m-%d %X") << '\n';
}
