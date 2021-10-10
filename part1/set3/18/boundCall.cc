#include "main.ih"

void boundCall(int argc, char *argv[])
{
                     // extract values using structured binding
    auto [ok, nr, value] = combine(argc, argv);
    
    if (ok)
        std::cout << nr << '\t' << value << '\n';
    else
        usage(argv[0]);
}
