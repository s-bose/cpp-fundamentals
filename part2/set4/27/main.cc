#include "main.ih"

int main()
{
    Handler::errorPrefix(Base::Msg::WARNING);
    cerr << "something happened" << '\n';
}