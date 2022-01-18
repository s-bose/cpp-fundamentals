#include "privilegedone.ih"

void PrivilegedOne::deleterNoEntry(NoEntry *np)
{
    delete np;  // call NoEntry destructor from friend class context
}