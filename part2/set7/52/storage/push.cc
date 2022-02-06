#include "storage.ih"

void Storage::push(string const &str)
{
    lock_guard<mutex> lg(d_mutex);
    
    if (d_finished)
        throw "push() called after finished()";
    
    d_queue.push(str);
}
