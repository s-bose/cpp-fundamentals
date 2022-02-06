#include "storage.ih"

string Storage::pop()
{
    lock_guard<mutex> lg(d_mutex);
    
    if (d_queue.empty())
        throw "pop() called on empty queue";
    
    string line = string{ d_queue.front() };
    d_queue.pop();
    return line;
}