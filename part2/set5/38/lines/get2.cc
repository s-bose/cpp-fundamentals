#include "lines.ih"


vector<string> const &Lines::get(size_t idx)
{
            // retrieve the idx-th successor map object
            // and return its value
    auto iterObj = next(VecMap.begin(), idx);
    return iterObj->second;
}