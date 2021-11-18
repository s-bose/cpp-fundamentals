#include "person.ih"

istream &Person::extract(istream &is)
{
    string str;

    getline(is, str, ',');  // extract name
    setName(str);

    getline(is, str, ',');  // address
    setAddress(str);

    getline(is, str, ',');  // phone number
    setPhone(str);

    getline(is, str);
    size_t mass = stoull(str);
    setMass(mass);   // mass 
    
    
    return is;
}