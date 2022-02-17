#include <iosfwd>

<<<<<<< HEAD
template <typename ToType, typename FromType>
ToType as(FromType const &convObj)
{   
    return static_cast<ToType>(convObj);
=======
template <typename Type1, typename Type2>
Type1 as(Type2 const &convObj)
{
    return static_cast<Type1>(convObj);
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
}