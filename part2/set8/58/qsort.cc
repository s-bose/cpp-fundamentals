#include "main.ih"

void qsort(int *beg, int *end)
{
    if (end - beg <= 1)
        return;

    int lhs = *beg;
    int *mid = partition(beg + 1, end,
                         [&](int arg)
                         {
                             return arg < lhs;
                         });

    swap(*beg, *(mid - 1));

    qsort(beg, mid);                // sort first half
    auto fut = async(launch::async, // run other half async
                     [&]()
                     {
                         qsort(mid, end);
                     });

    fut.wait();                     // wait for the other half
}
