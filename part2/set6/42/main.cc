#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

size_t multiples(std::vector<size_t> const &d_vec);
size_t multiples_1(std::vector<size_t> const &d_vec);


int main()
{
    std::vector<size_t> vs{ 1, 2, 2, 3, 4, 4, 4, 5 };

    std::cout << multiples_1(vs) << " multiples were found\n";
}

size_t multiples(std::vector<size_t> const &d_vec)
{
    size_t lastVal = size_t{} - 1;
    
    return std::accumulate
        (
         d_vec.begin(),
         d_vec.end(),
         size_t{},
         [&lastVal](size_t count, size_t const &value) mutable
         {
            if (lastVal == value)
                ++count;
            lastVal = value;
            
            return count;
         }
        );
}

size_t multiples_1(std::vector<size_t> const &d_vec)
{
    size_t count = 0;
    auto iter = std::adjacent_find(d_vec.begin(), d_vec.end());
    while (iter != d_vec.end())
    {
        ++count;
        iter = std::adjacent_find(++iter, d_vec.end());
    }

    return count;
}

