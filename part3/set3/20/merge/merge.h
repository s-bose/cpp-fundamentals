#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include "../../19/chars/chars.h"

template <char oneChar>
class OneChar: public Chars<oneChar>
{};

template <typename First, typename Second>
class Merge{};

template <char... cList1, char... cList2>
class Merge<Chars<cList1...>, Chars<cList2...>>
{
    public:
        typedef Chars<cList1..., cList2...> CP;
};

template <char... cList, char cSingle>
class Merge<Chars<cList...>, OneChar<cSingle>>
{
    public:
        typedef Chars<cList..., cSingle> CP;
};

#endif
