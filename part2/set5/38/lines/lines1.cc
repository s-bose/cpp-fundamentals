#include "lines.ih"

Lines::Lines(std::istream &in)
{
    std::vector<std::string> curr;
    std::string line;
    while (std::getline(in, line) and not line.empty())
        curr.push_back(line);

    VecMap.insert({ this, curr });
}
