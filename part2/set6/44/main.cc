#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main()
{
    struct Deleter
    {
        size_t d_size;
         void operator()(string **pstr) const
        {
            for (size_t idx = 0; idx != d_size; ++idx)
                delete pstr[idx];
            delete[] pstr;
        }
    };

    string **newArr = new string*[10];
    for (size_t idx = 0; idx != 10; ++idx)
        newArr[idx] = new string{};

    unique_ptr<string*, Deleter> arr{newArr, Deleter{ 10 }};    
}

