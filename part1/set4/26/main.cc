#include "person/person.ih"

int main()
{
    Person person1;
    Person person2;
    Person person3;

    person1.extract(cin);   // extract & populate each person
    person2.extract(cin);   // from cin
    person3.extract(cin);

    person1.insert(cout);   // insert person's info on cout
    person2.insert(cout);
    person3.insert(cout);

}

