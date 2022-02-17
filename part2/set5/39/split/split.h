#ifndef INCLUDED_SPLIT_
#define INCLUDED_SPLIT_

#include <cstddef>
#include <vector>

class Split
{
    std::vector<char *> d_vec;  // vector containing argv NTBS
    public:
                                // ref to argc & ptr to argv to
                                // modify their values in main
        Split(int &argc, char **&argv);
};

#endif
