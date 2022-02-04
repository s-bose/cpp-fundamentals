#include "storage.ih"

void Storage::push(string const &str)
{
    lock_guard<mutex> lg(d_mutex);
    d_queue.push(str);
}
