#include "copyfile.ih"

void CopyFile::copyfile_1(string const &src, string const &dest)
{
    // copying files using streambuffer
    // we redirect the streambuffer of istream into the ostream

    // simple and intuitive interface 
    ifstream in{src, ios::binary};
    ofstream out{dest, ios::binary};
    out << in.rdbuf();
}