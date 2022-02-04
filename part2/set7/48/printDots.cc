#include "main.ih"

void printDots()
{
    while (true) // print dots every second
    {
        cerr << '.';
        this_thread::sleep_for(seconds(1));
    }
}