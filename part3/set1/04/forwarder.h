#include <utility>

template <typename Fun,
<<<<<<< HEAD
         typename ...Params> // perfect forwarding
decltype(auto) forwarder(Fun fun, Params &&...params)
{   
                             // forward the received params
                             // to fun() 
=======
         typename ...Params>
decltype(auto) forwarder(Fun fun, Params &&...params)
{
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
    return fun(std::forward<Params>(params)...);
}