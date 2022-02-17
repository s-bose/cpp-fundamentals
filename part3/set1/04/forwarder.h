#include <utility>

template <typename Fun,
         typename ...Params> // perfect forwarding
decltype(auto) forwarder(Fun fun, Params &&...params)
{   
                             // forward the received params
                             // to fun() 
    return fun(std::forward<Params>(params)...);
}