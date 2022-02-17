#include "semaphore.ih"

void Semaphore::notify_all()
{
    lock_guard<mutex> lk(d_mutex);     // get the lock

    if (d_nAvailable++ == 0)
        d_condition.notify_all();      // notify all threads waiting d_condition
}
