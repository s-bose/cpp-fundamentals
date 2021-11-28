#include "numbers.ih"

bool operator==(Numbers const &lhs, Numbers const &rhs)
{
    if (lhs.size() != rhs.size())
        return false;
    
    bool ret = true;
    for (size_t idx = 0; idx != lhs.size(); ++idx)
    {
        if (lhs[idx] != rhs[idx])
            ret = false;
    }
    return ret; // returns true if both arrays have the same elements
}