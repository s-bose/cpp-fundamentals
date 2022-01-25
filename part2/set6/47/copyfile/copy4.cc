#include "copyfile.ih"

void CopyFile::copyfile_4(string const &src, string const &dest)
{
    // copying file using custom buffer
    // we create a char buffer array to hold the bytes in `in'
    // and then write the buffer to `out'

    // this process is similar to std::copy with char streambuf_iterator
    // but it needs to allocate additional memory to create buffer space
    ifstream in{src, ios::binary};
    ofstream out{dest, ios::binary};

    in.seekg(0, ios::end);
    istream::pos_type size = in.tellg();
    in.seekg(0, ios::beg);

    char *buffer = new char[size];
    in.read(buffer, size * sizeof(char));
    out.write(buffer, size * sizeof(char));

    delete[] buffer;
}