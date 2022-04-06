#include "main.ih"

int main(int argc, char **argv)
try
{
    // Scanner scanner;
    // while (int token = scanner.lex())
    // {
    //     switch(token)
    //     {
    //         case Tokens::WRITE:
    //             cout << "WRITE: " << scanner.matched() << '\n';
    //             break;            
    //         case Tokens::NUMBER:
    //             cout << "NUMBER: " << scanner.matched() << '\n';
    //             break;            
    //         case Tokens::IDENT:
    //             cout << "IDENT: " << scanner.matched() << '\n';
    //             break;            
    //         case '(':
    //             cout << "BOPEN\n";
    //             break;
    //         case ')':
    //             cout << "BCLOSE\n";
    //             break;
    //         case ',':
    //             cout << "COMMA\n";
    //             break;
    //         case ';':
    //             cout << "SEMICOLON\n";
    //             break;
    //         default:
    //             break;     
    //     }
    // }

    Parser parser;
    [[maybe_unused]] int ret = parser.parse();
    cout << ret << '\n';

}
catch (...)
{
    return 1;
}
