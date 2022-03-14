#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_

#include <cstddef>
#include <cmath>

template <size_t Nr>
struct NrTrait
{
                // evaluate expr compile-time
    static constexpr size_t value = Nr;
    static constexpr bool even = Nr % 2 == 0;
    static constexpr bool by3 = Nr % 3 == 0;
    
    static constexpr size_t width = Nr == 0 ? 1 : NrTrait<Nr>::getWidth();
 
  private:
    consteval static size_t getWidth();
};

template <size_t Nr> // compile-time eval width of non-zero Nr
consteval size_t NrTrait<Nr>::getWidth()
{
  size_t size = 0;
  for (size_t num = value; num != 0; num /= 10, ++size);

  return size;
} 


#endif
