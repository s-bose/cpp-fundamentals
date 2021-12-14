#include "main.ih"

void printStrings(initializer_list<string>strList)
{
        // function expecing std::string values
    for (auto iter = strList.begin(); iter != strList.end(); ++iter)
        cout << *iter << '\n';
}

