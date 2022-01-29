#include "copyfile.ih"

void CopyFile::copyfile_4(string const &src, string const &dest)
{
    // copying file using custom buffer
    // we create a char buffer array to hold the bytes in `in'
    // and then write the buffer to `out'

    // it needs to allocate additional memory to create buffer space
    // and a loop to repeatedly read & write
    // has low memory overhead
    
    ifstream in{src, ios::binary};
    ofstream out{dest, ios::binary};

    size_t const size = 1024;
    char *buffer = new char[size];
    
    while (!in.eof())
    {
        in.read(buffer, sizeof(buffer));
        if (in.good())
            out.write(buffer, sizeof(buffer));
    } 

    delete[] buffer;
}