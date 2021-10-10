#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        usage(argv[0]);
    else
    {
        structCall(argc, argv);
        boundCall(argc, argv);
    }
}
