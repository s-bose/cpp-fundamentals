#include "storage.ih"

void Storage::push(string const &str)
{
    unique_lock<mutex> lg(d_mutex); // lock access
    d_queue.push(str);              // push new str to queue
    d_cond.notify_all();            // notify consumers
}