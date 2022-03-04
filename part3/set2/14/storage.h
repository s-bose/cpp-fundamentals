#ifndef ACPP_STORAGE_H
#define ACPP_STORAGE_H

#include <vector>
#include <memory>

template<typename Data>
class Storage
{
    std::vector<Data *> d_storage;

    public:
        typedef 
        typename std::vector<Data *>::iterator iterator;
        
        typedef 
        typename std::vector<Data *>::reverse_iterator reverse_iterator;

        Storage(std::initializer_list<Data> const &list);

        iterator begin();
        iterator end();

        reverse_iterator rbegin();
        reverse_iterator rend();

        Data &operator[](size_t idx);
};


template <typename Data>
inline Storage<Data>::Storage(std::initializer_list<Data> const &list)
{
    for (auto item : list)
        d_storage.push_back(new Data{item});
}

template <typename Data>
inline Storage<Data>::iterator Storage<Data>::begin()
{
    return d_storage.begin();
}

template <typename Data>
inline Storage<Data>::iterator Storage<Data>::end()
{
    return d_storage.end();
}

template <typename Data>
inline Storage<Data>::reverse_iterator Storage<Data>::rbegin()
{
    return d_storage.rbegin();
}

template <typename Data>
inline Storage<Data>::reverse_iterator Storage<Data>::rend()
{
    return d_storage.rend();
}

template <typename Data>
Data &Storage<Data>::operator[](size_t idx)
{
    return *d_storage[idx];
}

#endif
