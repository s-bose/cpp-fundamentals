#include "main.ih"

int main()
{
    forwarder(fun, 1, 3); // should show 'fun(1, 3)' to cout

    // fun2 expects two rvalue references
    forwarder(fun2, Demo{1, "john", 3.14}, Demo{2, "doe", 4.2});

    forwarder(plus<string>(), "hello ", "world");

    vector<int> first;
    forwarder( // receives a lambda function
        [](vector<int> &first, vector<int> const &second,
           vector<int> const &third)
        {
            // modify first's elements using second's and third's
            // elements
        },
        first, vector<int>{}, vector<int>{});

    int x = 0;
    forwarder(incrementer, x, x, x);
    cout << x << '\n'; // should show '3'
}