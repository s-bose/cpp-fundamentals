#include "main.ih"

void fun1()
{
    PtrUnion pu = { total }; // instantiate total<int> by taking
                             // its address
    std::cout << pu.u_void << '\n';
}