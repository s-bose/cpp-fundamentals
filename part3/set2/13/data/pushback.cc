#include "data.ih"

void Data::push_back(Data::const_reference line)
{
        // provide push_back using `const_reference'
        // for back_inserter
    d_data.push_back(std::make_shared<Data::value_type>(line));
}