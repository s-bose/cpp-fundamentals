#ifndef INCLUDED_MAIN_
#define INCLUDED_MAIN_

#include <cstddef>
#include <iosfwd>

size_t countChars(std::istream &is);
size_t countWords(std::istream &is);
size_t countLines(std::istream &is);

#endif