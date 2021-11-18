#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <iosfwd>
#include <string>

class Person
{

    std::string d_name;         // name of the person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg.

    public:                     // member functions 
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;

        std::ostream &insert(std::ostream &os);
        std::istream &extract(std::istream &is);

    private:
        bool hasOnly(char const *characters, std::string const &object);
};


inline std::string const &Person::name() const
{
    return d_name;
}

inline std::string const &Person::address() const
{
    return d_address;
}

inline std::string const &Person::phone() const
{
    return d_phone;
}

inline size_t Person::mass() const
{
    return d_mass;
}

inline void Person::setName(std::string const &name)
{
    d_name = name;
}
        
inline void Person::setAddress(std::string const &address)
{
    d_address = address;
}

inline void Person::setMass(size_t mass)
{
    d_mass = mass;
}

#endif
