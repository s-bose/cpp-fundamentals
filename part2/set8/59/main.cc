#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <future>

using namespace std;

string threadFun()
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "second cerr\n";

    return "end the program";
}

int main()
{
    size_t count = 0;
    future<string> fut = async(threadFun);

    while (true)
    {
        this_thread::sleep_for(chrono::seconds(1));
        cerr << "inspecting: " << ++count << '\n';

        if (fut.wait_for(chrono::seconds(0)) == future_status::ready)
            break;  // poll repeatedly to check if future is ready
    }

    cerr << "done" << '\n';
}