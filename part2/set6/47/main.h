#include <fstream>
#include <string>
#include <iterator>

void copyfile_1(std::string const &src, std::string const &dest)
{
    std::ifstream in{src, std::ios::binary};
    std::ofstream out{dest, std::ios::binary};
    out << in.rdbuf();

    in.close();
    out.close();
}


void copyfile_2(std::string const &src, std::string const &dest)
{
    std::ifstream in{src};
    std::ofstream out{dest};
    
    std::string temp;
    while (std::getline(in, temp))
        out << temp << '\n';
}

void copyfile_3(std::string const &src, std::string const &dest)
{
    std::ifstream in{src, std::ios::binary};
    std::ofstream out{dest, std::ios::binary};

    std::copy
        (
         std::istreambuf_iterator<char>(in),
         std::istreambuf_iterator<char>(),
         std::ostreambuf_iterator<char>(out)
        );

    in.close();
    out.close();
}
