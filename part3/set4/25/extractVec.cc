#include "main.ih"

ostream &operator<<(ostream &out, vector<int> const &vec)
{
        // write a ostream extractor just for vector<int>
    copy(
        vec.begin(),
        vec.end(),
        ostream_iterator<int>{out, "\n"});
        
    return out;
}