#include <iostream>
#include <future>
#include <thread>
#include <numeric>
#include <cstdlib>

using namespace std;

void fill(double *vec, size_t n_row, size_t n_col);
void print(double *vec, size_t n_row, size_t n_col);


double product(double const *lhs, double const *rhs)
{
    return inner_product(lhs, lhs + 5, rhs, 0);
}

int main()
{
    double lhs[4][5];
    double rhsT[6][5];

    future<double> fut[4][6];


    fill(lhs[0], 4, 5);
    fill(rhsT[0], 6, 5);

    print(lhs[0], 4, 5);
    cout << "\n\n";
    print(rhsT[0], 6, 5);

    for (size_t row = 0; row != 4; ++row)
    {
        for (size_t col = 0; col != 6; ++col)
        {
            packaged_task<
                         double(double const *, double const *)
                        > ipReducer{ product };

            fut[row][col] = ipReducer.get_future();
            thread{ move(ipReducer), lhs[row], rhsT[col] }.detach();
        }
    }

    for (size_t row = 0; row != 4; ++row)
    {
        for (size_t col = 0; col != 6; ++col)
            cout << fut[row][col].get() << ' ';
        cout << '\n';
    }
}




void fill(double *vec, size_t n_row, size_t n_col)
{
    for (size_t row = 0; row != n_row; ++row)
        for (size_t col = 0; col != n_col; ++col)
            vec[row * n_col + col]  = rand() % 5;
}

void print(double *vec, size_t n_row, size_t n_col)
{
    for (size_t row = 0; row != n_row; ++row)
    {
        for (size_t col = 0; col != n_col; ++col)
            cout << vec[row * n_col + col] << ' ';
        cout << '\n';
    }
}