#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_


    // Insertable expects Container-like policy class template
template < template <typename> class Container, typename Data >
struct Insertable: public Container<Data>
{

        // public inheritance, Insertable IS-A Container<Data> type

        // use Base-default, copy, move ctor 
    Insertable() = default;
    Insertable(Insertable<Container, Data> const &) = default;

    Insertable(Container<Data> const &);
    Insertable(Data const &data);
};

template <template <typename> class Container, typename Data>
inline Insertable<Container, Data>::Insertable(Container<Data> const &container)
: 
    Container<Data>(container) // initialized by an existing object of Container
{}

template <template <typename> class Container, typename Data>
inline Insertable<Container, Data>::Insertable(Data const &data)
: 
    Container<Data>(data)     // by a single data element
{}


#endif
