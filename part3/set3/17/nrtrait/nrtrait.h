#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_

#include <iosfwd>
#include <string>


template <size_t Nr>
struct NrTrait
{
    static constexpr size_t value = Nr;
    static constexpr bool even = Nr % 2 ? false : true;
    static constexpr bool by3 = Nr % 3 ? false : true;
    static constexpr size_t width = length();

    private:
        static constexpr size_t length();
};

template <size_t Nr>
constexpr size_t NrTrait<Nr>::length()
{
    return std::to_string(Nr).length();
}
        
#endif
