#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
    if(argc != 3) {
        std::cout << "Error with input arguments";
    }
    //Source: https://en.cppreference.com/w/cpp/filesystem/copy_file
    std::filesystem::copy_file(argv[1],argv[2]);
    std::filesystem::file_time_type lastWrite = std::filesystem::last_write_time(argv[1]);
    std::filesystem::last_write_time(argv[2],lastWrite);
}
