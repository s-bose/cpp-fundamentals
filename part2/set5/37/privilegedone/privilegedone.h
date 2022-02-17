#ifndef INCLUDED_PRIVILEGEDONE_
#define INCLUDED_PRIVILEGEDONE_

#include <iosfwd>
#include <vector>
#include <memory>

#include "../noentry/noentry.h"

class PrivilegedOne
{
        // unique_ptr with custom deleter function for NoEntry
    std::vector< std::unique_ptr<NoEntry, void (*)(NoEntry *)> > d_noEntry;
public:

    PrivilegedOne(std::string const &fname);

private:
    NoEntry nextEntry(std::istream &in);        // empty name: all were read
    static void deleterNoEntry(NoEntry *np);    // deleter for NoEntry
};

#endif