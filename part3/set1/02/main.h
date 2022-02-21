#include <iosfwd>
#include <utility>

template <typename ToType, 
         typename FromType>
ToType as(FromType &&convObj)
{
    return static_cast<ToType>(std::forward(convObj));
}