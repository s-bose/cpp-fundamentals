#include "line.ih"

string Line::next()
{
    string str; // extract next substring from stream
    ss >> str;
    return str;
}