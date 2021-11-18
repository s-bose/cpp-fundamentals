#include "main.ih"

void writePersons(Person persons[], size_t size)
{                       
                        // write data into standard output
    for (size_t idx = 0; idx != size; ++idx)
        persons[idx].insert(cout);
}