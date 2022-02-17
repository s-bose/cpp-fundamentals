#include "dots.ih"

void Dots::operator()()
{
    while (d_start) // print dots every second
    {
        cerr << '.';
        this_thread::sleep_for(seconds(1));
    }
}