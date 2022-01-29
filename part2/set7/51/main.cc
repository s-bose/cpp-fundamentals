#include "main.ih"

void runner1(Handler &handler, ostream &out, string const &text)
{
    handler.shift(out, text);           // run external handler
}

void runner2(ostream &out, string const &text)
{
    Handler handlerLocal;
    handlerLocal.shift(out, text);      // run local handler
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        usage();
        return 1;
    }
    
    ofstream out{ argv[1] };
    string text = argv[2];

    Handler handler;
    thread thr1{ runner1, ref(handler), 
                 ref(out), text };        // pass main's handler ref 

    thr1.join();                          // wait for finish

    thread thr2{runner2, ref(out), text}; // using thread-local handler

    thr2.join();                          // wait for finish
}