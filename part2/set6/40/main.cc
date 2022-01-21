#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    size_t count     = stoul(argv[1]);
    size_t endRandom = stoul(argv[2]) + 1;  // max random, inclusive
    size_t lookup    = stoul(argv[3]);

    vector<size_t> d_vec(count);
    generate(d_vec.begin(), d_vec.end(),    // fill vector with random ints
            [endRandom]()
            {
                return rand() % endRandom;
            });

    copy(d_vec.begin(), d_vec.end(),        // print vector
        ostream_iterator<size_t>{cout, " "});
    cout << '\n';
    
                                            // find first value exceeding `lookup' 
    auto iterFound = find_if(d_vec.begin(), d_vec.end(), 
                            [lookup](size_t value)
                            {
                                return value > lookup;
                            });

    if (iterFound == d_vec.end())
        cout << "No random value exceeeds " << lookup << '\n';
    else
        cout << "The first value exceeding " << lookup 
             << " is at index " << (iterFound - d_vec.begin()) << '\n';
}
