#include "storage.ih"

void Storage::push(string const &str)
{
    lock_guard<mutex> lg(d_mutex); // lock access

    if (d_finished)
        throw "push() called after finished";
    d_queue.push(str);              // push new str to queue
}