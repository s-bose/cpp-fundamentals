#include "storage.ih"

void Storage::finish()
{
    unique_lock<mutex> ul(d_mutex);
    d_finished = true;
    d_cond.notify_all(); // upon finish notify all threads
}
