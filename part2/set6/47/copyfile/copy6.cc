#include "copyfile.ih"

void CopyFile::copyfile_6(string const &src, string const &dest)
{
    // copying file using get and put

    // copies one char at a time from in to out

    // loops repeatedly for each char being read
    // more lines of code

    ifstream in{src};
    ofstream out{dest};

    while (!in.eof())
    {
        char c;
        in.get(c);
        if (in.good())
            out.put(c);
    }
}