#ifndef INCLUDED_DOTS_
#define INCLUDED_DOTS_

#include <iosfwd>

class Dots
{
    bool d_start;

    public:
        Dots(bool start);
        void operator()();
        void stop();
};

inline Dots::Dots(bool start)
:
    d_start(start)
{}

inline void Dots::stop()
{
    d_start = false;
}

#endif
