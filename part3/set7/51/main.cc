#include "scanner/scanner.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs{ "file.txt" };


    Scanner scanner(ifs);
    while (int token = scanner.lex())
    {
     
        if (token == Token::SENTENCE)
            cout << scanner.matched() << '\n';
        else
            continue;
    }


}