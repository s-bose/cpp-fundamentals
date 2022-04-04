#include "main.ih"


int main(int argc, char **argv)
{
    Scanner scanner;
    set<string> sset;

   

    if (argc == 1)           // for no arg, process std::cin
        scanner.scanWords(sset);
    else                      // for filename args, switch to their
    {                         // stream and process each
        for (size_t idx = 1, end = argc; idx != end; ++idx)
        {
            scanner.switchIstream(argv[idx]);
            scanner.scanWords(sset);
        }
    }


    copy(           // print sorted set of words
        sset.begin(),
        sset.end(),
        ostream_iterator<string>{cout, " "});
}