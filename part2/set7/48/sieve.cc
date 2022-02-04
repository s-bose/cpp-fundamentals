#include "main.ih"


vector<size_t> sieve(size_t n_primes)
{
    vector<size_t> sieveVec{2};                   // start with 2

    size_t next = 3;                              // next prime

    while (sieveVec.size() != n_primes)           // Sieve algorithm
    {
        bool notPrime = false;

        for (size_t idx = 0; idx != sieveVec.size() && !notPrime; ++idx)
            if (next % sieveVec[idx] == 0)
                notPrime = true;

        if (!notPrime)                            // push next prime number
            sieveVec.push_back(next);

        ++next;
    }

    return sieveVec;
}