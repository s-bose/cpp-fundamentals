#include "BankDetails.h"

#include <string>

class UserDetails
{
    std::string d_name;
    std::string d_address;
    size_t d_age;

    BankDetails d_account;

    public:
        UserDetails();
        UserDetails(std::string const &name, 
                    std::string const &address, 
                    size_t age);
                    
        ~UserDetails();

        std::string const &getName() const;
        std::string const &getAddress() const;
        size_t getAge() const;

        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setAge(size_t age);
};
