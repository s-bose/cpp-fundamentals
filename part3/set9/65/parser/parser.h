// Generated by Bisonc++ V6.04.03 on Fri, 15 Apr 2022 13:49:59 +0200

#ifndef Parser_h_included
#define Parser_h_included

// $insert baseclass
#include "parserbase.h"
// $insert scanner.h
#include "../scanner/scanner.h"

#include <vector>
#include <map>
#include <string>

class Parser: public ParserBase
{
    // $insert scannerobject
    Scanner d_scanner;

    std::vector<double> d_value;
    std::map<std::string, unsigned> d_symtab;   // use sorted std::map

    bool d_display;
        
    public:
        Parser(bool run);
        int parse();

    private:
                                        // called on (syntax) errors
        void error(char const *msg = "syntax error");    
        int lex();                      // returns the next token from the
                                        // lexical scanner. 
        void print();                   // use, e.g., d_token, d_loc
        void exceptionHandler(std::exception const &exc);

    // support functions for parse():
        void executeAction_(int ruleNr);
        void errorRecovery_();
        void nextCycle_();
        void nextToken_();
        void print_();

    // added functions for the calculator:

        void display(RuleValue &expr);
        void done();
        void prompt();

        RuleValue negate(RuleValue &expr) const;
        RuleValue value();
        RuleValue variable();

        double valueOf(RuleValue const &expr) const;
    
    // additional utility functions
        int int_(RuleValue &expr) const;
        // std::pair<std::string, unsigned> &symbol(size_t idx) const;

    // operators
        RuleValue opAdd(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opSub(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opMul(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opDiv(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opMod(RuleValue &lvalue, RuleValue &rvalue) const;

        RuleValue opXor(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opOr(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opAnd(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opLesser(RuleValue &lvalue, RuleValue &rvalue) const;
        RuleValue opGreater(RuleValue &lvalue, RuleValue &rvalue) const;

        RuleValue &opAssign(RuleValue &lvalue, RuleValue &rvalue);

        RuleValue &opAssignOthr(RuleValue &op, 
                             RuleValue &lvalue, RuleValue &rvalue) const;

        RuleValue &opLogic(RuleValue &op,
                           RuleValue &lvalue, RuleValue &rvalue) const;
                           
        RuleValue &opShift(RuleValue &op,
                           RuleValue &lvalue, RuleValue &rvalue) const;
};

inline int Parser::int_(RuleValue &expr) const
{
    return static_cast<int>(valueOf(expr));
}

#endif