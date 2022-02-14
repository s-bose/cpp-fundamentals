#include "main.ih"


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
    cout << "\n\n";
    
    for (size_t row = 0; row != 4; ++row)
    {
        for (size_t col = 0; col != 6; ++col)
        {
            packaged_task<
                         double(double const *, double const *)
                        > ipReducer{ product }; // create a package for handling
                                                // inner products b/w two 1D 
                                                // arrays


                                                // each of the 24 cells is a
                                                // future returned by its 
                                                // package 
            fut[row][col] = ipReducer.get_future();
                                                // detach & run the packaged
                                                // thread 
            thread{ move(ipReducer), lhs[row], rhsT[col] }.detach();
        }
    }

    for (size_t row = 0; row != 4; ++row)
    {
        for (size_t col = 0; col != 6; ++col)
            cout << fut[row][col].get() << ' '; // eventually, get the future
        cout << '\n';
    }
}


