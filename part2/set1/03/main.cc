#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) 
{
    if(argc != 3) 
        std::cout << "Error with input arguments" << '\n';

    std::filesystem::copy_file(argv[1], argv[2]);
                                        // get last modified timestamp of first file
    std::filesystem::file_time_type lastWrite = std::filesystem::last_write_time(argv[1]);

                                        // replace second file's modified timestamp
    std::filesystem::last_write_time(argv[2], lastWrite);
}
