#include "person.ih"

bool Person::hasOnly(char const *characters, std::string const &object)
{
    return object.find_first_not_of(characters) == std::string::npos;
}