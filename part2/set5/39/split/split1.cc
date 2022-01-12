#include "split.ih"

Split::Split(int &argc, char ***argv)
: 
    d_vec(0)
{
    for (int idx = 0; idx != argc; ++idx)
    {
        char *tokens = strtok((*argv)[idx], " "); // split by whitespace
        while (tokens)
        {
            d_vec.push_back(tokens);
            tokens = strtok(nullptr, " ");
        }
    }

    *argv = d_vec.data();                         // change argv pointer 
    argc = static_cast<int>(d_vec.size());        // to point to the new NTBS array
}