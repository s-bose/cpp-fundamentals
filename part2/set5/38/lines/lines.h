#ifndef INCLUDED_LINES_
#define INCLUDED_LINES_

#include <istream>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

class Lines;

extern std::map<Lines, std::vector<std::string>> VecMap;

class Lines
{
    public:
        Lines(std::istream &in);
        ~Lines();
        std::vector<std::string> const &get();
        std::vector<std::string> const &get(size_t idx);
        auto operator<=>(Lines const &other) const = default;

    private:
};


inline std::vector<std::string> const &Lines::get()
{
    return VecMap.at(*this);
}

inline std::vector<std::string> const &Lines::get(size_t idx)
{
    auto iterObj = std::next(VecMap.begin());
    
    return iterObj->second;
}

inline Lines::~Lines()
{}

#endif


