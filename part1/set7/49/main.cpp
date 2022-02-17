#include <iostream>
#include <ios>

using namespace std;

int main(int argc, char **argv)
{

    size_t count = stoul(argv[1]);

    ostream &out = cout;
    out.setstate(ios::failbit);         // raise out's failbit 
    
    for (size_t itr = 0; itr != count; ++itr)
    {
        // if (out.good())              // check for goodbit
            out << "Nr. of command line arguments " << argc << '\n';
    }
}