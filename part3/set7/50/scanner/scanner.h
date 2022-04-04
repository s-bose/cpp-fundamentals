// Generated by Flexc++ V2.08.01 on Sat, 02 Apr 2022 23:45:38 +0530

#ifndef Scanner_H_INCLUDED_
#define Scanner_H_INCLUDED_

// $insert baseclass_h
#include "scannerbase.h"
#include <map>
#include <string>

namespace {
  enum Token {
    WORD = 257,
    INTEGER,
    FLOAT,
    SCOPE,
    PLUSPLUS,
    MINUSMINUS,
    ARROW,
    MATH_ASSIGN,
    STRING,
    CHAR
  };

};



// $insert classHead
class Scanner : public ScannerBase {

  static std::map<size_t, std::string> s_tokens;
  
  public:
    explicit Scanner(std::istream &in = std::cin, std::ostream &out = std::cout);

    Scanner(std::string const &infile, std::string const &outfile);

    // $insert lexFunctionDecl
    int lex();
    static std::string const &getToken(Token const &token);

private:
  int lex_();
  int executeAction_(size_t ruleNr);

  void print();
  void preCode(); // re-implement this function for code that must
                  // be exec'ed before the patternmatching starts

  void postCode(PostEnum_ type);
  // re-implement this function for code that must
  // be exec'ed after the rules's actions.
};

// $insert scannerConstructors
inline Scanner::Scanner(std::istream &in, std::ostream &out)
    : ScannerBase(in, out) {}

inline Scanner::Scanner(std::string const &infile, std::string const &outfile)
    : ScannerBase(infile, outfile) {}

// $insert inlineLexFunction
inline int Scanner::lex() { return lex_(); }

inline void Scanner::preCode() {
  // optionally replace by your own code
}

inline void Scanner::postCode([[maybe_unused]] PostEnum_ type) {
  // optionally replace by your own code
}

inline void Scanner::print() { print_(); }

inline std::string const &Scanner::getToken(Token const &token)
{
  return s_tokens.at(token);
}


#endif // Scanner_H_INCLUDED_