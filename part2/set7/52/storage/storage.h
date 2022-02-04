#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_
#include <queue>
#include <string>
#include <mutex>

class Storage
{
    static std::once_flag   s_once;
    static Storage          *s_storage; // singleton ptr
    
    std::queue<std::string> d_queue;
    std::mutex              d_mutex;
    bool                    d_finished;

    public:
        static Storage *instance();
        Storage(Storage const &other) = delete;

        void push(std::string const &str);
        std::string pop();
        bool finished() const;
        bool empty() const;
        void finish();
        
    private:
        Storage();
};


inline Storage::Storage()
:
    d_finished(false)
{}


inline bool Storage::finished() const
{
    return d_finished;
}


inline bool Storage::empty() const
{
    return d_queue.empty();
} 


inline void Storage::finish()
{
    d_finished = true;
}

#endif
