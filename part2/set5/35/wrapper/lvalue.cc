#include "wrapper.ih"

std::string &Wrapper::operator=(std::string rhs)
{
    auto tmpPtr = std::shared_ptr<std::string>(new std::string{rhs});
    d_str.swap(tmpPtr);
    return *d_str;
}