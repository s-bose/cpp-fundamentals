#include "scanner.ih"

void Scanner::scanWords(set<string> &sset)
{
    while (size_t token = lex())
    {
        switch (token)
        {
            case Token::IDENT:
                sset.insert(matched()); // insert (unique) words
                break;                  // into set in sorted order

            default:
                break;                  // ignore everything else
        }
    }
}