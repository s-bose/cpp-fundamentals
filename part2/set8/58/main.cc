#include "main.ih"


int main()
{
    int ia[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    size_t size = sizeof(ia) / sizeof(int);

    printArray(ia, size);
    qsort(ia, ia + size);
    printArray(ia, size);
}