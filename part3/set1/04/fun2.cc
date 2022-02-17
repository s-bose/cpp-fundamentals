#include "main.ih"

void fun2(Demo &&dem1, Demo &&dem2)
{
    cout << "fun2() called with args: dem1: \n" << dem1 << "\n"
            "and dem2: \n" << dem2 << '\n';
}