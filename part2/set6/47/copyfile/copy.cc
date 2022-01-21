#include "copyfile.ih"

void CopyFile::copyFile(size_t idx, string const &src, string const &dest)
{
   (this->*d_fun[idx])(src, dest);
}
