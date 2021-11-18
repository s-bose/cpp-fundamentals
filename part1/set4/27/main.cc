#include "main.ih"

int main()
{
    size_t size = 5;
    Person persons[size];

    readPersons(persons, size);
    writePersons(persons, size);
}