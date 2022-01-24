#include "main.ih"

int main()
{
    vector<unsigned> vc(10);
    iota(vc.begin(), vc.end(), UEven{ 0 }); // fills vector with even unsigned
    copy(vc.begin(), vc.end(), ostream_iterator<unsigned>(cout, " "));
    cout << '\n';
}