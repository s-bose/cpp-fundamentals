#include "main.ih"

int handle(std::exception_ptr ptr)
{
    try
    {
        if (ptr)
            std::rethrow_exception(ptr);
    }
    catch(int const usage)
    {
        return usage;
    }
    catch (std::string const &fileExp)
    {
        std::cerr << fileExp << '\n';
        return 1;
    }
    catch (std::exception const &exp)
    {
        std::cerr << exp.what() << '\n';
        return 1;
    }
    return 0;
}