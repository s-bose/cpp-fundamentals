#include "person.ih"

ostream &Person::insert(ostream &os)
{
    os << "Name: " << d_name << "\n"
          "Address: " << d_address << "\n"
          "Phone: " << d_phone << "\n"
          "Mass: " << d_mass << "\n\n";

    return os;
}