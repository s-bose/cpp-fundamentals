#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <iterator>

#include "split/split.h"
using namespace std;

int main(int argc, char **argv)
{
    std::vector<std::vector<std::string>> argvec;

    auto args_to_vec = [&](char *ntbs) {
        std::stringstream ss{ntbs};

        return std::vector<std::string>{ 
            std::istream_iterator<std::string>(ss), 
            std::istream_iterator<std::string>() 
        };
    };

    std::transform(
        argv, 
        argv + argc, 
        std::back_inserter(argvec), 
        args_to_vec
    );

    std::vector<std::string> vec;
    for (auto const &arg: argvec)
        vec.insert(vec.end(), arg.begin(), arg.end());

    auto copy_ntbs = [&](std::string const &temp) {
        char *c_str = new char[temp.size() + 1];
        std::copy(temp.c_str(), temp.c_str() + temp.size() + 1, c_str);
        return c_str;
    };

    argc = static_cast<int>(vec.size());

    argv = new char *[vec.size()];
    std::transform(
        vec.begin(),
        vec.end(),
        argv,
        copy_ntbs    
    );

    for (int idx = 0; idx != argc; ++idx)
        std::cout << argv[idx] << '\n';  
}


// int main(int argc, char **argv)
// {
//     cout << argc << " arguments received:\n";

//     for (int idx = 0; idx != argc; ++idx)
//         cout << idx << ": " << argv[idx] << '\n';

//     Split split{argc, &argv};

//     cout << '\n'
//          << argc << " arguments after splitting:\n";

//     for (int idx = 0; idx != argc; ++idx)
//         cout << idx << ": " << argv[idx] << '\n';

//     cout << "final zero element? " << (argv[argc] == 0 ? "yes" : "no") << '\n';
// }
