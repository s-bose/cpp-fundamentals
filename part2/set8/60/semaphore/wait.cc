#include "semaphore.ih"

void Semaphore::wait()
{
    unique_lock<mutex> ul(d_mutex);
    while (d_available == 0)
        d_cond.wait(ul);

    --d_available;
}