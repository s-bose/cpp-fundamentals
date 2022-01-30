#include "storage/storage.h"

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;


void consumer(string const &file)
{
    Storage *storage = Storage::instance();
    ofstream out{ file };

    while (not storage->isFinished())
    {
        while (storage->empty())
            this_thread::sleep_for(chrono::seconds(1));
        
        out << storage->pop() << '\n';
    }
}


int main(int argc, char **argv)
{
    Storage *storage = Storage::instance();
    thread consum = thread(consumer, "out.txt");

    string line;
    while (getline(cin, line))
        storage->push(line);

    storage->finish();
    consum.join();
}
