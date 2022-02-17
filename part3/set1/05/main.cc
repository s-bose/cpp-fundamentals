#include "enums.h"
#include "storage/storage.h"
#include <iostream>

using namespace std;

int main()
{
    Storage storage{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15};

    cout << storage[Icmp::ID] << '\n'
         << storage[TcpUdp::PROTOCOL] << '\n'
         << storage[12] << '\n'
        //  << storage['a'] << '\n'
         << storage[12.5] << '\n';
}