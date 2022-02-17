//#define XERR
#include "privilegedone.ih"

PrivilegedOne::PrivilegedOne(string const &fname)
{
    ifstream in{fname};

    while (true)
    {
        NoEntry next = nextEntry(in);

        if (next.name().empty())
            break;

            // construct a unique_ptr from `next' with
            // deleterNoEntry deleter function 
        d_noEntry.push_back
                    (
                     unique_ptr<NoEntry, void (*)(NoEntry *)>
                     {
                        &next, &deleterNoEntry
                     }
                    );
    }
}
