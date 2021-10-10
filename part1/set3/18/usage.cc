#include "main.ih"

void usage(std::string progName)
{
    char const options[] = 

    R"r(
    options 

    n           - requested argument number
    args...     - additional arguments
    )r";

    std::cout << "Usage: " << progName << " [OPTION]..." << options << '\n';
}
