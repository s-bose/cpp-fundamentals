#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <memory>
#include <string>
#include <iosfwd>
#include <algorithm>

class Data
{

    typedef std::vector <
                         std::shared_ptr<std::string>
                        > DataVector;

    DataVector d_data;

    public:

            // public typedefs for std::back_inserter
        typedef std::string value_type;
        typedef value_type const &const_reference;

        // declare push_back here
        void push_back(const_reference &line);
        void print(std::ostream &out);
};






#endif
