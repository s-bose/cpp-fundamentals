#include "semaphore.ih"

void Semaphore::notify()
{
    lock_guard<mutex> lk(d_mutex);     // get the lock

    if (d_nAvailable++ == 0)
        d_condition.notify_one();      // notify just one thread
}
