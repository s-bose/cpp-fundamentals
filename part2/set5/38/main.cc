#include <fstream>
#include <iostream>
#include "lines/lines.h"
#include <iterator>

using namespace std;

extern std::map<Lines, std::vector<std::string>> VecMap;

int main(int argc, char **argv)
{
    ifstream in{argv[1]};

    if (not in)
    {
        cout << "can't open " << argv[1] << '\n';
        return 1;
    }

    Lines lines1{in};
    // string str;
    // getline(in, str);
    // cout << str << '\n';
    Lines lines2{in};

    // cout << "Lines1's lines:\n";
 
    // for (string const &line : lines1.get()) // lines1's lines
    //     cout << line << '\n';

    // cout << "Lines2's lines:\n";
    // for (string const &line : lines2.get()) // lines2's lines via lines1
    //     cout << line << '\n';
}