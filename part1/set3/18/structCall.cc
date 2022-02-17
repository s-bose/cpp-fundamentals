#include "main.ih"

bool structCall(int argc, char *argv[])
{
    ReturnValues ret = combine(argc, argv);

    if (not ret.ok)
        usage(argv[0]);
    else
    {
        std::cout << ret.nr << '\t' << ret.value << '\n';
        return true;
    }
    return false;
}


