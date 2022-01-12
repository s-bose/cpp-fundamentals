#ifndef INCLUDED_LINES_
#define INCLUDED_LINES_

#include <istream>
#include <vector>
#include <string>
#include <map>

class Lines;

                // extern map mapping each Lines obj pointer to its vector
extern std::map<Lines const *, std::vector<std::string>> VecMap;

class Lines
{
    public:
        Lines(std::istream &in);
        ~Lines();
        std::vector<std::string> const &get();
        std::vector<std::string> const &get(size_t idx);

    private:
};


#endif


