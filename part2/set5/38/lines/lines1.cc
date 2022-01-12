#include "lines.ih"

Lines::Lines(std::istream &in)
{
    std::vector<std::string> curr;
    std::string line;
    while (std::getline(in, line) and not line.empty())
    {
        std::cout << line << '\n';
        curr.push_back(line);
    }

    // for (auto item: curr)
        // std::cout << item << ' ';
    // std::cout << curr.size() << '\n';
    VecMap.insert(std::pair<Lines, std::vector<std::string>>(*this, curr));
    cout << "returned vector\n";
    auto vec = VecMap.at(*this);
    for (auto item: vec)
        std::cout << item << ' ';
    cout << endl;
}
