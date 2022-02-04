#include "storage.ih"

string Storage::pop()
{
    lock_guard<mutex> lg(d_mutex);
    string line = string{ d_queue.front() };
    d_queue.pop();
    return line;
}
