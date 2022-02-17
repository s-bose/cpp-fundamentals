#include "storage.ih"

bool Storage::pop(string &line)
{
    lock_guard<mutex> lg(d_mutex);
    if (d_queue.empty())
        return false; // return & release lock if empty

    line = move(d_queue.front());
    d_queue.pop();
    return true;      // save front to line & return normally
}