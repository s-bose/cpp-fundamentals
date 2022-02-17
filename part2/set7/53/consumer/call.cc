#include "consumer.ih"

void Consumer::operator()(Storage &storage)
{
    ofstream out{d_file};
    do
    {
        string line;
        if (storage.pop(line))
        {
            out << line << '\n';
            ++d_size;
        }

        else
            this_thread::yield();
    } while (not storage.finished());
}
