#include "main.ih"  

int main(int argc, char **argv)
{
  Scanner scanner;

/**/
  while (int token = scanner.lex())
  {
    if (token == '\n')
      continue;

    else if (scanner.matched().size() != 1)
      cout << scanner.matched() << '\t' 
           << Scanner::getToken(static_cast<Token>(token)) << '\n';

    else
      cout << scanner.matched().front() << '\n';

  }
}
