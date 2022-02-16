#include <utility>

template <typename Fun,
         typename ...Params>
decltype(auto) forwarder(Fun fun, Params &&...params)
{
    return fun(std::forward<Params>(params)...);
}