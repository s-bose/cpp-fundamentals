#include "storage/storage.h"

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;


void usage()
{
    cout << "Usage: a.out [file]\n"
            "[file] -- name of the file to write the lines to\n";
}


void consumer(string const &file)
{
    Storage *storage = Storage::instance();
    ofstream out{ file };

    while (not storage->finished())
    {
        while (storage->empty())
            this_thread::sleep_for(chrono::seconds(1));
        
        out << storage->pop() << '\n';
    }
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        usage();
        return 1;
    }

    Storage *storage = Storage::instance();
    thread consum = thread(consumer, argv[1]);

    string line;
    while (getline(cin, line))
        storage->push(line);

    storage->finish();
    consum.join();
}
