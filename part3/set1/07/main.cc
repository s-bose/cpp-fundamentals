#include <iostream>
#include <set>

using namespace std;

template<typename T>
ostream &operator<<(ostream &out, const set<T> &set) {

    out << '{';

    auto itr = set.cbegin();

    if (itr != set.cend())
        out << *itr++;
    for (; itr != set.cend(); ++itr)
        out << " ," << *itr;

    out << '}';

    return out;
}

int main() {
    set<size_t> const universe = {1, 2, 3, 4};
    set<set<size_t>> const subsets =
            {
                    {1, 2,},
                    {3, 4},
            };

    cout << "Universe: " << universe << '\n'
         << "subsets: " << subsets << '\n';  // WC: no operator<<
    // desired output: Universe: {1, 2, 3, 4}
    //                 subsets: {{1, 2}, {3, 4}}
}
