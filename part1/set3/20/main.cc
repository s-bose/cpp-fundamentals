#include "quicksort.ih"

#include <iostream>

extern char **environ;

int main()
{
    size_t size = 0;

    while (*environ++)
        ++size;                 // count the no of env vars

    --environ;                  // adjust ptr for 1 extra increment

    environ = environ - size;   // reset ptr to beginning
    

                                // fill array with env vars 
    string envArray[size];
    for (size_t idx = 0; idx != size; ++idx)
        envArray[idx] = environ[idx];

                                // sort & print
    quicksort(envArray, 0, size);

    for (size_t idx = 0; idx != size; ++idx)
        cout << envArray[idx] << '\n';
}
