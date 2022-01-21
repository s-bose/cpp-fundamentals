#include "copyfile.ih"

void CopyFile::copyfile_5(string const &src, string const &dest)
{
    // copying file using std::filesystem
    // std::filesystem library provides copy_file 
    // to copy from an src to dest

    // this is by far the shortest & simplest implementation
    filesystem::copy_file(src, dest);
}