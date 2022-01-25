#include "copyfile.ih"

void CopyFile::copyfile_2(string const &src, string const &dest)
{
    // copying files using getline
    // we read each line from `in' and write them to `out'

    // although this looks simpler, it has to allocate memory
    // to store the lines in std::string each time
    ifstream in{src};
    ofstream out{dest};

    string temp;
    while (getline(in, temp))
        out << temp << '\n';
}