#include "main.ih"

void print(double *vec, size_t n_row, size_t n_col)
{
    for (size_t row = 0; row != n_row; ++row)
    {
        for (size_t col = 0; col != n_col; ++col)
            cout << vec[row * n_col + col] << ' ';
        cout << '\n';
    }
}