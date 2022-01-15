#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator>
#include <algorithm>

int main(int argc, char **argv)
{
    size_t count = std::stoul(argv[1]);
    size_t endRandom = std::stoul(argv[2]) + 1;
    size_t lookup = std::stoul(argv[3]);

    std::vector<size_t> d_vec(count);
    std::generate(d_vec.begin(), d_vec.end(), 
            [endRandom]()
            {
                return std::rand() % endRandom;
            });

    std::copy(d_vec.begin(), d_vec.end(), std::ostream_iterator<size_t>{std::cout, " "});
    std::cout << '\n';

    auto iterFound = std::find_if(d_vec.begin(), d_vec.end(), 
            [lookup](size_t value)
            {
                return value > lookup;
            });
    if (iterFound == d_vec.end())
        std::cout << "No random value exceeeds " << lookup << '\n';
    else
        std::cout << "The first value exceeding " << lookup << " is at index " << (iterFound - d_vec.begin()) << '\n';
}
