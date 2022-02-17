#ifndef INCLUDED_VSTRING_
#define INCLUDED_VSTRING_

#include <vector>
#include <string>
#include <map>
#include <iosfwd>

struct Vstring : private std::vector<std::string>
{
    typedef std::map<char, size_t> CharMap;
    typedef std::vector<std::string>::value_type value_type;

    Vstring(std::istream &in);
    size_t count(CharMap &cmap, bool (*accept)(char, CharMap &));

    using std::vector<std::string>::push_back;

    private:
        static size_t countChar(std::string const &str, CharMap &cmap,
                                bool (*accept)(char, CharMap &));
};

#endif
