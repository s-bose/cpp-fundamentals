#include "copyfile.ih"

CopyFile::funPtr CopyFile::d_fun[6]
= {
    &CopyFile::copyfile_1,
    &CopyFile::copyfile_2,
    &CopyFile::copyfile_3,
    &CopyFile::copyfile_4,
    &CopyFile::copyfile_5,
    &CopyFile::copyfile_6
};