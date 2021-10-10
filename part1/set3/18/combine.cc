#include "main.ih"

ReturnValues combine(int argc, char *argv[])
{
    size_t nr = std::stoul(argv[1]);
                            // nr should be atleast 1, atmost argc
    bool ok = nr && (static_cast<int>(nr) <= argc);

    std::string value = ok ? argv[nr - 1] : "";

    return ReturnValues{ ok, nr, value };
}
