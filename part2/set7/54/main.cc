#include "main.ih"


int main()
{
    vector<thread> threads;
    for (size_t ix = 0; ix != 100; ++ix)
        threads.push_back(thread(f2, ix));

    for (auto &thread : threads)
        thread.join();
}


void f1(int ix)
{
    TSosWrap{std::cout} << ' ' << ix << "a: one "
                        << "two "
                        << "three ";
}


void f2(int ix)
{
    TSosWrap tout{std::cout};
                                   // acquire lock
    unique_lock<shared_mutex> ul(TSosWrap::d_mutex);
    tout << ' ' << ix << ": four " // f2's lines
         << "five "
         << "six ";
    f1(ix);                        // f1's lines
    tout << '\n';
}                                  // release mutex for other threads
