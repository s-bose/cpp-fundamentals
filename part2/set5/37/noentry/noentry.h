#ifndef INCLUDED_NOENTRY_
#define INCLUDED_NOENTRY_

#include <string>

class NoEntry
{
    friend class PrivilegedOne;
    friend class PrivilegedTwo;

    std::string d_name;
    size_t d_area = 0;
    size_t d_date = 0;

public:
    std::string const &name() const;
    size_t area() const;
    size_t date() const;

private:
    NoEntry(NoEntry const &other) = default;
    NoEntry() = default;
    NoEntry(std::string const &name, size_t area, size_t date);
};

#endif