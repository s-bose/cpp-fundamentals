#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <string>

struct Char2
{
    char value[2];
};

struct IsClass
{
    private:
        template <typename ClassType>
        static Char2 f_isClass(void (ClassType::*)());

        template <typename Type>
        static char f_isClass(...);

    public:
        enum
        {
            isClass = { sizeof(IsClass::f_) };
        };
};

class Data
{
    std::vector<std::string> d_data;

    public:
        template <typename Type>
        Type get(size_t idx) const;

        template <typename ClassType>
        ClassType const &get(size_t idx) const;
        
    private:
};
        
#endif
