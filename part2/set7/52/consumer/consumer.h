#ifndef INCLUDED_CONSUMER_
#define INCLUDED_CONSUMER_

#include <string>
#include "../storage/storage.h"

class Consumer
{
    std::string d_file;

    public:
        Consumer(std::string const &file);
        void operator()(Storage &storage);
    private:
};

inline Consumer::Consumer(std::string const &file)
:
    d_file(file)
{}
        
#endif
