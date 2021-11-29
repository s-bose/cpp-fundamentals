#include "main.ih"

int main(int argc, char **argv)
try
{
    Arg const &arg = Arg::instance(argc, argv, "ace:fg:h"); // 1

    Process process{arg}; // 2

    process.run(); // 3
}
catch(...)
{
    return handle(std::current_exception());
}
