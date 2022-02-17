#include "quicksort.ih"

size_t partition(string *arr, size_t left, size_t right)
{
    size_t pivot = left;
    while (left < right)
    {                               // case-insensitive comparison
                                    // if element > pivot, move right forward
        if (compare(arr[left], arr[pivot]) > 0)
            swap(arr[--right], arr[left]);
        else
        {                           // else put it before pivot
            swap(arr[left], arr[pivot]);
            pivot = left;
            ++left;                 // iterate left to right
        }
    }
    return pivot;
}
