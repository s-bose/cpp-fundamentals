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

        void display(double expr);
        void done();
        void prompt();
        void showList();

        double add(double lvalue, double rvalue) const;
        double mul(double lvalue, double rvalue) const;
        double div(double lvalue, double rvalue) const;
        double sub(double lvalue, double rvalue) const;

        double assign(double lvalue, double rvalue);
        double negate(double expr) const;
        double value();
};

inline double Parser::add(double lvalue, double rvalue) const
{
    return lvalue + rvalue;
}

inline double Parser::mul(double lvalue, double rvalue) const
{
    return lvalue * rvalue;
}

inline double Parser::div(double lvalue, double rvalue) const
{
    return lvalue / rvalue;
}

inline double Parser::sub(double lvalue, double rvalue) const
{
    return lvalue - rvalue;
}

inline double Parser::negate(double expr) const
{
    return -expr;
}

inline double Parser::value()
{
    return std::stod(d_scanner.matched());
}

#endif