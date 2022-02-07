#include "consumer.ih"

void Consumer::operator()(Storage &storage)
{
    ofstream out{d_file};
    do
    {
        string line;
        if (storage.pop(line))
            out << line << '\n';
        
        else
            this_thread::sleep_for(chrono::seconds(1));
    } while (not storage.finished()); // do-while to pop the last item
}                                     // after finish
    