#include "storage.ih"

string Storage::pop()
{
    unique_lock<mutex> ul(d_mutex);
    while (d_queue.empty())
    {
        if (d_finished)
            return string{}; // return empty str to signal the end
    
        d_cond.wait(ul);     // wait to acquire lock
    }
    string line = string{ d_queue.front() };
    d_queue.pop();           // retrieve a copy of front & pop
    return line;
}