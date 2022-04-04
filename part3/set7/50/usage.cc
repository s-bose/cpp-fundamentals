#include "main.ih"

namespace 
{
    char const info[] = R"_( [options] args
Where:
   [options] - optional arguments (short options between parentheses):
      --help (-h)    - provide this help
      --version (-v) - show version information and terminate
   args   - explain additional arguments.
)_";

} // anonymous namespace ends


void usage(std::string const &progname)
{
    cout << "\n" <<
    progname << " by " << Icmake::author << "\n" <<
    progname << " V" << Icmake::version << " " << Icmake::years << "\n"
    "\n"
    "Usage: " << progname << info << '\n';
}
