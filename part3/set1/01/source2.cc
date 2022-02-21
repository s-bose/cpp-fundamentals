#include "main.ih"

template <typename Type>
Type total(Type *arr, size_t size); // declare total template

void fun2()
{
    PtrUnion pu = { total };        // instantiate total for int
    std::cout << pu.u_void << '\n';
}