#include "merge/merge.h"
#include <iostream>

using namespace std;

int main()
{
        cout << 
            Merge<
                Chars<'1', '2', '3'>, 
                Merge<
                    Merge<Chars<'4', '5'>, OneChar<'6'>>::CP,
                    Chars<'A', 'B', 'C', 'D'>>::CP
            >::CP{} << '\n';
}
