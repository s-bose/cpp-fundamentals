#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <mutex>
#include <queue>
#include <iosfwd>

class Storage
{
    std::queue<std::string> d_queue;
    std::mutex              d_mutex;
    bool                    d_finished;


    public:
        Storage();
        Storage(Storage const &) = delete;
        
        void push(std::string const &str); // queue operations
        bool pop(std::string &line);

        void finish();
        bool finished();
        bool empty();
};


inline Storage::Storage()
:
    d_finished(false)
{}


inline bool Storage::finished()
{
    return d_finished;
}

#endif
