#include "copyfile.ih"

void CopyFile::copyfile_3(string const &src, string const &dest)
{
    // copying files using std::copy generic algorithm
    // we pass an istreambuf_iterator to `in's start
    // and a default iterator to signify the end
    // and an ostreambuf_iterator to `out's start

    // this takes up less space and copies char bytes directly
    // hence its faster
    ifstream in{src, ios::binary};
    ofstream out{dest, ios::binary};

    copy
        (
            istreambuf_iterator<char>{in},
            istreambuf_iterator<char>{},
            ostreambuf_iterator<char>{out}
        );
}