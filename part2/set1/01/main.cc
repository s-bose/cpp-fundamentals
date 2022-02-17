#include "numbers/numbers.h"

int main()
{
  
    Numbers n3({1, 2, 3, 4, 5});
    // n3.view();

    // Numbers n1 = std::move(n3);
    // n1.view();

    // std::cout << n1[0] << ' ' << n1[1] << '\n';

    // n1[0] = 99;

    // for (size_t idx = 0; idx != 5; ++idx)
    //     std::cout << n1[idx] <<  ' ';

    std::cout << n3;

    Numbers n1 = n3;
    Numbers n2(10, 3);
    std::cout << std::boolalpha << (n1 != n2) << '\n';
}