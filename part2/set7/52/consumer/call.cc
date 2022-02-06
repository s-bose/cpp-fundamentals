#include "consumer.ih"

void Consumer::operator()(Storage &storage)
{
    ofstream out{d_file};

    while (not storage.finished())
    {
        while (storage.empty())
            this_thread::sleep_for(chrono::seconds(1));

        out << storage.pop() << '\n';
    }
}