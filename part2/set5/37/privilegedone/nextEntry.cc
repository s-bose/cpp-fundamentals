//#define XERR
#include "privilegedone.ih"

NoEntry PrivilegedOne::nextEntry(istream &in)
{
    NoEntry ret;

    in >> ret.d_name >> ret.d_area >> ret.d_date;

    if (not in)             // no more NoEntries: ensure
        ret.d_name.clear(); // that d_name is empty

    return ret;
}
