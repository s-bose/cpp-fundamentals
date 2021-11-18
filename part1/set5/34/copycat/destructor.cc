#include "copycat.ih"

CopyCat::~CopyCat()
{
                        // free memory for each NTBS 
    for (size_t idx = 0; idx != d_size; ++idx)
        delete d_data[idx];
    delete[] d_data;    // free d_data
}