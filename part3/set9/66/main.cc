#include "main.ih"


int main(int argc, char **argv)
try
{
    Parser parser(argc > 1);

    return parser.parse();
}
catch (...)
{
    cerr << "Terminating\n";
    return 1;
}

