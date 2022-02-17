#include "semaphore.ih"

size_t Semaphore::size() const
{
    return d_available;
}