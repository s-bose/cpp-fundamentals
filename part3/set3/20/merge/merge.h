#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include "../../19/chars/chars.h"

    // alias OneChar as a Chars<ch> specialization
template <char oneChar>
using OneChar = Chars<oneChar>;


    // empty Merge base
template <typename First, typename Second>
class Merge{};


    // Merge specialized for two Chars<...> types
template <char... cList1, char... cList2>
class Merge<Chars<cList1...>, Chars<cList2...>>
{
    public:
                // unfold & concat both char lists
                // into new Chars<> type as `CP'
        typedef Chars<cList1..., cList2...> CP;
};


    // Merge specialized for Chars<...> & OneChar
template <char... cList, char cSingle>
class Merge<Chars<cList...>, OneChar<cSingle>>
{
    public: 
        typedef Chars<cList..., cSingle> CP;
};

#endif
