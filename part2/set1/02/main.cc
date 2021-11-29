#include "numbers/numbers.h"

int main()
{
    Numbers n1({1, 2, 3, 4, 5});
    Numbers n2({1, 2, 3, 4, 5});

    std::cout << (n1 + n2);
    std::cout << (n1 * 3);
    std::cout << (3 * n1);
    std::cout << (Numbers({4, 8, 12}) / 2);
}