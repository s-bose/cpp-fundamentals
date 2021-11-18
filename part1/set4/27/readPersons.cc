#include "main.ih"

void readPersons(Person persons[], size_t size)
{
                            // read data from standard input
    for (size_t idx = 0; idx != size; ++idx)
    {
        cout << "? ";       // display prompt
        persons[idx].extract(cin); 
    }
}