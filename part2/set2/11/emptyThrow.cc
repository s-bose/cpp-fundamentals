#include "main.ih"

int main()
{
    try
    {
        try
        {
            throw *(new MyException);
        }
        catch(MyException const &exp)
        {
            throw;  // empty throw
        }
        
    }
    catch(MyException const &exp)
    {
        std::cerr << MyException::count() << '\n';
    }
    
}