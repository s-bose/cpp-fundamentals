#include "main.ih"

void fill(double *vec, size_t n_row, size_t n_col)
{
    for (size_t row = 0; row != n_row; ++row)
        for (size_t col = 0; col != n_col; ++col) // fill each cell with
            vec[row * n_col + col] = rand() % 5;  // random int
}