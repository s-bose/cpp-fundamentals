#include "storage/storage.h"
#include "consumer/consumer.h"

#include <iostream>
#include <string>
#include <thread>


using namespace std;


void usage()
{
    cout << "Usage: a.out [file]\n"
            "[file] -- name of the file to write the lines to\n";
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        usage();
        return 1;
    }

    Storage storage;
    Consumer consumer(argv[1]);
                         // use main storage reference
    thread consum = thread(consumer, ref(storage));

    string line;
    while (getline(cin, line))
        storage.push(line);

    storage.finish();   // signal finish
    consum.join();
}
