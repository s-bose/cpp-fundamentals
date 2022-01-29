#ifndef INCLUDED_COPYFILE_
#define INCLUDED_COPYFILE_

#include <iosfwd>

class CopyFile
{
    typedef void (CopyFile::*funPtr)(std::string const &, std::string const &);
    static funPtr d_fun[6];

public:
    void copyFile(size_t idx, std::string const &src, std::string const &dest);

private:
    void copyfile_1(std::string const &src, std::string const &dest);
    void copyfile_2(std::string const &src, std::string const &dest);
    void copyfile_3(std::string const &src, std::string const &dest);
    void copyfile_4(std::string const &src, std::string const &dest);
    void copyfile_5(std::string const &src, std::string const &dest);
    void copyfile_6(std::string const &src, std::string const &dest);
};


#endif
