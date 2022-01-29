#include "copyfile.ih"

void CopyFile::copyfile_2(string const &src, string const &dest)
{
    // copying files using getline
    // we read each line from `in' and write them to `out'

    // it has to allocate memory for the string
    // for each line being read
    ifstream in{src};
    ofstream out{dest};

    string temp;
    while (getline(in, temp))
        out << temp << '\n';
}