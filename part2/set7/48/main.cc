#include <iostream>
#include <iomanip>
#include <chrono>
#include <vector>
#include <thread>

using namespace std;
using namespace chrono;

vector<size_t> sieve_vector{2};
long unsigned int numberOfPrimes;

system_clock::time_point start_time;
system_clock::time_point end_time;

void sieve () 
{
    start_time = system_clock::now();  // Save start time

    size_t next = 3;                   // Initialize next possible prime

    while (sieve_vector.size() != numberOfPrimes)
    {                                  // Sieve algorithm
        bool notPrime = false;

        for (size_t idx = 0; idx != sieve_vector.size() && !notPrime; ++idx)
            if (next % sieve_vector[idx] == 0) 
                notPrime = true;        // not prime
        
        if(!notPrime)                   // push next prime number
            sieve_vector.push_back(next);
        
        ++next;
    }

    end_time = system_clock::now();    // Save end time
}

void printDots()
{
    while(true)
    {                                  // print dots every second
        cerr << '.';
        this_thread::sleep_for(seconds(1));
    }

}

void printResults()
{                                      // print prime numbers
    for (size_t idx = 0; idx != sieve_vector.size(); ++idx)
        cout << sieve_vector[idx] << ' ';
                                       // convert time to required format
    auto start_timet = system_clock::to_time_t(start_time);
    auto start_local = localtime(&start_timet);
    cout << "\n\nStarting time: " << put_time(start_local, "%c") << '\n';
                                       // convert time to required format
    auto end_timet = system_clock::to_time_t(end_time);
    auto end_local = localtime(&end_timet);
    cout << "Ending time:   " << put_time(end_local, "%c") << '\n';
                                       // print duration
    cout << "Computation of " << numberOfPrimes << " primes took " 
         << duration_cast<seconds>(end_time - start_time).count() 
         << " seconds" << '\n';
}

int main()
{
    cin >> numberOfPrimes;
    
    thread thrPrint(printDots);        // start printing dots thread

    sieve();                           // calculate primes

    thrPrint.detach();                 // detach dots thread

    printResults();                    // print results
}
