#include "quicksort.ih"

int compare(string const &first, string const &second)
{
    return lower(first).compare(lower(second));
}
