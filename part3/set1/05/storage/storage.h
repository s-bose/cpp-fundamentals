#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>
#include <cstddef>

class Storage
{

    std::vector<size_t> d_data;

    public:
        Storage() = default;
        Storage(std::initializer_list<size_t> const &list);

                // make op[] template
        template <typename IndexType>
        size_t operator[](IndexType idx) const;

        template <typename IndexType>
        size_t &operator[](IndexType idx);
};

inline Storage::Storage(std::initializer_list<size_t> const &list)
:
    d_data(list)
{}

template <typename IndexType>
size_t Storage::operator[](IndexType idx) const
{
        // cast IndexType to size_t
    return d_data[ static_cast<size_t>(idx) ];
}

template <typename IndexType>
size_t &Storage::operator[](IndexType idx)
{
    return d_data[ static_cast<size_t>(idx) ];
}

#endif
