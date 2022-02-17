#ifndef INCLUDED_QUICKSORT_
#define INCLUDED_QUICKSORT_

#include <cstddef>
#include <iosfwd>

int compare(std::string const &first, std::string const &second);
std::string lower(std::string const &str);

void quicksort(std::string *arr, size_t left, size_t right);
size_t partition(std::string *arr, size_t left, size_t right);

#endif
