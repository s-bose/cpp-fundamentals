#include "main.ih"

void printResults(time_point<system_clock> const &t_start, 
                 time_point<system_clock> const &t_end,
                 size_t n_primes)
{
                                // convert time to required format
    time_t start = system_clock::to_time_t(t_start);

    cout << "\n\nStarting time: " 
         << put_time(localtime(&start), "%c") << '\n';
    
    time_t end = system_clock::to_time_t(t_end);
    
    cout << "\n\nEnding time:   " 
        << put_time(localtime(&end), "%c") << '\n';
                                

                                // print duration
    cout << "Computation of " << n_primes << " primes took "
         << duration_cast<seconds>(t_end - t_start).count()
         << " seconds" << '\n';
}