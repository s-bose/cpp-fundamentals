#include "../parser.ih"

void Parser::showList()
{
    for_each(
        d_symtab.begin(),
        d_symtab.end(),
        [&](auto const &item)
        {
            cout << item.first << '\t' 
                 << d_value[item.second] << endl;
        }
    );
}