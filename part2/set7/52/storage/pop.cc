#include "storage.ih"

string Storage::pop()
{
    if (d_queue.empty())
        throw "pop() called on empty queue";
    lock_guard<mutex> lg(d_mutex);
    string line = string{ d_queue.front() };
    d_queue.pop();
    return line;
}
