#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <vector>
#include <string>

class Strings
{
    std::vector<std::string> d_strs;

    public:
        Strings() = default;
        void push_back(std::string const &str);
        size_t size() const;
        size_t capacity() const;
    private:
};


inline size_t Strings::size() const
{
    return d_strs.size();
}

inline size_t Strings::capacity() const
{
    return d_strs.capacity();
}


#endif
