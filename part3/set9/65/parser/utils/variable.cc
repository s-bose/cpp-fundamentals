#include "../parser.ih"

RuleValue Parser::variable()
{
    std::map<std::string, unsigned>::iterator 
            it = d_symtab.find(d_scanner.matched());

    unsigned idx;

    if (it != d_symtab.end())               // new identifier
        idx = it->second;
    else
    {
        d_symtab[d_scanner.matched()] = idx = d_value.size();
        d_value.push_back(0);
    }

    return RuleValue(idx);
}
