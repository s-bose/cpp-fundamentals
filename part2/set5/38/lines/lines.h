#ifndef INCLUDED_LINES_
#define INCLUDED_LINES_

#include <istream>
#include <vector>
#include <string>

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


