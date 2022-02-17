#include "main.ih"

int main()
{
    forwarder(fun, 1, 3); // should show 'fun(1, 3)' to cout

<<<<<<< HEAD
                          // fun2 expects two rvalue references
=======
    // fun2 expects two rvalue references
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
    forwarder(fun2, Demo{1, "john", 3.14}, Demo{2, "doe", 4.2});

    forwarder(plus<string>(), "hello ", "world");

    vector<int> first;
<<<<<<< HEAD
    forwarder(            // receives a lambda function
        [](vector<int> &first, vector<int> const &second,
           vector<int> const &third)
        {
                          // modify first's elements using
                          // second's and third's elements
=======
    forwarder( // receives a lambda function
        [](vector<int> &first, vector<int> const &second,
           vector<int> const &third)
        {
            // modify first's elements using second's and third's
            // elements
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
        },
        first, vector<int>{}, vector<int>{});

    int x = 0;
    forwarder(incrementer, x, x, x);
<<<<<<< HEAD
    cout << x << '\n';   // should show '3'
=======
    cout << x << '\n'; // should show '3'
>>>>>>> 19874cd7d77a4c2fe2b00b8bc560c0153226ad3d
}