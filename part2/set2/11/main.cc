#include "main.ih"

int main()
{
    try
    {
        throw *(new MyException);
    }
    catch(MyException exp)
    {
        std::cerr << MyException::count() << '\n';
    }
    // catch(MyException const &exp)
    // {
    //     std::cerr << MyException::count() << '\n';
    // }
}