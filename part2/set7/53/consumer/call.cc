#include "consumer.ih"

void Consumer::operator()()
{
    ofstream out{ d_file };
    Storage *storage = Storage::instance();

    string line;
    while (!(line = storage->pop()).empty())
    {
        ++d_size;
        out << line << '\n';
    }   
}