#include "main.ih"

void printArray(int *arr, size_t size)
{
    copy(arr, arr + size, 
        ostream_iterator<int>{cout, " "});
    
    cout << '\n';
}