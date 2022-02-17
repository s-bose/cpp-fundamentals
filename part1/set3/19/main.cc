#include "main.ih"

int main(int argc, char *argv[])
{
    char option = argv[1][1];   // extract the option character
    
    switch(option)
    {
        case 'c':
            cout << countChars(cin) << '\n';
            break;
        case 'w':
            cout << countWords(cin) << '\n';
            break;
        case 'l':
            cout << countLines(cin) << '\n';
            break;
        default:
            cout << "Invalid argument" << '\n';
    }
}