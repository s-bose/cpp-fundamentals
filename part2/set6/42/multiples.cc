#include "main.ih"

size_t multiples(vector<size_t> const &vec)
{
    size_t count = 0;

                                // find 2 adjacent multiples
    auto iter = adjacent_find(vec.begin(), vec.end());
    while (iter != vec.end())   // keep finding & counting adjacent multiples
    {
        ++count;
        iter = adjacent_find(++iter, vec.end());
    }

    return count;
}
