#include <iostream>
#include <coroutine>
#include "handler/handler.h"

using namespace std;

Handler handlerCoro()
{
    size_t value = 1;
    while (true)
        co_await value += value;
}

int main()
{
    Handler handler = handlerCoro();

    while (true)
        cout << handler.value() << '\n';
}