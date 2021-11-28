#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iostream>
#include <initializer_list>

class Numbers
{
    size_t d_size = 0;
    int *d_nums = 0;

    public:
        explicit Numbers(size_t size);

        Numbers(size_t size, int value);
        Numbers(size_t size, int *values);
        Numbers(std::initializer_list<int> iniList);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);  
        ~Numbers();

        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);
        
        // new unary op
        Numbers &operator+=(Numbers const &other);
        Numbers &operator-=(Numbers const &other);
        Numbers &operator*=(int scalar);
        Numbers &operator/=(int scalar);

        int &operator[](size_t idx);
        int const &operator[](size_t idx) const;

        // members of the public interface, like accessors
        size_t size() const;


    private:
        // support members for this class, if any
        int &element(size_t idx) const;
        void swap(Numbers &other);
};

// friend operators
std::ostream &operator<<(std::ostream &out, Numbers const &num);
std::istream &operator>>(std::istream &in, Numbers &num);
bool operator==(Numbers const &lhs, Numbers const &rhs);
bool operator!=(Numbers const &lhs, Numbers const &rhs);


// new binary op
Numbers operator+(Numbers const &lhs, Numbers const &rhs);
Numbers operator-(Numbers const &lhs, Numbers const &rhs);
Numbers operator*(Numbers const &lhs, int scalar);
Numbers operator*(int scalar, Numbers const &rhs);
Numbers operator/(Numbers const &lhs, int scalar);

// inline definitions
inline int &Numbers::element(size_t idx) const
{
    return d_nums[idx];
}

inline int &Numbers::operator[](size_t idx)
{
    return element(idx);
}

inline int const &Numbers::operator[](size_t idx) const
{
    return element(idx);
}

inline size_t Numbers::size() const
{
    return d_size;
}

#endif
