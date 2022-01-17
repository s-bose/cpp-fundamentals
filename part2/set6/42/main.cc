#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

size_t multiples(std::vector<size_t> const &d_vec);

int main()
{
    std::vector<size_t> vs{};

    std::cout << multiples(vs) << " multiples were found\n";
}

size_t multiples(std::vector<size_t> const &d_vec)
{
    std::map<size_t, size_t> nmap;
    std::for_each(
            d_vec.begin(), 
            d_vec.end(), 
            [&nmap](size_t const &key) mutable 
            { 
             ++nmap[key]; 
            } 
        );

    return std::count_if(
            nmap.begin(), 
            nmap.end(),
            [](auto const &item)
             {
                return item.second > 1;
             }
        );
    }


