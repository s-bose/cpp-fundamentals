#include "main.ih"

int main()
{
    try
    {
        throw *(new MyException);
    }
    catch(MyException exp)          // catch exception by value
    {
        std::cerr << MyException::count() << '\n';
    }
    // catch(MyException const &exp) // catch reference
    // {
    //     std::cerr << MyException::count() << '\n';
    // }
}