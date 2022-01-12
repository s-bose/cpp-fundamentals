#include "lines.ih"

Lines::~Lines()
{
            // remove the vector mapped to the current obj
    VecMap.erase(this);
}