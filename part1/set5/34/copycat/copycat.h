#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

#include <iostream>
#include <cstddef>

extern char **environ;

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();                          // default, copies `environ'
        CopyCat(int argc, char const *const *argv);
        CopyCat(char const *const *data);
        ~CopyCat();
        void printData() const;


    private:
        static size_t nElements(char const *const *data);
        static char **duplicate(size_t count, char const *const *data);
        static char *ntbsCopy(char const *ntbs);
};

inline void CopyCat::printData() const
{
    for (size_t iter = 0; iter != d_size; ++iter)
        std::cout << d_data[iter] << '\n';
}


inline CopyCat::CopyCat()
:
    CopyCat(environ)
{}


#endif
