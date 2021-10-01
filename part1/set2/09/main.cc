#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    size_t num = std::stoul(argv[1]);

    for (size_t itr = 1; itr <= 10; ++itr)
        std::cout << itr << " * " << num << " = " << itr * num << '\n';
    
}
