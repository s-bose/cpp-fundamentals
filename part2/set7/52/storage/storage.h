#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_
#include <queue>
#include <string>
#include <mutex>

class Storage
{   
    std::queue<std::string> d_queue;
    std::mutex              d_mutex;
    bool                    d_finished;

    public:
        Storage();
        Storage(Storage const &other) = delete;

        void push(std::string const &str);
        bool pop(std::string &line);

        bool finished() const;
        bool empty();
        void finish();
        
    private:
};


inline Storage::Storage()
:
    d_finished(false)
{}


inline bool Storage::finished() const
{
    return d_finished;
}


inline void Storage::finish()
{
    d_finished = true;
}

#endif
