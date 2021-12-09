//#define XERR
#include "maxfour.ih"

MaxFour::MaxFour()
try :
    d_array(0)
{
    d_array = new double[5];    // allocate memory for d_array

    if (d_count + 1 > 4) // only 4 instances
        throw "max. number of objects reached.";

    ++d_count;
}
catch(...)
{
    delete[] d_array;               // deletes allocated memory of
                                    // incomplete obj
}
