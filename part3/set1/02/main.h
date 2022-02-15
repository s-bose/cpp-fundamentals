#include <iosfwd>

template <typename Type1, typename Type2>
Type1 as(Type2 const &convObj)
{
    return static_cast<Type1>(convObj);
}