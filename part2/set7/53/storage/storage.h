#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <mutex>
#include <queue>
#include <iosfwd>
#include <condition_variable>

class Storage
{
    std::queue<std::string> d_queue;
    std::mutex              d_mutex;
    std::condition_variable d_cond;
    bool                    d_finished;

    static Storage          *s_storage;   // singleton ptr
    static std::once_flag   s_once;

    public:
        static Storage *instance();       // thread-safe singleton instance
        Storage(Storage const &) = delete;
        
        void push(std::string const &str); // queue operations
        std::string pop();

        void finish();


    private:
        Storage();
};


inline Storage::Storage()
:
    d_finished(false)
{}


#endif
