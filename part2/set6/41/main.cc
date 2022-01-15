#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

int main(int argc, char **argv)
{
    std::sort
        (
        argv,
        argv + argc,
        std::less<std::string>{}
        );

    std::copy
        (
         argv,
         argv + argc,
         std::ostream_iterator<std::string>{std::cout, "\n"}
        );

    std::sort
        (
         argv,
         argv + argc,
         std::greater<std::string>{}
        );

    std::copy
        (
         argv,
         argv + argc,
         std::ostream_iterator<std::string>{std::cout, "\n"}
        );
}
