#include "main.ih"

int main()
{
    Base **bptr = derivedFactory(10);

    for (size_t iter = 0; iter != 10; ++iter)
        delete bptr[iter];  // call Derived's polymorphic destructor
    delete[] bptr;
}