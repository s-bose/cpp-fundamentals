#ifndef INCLUDED_SEMAPHORE_
#define INCLUDED_SEMAPHORE_

#include <iosfwd>
#include <mutex>
#include <condition_variable>

class Semaphore
{
    size_t d_available;
    std::mutex d_mutex;
    std::condition_variable d_cond;

    public:
        Semaphore();
        Semaphore(size_t dAvailable);
        size_t size() const;

        void notify();
        void notify_all();
        void wait();
    private:
};
        
#endif
