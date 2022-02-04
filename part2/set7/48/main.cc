#include "main.ih"


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        usage();
        return 1;
    }

    thread thr(printDots);                        // start printing dots
    
    size_t n_primes = stoul(argv[1]);
    time_point const start = system_clock::now(); // Save start time
    
    vector<size_t> vec = sieve(n_primes);         // calculate primes
    time_point const end = system_clock::now();   // Save end time

    thr.detach();                                 // detach dots thread

    copy(vec.begin(), vec.end(), ostream_iterator<size_t>{cout, " "});
    cout << '\n';

    printResults(start, end, n_primes);
}
