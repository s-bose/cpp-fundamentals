#ifndef INCLUDED_CONSUMER_
#define INCLUDED_CONSUMER_
#include <string>

class Consumer
{
    size_t      d_size; // linecount
    std::string d_file; // filename

public:
    Consumer(std::string const &file);
    size_t size() const;
    std::string const &filename() const;
    void operator()();
};


inline Consumer::Consumer(std::string const &file)
:
    d_size(0),
    d_file(file)
{}


inline size_t Consumer::size() const
{
    return d_size;
}

inline std::string const &Consumer::filename() const
{
    return d_file;
}


#endif
