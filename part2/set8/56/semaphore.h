#include <mutex>
#include <condition_variable>
#include <chrono>

class Semaphore
{
    mutable std::mutex d_mutex;
    std::condition_variable d_condition;
    size_t d_nAvailable;

    public:
        Semaphore(size_t nAvailable);

        void wait();        // Blocks until internal variable (d_available) 
                            // equals zero

        void notify();      // one waiting thread is notified
        void notify_all();  // all waiting threads will be notified

        void set(size_t available = 0);
        size_t size() const;
};

inline size_t  Semaphore::size() const
{
    return d_nAvailable;
}