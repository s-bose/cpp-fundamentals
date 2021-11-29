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
            throw;
        }
        
    }
    catch(MyException const &exp)
    {
        std::cerr << MyException::count() << '\n';
    }
    
}