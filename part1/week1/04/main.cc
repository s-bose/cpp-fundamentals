#include <iostream>

namespace                       // anonymous namespace above main
{
    const char hello[] =        // RSL does not require escaping backslashes
    R"reg(                              
    ^\s+Encryption key:(\w+)
    ^\s+Quality=(\d+)
    ^\s+E?SSID:"([[:print:]]+)"
    ^\s+ssid="([[:print:]]+)"
    )reg";
}

int main() 
{
    std::cout << hello << '\n';
}
