#include "lines.ih"

Lines::Lines(istream &in)
{
    vector<string> curr;
    string line;
    while (getline(in, line) and not line.empty())
        curr.push_back(line);

    VecMap.insert({ this, curr });
}
