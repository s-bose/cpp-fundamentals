#include "parser.ih"

Parser::Parser(bool run)
:
    d_display(true)
{
    setDebug(false);

    if (run)
        prompt();
    else
    {
        cout << "Provide an argument to start the calculator.\n"
                "Use end-of-input (^D) to stop\n";
        throw 1; // ok since we terminate the program
    }    
}
