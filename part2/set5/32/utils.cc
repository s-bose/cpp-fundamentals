#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <iostream>

// sort words in std::cin and print in order
namespace utils
{
    void sort_vec()
    {
        std::vector<std::string> vec;
        std::copy(
                std::istream_iterator<std::string>(std::cin),
                std::istream_iterator<std::string>(),
                vec.begin()
                );

        std::sort(vec.begin(), vec.end());
        std::copy(
                vec.begin(),
                vec.end(),
                std::ostream_iterator<std::string>(std::cout, "\n")
                );
    }


    void sort_vec_alt()
    {
        std::vector<std::string> vec;
        std::string word;
        while (std::cin >> word)
            vec.push_bacK(word);

        std::sort(vec.begin(), vec.end());
        std::copy(
                vec.begin(),
                vec.end(),
                std::ostream_iterator<std::string>(std::cout, "\n")
                );
    }

    
    void sort_set()
    {
        std::set<std::string> sset;
        std::string word;
        while (std::cin >> word)
            sset.insert(word);
    
        for (
                std::set<std::string>::const_iterator it = sset.begin();
                it != sset.end();
                ++it
            )
                std::cout << *it << '\n';
    }


    void sort_set_alt()
    {
        std::set<std::string> sset;
        std::copy(
                std::istream_iterator<std::string>(std::cin),
                std::istream_iterator<std::string>(),
                sset.begin()
                );

        std::copy(
                sset.begin(),
                sset.end(),
                std::ostream_iterator<std::string>(std::cout, "\n")
                );
    }

};
