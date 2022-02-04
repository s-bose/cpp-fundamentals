#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include "storage/storage.h"
#include "consumer/consumer.h"

using namespace std;


void usage()
{
    cout << "Usage: a.out [FILENAME...]\n"
            "[FILENAME...] -- space-separated distinct filenames for each thread\n";
}


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        usage();
        return 1;
    }

    Storage *storageMain = Storage::instance(); // main storage instance
    vector<Consumer> vConsumers;

    for (size_t idx = 1, end = argc; idx != end; ++idx)
        vConsumers.emplace_back(argv[idx]);
    
    vector<thread> vThreads;
    for (auto &consumer: vConsumers)
        vThreads.emplace_back(ref(consumer));

    string line;
    while (getline(cin, line))
        storageMain->push(line);                // produce lines until Ctrl^D

    storageMain->finish();

    for (auto &thr: vThreads)
        thr.join();                             // wait for threads to finish
    
    for (auto const &consumer: vConsumers)
        cout << consumer.filename() << '\t' << consumer.size() << '\n';

}


