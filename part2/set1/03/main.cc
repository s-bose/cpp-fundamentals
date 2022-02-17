#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char *argv[]) 
{
    if(argc != 3) 
        cout << "Error with input arguments" << '\n';

    filesystem::copy_file(argv[1], argv[2]);
                            // get last modified timestamp of first file
    filesystem::file_time_type lastWrite = filesystem::last_write_time(argv[1]);

                            // replace second file's modified timestamp
    filesystem::last_write_time(argv[2], lastWrite);
}
