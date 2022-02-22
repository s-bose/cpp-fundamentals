#ifndef INCLUDED_INSTANCECTR_
#define INCLUDED_INSTANCECTR_

#include <iosfwd>

class InstanceCtr
{
    static size_t d_count;
    static size_t d_actual;

    public:
        InstanceCtr();
        ~InstanceCtr();

        static size_t gCount();
        static size_t gActual();
};
        
inline InstanceCtr::InstanceCtr()
{
    ++d_count;
    ++d_actual;
}

inline InstanceCtr::~InstanceCtr()
{
    --d_actual;
}

inline size_t InstanceCtr::gCount()
{
    return d_count;
}

inline size_t InstanceCtr::gActual()
{
    return d_actual;
}

#endif
