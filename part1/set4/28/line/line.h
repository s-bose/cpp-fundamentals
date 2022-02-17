#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>
#include <sstream>

class Line
{
    std::stringstream ss;   // stream to store the read line

    public:
        bool getLine();
        std::string next();
};
        
#endif
