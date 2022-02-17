#include "semaphore.ih"

void Semaphore::notify_all()
{
    unique_lock<mutex> ul(d_mutex);
    if (d_available++ == 0)
        d_cond.notify_all();
}