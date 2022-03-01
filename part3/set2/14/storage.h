#ifndef ACPP_STORAGE_H
#define ACPP_STORAGE_H

#include <vector>
#include <memory>

template<typename Data>
class Storage
{
    std::vector<Data *> d_storage = std::vector<Data *>{};

public:
    typedef typename std::vector<Data *>::iterator iterator;
    typedef typename std::vector<Data *>::reverse_iterator reverse_iterator;

    Storage(std::initializer_list<Data> const &list) {
        for (auto item: list)
            d_storage.push_back(new Data{item});
    }

    iterator begin() {
        return d_storage.begin();
    }

    iterator end() {
        return d_storage.end();
    };

    reverse_iterator rbegin() {
        return d_storage.rbegin();
    }

    reverse_iterator rend() {
        return d_storage.rend();
    }

    Data &operator[](size_t idx) {
        return *d_storage[idx];
    }
};

#endif
