#include <iostream>
#include <ios>

using namespace std;

int main(int argc, char **argv)
{
    size_t count = stoul(argv[1]);
    // cout.setstate(ios::failbit);
    for (size_t itr = 0; itr != count; ++itr)
    {
        if (cout.good())
            cout << "Nr. of command line arguments " << argc << '\n';
    }
}