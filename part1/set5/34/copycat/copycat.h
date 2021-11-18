#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

#include <cstddef>

extern char **environ;

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();
        CopyCat(int argc, char **argv);
        CopyCat(char **data);
        ~CopyCat();
                            // public getter
        char const *const *const data() const;

    private:
        static size_t nElements(char const *ntbs);
        static size_t nElements(char const *const *data);
        static char **duplicate(char const *const *data);
        static char *ntbsCopy(char const *ntbs);
};

#endif
