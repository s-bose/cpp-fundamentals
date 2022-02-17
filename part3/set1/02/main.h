#include <iosfwd>

template <typename ToType, typename FromType>
ToType as(FromType const &convObj)
{   
    return static_cast<ToType>(convObj);
}