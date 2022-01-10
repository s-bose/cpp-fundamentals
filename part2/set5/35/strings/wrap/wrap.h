#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_

#include <memory>
#include <string>
#include <ostream>

class Wrap
{
    std::shared_ptr<std::string> d_str;

    public:
        Wrap() = default;
        Wrap(std::string str);
        Wrap &operator=(std::string str);
        
        friend std::ostream &operator<<(std::ostream &out, Wrap const &wrap);

    private:
        void swap(Wrap &other);
};

inline std::ostream &operator<<(std::ostream &out, Wrap const &wrap)
{
    return out << *wrap.d_str;
}

#endif
