#include "quicksort.ih"

void quicksort(string *arr, size_t left, size_t right)
{
    if (left >= right)
        return;
        
    size_t mid = partition(arr, left, right);
    quicksort(arr, left, mid);       // left subarray <= pivot
    quicksort(arr, mid + 1, right);  // right subarray > pivot
}
