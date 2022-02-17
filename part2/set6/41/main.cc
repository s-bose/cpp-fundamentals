#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>


using namespace std;

int main(int argc, char **argv)
{
    sort       // sort ascending
        (
         argv,
         argv + argc,
         less<string>{}
        );

    copy       // display
        (
         argv,
         argv + argc,
         ostream_iterator<string>{cout, "\n"}
        );

    sort       // sort descending
        (
         argv,
         argv + argc,
         greater<string>{}
        );

    copy       // display
        (
         argv,
         argv + argc,
         ostream_iterator<string>{cout, "\n"}
        );
}
