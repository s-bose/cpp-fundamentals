#include "data.ih"

void Data::print(std::ostream &out)
{
    std::for_each(
        d_data.begin(),
        d_data.end(),
        [&](auto &ptr)
        {
            out << *ptr << '\n';
        });
}
