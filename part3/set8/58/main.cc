#include "main.ih"

int main(int argc, char **argv)
{
    // Scanner scanner;
    // while (int token = scanner.lex())
    // {
    //     switch (token)
    //     {
    //         case Tokens::NUM:
    //             cout << "NUMBER: " << scanner.matched() << '\n';
    //             break;                
    //         case '(':
    //             cout << "BRACKET\n";
    //             break;
    //         case ')':
    //             cout << "BRACKET\n";
    //             break;
    //         case '+':
    //             cout << "PLUS\n";
    //             break;
    //         case '-':
    //             cout << "MINUS\n";
    //             break;
    //         case '*':
    //             cout << "MULTIPLY\n";
    //             break;
    //         case '/':
    //             cout << "DIVIDE\n";
    //             break;
    //         case '$':
    //             cout << "SQRT\n";
    //             break;            
    //         default:
    //             break;
    //     }
    // }
    Parser parser;
    [[maybe_unused]] int ret = parser.parse();
}