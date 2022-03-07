#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

#include <ostream>
template <char... charList>
class Chars
{
    public:
        friend 
        std::ostream &operator<< <>(std::ostream &out,
                                    Chars<charList...> const &obj);
};


template <char... charList>
inline std::ostream &operator<<(std::ostream &out, 
                                Chars<charList...> const &obj)
{
    return (out << ... << charList);
}


#endif
