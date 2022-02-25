#include "data/data.h"

#include <iterator>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    Data dataVec;

    ifstream in{ "input.txt" }; 

    copy(
        istream_iterator<string>(in),
        istream_iterator<string>(),
        back_inserter(dataVec)
    );

    dataVec.print(cout);
}