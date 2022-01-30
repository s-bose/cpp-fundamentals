#include "storage.ih"

void Storage::push(string const &str)
{
    if (d_finished)
        throw "queue processing has been finished\n";
    lock_guard<mutex> lg(d_mutex);
    d_queue.push(str);
}
