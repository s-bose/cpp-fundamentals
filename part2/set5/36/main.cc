#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>

#include "strings/strings.h"

using namespace std;

int main()
{
    set<string> sset;
    ifstream file{ "sample.txt", ios::in };
    string str;
    while (file >> str)
        sset.insert(str);

    Strings s1;
    for (auto const &item : sset)
        s1.push_back(item);

    s1.push_back("abc");
    
    cout << "size" << '\t' << "capacity" << '\n';
    cout << s1.size() << '\t' << s1.capacity() << '\n';


    // vector<string> vec(sset.begin(), sset.end());

    // cout << "size" << '\t' << "capacity" << '\n';
    // cout << vec.size() << '\t' << vec.capacity() << '\n';

    // vec.push_back("hello world");
    // cout << "size" << '\t' << "capacity" << '\n';
    // cout << vec.size() << '\t' << vec.capacity() << '\n';
}